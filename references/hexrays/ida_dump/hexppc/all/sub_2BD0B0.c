void __fastcall sub_2BD0B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi

  *a1 = &off_4CF0F0;
  a1[8] = 0;
  switch_dbctx(*((int *)a1 + 2));
  sub_13C700(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4CF038;
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x58u);
}
