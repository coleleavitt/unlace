void __fastcall sub_39D5D0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4BAA18;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x60u);
}
