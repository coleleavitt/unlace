__int64 __fastcall sub_2B9980(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  clear_tinfo_t();
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  return cleanup_argloc();
}
