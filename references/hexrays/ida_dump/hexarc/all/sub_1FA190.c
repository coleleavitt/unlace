void __fastcall sub_1FA190(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_4AB630;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x78u);
}
