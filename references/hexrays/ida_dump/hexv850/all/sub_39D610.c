void __fastcall sub_39D610(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4BA650;
  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}
