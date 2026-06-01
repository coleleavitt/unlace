char **__fastcall sub_3E93C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // ebp
  int v9; // esi
  char *v10; // rdx
  __int64 i; // rbp
  char *v12; // rax
  void *v13; // rdi
  char *v14; // rbp
  char *v15; // r12
  void *v16; // rdi
  int v17; // ebp
  bool v18; // zf
  int v19; // esi
  char *v20; // rdi
  char *v21; // rbp
  char *v22; // r12
  void *v23; // rdi

  v6 = *(char ***)(a1 + 1552);
  v7 = (unsigned __int64)v6[1];
  if ( v7 > 1 )
  {
    v8 = 1;
    do
    {
      v9 = v8++;
      sub_3E89F0(v6, v9, a3, a4, a5, a6);
      v7 = (unsigned __int64)v6[1];
    }
    while ( v8 < v7 );
  }
  v10 = *v6;
  if ( *v6 )
  {
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v12 = &v10[48 * i];
        v13 = *((void **)v12 + 3);
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          qfree(v13);
          v10 = *v6;
        }
      }
    }
    v6[1] = nullptr;
    qfree(v10);
    *v6 = nullptr;
    v6[2] = nullptr;
  }
  v14 = v6[5];
  while ( v14 )
  {
    v15 = v14;
    sub_3E7D00(*((_QWORD **)v14 + 3));
    v16 = *((void **)v14 + 4);
    v14 = *((char **)v14 + 2);
    if ( v16 )
    {
      *((_QWORD *)v15 + 5) = 0;
      qfree(v16);
    }
    operator delete(v15, 0x40u);
  }
  v17 = 0;
  *((_BYTE *)v6 + 80) = 0;
  v18 = v6[15] == nullptr;
  v6[5] = nullptr;
  v6[6] = (char *)(v6 + 4);
  v6[7] = (char *)(v6 + 4);
  v6[8] = nullptr;
  if ( !v18 )
  {
    do
    {
      v19 = v17++;
      sub_3E8A90((__int64 *)v6, v19, (__int64)v10, a4, a5, a6);
    }
    while ( v17 < (unsigned __int64)v6[15] );
  }
  v20 = v6[14];
  if ( v20 )
  {
    v6[15] = nullptr;
    qfree(v20);
    v6[14] = nullptr;
    v6[16] = nullptr;
  }
  v21 = v6[19];
  while ( v21 )
  {
    v22 = v21;
    sub_3E7D00(*((_QWORD **)v21 + 3));
    v23 = *((void **)v21 + 4);
    v21 = *((char **)v21 + 2);
    if ( v23 )
    {
      *((_QWORD *)v22 + 5) = 0;
      qfree(v23);
    }
    operator delete(v22, 0x40u);
  }
  *((_BYTE *)v6 + 192) = 0;
  v6[19] = nullptr;
  v6[20] = (char *)(v6 + 18);
  v6[21] = (char *)(v6 + 18);
  v6[22] = nullptr;
  return v6 + 18;
}
