__int64 __fastcall sub_2050E10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  if ( *(_BYTE *)(a1 + 4) != *(_BYTE *)(a2 + 4) )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 != *(_QWORD *)(a2 + 8) )
    return 0;
  v5 = sub_21F90D0(a1, a2, a3);
  v6 = a1 + 8;
  v7 = a2 + 8;
  if ( v4 == v5 )
    return sub_2201080(v6, v7);
  else
    return sub_21F96E0(v6, v7);
}
