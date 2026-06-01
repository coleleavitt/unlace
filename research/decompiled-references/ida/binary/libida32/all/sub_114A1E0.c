void __fastcall sub_114A1E0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13

  v1 = a1[625];
  *a1 = off_2C0CB88;
  if ( v1 )
  {
    do
    {
      sub_114A130((__int64)(a1 + 623), *(_QWORD **)(v1 + 24));
      v2 = *(_QWORD *)(v1 + 16);
      operator delete((void *)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  *a1 = off_2C11350;
  sub_11FC660(a1);
  operator delete(a1, 0x13A8u);
}

