void __fastcall sub_1912E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi

  *a1 = &unk_4B7D48;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  qfree(a1[9]);
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
  }
  qfree(a1[4]);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = a1[2];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 40 * i);
        v8 = v7[2];
        if ( v8 )
        {
          v7[3] = 0;
          qfree(v8);
        }
        qfree(*v7);
        v4 = a1[1];
      }
    }
    a1[2] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x98u);
}
