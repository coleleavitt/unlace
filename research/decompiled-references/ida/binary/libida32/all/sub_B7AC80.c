__int64 __fastcall sub_B7AC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
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
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 result; // rax
  char v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rsi
  __int64 v51; // rsi

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 4) != 0
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v7, v8, v9, v10),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) != 0) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v7, v8, v9, v10);
  if ( (**(_BYTE **)(a2 + 128) & 8) != 0
    || (v51 = *(_QWORD *)(a2 + 104),
        sub_6E4DB0((__int64 *)(v51 + 96), v51, v11, v12, v13, v14),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) == 0)
    && !(unsigned __int8)sub_B78320(a2, v51, v11, v12, v13, v14)
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v11, v12, v13, v14),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) != 0) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v11, v12, v13, v14);
  if ( (**(_BYTE **)(a2 + 128) & 0x10) != 0
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v15, v16, v17, v18),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x10) != 0) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v15, v16, v17, v18);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x80u;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v15, v16, v17, v18);
  if ( (**(_BYTE **)(a2 + 128) & 0x20) != 0
    || (v50 = *(_QWORD *)(a2 + 104),
        sub_6E4DB0((__int64 *)(v50 + 96), v50, v19, v20, v21, v22),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) == 0)
    && !(unsigned __int8)sub_B783C0(a2, v50, v19, v20, v21, v22)
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v19, v20, v21, v22),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x20) != 0) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v19, v20, v21, v22);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 1u;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v19, v20, v21, v22);
  if ( (**(_BYTE **)(a2 + 128) & 0x40) != 0
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v24, v25, v26),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x40) != 0) )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v23, v24, v25, v26);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v27, v28, v29, v30);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v31, v32, v33, v34);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 2u;
  }
  v35 = sub_B735C0(a2);
  if ( v35 )
  {
    if ( (*(_BYTE *)(v35 + 84) & 3) != 0 )
      goto LABEL_13;
  }
  else
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 0x10) != 0 && *(char *)(sub_B68890(a2) + 1) < 0 )
      goto LABEL_13;
  }
  v45 = *(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 2LL);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v46, v47, v48, v49);
  v36 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(v36 + 8) = (16 * (v45 & 1)) | *(_BYTE *)(v36 + 8) & 0xEF;
LABEL_13:
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
  result = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(result + 8) & 0x40) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v40, v41, v42, v43);
    result = *(_QWORD *)(a1 + 128);
    *(_BYTE *)(result + 8) &= ~0x40u;
  }
  return result;
}

