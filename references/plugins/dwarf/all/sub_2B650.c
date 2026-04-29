__int64 __fastcall sub_2B650(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &off_C7DE0;
  v2 = a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
  }
  *a1 = &off_C7980;
  clear_tinfo_t(a1 + 1);
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  return clear_tinfo_t(a1 + 1);
}
