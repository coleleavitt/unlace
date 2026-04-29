__int64 __fastcall sub_3EFEF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &unk_4BFCB0;
  a1[2] = 0;
  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  cleanup_argloc(a1 + 16);
  clear_tinfo_t(a1 + 15);
  v3 = a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        clear_tinfo_t(v6 + 8);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8);
        }
        cleanup_argloc(v6);
        v3 = a1[11];
      }
    }
    a1[12] = 0;
    qfree(v3);
  }
  v9 = a1[5];
  if ( v9 )
  {
    a1[6] = 0;
    qfree(v9);
  }
  return qfree(a1[3]);
}
