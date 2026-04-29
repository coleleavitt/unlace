void __fastcall sub_24C90(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_34958;
  reg_finder_dtr();
  v2 = a1[26];
  if ( v2 )
  {
    a1[27] = 0;
    qfree(v2);
  }
  v3 = a1[10];
  if ( v3 )
  {
    a1[11] = 0;
    qfree(v3);
  }
  operator delete(a1, 0xF8u);
}
