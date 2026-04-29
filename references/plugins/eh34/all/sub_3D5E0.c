void __fastcall sub_3D5E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  v3 = a1[16];
  if ( v3 )
  {
    v4 = a1[17];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + (i << 6);
        v7 = *(_QWORD *)(v6 + 40);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 48) = 0;
          qfree(v7);
          v3 = a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree(v3);
  }
  v8 = a1[12];
  if ( v8 )
  {
    a1[13] = 0;
    qfree(v8);
  }
}
