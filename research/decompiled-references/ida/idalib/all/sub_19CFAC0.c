__int64 __fastcall sub_19CFAC0(
        __int64 *a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rbp
  __int64 v26; // rbx
  __int16 v27; // ax
  unsigned __int8 v28; // al

  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  v16 = sub_1907C70(*a1, a4, (__m128i)a7, a8, v12, v13, v14, v15);
  if ( v16 == 1 )
    return 1;
  v22 = v16;
  v23 = sub_19146F0(*a1, a3, v17, v18, v19, v20, a7, a8);
  if ( v23 == 1 )
    return 1;
  v24 = v11[2390];
  v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v26 = sub_EEE9A0(56, v11, 8u);
  *(_WORD *)v26 = *(_WORD *)v26 & 0xFE00 | 0x1C;
  if ( unk_2CD7484 )
    sub_EE9B50(28);
  v27 = *(_WORD *)(v26 + 1);
  *(_QWORD *)(v26 + 8) = v24;
  *(_DWORD *)(v26 + 16) = a2;
  *(_QWORD *)(v26 + 40) = a5;
  *(_QWORD *)(v26 + 24) = v25;
  *(_WORD *)(v26 + 1) = v27 & 0xF801 | 0x22;
  *(_QWORD *)(v26 + 32) = v22 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v26 + 48) = a6;
  v28 = sub_B63AF0(v26);
  *(_BYTE *)(v26 + 1) = (v28 << 6) | *(_BYTE *)(v26 + 1) & 0x3F;
  *(_BYTE *)(v26 + 2) = *(_BYTE *)(v26 + 2) & 0xF8 | (v28 >> 2) & 7;
  return v26;
}
