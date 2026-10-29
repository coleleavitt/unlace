void ***__fastcall sub_19B8C0(void ***a1)
{
  void **v2; // rbp
  void **v3; // r12
  void *v4; // rdi
  void **v5; // rbp
  void **v6; // rdi

  while ( a1[1] )
    sub_19B5A0(a1, **a1);
  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree();
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  v2 = a1[5];
  while ( v2 )
  {
    v3 = v2;
    sub_19A6E0(v2[3]);
    v4 = v2[4];
    v2 = (void **)v2[2];
    if ( v4 )
    {
      v3[5] = nullptr;
      qfree();
    }
    operator delete(v3, 0x40u);
  }
  v5 = a1[11];
  a1[5] = nullptr;
  a1[6] = (void **)(a1 + 4);
  a1[7] = (void **)(a1 + 4);
  a1[8] = nullptr;
  while ( v5 )
  {
    sub_19A510(v5[3]);
    v6 = v5;
    v5 = (void **)v5[2];
    operator delete(v6, 0x30u);
  }
  a1[11] = nullptr;
  a1[12] = (void **)(a1 + 10);
  a1[13] = (void **)(a1 + 10);
  a1[14] = nullptr;
  a1[15] = nullptr;
  return a1 + 10;
}

