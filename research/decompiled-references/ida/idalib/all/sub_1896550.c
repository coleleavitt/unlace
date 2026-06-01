__int64 __fastcall sub_1896550(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 *v9; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  char v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  char v17; // dl
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v5 = *(_QWORD *)(a3 + 16);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(v6 + 8) & 0x7F) == 0x17 && v6 != 48 )
  {
    v7 = *(_QWORD *)(v6 - 8);
    if ( (v7 & 7) == 0 && (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((a2[1] >> 1) & 2) == 0 )
      a2[1] = (2 * ((a2[1] >> 1) & 3) + 2) | a2[1] & 0xFFFFFFFFFFFFFFF9LL;
  }
  result = *a2;
  v9 = nullptr;
  if ( (*a2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    a2[1] &= 7uLL;
    *a2 = result | a3;
    return result;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(sub_168B6E0(a1) + 201) >> 5 )
      goto LABEL_34;
    v13 = sub_1896130(a1, a3, *v4 & 0xFFFFFFFFFFFFFFF8LL, 1u);
    if ( v13 )
      break;
LABEL_26:
    if ( (*(_BYTE *)(a3 + 58) & 0x20) == 0 )
      *v4 |= 4uLL;
    if ( (unsigned int)sub_B90D60(a3, nullptr, nullptr, 0, 0, v12) != 2 )
    {
      if ( (unsigned int)sub_B90D60(a3, nullptr, nullptr, 0, 0, v22) == 3 && !v9 && v13 )
      {
LABEL_32:
        v9 = v4;
        if ( (int)sub_B90D60(*v4 & 0xFFFFFFFFFFFFFFF8LL, nullptr, nullptr, 0, 0, v11) > 1 )
          goto LABEL_33;
      }
      goto LABEL_34;
    }
    if ( !v9 && v13 )
    {
      if ( (unsigned int)sub_B90D60(*v4 & 0xFFFFFFFFFFFFFFF8LL, nullptr, nullptr, 0, 0, v22) == 2 )
      {
        if ( (unsigned int)sub_B90D60(a3, nullptr, nullptr, 0, 0, v29) == 3 )
          goto LABEL_32;
LABEL_33:
        v9 = nullptr;
      }
      else
      {
        v9 = v4;
        sub_B90D60(a3, nullptr, nullptr, 0, 0, v29);
      }
LABEL_34:
      v23 = v4[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v23 )
        goto LABEL_39;
      goto LABEL_35;
    }
    sub_B90D60(a3, nullptr, nullptr, 0, 0, v22);
    v23 = v4[1] & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v23 )
    {
LABEL_39:
      v24 = *(_QWORD **)a1;
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      v24[21] += 16LL;
      v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v24[12] >= v26 + 16 && v25 )
      {
        v24[11] = v26 + 16;
        v27 = (_QWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v27 = (_QWORD *)sub_986170((__int64)(v24 + 11), 16, 16, 3, v10, v11);
        v26 = (unsigned __int64)v27;
      }
      if ( v9 )
      {
        *v27 = *v9;
        v27[1] = v9[1];
        v28 = v9[1];
        *v9 = *v9 & 7 | a3;
        result = v28 & 7;
        v9[1] = result | v26;
      }
      else
      {
        v27[1] = 0;
        *v27 = a3 & 0xFFFFFFFFFFFFFFFBLL;
        result = v4[1] & 7;
        v4[1] = result | v26;
      }
      return result;
    }
LABEL_35:
    v4 = (__int64 *)v23;
  }
  v14 = *v4;
  v15 = *v4 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v16 = *(_QWORD *)v16;
  v17 = *(_BYTE *)(v16 + 8);
  v18 = v16 - 48;
  if ( (v17 & 0x7F) != 0x13 )
    v18 = 0;
  v19 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v15 + 16) & 4) != 0 )
  {
    v19 = *(_QWORD *)v19;
    if ( (*(_BYTE *)(v19 + 8) & 0x7F) == 0x13 )
      goto LABEL_18;
  }
  else if ( (*(_BYTE *)(v19 + 8) & 0x7F) == 0x13 )
  {
LABEL_18:
    if ( (v18 != 0) != (v19 != 48) )
      goto LABEL_26;
    if ( v18 )
      goto LABEL_20;
    goto LABEL_48;
  }
  if ( v18 )
    goto LABEL_26;
LABEL_48:
  v30 = sub_BA85D0(a3);
  if ( v30 != sub_BA85D0(v15) )
    goto LABEL_26;
  v14 = *v4;
  v15 = *v4 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_20:
  if ( (*(_BYTE *)(a3 + 58) & 0x20) != 0 )
    *(_BYTE *)(v15 + 58) |= 0x20u;
  else
    *v4 = v14 | 4;
  if ( (unsigned int)sub_B90D60(a3, nullptr, nullptr, 0, 0, v12) == 2
    && (unsigned int)sub_B90D60(v15, nullptr, nullptr, 0, 0, v20) != 2 )
  {
    *v4 = a3 | *v4 & 7;
  }
  result = sub_B90D60(a3, nullptr, nullptr, 0, 0, v20);
  if ( (_DWORD)result == 3 )
  {
    result = sub_B90D60(v15, nullptr, nullptr, 0, 0, v21);
    if ( (int)result <= 1 )
    {
      result = *v4 & 7;
      *v4 = result | a3;
    }
  }
  return result;
}
