__int64 __fastcall sub_B9D680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  v6 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v6 + 96), v6, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 8) != 0 )
    return 1;
  if ( !(unsigned __int8)sub_B9BFC0(a1, v6, v7, v8, v9, v10) )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v12, v13, v14, v15);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 4) == 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 73) >> 5 != 2 )
    return 1;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v16, v17, v18, v19);
  if ( *(char *)(*(_QWORD *)(a1 + 128) + 2LL) < 0 )
    return 1;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v20, v21, v22, v23);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 0x10) == 0 )
    return 1;
  return *(_BYTE *)(sub_B8C5D0(a1) + 1) >> 7;
}
