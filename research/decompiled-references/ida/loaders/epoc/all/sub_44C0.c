void __fastcall sub_44C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_12958;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = a1[1];
  *a1 = &off_12D18;
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x40u);
}

