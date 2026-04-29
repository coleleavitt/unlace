void __fastcall sub_CA2A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 776);
  v2 = *(_QWORD *)(v1 + 176);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = (__int64 *)(*(_QWORD *)(v1 + 168) + 24 * i);
      v5 = *v4;
      if ( *v4 )
      {
        v4[1] = 0;
        qfree(v5);
      }
    }
  }
  *(_QWORD *)(v1 + 176) = 0;
}
