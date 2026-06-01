_BOOL8 __fastcall sub_1A30050(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9

  v2 = a2;
  if ( (unsigned __int8)sub_15EEA20((__int64)a2) )
  {
    v23 = sub_B73640(*a2);
    if ( v23 )
    {
      a2 = *(__int64 **)(a1 + 248);
      if ( (unsigned __int8)sub_C01160(v23, (__int64)a2, 1, v4, v5) )
        return 1;
    }
  }
  v7 = *((_BYTE *)v2 + 24);
  if ( (v7 & 3) != 0 )
    return 0;
  if ( (v7 & 8) != 0 )
  {
    v19 = sub_19A27D0(a1);
    v8 = sub_F68450(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v20, v21, v22);
  }
  else
  {
    v8 = v2[2];
  }
  if ( (v8 & 4) != 0 )
    return 1;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(v9 + 8) & 4) != 0 )
    return 1;
  for ( i = *(_QWORD *)v9; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v11 = sub_F63050(i, a2, v3, v4);
    if ( !v11 )
      break;
    i = v11;
  }
  v12 = sub_F63270(i, (__int64)a2, v3, v4, v5, v6);
  v17 = v12;
  if ( !v12 )
    return 0;
  if ( (*((_BYTE *)v12 + 74) & 1) == 0 )
    return 1;
  sub_7052B0((__int64 *)(v12[13] + 96LL), v12[13], v13, v14, v15, v16);
  if ( (*(_BYTE *)(v17[16] + 5LL) & 1) == 0 )
    return 1;
  sub_7052B0((__int64 *)(v17[13] + 96LL), v17[13], v24, v25, v26, v27);
  return (*(_WORD *)(v17[16] + 4LL) & 0x1000) == 0;
}
