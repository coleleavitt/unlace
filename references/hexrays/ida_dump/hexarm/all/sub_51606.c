__int64 __fastcall sub_51606(__int64 *a1)
{
  __int64 v2; // r13
  __int64 i; // r12
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  if ( *a1 )
  {
    v2 = a1[1];
    for ( i = 0; ; ++i )
    {
      v4 = *a1;
      if ( v2 == i )
        break;
      v5 = (_QWORD *)(v4 + 80 * i);
      clear_tinfo_t(v5 + 8);
      v6 = v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        qfree(v6);
      }
      v7 = v5[2];
      if ( v7 )
      {
        v5[3] = 0;
        qfree(v7);
      }
      cleanup_argloc(v5);
    }
    a1[1] = 0;
    qfree(v4);
  }
  return qfree(a1);
}
