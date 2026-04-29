void __fastcall sub_3E72A0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4D6AA0;
  v2 = a1[105];
  if ( v2 )
  {
    a1[106] = 0;
    qfree(v2);
  }
  *a1 = &unk_4D8F88;
  sub_1D4380((__int64)a1);
  operator delete(a1, 0x368u);
}
