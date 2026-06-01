__int64 __fastcall sub_BA4170(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9

  v3 = sub_B8C5D0(a1);
  if ( *(char *)(v3 + 1) < 0 )
  {
    v17 = sub_B97300(a1);
    if ( !v17 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x10) == 0 || *(char *)(sub_B8C5D0(a1) + 1) >= 0 )
        return 0;
      goto LABEL_4;
    }
    v10 = (*(_BYTE *)(v17 + 84) & 3) == 0;
  }
  else
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v1, v2, v4, v5);
    v10 = (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x1000) == 0;
  }
  if ( v10 )
    return 0;
LABEL_4:
  v11 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v11 + 96), v11, v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(a1 + 73) >> 5 != 2 )
      return 0;
    if ( sub_B7E900(a1, v11, v12, v13, v14, v15) )
    {
      v23 = sub_B7E900(a1, v11, v12, v13, v14, v15);
      if ( !v23 )
        return 0;
LABEL_15:
      v24 = *(_QWORD *)(v23 + 48);
      if ( (v24 & 4) != 0
        || (v25 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0)
        || (v26 = sub_B8C330(a1), !(unsigned __int8)sub_F67430(*v25, v26)) )
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v23 = v27;
          if ( !v27 )
            return 0;
          if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_15;
        }
      }
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v12, v13, v14, v15);
  v22 = *(char **)(a1 + 128);
  if ( *v22 < 0 || (v22[10] & 0x20) != 0 && (*(_BYTE *)(v3 + 1) & 0x40) != 0 )
    return 1;
  v28 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v28 + 96), v28, v18, v19, v20, v21);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 1) != 0 )
    return 1;
  if ( (unsigned __int8)sub_B9BFC0(a1, v28, v29, v30, v31, v32) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v33, v34, v35, v36);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 4) != 0 )
    {
      if ( *(_BYTE *)(a1 + 73) >> 5 != 2 )
        return 1;
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v33, v34, v35, v36);
      if ( *(char *)(*(_QWORD *)(a1 + 128) + 2LL) < 0 )
        return 1;
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v42, v43, v44, v45);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 0x10) == 0 || *(char *)(sub_B8C5D0(a1) + 1) < 0 )
        return 1;
    }
  }
  v37 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v37 + 96), v37, v33, v34, v35, v36);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0 && !(unsigned __int8)sub_B9BFC0(a1, v37, v38, v39, v40, v41) )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v38, v39, v40, v41);
  return *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7;
}
