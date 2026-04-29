void __fastcall sub_40A470(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
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
          v2 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v2);
  }
  v7 = a1[6];
  if ( v7 )
  {
    a1[7] = 0;
    qfree(v7);
  }
  v8 = a1[1];
  if ( v8 )
  {
    a1[2] = 0;
    qfree(v8);
  }
}
