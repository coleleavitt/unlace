_BOOL8 __fastcall sub_B9D730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x10) != 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 1) == 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
  return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x1000) != 0;
}
