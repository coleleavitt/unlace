void __fastcall sub_3B6D80(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4D4688;
  v2 = a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x20u);
}
