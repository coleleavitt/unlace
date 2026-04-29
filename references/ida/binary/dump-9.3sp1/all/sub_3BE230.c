__int64 __fastcall sub_3BE230(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 == 3 )
    return (unsigned __int8)sub_3978A0(a2, *(_QWORD *)(v3 + 16));
  if ( v4 <= 3 )
  {
    if ( v4 == 1 )
      return (unsigned __int8)sub_399640(a2, *(_QWORD *)(v3 + 16));
    if ( v4 == 2 )
      return (unsigned __int8)sub_396A30(a2, v3 + 32, *(_DWORD *)(v3 + 16));
    return 0;
  }
  if ( v4 != 5 )
    return 0;
  sub_38C130(a2);
  v6 = sub_3C5930(*(_QWORD *)(a2 + 24) + 1312LL);
  result = 0;
  if ( v6 )
    return (unsigned __int8)sub_3BDB80(*(_QWORD *)(a1 + 16), a2, 0, v7, v8, v9);
  return result;
}
