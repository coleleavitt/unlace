unsigned __int64 __fastcall sub_8C2AE0(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // ax
  unsigned __int8 v12; // al
  char v13; // dl

  v7 = 16LL * a2 + 32LL * a3 + 56;
  v8 = a1[274];
  a1[284] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v7 + v9;
  if ( a1[275] >= v7 + v9 && v8 )
    a1[274] = v10;
  else
    v9 = sub_8C1090((__int64)(a1 + 274), v7, 3);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x46;
  if ( byte_4AD234C )
    sub_AC4570(70);
  v11 = *(_WORD *)(v9 + 1);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_WORD *)(v9 + 1) = v11 & 0xF001 | 2;
  *(_OWORD *)(v9 + 16) = 0;
  v12 = sub_76CDC0((const __m128i *)v9, v7, v10, a4, a5, a6);
  *(_BYTE *)(v9 + 1) = (v12 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
  v13 = (v12 >> 2) & 7 | *(_BYTE *)(v9 + 2) & 0xF0;
  *(_BYTE *)(v9 + 2) = (8 * (a2 & 1)) | v13;
  return v9;
}

