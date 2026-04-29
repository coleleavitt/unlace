__int64 __fastcall sub_3B9330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 == 3 )
    return (unsigned __int8)sub_3929A0(a2, *(_QWORD *)(v6 + 16), a3, a4, a5);
  if ( v7 <= 3 )
  {
    if ( v7 == 1 )
      return (unsigned __int8)sub_394740(a2, *(_QWORD *)(v6 + 16));
    if ( v7 == 2 )
      return (unsigned __int8)sub_391B30(a2, (_QWORD *)(v6 + 32), *(_DWORD *)(v6 + 16));
    return 0;
  }
  if ( v7 != 5 )
    return 0;
  sub_387230(a2);
  v9 = sub_3C0A30(*(_QWORD *)(a2 + 24) + 1312LL);
  result = 0;
  if ( v9 )
    return (unsigned __int8)sub_3B8C80(*(_QWORD *)(a1 + 16), a2, 0, v10, v11, v12);
  return result;
}
