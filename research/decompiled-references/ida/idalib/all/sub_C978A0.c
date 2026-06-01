unsigned __int64 __fastcall sub_C978A0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        const void *a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8)
{
  int v11; // r13d
  size_t v12; // r12
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  char v19; // al
  char v20; // dl
  char v21; // al
  unsigned __int8 v22; // al
  __int64 v24; // rax
  char v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  unsigned __int8 v28; // [rsp+1Fh] [rbp-39h]

  v11 = a6;
  v12 = 8 * a6;
  v13 = 8 * a6 + 32;
  v15 = a1[294];
  a1[304] += v13;
  v16 = a8;
  v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v17 && v15 )
  {
    a1[294] = v13 + v17;
  }
  else
  {
    v26 = a2;
    v24 = sub_986170((__int64)(a1 + 294), v13, 8 * a6 + 32, 3, a8, a6);
    v16 = a8;
    a2 = v26;
    v17 = v24;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = 1;
  if ( *(_BYTE *)(v18 + 16) != 43 )
    v19 = 2 * (*(_BYTE *)(v18 + 16) == 44);
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x5F;
  if ( unk_2CD7484 )
  {
    v28 = v16;
    v27 = a2;
    v25 = v19;
    sub_EE9B50(95);
    v16 = v28;
    a2 = v27;
    v19 = v25;
  }
  v20 = 2 * v19;
  v21 = *(_BYTE *)(v17 + 1);
  *(_QWORD *)(v17 + 8) = a2;
  *(_QWORD *)(v17 + 16) = (4 * v16) | a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v17 + 24) = a4;
  *(_BYTE *)(v17 + 1) = v20 | v21 & 0xF9;
  *(_WORD *)(v17 + 1) &= 0xF807u;
  *(_DWORD *)(v17 + 28) = a7;
  *(_DWORD *)(v17 + 4) = v11;
  if ( v12 )
    memmove((void *)(v17 + 32), a5, v12);
  v22 = sub_B65610(v17);
  *(_BYTE *)(v17 + 1) = (v22 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v22 >> 2) & 7;
  return v17;
}
