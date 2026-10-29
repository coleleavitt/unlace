char __fastcall sub_C04970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  char result; // al
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax

  v9 = sub_B5ABC0(a1, a2, a3, a4, a5, a6);
  if ( v9 )
  {
LABEL_2:
    if ( (*(_BYTE *)(v9 + 68) & 1) == 0 || *(_QWORD *)(v9 + 40) )
    {
      result = sub_C048B0(*(_QWORD *)(v9 + 48), a2, v7, v8);
      if ( result )
        return result;
    }
    while ( 1 )
    {
      v13 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v13;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_2;
    }
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v10, v11);
  v18 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
    v19 = sub_B72C40(v18);
  else
    v19 = *(_QWORD *)(v18 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v14, v15, v16, v17);
  v20 = *(_QWORD *)(a1 + 104);
  v21 = v19 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(v20 + 96), v20, v22, v23, v24, v25);
  v28 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
    v29 = sub_B72C40(v28);
  else
    v29 = *(_QWORD *)(v28 + 24);
  if ( v29 == v21 )
    return 0;
  while ( 1 )
  {
    v30 = *(_QWORD *)(**(_QWORD **)(v29 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v30 + 8) & 0xF) != 0 )
      v30 = sub_F411C0(**(_QWORD **)(v29 + 16));
    result = sub_C048B0(v30 & 0xFFFFFFFFFFFFFFF0LL, v20, v26, v27);
    if ( result )
      break;
    v29 += 24;
    if ( v29 == v21 )
      return 0;
  }
  return result;
}

