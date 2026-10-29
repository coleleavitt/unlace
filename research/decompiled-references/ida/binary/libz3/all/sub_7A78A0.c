__int64 __fastcall sub_7A78A0(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rax
  int v20; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_7E4990();
  v4 = *(_QWORD *)(a1 + 440);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    v6 = *(_DWORD *)(v4 - 4) - a2;
    if ( !v5 )
    {
LABEL_15:
      *(_DWORD *)(v4 - 4) = v6;
      goto LABEL_16;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 432);
    v6 = -a2;
    if ( !v5 )
      goto LABEL_16;
  }
  v7 = *(_DWORD *)(v4 + 4LL * v6);
  v8 = 48LL * v7;
  v9 = (__int64 *)(v5 + v8);
  v10 = 48LL * *(unsigned int *)(v5 - 4);
  v11 = (__int64 *)(v5 + v10);
  if ( v8 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v9[4];
        if ( v12 )
          sub_186B220((void *)(v12 - 8));
        v13 = v9[3];
        if ( v13 )
          sub_186B220((void *)(v13 - 8));
        v14 = v9[1];
        if ( v14 )
        {
          v15 = v9[2];
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v15, v14);
        }
        v17 = *v9;
        if ( !*v9 )
          break;
        v9 += 6;
        sub_186B220((void *)(v17 - 8));
        if ( v11 == v9 )
          goto LABEL_13;
      }
      v9 += 6;
    }
    while ( v11 != v9 );
LABEL_13:
    v5 = *(_QWORD *)(a1 + 432);
    v4 = *(_QWORD *)(a1 + 440);
  }
  *(_DWORD *)(v5 - 4) = v7;
  if ( v4 )
    goto LABEL_15;
LABEL_16:
  v18 = *(_QWORD *)(a1 + 120);
  v16 = *(_QWORD *)(a1 + 176) == 0;
  v20 = a2;
  v21 = v18;
  v22[0] = a1 + 112;
  if ( v16 )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, int *))(a1 + 184))(a1 + 160, &v21, v22, &v20);
}

