__int64 __fastcall sub_3AC380(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v3 = a1[33];
  if ( v3 )
  {
    a1[34] = 0;
    qfree(v3, a2);
  }
  v4 = a1[30];
  if ( v4 )
  {
    a1[31] = 0;
    qfree(v4, a2);
  }
  clear_tinfo_t(a1 + 14);
  v5 = a1[11];
  if ( v5 )
  {
    a1[12] = 0;
    qfree(v5, a2);
  }
  v6 = a1[8];
  if ( v6 )
  {
    a1[9] = 0;
    qfree(v6, a2);
  }
  return clear_tinfo_t(a1 + 1);
}
