__int64 __fastcall sub_2CB300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  const __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // r15
  __m128i v27; // xmm0
  char v28; // al
  __int64 addr; // r8
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int16 v33; // dx
  __m128i v34; // xmm0
  __m128 v35; // xmm0
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // r12
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // [rsp+0h] [rbp-188h]
  unsigned __int64 v46; // [rsp+0h] [rbp-188h]
  __int64 v47; // [rsp+0h] [rbp-188h]
  __int64 v48; // [rsp+8h] [rbp-180h]
  unsigned int v49; // [rsp+18h] [rbp-170h] BYREF
  unsigned int v50; // [rsp+1Ch] [rbp-16Ch] BYREF
  __int128 v51; // [rsp+20h] [rbp-168h] BYREF
  _UNKNOWN **v52; // [rsp+30h] [rbp-158h] BYREF
  int v53; // [rsp+38h] [rbp-150h]
  __m128i v54; // [rsp+40h] [rbp-148h]
  __m128i v55; // [rsp+50h] [rbp-138h] BYREF
  __m128i v56; // [rsp+60h] [rbp-128h] BYREF
  __int64 v57; // [rsp+70h] [rbp-118h]
  __m128i v58[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-E8h]
  _UNKNOWN ***v60; // [rsp+A8h] [rbp-E0h]
  char v61[16]; // [rsp+C0h] [rbp-C8h] BYREF
  char v62[96]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+130h] [rbp-58h]
  unsigned __int64 v64; // [rsp+148h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v12 = a2;
  v13 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v14 = *(_QWORD *)(v13 + 40);
  v15 = *(__int16 *)(v13 + 28);
  *(_QWORD *)&v51 = -1;
  *((_QWORD *)&v51 + 1) = -1;
  v16 = sub_2CABB0(a1, &v51, v14, v15, 1, 0, a5);
  v17 = v51;
  v18 = v16;
  v45 = HIDWORD(v51);
  v21 = (const __m128i *)sub_1EA680(a1 + 384, (__int64)&v51, v19, v20, a5);
  v26 = v21[2].m128i_i64[1];
  v55 = _mm_loadu_si128(v21);
  v27 = _mm_loadu_si128(v21 + 1);
  v56 = v27;
  v57 = v21[2].m128i_i64[0];
  if ( (unsigned int)a2 > 1 )
  {
    if ( (unsigned int)(a2 - 2) <= 1 )
    {
      if ( (_DWORD)a2 == 2 )
      {
        v47 = *(_QWORD *)(v26 + 24);
        v40 = is_mapped(v47);
        addr = v47;
        if ( !v40 )
          addr = next_addr(v47);
      }
      else
      {
        v48 = *(_QWORD *)(v26 + 24)
            + *(_DWORD *)(*(_QWORD *)(a1 + 728) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 728) + 24LL);
        v28 = is_mapped(v48 - 1);
        addr = v48 - 1;
        if ( !v28 )
          addr = prev_addr(v48);
      }
LABEL_6:
      if ( addr != -1 )
      {
        if ( addr != v18 )
          goto LABEL_8;
LABEL_24:
        sub_2004D0(a1, v55.m128i_i8, 0, v23, *(double *)v27.m128i_i64, a6, a7, a8, v24, v25, a11, a12);
        return 1;
      }
      return 0;
    }
    if ( under_debugger )
      BUG();
    interr(40580, &v51, v22, v23, *(double *)v27.m128i_i64);
    goto LABEL_50;
  }
  if ( v18 != -1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( v17 != 1 )
      {
        if ( v17 != 2 )
          goto LABEL_33;
        goto LABEL_51;
      }
LABEL_50:
      v43 = sub_2C9780((_DWORD *)(*(_QWORD *)(a1 + 728) + 16LL), v18);
      v23 = v45;
      if ( v43 - 1 > (int)v45 )
        goto LABEL_33;
LABEL_51:
      v44 = next_addr(v18);
      addr = v44;
      if ( v18 != v44 )
        goto LABEL_6;
      if ( v44 == -1 )
        return 0;
LABEL_33:
      ++v56.m128i_i16[6];
      goto LABEL_24;
    }
    if ( v17 == 1 )
    {
      if ( v45 )
        goto LABEL_23;
    }
    else if ( v17 != 2 )
    {
      goto LABEL_23;
    }
    v39 = prev_addr(v18);
    addr = v39;
    if ( v39 != v18 )
      goto LABEL_6;
    if ( v39 == -1 )
      return 0;
LABEL_23:
    --v56.m128i_i16[6];
    goto LABEL_24;
  }
  v41 = *(_QWORD *)(v26 + 24);
  if ( (unsigned __int8)is_mapped(v41) )
    v41 += *(_DWORD *)(*(_QWORD *)(a1 + 728) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 728) + 24LL) - 1;
  if ( (_DWORD)a2 )
    v42 = ((__int64 (__fastcall *)(__int64))next_addr)(v41);
  else
    v42 = prev_addr(v41);
  addr = v42;
  if ( v42 != -1 )
  {
LABEL_8:
    v46 = addr;
    v30 = *(_QWORD *)(a1 + 728);
    v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)addr, (__m128i)(unsigned __int64)addr);
    v53 = 0;
    v52 = &hexplace_t___vtable;
    v54 = v31;
    hexplace_t__adjust(&v52, v30);
    v32 = *(_QWORD *)(a1 + 728);
    v54.m128i_i64[0] = v46;
    if ( (unsigned __int8)sub_2CA720(
                            (_DWORD *)(v32 + 16),
                            &v49,
                            &v50,
                            (__int64)&v52,
                            v46,
                            v17,
                            *(double *)v31.m128i_i64,
                            1) )
    {
      v33 = v49;
      if ( v17 != 2 )
      {
        if ( v12 && v12 != 3 )
        {
          v56.m128i_i16[6] = v49;
          if ( *(_QWORD *)(v26 + 24) == v54.m128i_i64[1] )
            goto LABEL_17;
          goto LABEL_13;
        }
        v33 = v50 - 2;
      }
      v56.m128i_i16[6] = v33;
      if ( *(_QWORD *)(v26 + 24) != v54.m128i_i64[1] )
      {
        if ( v12 )
        {
LABEL_13:
          sub_283F90((__int64)v58, *(_QWORD *)(a1 + 888));
          if ( v12 == 1 && v56.m128i_i16[7] < v63 - word_8BCE1C )
            ++v56.m128i_i16[7];
          goto LABEL_16;
        }
        if ( v56.m128i_i16[7] <= word_8BCE1C )
        {
          sub_283F90((__int64)v58, *(_QWORD *)(a1 + 888));
LABEL_16:
          QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v62);
          QT::QFont::~QFont((QT::QFont *)v61);
          goto LABEL_17;
        }
        --v56.m128i_i16[7];
      }
LABEL_17:
      v34 = _mm_load_si128(&v55);
      v60 = &v52;
      v58[0] = v34;
      v35 = (__m128)_mm_load_si128(&v56);
      v59 = v57;
      v58[1] = (__m128i)v35;
      v60 = (_UNKNOWN ***)hexplace_t__clone(&v52);
      sub_1FF700(a1 + 384, v58, v35, a6, a7, a8, v36, v37, a11, a12);
      if ( v60 )
        qfree(v60, v58[0].m128i_i8);
      return 1;
    }
    return 0;
  }
  return 0;
}
