__int64 __fastcall sub_3D0100(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, a2);
  }
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4, a2);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2);
  }
  return clear_tinfo_t(a1);
}
