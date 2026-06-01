bool __fastcall sub_E69A0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 i; // rbx
  __int64 v4; // rax

  v1 = a1[23];
  if ( v1 )
  {
    v2 = a1[24];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 32 * i;
        if ( *(_QWORD *)(v4 + 8) )
        {
          *(_QWORD *)(v4 + 16) = 0;
          qfree();
          v1 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree();
    a1[23] = 0;
    a1[25] = 0;
  }
  sub_E6920((__int64)(a1 + 23));
  return a1[24] != 0;
}

