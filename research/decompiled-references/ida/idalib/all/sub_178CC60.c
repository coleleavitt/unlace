__int64 __fastcall sub_178CC60(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __m128i a4)
{
  int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  _QWORD *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  _WORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // r15
  __int64 v20; // r9
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-88h]
  __int64 v25; // [rsp+8h] [rbp-80h]
  __int64 v26; // [rsp+18h] [rbp-70h]
  _QWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  char v30; // [rsp+40h] [rbp-48h]

  v4 = a2;
  v6 = sub_178B340(a1, a2, "co_yield", 8, 0, a4);
  if ( !v6 )
    return 1;
  v7 = v6;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v23 = sub_1907C70(a1, a3);
    if ( v23 != 1 )
    {
      a3 = v23 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_4;
    }
    return 1;
  }
LABEL_4:
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v11 = *(_QWORD **)(a1 + 248);
    v12 = v11[2384];
    v13 = sub_EEE9A0(72, v11, 8u);
    *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x48;
    if ( unk_2CD7484 )
      sub_EE9B50(72);
    *(_WORD *)(v13 + 1) &= 0xF801u;
    *(_QWORD *)(v13 + 8) = v12;
    *(_DWORD *)(v13 + 16) = v4;
    *(_QWORD *)(v13 + 64) = 0;
    *(_QWORD *)(v13 + 24) = a3;
    *(_QWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_QWORD *)(v13 + 56) = 0;
  }
  else
  {
    v9 = a3;
    if ( (*(_BYTE *)(a3 + 1) & 6) == 0 )
      v9 = sub_1A0BDC0(a1, *(_QWORD *)(a3 + 8), a3, 1);
    sub_1787C10((__int64)v27, a1, *(_QWORD *)(v7 + 184), a2, v9);
    if ( v30 )
      return 1;
    v15 = (_WORD *)sub_EEE9A0(72, *(_QWORD **)(a1 + 248), 8u);
    v16 = v28;
    v17 = v29;
    v13 = (__int64)v15;
    v18 = v27[1];
    v19 = *(_BYTE *)(v28 + 1);
    v20 = *(_QWORD *)(v28 + 8);
    v21 = v27[0];
    *v15 = *v15 & 0xFE00 | 0x48;
    if ( unk_2CD7484 )
    {
      v26 = v20;
      v25 = v18;
      v24 = v17;
      sub_EE9B50(72);
      v20 = v26;
      v18 = v25;
      v17 = v24;
    }
    v22 = *(_BYTE *)(v13 + 1);
    *(_BYTE *)(v13 + 2) &= 0xF8u;
    *(_QWORD *)(v13 + 8) = v20;
    *(_DWORD *)(v13 + 16) = v4;
    *(_QWORD *)(v13 + 64) = v17;
    *(_BYTE *)(v13 + 1) = v19 & 0x3E | v22 & 1;
    *(_QWORD *)(v13 + 24) = a3;
    *(_QWORD *)(v13 + 32) = v9;
    *(_QWORD *)(v13 + 40) = v21;
    *(_QWORD *)(v13 + 48) = v18;
    *(_QWORD *)(v13 + 56) = v16;
  }
  v14 = sub_B63950(v13);
  *(_BYTE *)(v13 + 1) = (v14 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v14 >> 2) & 7;
  return v13;
}
