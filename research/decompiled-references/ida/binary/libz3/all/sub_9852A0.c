__int64 __fastcall sub_9852A0(__int64 a1)
{
  char **exception; // rbx
  unsigned int *v3; // r8
  unsigned int *v4; // rsi
  unsigned int *v5; // r9
  __int64 v6; // rax
  unsigned int *v7; // rdx
  int v8; // edi
  __int64 v9; // r11
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // r14
  unsigned int v13; // r12d
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  unsigned int v21; // r15d
  _QWORD *v22; // rdx
  unsigned int v23; // r15d
  __int64 v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rsi
  __int64 v28; // rcx
  unsigned int *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 *v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 result; // rax
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  unsigned int v43; // [rsp+8h] [rbp-70h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(unsigned int **)(a1 + 336);
  if ( v3 )
  {
    v4 = *(unsigned int **)(a1 + 56);
    *(v3 - 1) = 0;
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 352) = 0;
      v11 = 0;
      v13 = 1;
LABEL_24:
      v26 = *(v3 - 1);
      if ( (_DWORD)v26 )
      {
        v27 = &v3[v26];
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
        v29 = v3;
        do
        {
          v30 = *v29++;
          *(_BYTE *)(v28 + 16 * v30 + 11) &= ~1u;
        }
        while ( v29 != v27 );
      }
      *(v3 - 1) = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v4 = *(unsigned int **)(a1 + 56);
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 352) = 0;
      v11 = 0;
      v13 = 1;
      goto LABEL_28;
    }
  }
  v5 = &v4[*(v4 - 1)];
  if ( v5 == v4 )
  {
    v8 = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v4;
    v8 = 0;
    v9 = *(_QWORD *)(v6 + 8872);
    do
    {
      v10 = *v7++;
      v8 |= 1 << *(_DWORD *)(v9 + 16LL * (v10 >> 1) + 8);
    }
    while ( v5 != v7 );
  }
  *(_DWORD *)(a1 + 352) = v8;
  v11 = *(v4 - 1);
  if ( v11 > 1 )
  {
    v12 = 4;
    v13 = 1;
    v14 = 1;
    while ( 1 )
    {
      v21 = v4[(unsigned __int64)v12 / 4];
      if ( (unsigned __int8)sub_984EF0(a1, v21) )
      {
        v22 = *(_QWORD **)(a1 + 336);
        v23 = v21 >> 1;
        if ( v22 )
        {
          v24 = *((unsigned int *)v22 - 1);
          if ( (_DWORD)v24 == *((_DWORD *)v22 - 2) )
          {
            v38 = (unsigned int)(3 * v24 + 1) >> 1;
            v39 = 4 * v38 + 8;
            if ( 4 * (int)v24 + 8 >= (unsigned int)v39 || (unsigned int)v24 >= v38 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v45, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v45);
              sub_233E40((__int64)v45);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v43 = (unsigned int)(3 * v24 + 1) >> 1;
            v40 = (unsigned int *)sub_186B300(v22 - 1, v39);
            v22 = v40 + 2;
            *v40 = v43;
            v41 = v40[1];
            *(_QWORD *)(a1 + 336) = v22;
            v25 = (unsigned int *)v22 + v41;
          }
          else
          {
            v25 = (unsigned int *)v22 + v24;
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x10u);
          v22 = v42 + 1;
          *v42 = 2;
          *(_QWORD *)(a1 + 336) = v42 + 1;
          v25 = (unsigned int *)(v42 + 1);
        }
        ++v14;
        *v25 = v23;
        v12 += 4;
        ++*((_DWORD *)v22 - 1);
        if ( v11 == v14 )
          goto LABEL_22;
      }
      else
      {
        if ( v13 != v14 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v13) = v21;
          v15 = *(_QWORD *)(a1 + 72);
          v16 = *(_QWORD *)(v15 + 2 * v12);
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v17 = (__int64 *)(8LL * v13 + v15);
          v18 = *v17;
          if ( *v17 )
          {
            v19 = *(_QWORD *)(a1 + 64);
            v20 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v20 )
            {
              v44 = v16;
              sub_15D7BC0(v19, v18);
              v16 = v44;
              v17 = (__int64 *)(8LL * v13 + *(_QWORD *)(a1 + 72));
            }
          }
          *v17 = v16;
        }
        ++v14;
        ++v13;
        v12 += 4;
        if ( v11 == v14 )
        {
LABEL_22:
          v3 = *(unsigned int **)(a1 + 336);
          goto LABEL_23;
        }
      }
      v4 = *(unsigned int **)(a1 + 56);
    }
  }
  v13 = 1;
LABEL_23:
  if ( v3 )
    goto LABEL_24;
LABEL_28:
  sub_9827B0(a1, 0);
  v31 = *(_QWORD *)(a1 + 56);
  if ( v31 )
    *(_DWORD *)(v31 - 4) = v13;
  v32 = *(_QWORD *)(a1 + 72);
  if ( v32 )
  {
    v33 = v32 + 8LL * *(unsigned int *)(v32 - 4);
    v34 = (__int64 *)(v32 + 8LL * v13);
    if ( (unsigned __int64)v34 >= v33 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v35 = *v34;
        if ( *v34 )
        {
          v36 = *(_QWORD *)(a1 + 64);
          v20 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( (unsigned __int64)++v34 >= v33 )
          goto LABEL_37;
      }
      sub_15D7BC0(v36, v35);
      ++v34;
    }
    while ( (unsigned __int64)v34 < v33 );
LABEL_37:
    v32 = *(_QWORD *)(a1 + 72);
    if ( v32 )
LABEL_38:
      *(_DWORD *)(v32 - 4) = v13;
  }
  result = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(result + 88) += v11 - v13;
  return result;
}

