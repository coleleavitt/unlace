unsigned __int64 __fastcall sub_F3A8A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  char v10; // di
  char v11; // cl
  char v12; // dl
  char v13; // r9
  unsigned __int64 v14; // r11
  char v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbp
  char v19; // al
  char v20; // r9
  unsigned __int64 result; // rax
  const __m128i *v22; // rbx
  const __m128i *v23; // r12
  __int64 v24; // rax
  char v25; // al
  char v26; // si
  char v27; // cl
  char v28; // dl
  char v29; // al
  char v30; // si
  char v31; // cl
  char v32; // dl
  char v33; // al
  char v34; // dl
  char v35; // al
  char v36; // r9
  __int64 v37; // r11
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  char v39; // [rsp+14h] [rbp-54h]
  __int64 v42[8]; // [rsp+28h] [rbp-40h] BYREF

  v42[0] = a2;
  v39 = a3;
  v9 = sub_EFF530(v42, a2, a3, a4, a5, a6);
  v10 = v9 & 8;
  if ( (v9 & 8) != 0 )
    v10 = 16;
  v11 = v9 & 4;
  if ( (v9 & 4) != 0 )
    v11 = 12;
  v12 = v9 & 2;
  if ( (v9 & 2) != 0 )
    v12 = 2;
  v13 = sub_F328B0(v12 | (unsigned __int8)(v11 | v9 & 1 | v10)) & 1;
  if ( (a6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v14 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    v35 = sub_F328B0(
            (2 * ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 2) != 0)) & 0x3E
          | ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 4) != 0 ? 0xC : 0)
          | (16 * ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 0x10) != 0)) & 0x3E
          | (32 * ((*(_BYTE *)(*(_QWORD *)v14 + 17LL) & 8) != 0)) & 0x3Eu);
    v15 = v35 | v36;
    v16 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v37 + 8) | (unsigned __int8)a6) & 7;
    v17 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v15 = v13 | 6;
    v16 = a1 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  }
  *(_DWORD *)(a1 + 20) = a5;
  v18 = a1 + 48;
  *(_QWORD *)a1 = a1;
  if ( !v17 )
    v16 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = v15;
  v20 = *(_BYTE *)(a1 + 17);
  *(_QWORD *)(a1 + 24) = 0;
  v38 = (_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 8) = v16;
  *(_BYTE *)(a1 + 17) = v19 & 0x1F | v20 & 0xE0;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a1 + 16) & 0x1F00 | 0x31;
  *(_QWORD *)(a1 + 32) = v42[0];
  *(_BYTE *)(a1 + 18) = (8 * (v39 & 1)) | *(_BYTE *)(a1 + 18) & 0xF0;
  result = 3 * a5;
  v22 = (const __m128i *)(a4 + 24 * a5);
  if ( (const __m128i *)a4 != v22 )
  {
    v23 = (const __m128i *)a4;
    do
    {
      v25 = sub_EF9570((__int64)v23);
      v26 = v25 & 8;
      if ( (v25 & 8) != 0 )
        v26 = 16;
      v27 = v25 & 4;
      if ( (v25 & 4) != 0 )
        v27 = 12;
      v28 = v25 & 2;
      if ( (v25 & 2) != 0 )
        v28 = 2;
      v29 = v28 | v27 | v26 | v25 & 1;
      v30 = v29 & 0x10;
      if ( (v29 & 0x10) != 0 )
        v30 = 16;
      v31 = v29 & 0xC;
      if ( (v29 & 0xC) != 0 )
        v31 = 4;
      v32 = v29 & 2;
      if ( (v29 & 2) != 0 )
        v32 = 2;
      v33 = *(_BYTE *)(a1 + 17) & 0x1F | v32 & 0x1B | v31 & 0x1B | v30 & 0x1B | v29 & 1;
      v34 = v33 | *(_BYTE *)(a1 + 17) & 0xE0;
      *(_BYTE *)(a1 + 17) = v34;
      v18 += 24;
      if ( (v23->m128i_i32[0] & 0x7FFFFFFF) == 1 )
        *(_BYTE *)(a1 + 17) = *(_BYTE *)(*(_QWORD *)(v23->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8
                            | v33
                            | v34 & 0xE0;
      *(__m128i *)(v18 - 24) = _mm_loadu_si128(v23);
      v24 = v23[1].m128i_i64[0];
      v23 = (const __m128i *)((char *)v23 + 24);
      *(_QWORD *)(v18 - 8) = v24;
    }
    while ( v22 != v23 );
    result = (unsigned __int64)&v38[(((unsigned __int64)&v22[-1] - a4 - 8) >> 3) + 3];
    v38 = (_QWORD *)result;
  }
  if ( v39 )
  {
    result = (unsigned __int64)v38;
    *v38 = a6;
  }
  return result;
}

