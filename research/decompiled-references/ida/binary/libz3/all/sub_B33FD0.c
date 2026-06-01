__int64 __fastcall sub_B33FD0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // eax
  char v5; // r13
  __int64 result; // rax
  int v7; // r14d
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+8h] [rbp-60h]
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  int v31; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(a1 + 408);
  v5 = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(a1 + 464) = 1;
  if ( v4 <= a2 )
    v2 = v4;
  result = v4 - v2;
  *(_DWORD *)(a1 + 408) = result;
  v7 = a2 - v2;
  if ( a2 != v2 )
  {
    sub_965AE0(a1, v7);
    v8 = *(_QWORD *)(a1 + 392);
    v9 = v2 - a2;
    if ( v8 )
    {
      v10 = *(_QWORD *)(a1 + 384);
      v28 = v9 + *(_DWORD *)(v8 - 4);
      if ( !v10 )
      {
LABEL_19:
        *(_DWORD *)(v8 - 4) = v28;
        goto LABEL_20;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 384);
      v28 = v9;
      if ( !v10 )
        goto LABEL_20;
    }
    v11 = 48LL * *(unsigned int *)(v10 - 4);
    v30 = *(_DWORD *)(v8 + 4LL * v28);
    v12 = (__int64 *)(v10 + v11);
    v13 = (__int64 *)(v10 + 48LL * v30);
    if ( 48LL * v30 != v11 )
    {
      do
      {
        while ( 1 )
        {
          v14 = v13[4];
          if ( v14 )
            sub_186B220((void *)(v14 - 8));
          v15 = v13[3];
          if ( v15 )
            sub_186B220((void *)(v15 - 8));
          v16 = v13[1];
          if ( v16 )
          {
            v17 = v13[2];
            v18 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v17, v16);
          }
          v19 = *v13;
          if ( !*v13 )
            break;
          v13 += 6;
          sub_186B220((void *)(v19 - 8));
          if ( v13 == v12 )
            goto LABEL_17;
        }
        v13 += 6;
      }
      while ( v12 != v13 );
LABEL_17:
      v10 = *(_QWORD *)(a1 + 384);
      v8 = *(_QWORD *)(a1 + 392);
    }
    *(_DWORD *)(v10 - 4) = v30;
    if ( v8 )
      goto LABEL_19;
LABEL_20:
    v20 = *(_QWORD *)(a1 + 488);
    if ( v20 )
    {
      v9 += *(_DWORD *)(v20 - 4);
      v21 = (unsigned int *)(v20 + 4LL * v9);
      v22 = *(_QWORD *)(a1 + 480);
      if ( !v22 )
      {
LABEL_31:
        *(_DWORD *)(v20 - 4) = v9;
LABEL_32:
        v27 = *(_QWORD *)(a1 + 64);
        v18 = *(_QWORD *)(a1 + 120) == 0;
        v31 = v7;
        v32 = v27;
        v33[0] = a1 + 56;
        if ( v18 )
          std::__throw_bad_function_call();
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *))(a1 + 128))(a1 + 104, &v32, v33, &v31);
        goto LABEL_4;
      }
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 480);
      v21 = (unsigned int *)(4LL * v9);
      if ( !v22 )
        goto LABEL_32;
    }
    v23 = (__int64 *)(v22 + 8LL * *v21);
    v24 = v22 + 8LL * *(unsigned int *)(v22 - 4);
    v29 = *v21;
    if ( (unsigned __int64)v23 >= v24 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = *(_QWORD *)(a1 + 472);
          v18 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v24 )
          goto LABEL_28;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v24 );
LABEL_28:
    v22 = *(_QWORD *)(a1 + 480);
    v20 = *(_QWORD *)(a1 + 488);
    if ( v22 )
LABEL_29:
      *(_DWORD *)(v22 - 4) = v29;
    if ( !v20 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_4:
  *(_BYTE *)(a1 + 464) = v5;
  return result;
}

