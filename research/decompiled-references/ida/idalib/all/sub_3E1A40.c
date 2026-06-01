bool __fastcall sub_3E1A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 10LL) & 4) == 0 )
    return 1;
  if ( *(_BYTE *)(a3 + 184) == 1 )
    return 1;
  v4 = sub_505D70(a1 + 1624, a2);
  if ( a3 == v4 )
    return 1;
  v5 = sub_510110(a1, *(_QWORD *)(v4 + 48));
  return v5 == sub_510110(a1, *(_QWORD *)(a3 + 48));
}
