void __fastcall sub_4B3DE0(__int64 a1)
{
  _QWORD *v1; // r12
  void **v2; // rbx
  void **v3; // rbp

  v1 = *(_QWORD **)(a1 + 1712);
  v2 = (void **)v1[19];
  v3 = &v2[v1[20]];
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
        operator delete(*v2, 0x20u);
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (void **)v1[19];
  }
  if ( v3 )
  {
    v1[20] = 0;
    qfree(v3);
    v1[19] = 0;
    v1[21] = 0;
  }
  sub_4B3D40();
}
