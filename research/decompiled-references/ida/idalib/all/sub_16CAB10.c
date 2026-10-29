__int64 __fastcall sub_16CAB10(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbp
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rax
  _BYTE v29[41]; // [rsp+Fh] [rbp-29h] BYREF

  for ( i = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v8 = sub_F63050(i, a2, a3, a4);
    if ( !v8 )
      break;
    i = v8;
  }
  *a2 = 0;
  v9 = sub_F63270(i, (__int64)a2, a3, a4, a5, a6);
  v14 = v9;
  if ( !v9 )
    return 0;
  v15 = v9[16];
  if ( !v15 )
  {
    sub_7052B0((__int64 *)(v14[13] + 96LL), v14[13], v10, v11, v12, v13);
    v15 = v14[16];
    if ( !v15 )
      return 0;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( !v16 || *(char *)(v16 + 28) < 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104), v10, v11, v12, v13);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 128) + 1LL) & 4) != 0 )
    return v16;
  v22 = *(_QWORD *)(v16 + 104);
  sub_7052B0((__int64 *)(v22 + 96), v22, v17, v18, v19, v20);
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 128) + 20LL) )
    return v16;
  v27 = sub_B7E900(v16, v22, v23, v24, v25, v26);
  if ( v27 )
  {
LABEL_16:
    v16 = sub_16CAB10(*(_QWORD *)(v27 + 48), v29);
    if ( v16 )
    {
      *a2 = 1;
      return v16;
    }
    while ( 1 )
    {
      v28 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v27 = v28;
      if ( !v28 )
        break;
      if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_16;
    }
  }
  return 0;
}
