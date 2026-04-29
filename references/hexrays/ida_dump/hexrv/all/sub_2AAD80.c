void __fastcall sub_2AAD80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  *a1 = &off_4B4258;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v4 + v2);
        v7 = v6[4];
        *v6 = off_4B3CE8;
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7);
        }
        v2 = a1[5];
        v4 += 88;
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
