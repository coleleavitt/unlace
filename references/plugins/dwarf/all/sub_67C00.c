void __fastcall sub_67C00(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = a1[2];
  *a1 = &off_C86E0;
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree(v6);
          v2 = a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x30u);
}
