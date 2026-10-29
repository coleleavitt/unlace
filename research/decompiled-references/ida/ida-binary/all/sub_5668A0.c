__m128 *__fastcall sub_5668A0(
        __m128i *a1,
        __int32 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ebp
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r11
  unsigned int v29; // r14d
  __int64 v30; // r10
  unsigned int v31; // r13d
  unsigned int v32; // r10d
  bool v33; // dl
  char v34; // di
  unsigned int v35; // esi
  __m128 *v36; // rbx
  int v38; // ebx
  char v39; // dl
  __int64 v40; // [rsp+20h] [rbp-88h]
  unsigned int v41; // [rsp+20h] [rbp-88h]
  __m128i v42; // [rsp+28h] [rbp-80h] BYREF
  __int64 v43; // [rsp+38h] [rbp-70h]
  unsigned __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  __m128i *v45; // [rsp+48h] [rbp-60h]
  __m128i v46; // [rsp+50h] [rbp-58h] BYREF
  __m128i v47; // [rsp+60h] [rbp-48h]

  v42.m128i_i32[2] = a2;
  v45 = a1;
  v9 = *(_QWORD *)a8;
  v44 = *((_QWORD *)&a8 + 1);
  v42.m128i_i64[0] = a8;
  v46 = _mm_loadu_si128((const __m128i *)&a7);
  v47 = _mm_loadu_si128((const __m128i *)&a8);
  while ( 1 )
  {
    v10 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v42), (__m128i)v44);
    if ( (v9 & 1) != 0 )
      break;
    v11 = *(unsigned int *)(v9 + 36);
    if ( !(_DWORD)v11 )
      break;
    v12 = *(unsigned __int16 *)(v9 + 66);
    v13 = *(_QWORD *)(v44 + 8);
    v43 = 0;
    if ( (_DWORD)v12 )
    {
      v14 = (unsigned int)v12 * *(unsigned __int16 *)(v13 + 36);
      v12 = *(_QWORD *)(v13 + 128);
      v43 = v12 + 2 * v14;
    }
    v40 = v9;
    v15 = 0;
    v47 = v10;
    v16 = sub_565DC0(v11, v13, v9, v12, a5, a6, _mm_load_si128(&v46).m128i_u32[0]);
    v21 = sub_565DD0(v11, v13, v17, v18, v19, v20, (__int128)_mm_load_si128(&v46));
    a5 = 0;
    v22 = v21;
    v23 = HIDWORD(v21);
    v24 = v40;
    v41 = *(_DWORD *)(v40 + 36);
    v25 = (__int64 *)(v24 - 8LL * v41);
    v42.m128i_i32[3] = 0;
    if ( !v41 )
      break;
    while ( 1 )
    {
      v26 = *v25;
      v42.m128i_i64[0] = (__int64)v25;
      if ( (v26 & 1) != 0 )
        v27 = (v26 >> 3) & 1;
      else
        LOBYTE(v27) = (*(_BYTE *)(v26 + 44) & 4) != 0;
      if ( (_BYTE)v27 )
      {
        v29 = 0;
        v28 = 0;
      }
      else
      {
        if ( v43 )
        {
          v28 = *(unsigned __int16 *)(v43 + 2LL * v42.m128i_u32[3]);
          v29 = (unsigned __int16)v28;
        }
        else
        {
          v29 = 0;
          v28 = 0;
        }
        ++v42.m128i_i32[3];
      }
      if ( (_DWORD)a5 )
      {
        if ( (v26 & 1) != 0 )
        {
          v30 = (v26 >> 40) & 0xF;
          v31 = BYTE4(v26);
          a6 = v16 + BYTE6(v26);
          if ( (_DWORD)v30 )
            goto LABEL_16;
        }
        else
        {
          LODWORD(v30) = *(_DWORD *)(v26 + 8);
          v31 = *(_DWORD *)(v26 + 12);
          a6 = v16 + *(_DWORD *)(v26 + 4);
          if ( (_DWORD)v30 )
          {
LABEL_16:
            v32 = v22 + v30;
            goto LABEL_17;
          }
        }
        v31 += v23;
        v32 = v22;
      }
      else
      {
        v31 = v23;
        v32 = v22;
        a6 = v16;
      }
LABEL_17:
      if ( (v26 & 1) != 0 )
      {
        v23 = HIBYTE(v26);
        v16 = a6 + HIBYTE(v26);
LABEL_19:
        LODWORD(v23) = v31 + v23;
        v22 = v32;
        goto LABEL_20;
      }
      v38 = *(_DWORD *)(v26 + 20);
      LODWORD(v23) = *(_DWORD *)(v26 + 24);
      v16 = a6 + *(_DWORD *)(v26 + 16);
      if ( !v38 )
        goto LABEL_19;
      v22 = v32 + v38;
LABEL_20:
      v33 = (*(_BYTE *)v25 & 4) != 0;
      v34 = (*(_BYTE *)v25 & 2) != 0;
      if ( a3 )
      {
        if ( (v26 & 1) == 0 )
          v34 = *(_BYTE *)(v26 + 44) & 1;
        if ( v29 || v34 )
        {
LABEL_38:
          if ( v42.m128i_i32[2] == v15 )
            goto LABEL_50;
LABEL_39:
          ++v15;
          goto LABEL_31;
        }
      }
      else if ( (_WORD)v28 )
      {
        if ( (_WORD)v28 == 0xFFFF
          || (_WORD)v28 != 0xFFFE && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 104LL) + 3 * v28 + 1) )
        {
          goto LABEL_38;
        }
      }
      else
      {
        if ( (v26 & 1) != 0 )
        {
          if ( (*(_BYTE *)v25 & 2) == 0 )
            goto LABEL_25;
        }
        else
        {
          v39 = *(_BYTE *)(v26 + 44);
          if ( (v39 & 1) == 0 )
            goto LABEL_25;
          v33 = (v39 & 2) != 0;
        }
        if ( v33 )
        {
          if ( v42.m128i_i32[2] == v15 )
          {
LABEL_50:
            v36 = (__m128 *)v45;
            *v45 = _mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(v32)),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v29)));
            v36[1] = _mm_loadh_ps((const double *)&v44);
            return v36;
          }
          goto LABEL_39;
        }
      }
LABEL_25:
      v9 = *v25;
      if ( (*v25 & 1) != 0 || !*(_DWORD *)(v9 + 36) )
        goto LABEL_31;
      v35 = *(_DWORD *)(v9 + 52);
      if ( !a3 )
      {
        if ( v42.m128i_i32[2] - v15 < v35 )
        {
          v42.m128i_i32[2] -= v15;
          goto LABEL_58;
        }
        goto LABEL_30;
      }
      if ( (unsigned int)(v42.m128i_i32[2] - v15) < *(_DWORD *)(v9 + 48) )
        break;
      v35 = *(_DWORD *)(v9 + 48);
LABEL_30:
      v15 += v35;
LABEL_31:
      a5 = (unsigned int)(a5 + 1);
      ++v25;
      if ( (_DWORD)a5 == v41 )
        goto LABEL_32;
    }
    v42.m128i_i32[2] -= v15;
LABEL_58:
    v46 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(v32)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v29)));
  }
LABEL_32:
  v36 = (__m128 *)v45;
  *v45 = 0;
  v36[1] = 0;
  return v36;
}
