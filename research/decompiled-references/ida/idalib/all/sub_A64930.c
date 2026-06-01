__int64 __fastcall sub_A64930(__int64 a1, __int64 a2)
{
  bool v2; // cc
  __int64 v3; // rsi

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 17448);
  v2 = *(_DWORD *)(a2 + 340) <= 9u;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL);
  if ( v2 )
    return sub_E3A9F0(a1, v3, 0);
  else
    return sub_E7BC70(a1, v3, 0);
}
