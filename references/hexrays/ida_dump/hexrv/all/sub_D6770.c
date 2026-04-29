void __fastcall sub_D6770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_4AF7B0;
  v2 = a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
  }
  v4 = a1[1];
  *a1 = off_4AE598;
  qfree(v4);
  operator delete(a1, 0x90u);
}
