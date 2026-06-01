_BOOL8 __fastcall sub_B9E190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x10) != 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 1) == 0 )
    return 0;
  v15 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v15 + 96), v15, v11, v12, v13, v14);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x20) != 0 )
    return 0;
  if ( (unsigned __int8)sub_B9C060(a1, v15, v16, v17, v18, v19) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v20, v21, v22, v23);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 2) == 0 )
      return 0;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v20, v21, v22, v23);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x40) != 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v24, v25, v26, v27);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 4) == 0 )
    return 0;
  v32 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v32 + 96), v32, v28, v29, v30, v31);
  if ( *(char *)(*(_QWORD *)(a1 + 128) + 6LL) < 0 )
    return 0;
  if ( (unsigned __int8)sub_B9C100(a1, v32, v33, v34, v35, v36) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v37, v38, v39, v40);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 8) == 0 )
      return 0;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v37, v38, v39, v40);
  return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x1000) != 0;
}
