void __fastcall sub_3E2E70(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax

  *a1 = &off_4B8AA0;
  v2 = a1[120];
  if ( v2 )
  {
    a1[121] = 0;
    qfree(v2);
  }
  v3 = a1[117];
  if ( v3 )
  {
    a1[118] = 0;
    qfree(v3);
  }
  v4 = a1[114];
  if ( v4 )
  {
    v5 = a1[115];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_1166E0(v4 + 32 * v7 + 8);
        v4 = a1[114];
      }
    }
    a1[115] = 0;
    qfree(v4);
  }
  sub_1166E0((__int64)(a1 + 111));
  *a1 = &unk_4B7EE8;
  sub_1D0C60((__int64)a1);
  operator delete(a1, 0x3D8u);
}
