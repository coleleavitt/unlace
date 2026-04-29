void __fastcall sub_39E410(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4B96F0;
  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}
