void __fastcall sub_3A3650(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4E7098;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x60u);
}
