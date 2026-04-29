void __fastcall sub_294B0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_74B80;
  v2 = a1[108];
  if ( v2 )
  {
    a1[109] = 0;
    qfree(v2);
  }
  v3 = a1[105];
  if ( v3 )
  {
    a1[106] = 0;
    qfree(v3);
  }
  v4 = a1[102];
  if ( v4 )
  {
    a1[103] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x3A0u);
}
