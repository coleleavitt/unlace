void __fastcall sub_7DD80(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  _QWORD *v8; // rdi

  v2 = a1[62];
  *a1 = &off_B23A8;
  a1[58] = 0;
  if ( v2 )
  {
    v3 = a1[63];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[62];
        }
      }
    }
    a1[63] = 0;
    qfree(v2);
  }
  v7 = a1[59];
  if ( v7 )
  {
    a1[60] = 0;
    qfree(v7);
  }
  sub_7E9F0(a1 + 9);
  a1[8] = 0;
  *a1 = &unk_B2CD0;
  sub_57B40((__int64)(a1 + 1));
  v8 = (_QWORD *)a1[1];
  if ( v8 != a1 + 7 )
    operator delete(v8, 8LL * a1[2]);
  operator delete(a1, 0x208u);
}
