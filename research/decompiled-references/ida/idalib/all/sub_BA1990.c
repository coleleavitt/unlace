_BOOL8 __fastcall sub_BA1990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _BOOL8 result; // rax
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE *v31; // rax

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 128);
  result = 1;
  if ( *(char *)(v9 + 6) >= 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v6, v7, v8);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 0x10) != 0 )
      return 0;
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
    if ( (**(_BYTE **)(a1 + 128) & 4) != 0 )
      return 0;
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v15, v16, v17, v18);
    if ( (**(_BYTE **)(a1 + 128) & 0x10) != 0 )
      return 0;
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v19, v20, v21, v22);
    if ( (**(_BYTE **)(a1 + 128) & 8) != 0 )
      return 0;
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v23, v24, v25, v26);
    v31 = *(_BYTE **)(a1 + 128);
    if ( (*v31 & 0x40) != 0 || (v31[10] & 0x20) != 0 && !(unsigned __int8)sub_B96D80(a1) )
    {
      return 0;
    }
    else
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v27, v28, v29, v30);
      return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x800) == 0;
    }
  }
  return result;
}
