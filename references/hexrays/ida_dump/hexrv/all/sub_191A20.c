void __fastcall sub_191A20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_4B0D58;
  qfree(a1[11]);
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  *a1 = &unk_4BDDE0;
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x78u);
}
