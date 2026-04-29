__int64 __fastcall sub_BF120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(int *)(v6 + 16);
  if ( *(_QWORD *)(**(_QWORD **)(a1 + 48) + 8 * v7) )
    return 0;
  sub_BF000((_QWORD *)(a1 + 56), (int *)(v6 + 16), v7, a4, a5);
  return 0;
}
