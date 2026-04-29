void __fastcall sub_217C40(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 j; // rbp
  __int64 v13; // rdi

  v2 = a1 + 136;
  *((_QWORD *)v2 - 17) = &off_4BFEB0;
  clear_tinfo_t(v2);
  cleanup_argloc(a1 + 120);
  v3 = *((_QWORD *)a1 + 12);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 13);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 32 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *((_QWORD *)a1 + 12);
        }
      }
    }
    *((_QWORD *)a1 + 13) = 0;
    qfree(v3);
  }
  v8 = *((_QWORD *)a1 + 8);
  if ( v8 )
  {
    *((_QWORD *)a1 + 9) = 0;
    qfree(v8);
  }
  qfree(*((_QWORD *)a1 + 6));
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 4);
    if ( v10 )
    {
      v11 = 0;
      for ( j = 0; j != v10; ++j )
      {
        v13 = *(_QWORD *)(v9 + v11);
        if ( v13 )
        {
          *(_QWORD *)(v9 + v11 + 8) = 0;
          qfree(v13);
          v9 = *((_QWORD *)a1 + 3);
        }
        v11 += 56;
      }
    }
    *((_QWORD *)a1 + 4) = 0;
    qfree(v9);
  }
  operator delete(a1, 0xA0u);
}
