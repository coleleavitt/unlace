void __fastcall sub_11D7D00(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // r13
  _DWORD *v10; // rdi
  _DWORD *v11; // rdi
  _DWORD *v12; // rdi
  _DWORD *v13; // rdi

  *(_QWORD *)a1 = off_2C38758;
  v2 = a1[635];
  v3 = *((char **)a1 + 316);
  if ( v2 )
  {
    v4 = a1[634];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          v8 = (_QWORD *)v7[1];
          v9 = *v7 + 41LL;
          if ( v8 != v7 + 3 )
            operator delete(v8);
          operator delete(v7, v9, 8);
          v3 = *((char **)a1 + 316);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *((_DWORD **)a1 + 312);
  if ( v10 != a1 + 628 )
    operator delete(v10);
  v11 = *((_DWORD **)a1 + 308);
  if ( v11 != a1 + 620 )
    operator delete(v11);
  v12 = *((_DWORD **)a1 + 304);
  if ( v12 != a1 + 612 )
    operator delete(v12);
  v13 = *((_DWORD **)a1 + 300);
  if ( v13 != a1 + 604 )
    operator delete(v13);
  sub_112BEE0((__int64)a1);
  operator delete(a1, 0xA08u);
}
