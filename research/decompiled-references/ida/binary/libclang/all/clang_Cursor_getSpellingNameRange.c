_QWORD *__fastcall clang_Cursor_getSpellingNameRange(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  unsigned __int64 v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // xmm0_8
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // edx
  __m128i v28; // xmm0
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  unsigned int v37; // edx
  char v38; // bp
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int32 v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // eax
  __m128i v46; // xmm0
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-88h]
  __m128i v49; // [rsp+0h] [rbp-88h]
  __m128i v50; // [rsp+0h] [rbp-88h]
  __m128i v51; // [rsp+0h] [rbp-88h]
  __m128i v52; // [rsp+0h] [rbp-88h]
  __m128i v53; // [rsp+0h] [rbp-88h]
  __m128i v54; // [rsp+0h] [rbp-88h]
  __m128i v55; // [rsp+0h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-60h]
  unsigned __int64 v57; // [rsp+30h] [rbp-58h] BYREF
  char v58; // [rsp+38h] [rbp-50h]
  __m128i v59; // [rsp+40h] [rbp-48h] BYREF
  __int64 v60; // [rsp+50h] [rbp-38h]

  v8 = (unsigned int)a7;
  if ( (unsigned int)clang_Cursor_isNull(
                       (int)a1,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (__int128)_mm_loadu_si128((const __m128i *)&a7),
                       (__int128)_mm_loadu_si128((const __m128i *)&a8)) )
    goto LABEL_17;
  v48 = _mm_loadu_si128((const __m128i *)&a7);
  v13 = _mm_loadu_si128((const __m128i *)&a8);
  v18 = sub_63A2D0(
          (_DWORD)a1,
          a2,
          v9,
          v10,
          v11,
          v12,
          v48.m128i_i32[0],
          v48.m128i_i32[2],
          v13.m128i_i32[0],
          v13.m128i_i64[1]);
  if ( (unsigned int)(v8 - 200) <= 0x83 )
  {
    v50 = _mm_loadu_si128((const __m128i *)&a7);
    v23 = sub_63A2A0(
            (_DWORD)a1,
            a2,
            v14,
            v15,
            v16,
            v17,
            v50.m128i_i32[0],
            v50.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    if ( v23 && (*(_WORD *)v23 & 0x1FF) == 2 && !(_DWORD)a2 )
    {
      v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v23 + 4)), 224).m128i_u64[0];
      goto LABEL_41;
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v8 == 104 )
  {
    LODWORD(a7) = 104;
    v53 = _mm_loadu_si128((const __m128i *)&a7);
    v34 = sub_63A260(
            (_DWORD)a1,
            a2,
            v14,
            v15,
            v16,
            v17,
            v53.m128i_i32[0],
            v53.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    v35 = v34;
    if ( !v34 || (*(_WORD *)v34 & 0x1FF) != 0x22 )
      goto LABEL_42;
    if ( (*(_BYTE *)(v34 + 27) & 4) != 0 )
      goto LABEL_17;
    v36 = sub_8C9100(v34);
    v37 = 1;
    v59.m128i_i64[0] = v36;
    if ( (v36 & 3) != 1 )
      v37 = sub_C87220(&v59, a2, 1);
    if ( (unsigned int)a2 >= v37 )
      goto LABEL_17;
    v38 = (*(_BYTE *)(v35 + 27) >> 3) & 3;
    if ( v38 )
    {
      v56 = *(unsigned __int16 *)(v35 + 24);
      v47 = sub_8C9100(v35);
      v28 = _mm_cvtsi32_si128(sub_AC2210((unsigned int)a2, v47, v38 == 2, v35 + 48, v56, *(unsigned int *)(v35 + 36)));
    }
    else
    {
      v28 = _mm_cvtsi32_si128(*(_DWORD *)(v35 + 4LL * (unsigned int)a2 + 8LL * *(unsigned __int16 *)(v35 + 24) + 8 + 40));
    }
LABEL_27:
    v22 = _mm_shuffle_epi32(v28, 224).m128i_u64[0];
    goto LABEL_41;
  }
  if ( (unsigned int)(v8 - 16) <= 1 )
  {
    v51 = _mm_loadu_si128((const __m128i *)&a7);
    v25 = sub_63A250((_DWORD)a1, a2, v14, v15, v16, v17, v51.m128i_i32[0], v51.m128i_i64[1]);
    v26 = v25;
    if ( !v25 || (*(_BYTE *)(v25 + 28) & 0x7F) != 0x10 )
      goto LABEL_42;
    if ( (*(_BYTE *)(v25 + 29) & 2) != 0 )
      goto LABEL_17;
    v27 = 1;
    v59.m128i_i64[0] = *(_QWORD *)(v25 + 40);
    if ( (v59.m128i_i8[0] & 3) != 1 )
      v27 = sub_C87220(&v59, a2, 1);
    if ( (unsigned int)a2 >= v27 )
      goto LABEL_17;
    if ( ((*(_BYTE *)(v26 + 60) >> 2) & 3) != 0 )
      v28 = _mm_cvtsi32_si128(
              sub_AC26A0(
                (unsigned int)a2,
                *(_QWORD *)(v26 + 40),
                ((*(_BYTE *)(v26 + 60) >> 2) & 3) == 2,
                *(_QWORD *)(v26 + 96),
                *(unsigned int *)(v26 + 104),
                *(unsigned int *)(v26 + 108)));
    else
      v28 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v26 + 96)
                                        + 4LL * (unsigned int)a2
                                        + 8LL * *(unsigned int *)(v26 + 104)));
    goto LABEL_27;
  }
  if ( (_DWORD)v8 == 19 || (_DWORD)v8 == 12 )
  {
    if ( (_DWORD)a2 )
      goto LABEL_17;
    v52 = _mm_loadu_si128((const __m128i *)&a7);
    v29 = sub_63A250((_DWORD)a1, 0, v14, v15, v16, v17, v52.m128i_i32[0], v52.m128i_i64[1]);
    if ( v29 )
    {
      v30 = *(_BYTE *)(v29 + 28) & 0x7F;
      if ( (_BYTE)v30 == 21 )
      {
        v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v29 + 136)), 224).m128i_u64[0];
        goto LABEL_41;
      }
    }
    v54 = _mm_loadu_si128((const __m128i *)&a7);
    v39 = sub_63A250((_DWORD)a1, a2, v30, v31, v32, v33, v54.m128i_i32[0], v54.m128i_i64[1]);
    if ( !v39 )
      goto LABEL_43;
    v14 = *(_BYTE *)(v39 + 28) & 0x7F;
    if ( (_BYTE)v14 != 20 )
      goto LABEL_43;
    v28 = _mm_cvtsi32_si128(*(_DWORD *)(v39 + 96));
    goto LABEL_27;
  }
  if ( (unsigned int)v8 <= 0x1A )
  {
    if ( (unsigned int)v8 > 7 )
    {
      v40 = 102760704;
      if ( _bittest64(&v40, v8) )
      {
        if ( (_DWORD)a2 )
          goto LABEL_17;
        v55 = _mm_loadu_si128((const __m128i *)&a7);
        v41 = sub_63A250((_DWORD)a1, 0, v14, v15, v16, v17, v55.m128i_i32[0], v55.m128i_i64[1]);
        if ( !v41 || (*(_BYTE *)(v41 + 28) & 0x7Fu) - 32 > 5 )
          goto LABEL_17;
        v42 = *(_DWORD *)(v41 + 24);
        v43 = *(_QWORD *)(v41 + 40);
        v44 = *(_QWORD *)(v41 + 160);
        v59.m128i_i64[0] = v43;
        v59.m128i_i32[2] = v42;
        v60 = v44;
        v45 = sub_792B00(&v59);
        v46 = _mm_cvtsi32_si128(v59.m128i_u32[2]);
        v58 = 1;
        if ( !v45 )
          v45 = v59.m128i_u32[2];
        v57 = _mm_unpacklo_epi32(v46, _mm_cvtsi32_si128(v45)).m128i_u64[0];
LABEL_44:
        sub_602210(a1, *(_QWORD *)(v18 + 2152), *(_QWORD *)(v18 + 2160), (__int64)&v57);
        return a1;
      }
    }
LABEL_42:
    if ( !(_DWORD)a2 )
    {
LABEL_43:
      LODWORD(a7) = v8;
      clang_getCursorLocation(
        &v59,
        a2,
        v14,
        v15,
        v16,
        v17,
        (__int128)_mm_loadu_si128((const __m128i *)&a7),
        (__int128)_mm_loadu_si128((const __m128i *)&a8));
      v58 = 1;
      v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v60), 224).m128i_u64[0];
      goto LABEL_44;
    }
LABEL_17:
    clang_getNullRange(a1);
    return a1;
  }
  if ( (_DWORD)v8 != 600 )
    goto LABEL_42;
  if ( (_DWORD)a2 )
    goto LABEL_17;
  LODWORD(a7) = 600;
  v49 = _mm_loadu_si128((const __m128i *)&a7);
  v19 = sub_63A250((_DWORD)a1, 0, v14, v15, v16, v17, v49.m128i_i32[0], v49.m128i_i64[1]);
  if ( !v19 )
    goto LABEL_17;
  if ( (*(_BYTE *)(v19 + 28) & 0x7F) != 0x50 )
    goto LABEL_17;
  v20 = (unsigned int *)sub_785B40(v19);
  if ( !v21 )
    goto LABEL_17;
  v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v20), _mm_cvtsi32_si128(v20[v21 - 1])).m128i_u64[0];
LABEL_41:
  v59.m128i_i8[8] = 1;
  v59.m128i_i64[0] = v22;
  sub_602210(a1, *(_QWORD *)(v18 + 2152), *(_QWORD *)(v18 + 2160), (__int64)&v59);
  return a1;
}

