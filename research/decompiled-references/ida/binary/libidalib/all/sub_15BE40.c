void __fastcall sub_15BE40(__int64 a1)
{
  __int64 v1; // r12
  __int64 i; // rbx

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        qfree();
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_BYTE *)(a1 + 24) = 0;
  sub_15BD20(a1, 1);
}

