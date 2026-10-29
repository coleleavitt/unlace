void __fastcall sub_13573A0(__int64 a1)
{
  void **v1; // r12
  void **v3; // rbp
  void *v4; // rdi
  void **v5; // r12
  void **v6; // rbp
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // rax

  v1 = *(void ***)(a1 + 96);
  v3 = *(void ***)(a1 + 88);
  *(_QWORD *)a1 = &off_2BB2158;
  if ( v1 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v1 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 88);
  }
  if ( v3 )
    operator delete(v3);
  v4 = *(void **)(a1 + 56);
  if ( v4 != (void *)(a1 + 72) )
    operator delete(v4);
  v5 = *(void ***)(a1 + 40);
  v6 = *(void ***)(a1 + 32);
  *(_QWORD *)a1 = &off_2BB2108;
  if ( v5 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_12;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_12:
    v6 = *(void ***)(a1 + 32);
  }
  if ( v6 )
    operator delete(v6);
  v7 = *(char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) )
  {
    v8 = *(_DWORD *)(a1 + 16);
    if ( v8 )
    {
      v9 = 0;
      v10 = 8LL * (unsigned int)(v8 - 1) + 8;
      do
      {
        v11 = *(_QWORD **)&v7[v9];
        if ( v11 != (_QWORD *)-8LL && v11 )
        {
          operator delete(*(_QWORD *)&v7[v9], *v11 + 9LL, 8);
          v7 = *(char **)(a1 + 8);
        }
        v9 += 8;
      }
      while ( v10 != v9 );
    }
  }
  free(v7);
}
