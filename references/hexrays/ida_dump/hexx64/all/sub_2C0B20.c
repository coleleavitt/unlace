void __fastcall sub_2C0B20(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rbx

  *a1 = &off_4E2190;
  a1[8] = 0;
  switch_dbctx(*((int *)a1 + 2));
  sub_140140(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4E20D8;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + v5);
        ++v6;
        v5 += 264;
        *v7 = off_4E1460;
        sub_11CDA0((__int64)(v7 + 28));
        sub_11CDA0((__int64)(v7 + 26));
        sub_11CDA0((__int64)(v7 + 24));
        sub_11CDA0((__int64)(v7 + 12));
        sub_11CDA0((__int64)(v7 + 10));
        sub_11CDA0((__int64)(v7 + 8));
        v3 = a1[5];
      }
      while ( v4 != v6 );
    }
    a1[6] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x58u);
}
