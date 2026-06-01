__int64 __fastcall sub_F5EB50(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // al
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r14
  char v14; // al
  char v15; // dl
  char v16; // r8
  char v17; // di
  char v18; // dl
  char v19; // al
  char v20; // r8
  char v21; // di
  char v22; // al
  char v23; // r8
  char v24; // di
  char v25; // dl
  char v26; // al
  char v27; // r9
  char v28; // r8
  __int64 v29; // [rsp+8h] [rbp-40h]

  v8 = a4;
  v9 = a7;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v8 = a4 | *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x17;
  *(_QWORD *)a1 = a1;
  v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 24) = a2;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v10 = a5;
  *(_DWORD *)(a1 + 20) = a8;
  *(_QWORD *)(a1 + 32) = a6;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0xE0 | v8 & 0x1F;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a1 + 16) & 0x1F00 | 0x10;
  result = 8 * (a3 & 3u);
  *(_BYTE *)(a1 + 18) = (8 * (a3 & 3)) | *(_BYTE *)(a1 + 18) & 0xE0;
  if ( a6 )
  {
    v12 = a1 + 48;
    result = a7 + 24 * a8;
    v29 = result;
    if ( a7 != result )
    {
      do
      {
        v14 = sub_F1D2B0(v9);
        v15 = v14 & 8;
        if ( (v14 & 8) != 0 )
          v15 = 16;
        v16 = v14 & 4;
        if ( (v14 & 4) != 0 )
          v16 = 12;
        v17 = v14 & 2;
        if ( (v14 & 2) != 0 )
          v17 = 2;
        v18 = v17 | v16 | v14 & 1 | v15;
        v19 = v18 & 0x10;
        if ( (v18 & 0x10) != 0 )
          v19 = 16;
        v20 = v18 & 0xC;
        if ( (v18 & 0xC) != 0 )
          v20 = 4;
        v21 = v18 & 2;
        if ( (v18 & 2) != 0 )
          v21 = 2;
        v22 = v21 | v20 | v18 & 1 | v19;
        v23 = v22 & 0x10;
        if ( (v22 & 0x10) != 0 )
          v23 = 16;
        v24 = v22 & 4;
        if ( (v22 & 4) != 0 )
          v24 = 12;
        v25 = v22 & 2;
        if ( (v22 & 2) != 0 )
          v25 = 2;
        v26 = v25 | v24 | v23 | v22 & 1;
        v27 = v26 & 0x10;
        if ( (v26 & 0x10) != 0 )
          v27 = 16;
        v28 = v26 & 2;
        if ( (v26 & 2) != 0 )
          v28 = 2;
        v12 += 24;
        v9 += 24;
        *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0xE0 | v28 | v27 | *(_BYTE *)(a1 + 17) & 0x1F | v26 & 1;
        *(__m128i *)(v12 - 24) = _mm_loadu_si128((const __m128i *)(v9 - 24));
        result = *(_QWORD *)(v9 - 8);
        *(_QWORD *)(v12 - 8) = result;
      }
      while ( v29 != v9 );
    }
  }
  return result;
}
