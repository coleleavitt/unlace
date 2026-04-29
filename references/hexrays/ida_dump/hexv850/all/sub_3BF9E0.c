__int64 __fastcall sub_3BF9E0(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
  return clear_tinfo_t(a1 + 4);
}
