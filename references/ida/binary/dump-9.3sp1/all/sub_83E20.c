__int64 __fastcall sub_83E20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  clear_tinfo_t();
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
  }
  return cleanup_argloc();
}
