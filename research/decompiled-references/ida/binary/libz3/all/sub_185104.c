__int64 __fastcall sub_185104(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  int v5; // r12d
  void *v6; // r13
  __int64 v7; // rsi
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v4 = a1[4];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    while ( v5 )
    {
      --v5;
      v6 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v4);
      v7 = v4 + 16;
      v4 += 32;
      sub_182CBA0(v6, v7);
    }
    sub_186B220((void *)(a1[4] - 8));
  }
  v8 = (__int64 *)a1[3];
  v9 = 0;
  if ( v8 )
    v9 = *((unsigned int *)v8 - 1);
  v10 = &v8[v9];
  while ( v8 < v10 )
  {
    v11 = *v8;
    if ( *v8 )
    {
      v12 = a1[2];
      v13 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v12, v11);
    }
    ++v8;
  }
  v14 = a1[3];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = (__int64 *)a1[1];
  v16 = 0;
  if ( v15 )
    v16 = *((unsigned int *)v15 - 1);
  v17 = &v15[v16];
  while ( v15 < v17 )
  {
    v18 = *v15;
    if ( *v15 )
    {
      v19 = *a1;
      v13 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v19, v18);
    }
    ++v15;
  }
  v20 = a1[1];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  return a3;
}

