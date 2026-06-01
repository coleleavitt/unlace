/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x00000001000754F0

//----- (00000001000754F0) ----------------------------------------------------
__int64 __fastcall eadd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int16 v6; // si
  unsigned int v7; // edx
  int v8; // esi
  __m128i v9; // xmm0
  __int16 v10; // r10
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // di
  __int16 v13; // r14
  unsigned int v14; // r8d
  int v15; // r14d
  __m128i v16; // xmm1
  __int16 v17; // r15
  unsigned __int16 v18; // r11
  unsigned __int16 v19; // ax
  bool v20; // zf
  bool v21; // cc
  unsigned int v22; // esi
  __int16 v23; // ax
  char v24; // al
  unsigned __int16 epi16; // cx
  unsigned __int16 v26; // si
  int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // edi
  int v31; // edx
  int v32; // edi
  int v33; // r8d
  unsigned int v34; // r9d
  unsigned int v35; // edx
  __int16 v36; // r10
  bool v37; // cf
  unsigned int v38; // edi
  unsigned int v39; // r8d
  unsigned int v40; // edi
  __int16 v41; // cx
  __m128i v43; // [rsp+0h] [rbp-80h]
  __m128i v44; // [rsp+0h] [rbp-80h]
  int v45; // [rsp+10h] [rbp-70h]
  int v46; // [rsp+10h] [rbp-70h]
  __m128i v47; // [rsp+20h] [rbp-60h] BYREF
  int v48; // [rsp+30h] [rbp-50h]
  unsigned __int16 v49; // [rsp+34h] [rbp-4Ch]
  __m128i v50; // [rsp+40h] [rbp-40h] BYREF
  int v51; // [rsp+50h] [rbp-30h]
  unsigned __int16 v52; // [rsp+54h] [rbp-2Ch]

  v6 = *(_WORD *)(a1 + 14);
  v7 = (unsigned int)v6 >> 15;
  v50.i16[0] = v7;
  v8 = v6 & 0x7FFF;
  *(__int32 *)((char *)v50.i32 + 2) = (unsigned __int16)v8;
  v9 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
  *(__int64 *)((char *)v50.i64 + 6) = _mm_shufflelo_epi16(v9, 27).u64[0];
  v10 = *(_WORD *)(a1 + 4);
  v50.i16[7] = v10;
  v11 = *(_WORD *)(a1 + 2);
  LOWORD(v51) = v11;
  v12 = *(_WORD *)a1;
  HIWORD(v51) = v12;
  v52 = 0;
  v13 = *(_WORD *)(a2 + 14);
  v14 = (unsigned int)v13 >> 15;
  v47.i16[0] = v14;
  v15 = v13 & 0x7FFF;
  *(__int32 *)((char *)v47.i32 + 2) = (unsigned __int16)v15;
  v16 = _mm_loadl_epi64((const __m128i *)(a2 + 6));
  *(__int64 *)((char *)v47.i64 + 6) = _mm_shufflelo_epi16(v16, 27).u64[0];
  v17 = *(_WORD *)(a2 + 4);
  v47.i16[7] = v17;
  v18 = *(_WORD *)(a2 + 2);
  LOWORD(v48) = v18;
  v19 = *(_WORD *)a2;
  HIWORD(v48) = v19;
  if ( a4 )
  {
    LOWORD(v14) = ~(_WORD)v14;
    v47.i16[0] = v14;
  }
  v20 = v8 == v15;
  v21 = v8 <= v15;
  v22 = v8 - v15;
  if ( !v21 )
  {
    v45 = v48;
    v43 = _mm_load_si128(&v47);
    v47 = _mm_load_si128(&v50);
    v48 = v51;
    v50 = v43;
    v51 = v45;
    v52 = 0;
    v23 = v47.i16[1];
    v15 = v47.u16[1];
    v22 = -v22;
    if ( v22 < 0xFFFFFF8F )
      goto LABEL_27;
    goto LABEL_8;
  }
  if ( !v20 )
  {
    v23 = v15;
    if ( v22 >= 0xFFFFFF8F )
    {
LABEL_8:
      v24 = (unsigned int)eshift((__int64)&v50, v22) != 1;
      goto LABEL_22;
    }
LABEL_27:
    v41 = v23 | 0x8000;
    if ( !v47.i16[0] )
      v41 = v23;
    *(_WORD *)(a3 + 14) = v41;
    *(_WORD *)(a3 + 12) = v47.i16[3];
    *(_DWORD *)(a3 + 8) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v47.u64[1]), 225));
    *(_QWORD *)a3 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v47.u64[1] + 4)), 27).u64[0];
    return 1;
  }
  epi16 = _mm_extract_epi16(v9, 3);
  v26 = _mm_extract_epi16(v16, 3);
  if ( epi16 == v26 )
  {
    epi16 = _mm_extract_epi16(v9, 2);
    v26 = _mm_extract_epi16(v16, 2);
    if ( epi16 == v26 )
    {
      epi16 = _mm_extract_epi16(v9, 1);
      v26 = _mm_extract_epi16(v16, 1);
      if ( epi16 == v26 )
      {
        epi16 = _mm_cvtsi128_si32(v9);
        v26 = _mm_cvtsi128_si32(v16);
        if ( epi16 == v26 )
        {
          epi16 = v10;
          v26 = v17;
          if ( v10 == v17 )
          {
            epi16 = v11;
            v26 = v18;
            if ( v11 == v18 )
            {
              epi16 = v12;
              v26 = v19;
              if ( v12 == v19 )
              {
                if ( (_WORD)v15 == 0 || (_WORD)v7 != (unsigned __int16)v14 )
                {
                  *(_OWORD *)a3 = 0;
                  return 1;
                }
                if ( (unsigned __int16)v15 >= 0x7FFEu )
                  goto LABEL_31;
                v23 = v15 + 1;
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  if ( epi16 > v26 )
  {
    v46 = v48;
    v44 = _mm_load_si128(&v47);
    v47 = _mm_load_si128(&v50);
    v48 = v51;
    v50 = v44;
    v51 = v46;
    v52 = 0;
  }
  v24 = 0;
LABEL_22:
  if ( v50.i16[0] == v47.i16[0] )
  {
    v49 = v52;
    v37 = __CFADD__(HIWORD(v51), HIWORD(v48));
    HIWORD(v48) += HIWORD(v51);
    v38 = (unsigned __int16)v51 + v37 + (unsigned __int16)v48;
    LOWORD(v48) = v51 + v37 + (_WORD)v48;
    v39 = HIWORD(v38) + v50.u16[7] + v47.u16[7];
    v47.i16[7] += HIWORD(v38) + v50.i16[7];
    v40 = HIWORD(v39) + v50.u16[6] + v47.u16[6];
    v47.i16[6] += HIWORD(v39) + v50.i16[6];
    v32 = HIWORD(v40) + v50.u16[5] + v47.u16[5];
    v33 = HIWORD(v32) + v50.u16[4] + v47.u16[4];
    v34 = HIWORD(v33) + v50.u16[3] + v47.u16[3];
    v35 = HIWORD(v34);
    v36 = v50.i16[2] + v47.i16[2];
  }
  else
  {
    v27 = -v52;
    v49 = -v52;
    v28 = (v27 >> 16) + HIWORD(v48) - HIWORD(v51);
    HIWORD(v48) = HIWORD(v27) + HIWORD(v48) - HIWORD(v51);
    v29 = (v28 >> 16) + (unsigned __int16)v48 - (unsigned __int16)v51;
    LOWORD(v48) = HIWORD(v28) + v48 - v51;
    v30 = (v29 >> 16) + v47.u16[7] - v50.u16[7];
    v47.i16[7] = HIWORD(v29) + v47.i16[7] - v50.i16[7];
    v31 = (v30 >> 16) + v47.u16[6] - v50.u16[6];
    v47.i16[6] = HIWORD(v30) + v47.i16[6] - v50.i16[6];
    v32 = (v31 >> 16) + v47.u16[5] - v50.u16[5];
    v33 = (v32 >> 16) + v47.u16[4] - v50.u16[4];
    v34 = (v33 >> 16) + v47.u16[3] - v50.u16[3];
    v35 = HIWORD(v34);
    v36 = v47.i16[2] - v50.i16[2];
  }
  v47.i16[5] = v32;
  v47.i16[4] = v33;
  v47.i16[3] = v34;
  v47.i16[2] = v35 + v36;
  if ( (unsigned __int8)emdnorm((__int64)&v47, v24, v50.i16[0] != v47.i16[0], v15, 112) )
  {
    v23 = v47.i16[1];
    goto LABEL_27;
  }
LABEL_31:
  *(_OWORD *)a3 = 0;
  return 2;
}
