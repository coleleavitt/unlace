void __fastcall sub_52F4D0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v3 = a1[36];
  if ( v3 )
  {
    a1[37] = 0;
    qfree(v3, a2);
  }
  v4 = a1[33];
  if ( v4 )
  {
    a1[34] = 0;
    qfree(v4, a2);
  }
  v5 = a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    qfree(v5, a2);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    qfree(v6, a2);
  }
  operator delete(a1, 0x170u);
}
