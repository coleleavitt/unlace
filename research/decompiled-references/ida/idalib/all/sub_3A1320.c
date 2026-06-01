void __fastcall sub_3A1320(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rbx
  void *v10; // rdi

  if ( a1 )
  {
    v2 = a1[219];
    a1[216] = &off_2B25CB8;
    while ( v2 )
    {
      sub_3A0680(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x30u);
    }
    v4 = a1[206];
    a1[203] = &off_2B25CB8;
    while ( v4 )
    {
      sub_3A0680(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x30u);
    }
    v6 = a1 + 189;
    do
    {
      v7 = v6[4];
      v6[1] = &off_2B25CB8;
      while ( v7 )
      {
        sub_3A0680(*(_QWORD **)(v7 + 24));
        v8 = (void *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        operator delete(v8, 0x30u);
      }
      v6 -= 13;
    }
    while ( a1 + 7 != v6 );
    v9 = a1[6];
    while ( v9 )
    {
      sub_3A0420(*(_QWORD **)(v9 + 24));
      v10 = (void *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      operator delete(v10, 0x28u);
    }
    operator delete(a1, 0x720u);
  }
}
