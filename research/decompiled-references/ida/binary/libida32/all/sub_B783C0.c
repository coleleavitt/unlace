__int64 __fastcall sub_B783C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // rax

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 0x10) != 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
  if ( (**(_BYTE **)(a1 + 128) & 4) != 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
  if ( (**(_BYTE **)(a1 + 128) & 0x10) != 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v15, v16, v17, v18);
  if ( (**(_BYTE **)(a1 + 128) & 8) != 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v19, v20, v21, v22);
  v23 = *(_BYTE **)(a1 + 128);
  if ( (*v23 & 0x40) != 0 )
    return 0;
  if ( (v23[10] & 0x20) != 0 )
    return sub_B73040(a1);
  return 1;
}

