__int64 __fastcall sub_1845B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // al
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 result; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  _BYTE v28[41]; // [rsp+1h] [rbp-29h] BYREF

  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  v2 = **(_QWORD **)(a2 + 16);
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  if ( (unsigned int)v3 - 53 <= 1 || ((v3 + 52) & 0x7Fu) <= 1 )
  {
    v4 = sub_B72ED0(v2);
    v2 = v4;
    if ( !v4 )
      return 0;
    v3 = *(_BYTE *)(v4 + 28) & 0x7F;
  }
  if ( v3 == 24 || *(_BYTE *)(a2 + 60) && !*(_QWORD *)(a2 + 8) )
    return 0;
  v5 = v3;
  v6 = v3 - 59;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( v6 <= 2 && sub_B97450(v2) )
    {
      v11 = sub_B8C330(v2);
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 2320) + 1LL) & 0x10) == 0 )
        return 0;
      v12 = sub_A7A9D0(v11, v2, v7, v8, v9, v10);
      v15 = *(_BYTE *)(a2 + 60) ? *(_QWORD *)(a2 + 8) : *(_QWORD *)(a1 + 40);
      if ( ((*(__int64 *)(v15 + 8) >> 1) & 3) != 2 )
        return 0;
      v16 = *(_QWORD *)(v15 + 16);
      if ( !v16 )
        return 0;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      v19 = v18 | v12;
      v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v17 + 8) != (v20 | v19 & 7) )
        return 0;
      v28[0] = 0;
      v21 = sub_A7A9D0(v11, v2, v17, v20, v13, v14);
      if ( !sub_1845A50(*(_QWORD *)(a1 + 48), v21, v28, v22, v23, v24) && !v28[0] )
        return 0;
      goto LABEL_28;
    }
    v26 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
    {
      v26 = *(_QWORD *)v26;
      if ( (*(_BYTE *)(v26 + 8) & 0x7Fu) - 59 > 2 )
        return 0;
    }
    else if ( (*(_BYTE *)(v26 + 8) & 0x7Fu) - 59 > 2 )
    {
      return 0;
    }
    v27 = v26 - 64;
    if ( v27 && !(unsigned __int8)sub_B707F0(*(_QWORD *)(a1 + 48), v27) )
      goto LABEL_28;
    return 0;
  }
  if ( v6 <= 2 )
  {
    if ( !sub_B97450(v2) )
    {
LABEL_28:
      v5 = *(_BYTE *)(v2 + 28) & 0x7F;
      goto LABEL_29;
    }
    return 0;
  }
LABEL_29:
  result = *(unsigned __int8 *)(a1 + 32);
  if ( (unsigned int)(v5 - 58) > 9 )
    return (unsigned int)result ^ 1;
  if ( !(_BYTE)result )
    return *(unsigned __int8 *)(a1 + 33) ^ 1u;
  return result;
}
