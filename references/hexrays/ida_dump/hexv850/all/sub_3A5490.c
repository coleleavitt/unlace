__int64 __fastcall sub_3A5490(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = a1 + 11;
  *(v2 - 11) = off_4BABE8;
  clear_tinfo_t(v2);
  v3 = a1[5];
  *a1 = off_4AF6D8;
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
  }
  return j__qfree(a1);
}
