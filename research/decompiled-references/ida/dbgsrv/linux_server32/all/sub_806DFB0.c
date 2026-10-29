/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806DFB0
// Address: 0x0806DFB0

//----- (0806DFB0) --------------------------------------------------------
int __cdecl sub_806DFB0(__int32 a1, __m128i **a2, __int32 *a3)
{
  int result; // eax
  __int32 v4; // ecx
  int v5; // eax
  int v6; // ecx
  __int32 v7; // ecx
  __int64 v8; // rax
  __m128 v9; // xmm0
  __m128i v10; // xmm1
  int v11; // edx
  __m128i v12; // xmm0
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __m128i v16; // xmm1
  int v17; // eax
  int v18; // edx
  __int32 v19; // ebx
  int v20; // edi
  __m128i *v21; // edx
  __m128i *v22; // eax
  char *v23; // edi
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int32 v28; // ebx
  char *v29; // edx
  int v30; // [esp-CCh] [ebp-CCh]
  __m128i v31; // [esp-ACh] [ebp-ACh] BYREF
  __m128i v32; // [esp-9Ch] [ebp-9Ch] BYREF
  unsigned __int64 v33; // [esp-8Ch] [ebp-8Ch]
  __int64 **v34; // [esp-84h] [ebp-84h]
  __m128i v35; // [esp-7Ch] [ebp-7Ch] BYREF
  unsigned __int64 v36; // [esp-64h] [ebp-64h] BYREF
  __int64 *v37; // [esp-5Ch] [ebp-5Ch] BYREF
  __int32 v38; // [esp-58h] [ebp-58h]
  __m128i v39; // [esp-54h] [ebp-54h] BYREF
  unsigned int v40; // [esp-44h] [ebp-44h]
  char *v41; // [esp-40h] [ebp-40h] BYREF
  unsigned int v42; // [esp-3Ch] [ebp-3Ch]
  unsigned int v43; // [esp-38h] [ebp-38h]
  __m128i v44; // [esp-34h] [ebp-34h] BYREF
  unsigned int v45; // [esp-20h] [ebp-20h]

  v35.m128i_i32[0] = a1;
  v45 = __readgsdword(0x14u);
  if ( !a3[2] )
    goto LABEL_2;
  v4 = *a3;
  v31.m128i_i64[0] = (unsigned int)a3[2];
  v5 = *(int *)((char *)&off_811D128 + v35.m128i_i32[0] - 135385076);
  v32.m128i_i32[0] = v4;
  v6 = 1;
  if ( v5 )
    v6 = v5;
  LODWORD(v33) = v6;
  if ( !v5 )
    v5 = 1;
  v36 = v31.m128i_i64[0] / (unsigned __int64)(unsigned int)v5;
  v32.m128i_i32[1] = 0;
  sub_806DE60(*(int **)(v35.m128i_i32[0] + 360), &v36, v33, (int)&qword_811CFF4 - 279987, v32.m128i_i32[0], 0, -1);
  if ( !v36 )
  {
LABEL_2:
    result = 0;
    goto LABEL_3;
  }
  v37 = &qword_811CFF4 - 745;
  v7 = v35.m128i_i32[0];
  v35.m128i_i64[0] = v36;
  v8 = 0;
  v38 = v7;
  v40 = v33;
  v41 = nullptr;
  v9 = _mm_loadh_ps((const double *)v35.m128i_i64);
  v42 = 0;
  v43 = 0;
  memset(&v44, 0, sizeof(v44));
  v34 = &v37;
  v39 = (__m128i)v9;
  while ( 1 )
  {
    if ( (unsigned int)v8 < HIDWORD(v8) )
      goto LABEL_26;
    v10 = _mm_loadl_epi64(&v44);
    v11 = _mm_cvtsi128_si32(v10);
    v35.m128i_i32[0] = _mm_cvtsi128_si32(_mm_srli_epi64(v10, 0x20u));
    v12 = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]), v10);
    v13 = _mm_cvtsi128_si32(v12);
    if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v12, 0x20u)) | v13) )
      goto LABEL_13;
    v26 = v42;
    v27 = v13;
    if ( v42 < v13 )
    {
      v29 = v41;
      if ( v43 < v13 )
      {
        v29 = (char *)sub_80CF920((int)&v41, v41, v13, 0x10u);
        v41 = v29;
        v26 = v42;
      }
      memset(&v29[16 * v26], 0, 16 * (v27 - v26));
      v42 = v27;
      v35.m128i_i32[0] = v44.m128i_i32[1];
      v11 = v44.m128i_i32[0];
    }
    else if ( v13 != v42 )
    {
      v42 = v13;
    }
    v28 = v35.m128i_i32[0];
    v44.m128i_i32[2] = 0;
    v32.m128i_i8[0] = v40 == 0;
    if ( v35.m128i_i32[0] | v11 && !v32.m128i_i8[0] )
    {
      v35.m128i_i32[0] = 0;
      LODWORD(v33) = 0;
      if ( v28 )
      {
        v33 = (unsigned int)v11 * (unsigned __int64)v40;
        v31.m128i_i64[0] = v40 * (unsigned __int64)(unsigned int)v28;
        if ( (v31.m128i_i64[0] + (unsigned __int64)HIDWORD(v33)) >> 32 )
        {
          v35.m128i_i32[0] = 1;
          LODWORD(v33) = 0;
        }
      }
      if ( v35.m128i_i32[0] )
        goto LABEL_37;
    }
    if ( v27 && !v32.m128i_i8[0] && !is_mul_ok(v27, v40) )
    {
LABEL_37:
      v44.m128i_i32[3] = 0;
      goto LABEL_13;
    }
    LODWORD(v33) = v38;
    v14 = sub_80CD730(*(_DWORD *)(v38 + 360), 0, 1);
    v16 = _mm_loadl_epi64((const __m128i *)(v33 + 364));
    v31.m128i_i64[0] = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v15)), v16).m128i_u64[0];
    v35 = _mm_add_epi64(
            _mm_add_epi64(
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(v44.m128i_i32[0] * v40),
                _mm_cvtsi32_si128((v44.m128i_i64[0] * (unsigned __int64)v40) >> 32)),
              _mm_loadl_epi64(&v39)),
            v16);
    v30 = *(_DWORD *)(v33 + 360);
    v32.m128i_i32[0] = (__int32)v34;
    v17 = sub_80CD730(v30, v35.m128i_i64[0], 0);
    if ( (v18 & v17) == 0xFFFFFFFF || !v27 )
      break;
    v35.m128i_i32[0] = 0;
    v32.m128i_i32[0] = (__int32)&v37;
    while ( 1 )
    {
      v19 = v35.m128i_i32[0];
      if ( !sub_806D160(v32.m128i_i32[0], &v41[16 * v35.m128i_i32[0]]) )
        break;
      v35.m128i_i32[0] = v19 + 1;
      if ( v27 == v19 + 1 )
      {
        v32 = _mm_add_epi64(
                _mm_load_si128(&v31),
                _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33 - 135385076)));
        sub_80CD730(*(int *)((char *)&off_811D15C + v33 - 135385076), v32.m128i_i64[0], 0);
        v44.m128i_i32[3] = v35.m128i_i32[0];
        goto LABEL_25;
      }
    }
    v32 = _mm_add_epi64(
            _mm_load_si128(&v31),
            _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33 - 135385076)));
    sub_80CD730(*(int *)((char *)&off_811D15C + v33 - 135385076), v32.m128i_i64[0], 0);
    v44.m128i_i32[3] = v35.m128i_i32[0];
    if ( !v35.m128i_i32[0] )
      goto LABEL_13;
