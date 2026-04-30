bool __fastcall sub_283B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  int v6; // eax
  bool v7; // zf
  bool result; // al

  v3 = *(_QWORD *)(a1 + 392);
  if ( v3 == *(_QWORD *)(a1 + 360) )
    return 0;
  if ( v3 == *(_QWORD *)(a1 + 400) )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 416) - 8LL) + 272LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = sub_1F18A0(v5, *(_QWORD *)(v3 - 272), a2);
  v7 = v6 == 0;
  if ( v6 < 0 )
    return 0;
  result = 1;
  if ( !v7 )
    return (int)sub_1F18A0(v5, **(_QWORD **)(a1 + 360), a3) <= 0;
  return result;
}
