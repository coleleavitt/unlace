void __fastcall sub_2210100(_QWORD *a1)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  if ( a1 )
  {
    v2 = (char *)a1[16];
    if ( *((_DWORD *)a1 + 35) )
    {
      v3 = *((_DWORD *)a1 + 34);
      if ( v3 )
      {
        v4 = 0;
        v5 = 8LL * (unsigned int)(v3 - 1) + 8;
        do
        {
          v6 = *(_QWORD **)&v2[v4];
          if ( v6 != (_QWORD *)-8LL && v6 )
          {
            operator delete(*(_QWORD *)&v2[v4], *v6 + 17LL, 8);
            v2 = (char *)a1[16];
          }
          v4 += 8;
        }
        while ( v5 != v4 );
      }
    }
    free(v2);
    v7 = (_QWORD *)a1[10];
    if ( v7 != a1 + 12 )
      free(v7);
    v8 = (_QWORD *)a1[4];
    if ( v8 != a1 + 6 )
      free(v8);
    operator delete(a1, 0xA0u);
  }
}