LABEL_25:
    LODWORD(v8) = v44.m128i_i32[2];
    v44.m128i_i64[0] += v35.m128i_u32[0];
    if ( v44.m128i_i32[2] >= (unsigned __int32)v35.m128i_i32[0] )
      goto LABEL_13;
LABEL_26:
    v20 = v8;
    HIDWORD(v8) = *a2;
    v44.m128i_i32[2] = v8 + 1;
    v22 = a2[1];
    v23 = &v41[16 * v20];
    v24 = _mm_loadl_epi64((const __m128i *)v23);
    v25 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
    if ( a2[2] < (__m128i *)&v22->m128i_i8[1] )
    {
      v32.m128i_i64[0] = v25.m128i_i64[0];
      v35.m128i_i64[0] = v24.m128i_i64[0];
      v21 = (__m128i *)sub_80CF920((int)a2, v21, (unsigned int)v22->m128i_u32 + 1, 0x10u);
      v24 = _mm_loadl_epi64(&v35);
      *a2 = v21;
      v25 = _mm_loadl_epi64(&v32);
      v22 = a2[1];
    }
    v21[(_DWORD)v22] = _mm_unpacklo_epi64(v24, v25);
    a2[1] = (__m128i *)((char *)a2[1] + 1);
    if ( !*(_QWORD *)v23 )
      goto LABEL_13;
    v8 = v44.m128i_i64[1];
  }
  v35 = _mm_add_epi64(_mm_load_si128(&v31), _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33 - 135385076)));
  sub_80CD730(*(int *)((char *)&off_811D15C + v33 - 135385076), v35.m128i_i64[0], 0);
  v44.m128i_i32[3] = 0;
LABEL_13:
  v37 = &qword_811CFF4 - 745;
  if ( v41 )
  {
    v42 = 0;
    sub_80CF780(v41);
  }
  result = 1;
LABEL_3:
  if ( v45 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 806E1CA: variable 'v15' is possibly undefined
// 806E259: variable 'v18' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D128: using guessed type _DWORD (*off_811D128)(const void *, unsigned int, unsigned int);
// 811D15C: using guessed type _UNKNOWN *off_811D15C;
// 811D160: using guessed type _UNKNOWN *off_811D160;
