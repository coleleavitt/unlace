__m128i *__fastcall sub_568310(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8,
        __int128 a9,
        __int128 a10)
{
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128i si128; // xmm2
  unsigned int v23; // r12d
  unsigned int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // ebx
  __int64 v34; // r14
  __int64 v35; // rsi
  unsigned __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __m128i v40; // xmm5
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __m128i *v44; // rbx
  __m128i v46; // xmm5
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128i v51; // xmm7
  __m128i v52; // xmm6
  __m128i v53; // [rsp+20h] [rbp-C8h]
  __m128i v54; // [rsp+20h] [rbp-C8h]
  __m128i v55; // [rsp+20h] [rbp-C8h]
  __m128 v56; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v57; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-84h]
  unsigned int v59; // [rsp+68h] [rbp-80h]
  unsigned int v60; // [rsp+6Ch] [rbp-7Ch]
  __int64 v61; // [rsp+70h] [rbp-78h] BYREF
  __m128i *v62; // [rsp+78h] [rbp-70h]
  __int64 v63; // [rsp+80h] [rbp-68h]
  unsigned int v64; // [rsp+88h] [rbp-60h]
  unsigned int v65; // [rsp+8Ch] [rbp-5Ch]
  __m128i v66; // [rsp+90h] [rbp-58h] BYREF
  __m128i v67[4]; // [rsp+A0h] [rbp-48h] BYREF

  v61 = a8.m128i_i64[1];
  v10 = (__int64 *)a8.m128i_i64[0];
  v57 = _mm_loadu_si128(&a7);
  v65 = sub_565DC0(a1, a2, a3, a4, a5, a6, _mm_loadu_si128((const __m128i *)&a9).m128i_u32[0]);
  v60 = sub_566CC0(
          a1,
          a2,
          v11,
          v12,
          v13,
          v14,
          (__int128)_mm_loadu_si128((const __m128i *)&a9),
          (__int128)_mm_loadu_si128((const __m128i *)&a10));
  v17 = _mm_load_si128(&v57);
  v62 = (__m128i *)a1;
  v56 = _mm_loadh_ps((const double *)&v61);
LABEL_2:
  v18 = *v10;
  if ( (*v10 & 1) == 0 && *(_DWORD *)(v18 + 36) )
  {
    v19 = *(unsigned __int16 *)(v18 + 66);
    v63 = 0;
    v20 = *(_QWORD *)(v61 + 8);
    if ( (_DWORD)v19 )
    {
      v21 = (unsigned int)v19 * *(unsigned __int16 *)(v20 + 36);
      v19 = *(_QWORD *)(v20 + 128);
      v63 = v19 + 2 * v21;
    }
    si128 = _mm_load_si128((const __m128i *)&v56);
    v57.m128i_i64[0] = v18;
    a7 = v17;
    v23 = 0;
    a8 = si128;
    v24 = sub_565DC0(v18, a2, v19, v20, v15, v16, v17.m128i_u32[0]);
    v29 = sub_565DD0(v18, a2, v25, v26, v27, v28, (__int128)_mm_loadu_si128(&a7));
    v33 = v65;
    v34 = v57.m128i_i64[0];
    v64 = 0;
    v35 = HIDWORD(v29);
    v59 = v29;
    v36 = HIDWORD(v29);
    while ( 1 )
    {
      v42 = *(unsigned int *)(v34 + 36);
      if ( (_DWORD)v42 == v23 )
        goto LABEL_29;
      v10 = (__int64 *)(v34 + 8 * (v23 - v42));
      v43 = *v10;
      v56 = _mm_loadh_ps((const double *)&v61);
      if ( (v43 & 1) != 0 )
        v37 = (v43 >> 3) & 1;
      else
        LOBYTE(v37) = (*(_BYTE *)(v43 + 44) & 4) != 0;
      v58 = 0;
      if ( !(_BYTE)v37 )
      {
        v30 = v63;
        if ( v63 )
        {
          v30 = *(unsigned __int16 *)(v63 + 2LL * v64);
          v58 = *(unsigned __int16 *)(v63 + 2LL * v64);
        }
        ++v64;
      }
      if ( v23 )
      {
        if ( (v43 & 1) != 0 )
        {
          v18 = BYTE6(v43);
          v35 = (v43 >> 40) & 0xF;
          v38 = BYTE4(v43);
        }
        else
        {
          v18 = *(unsigned int *)(v43 + 4);
          v35 = *(unsigned int *)(v43 + 8);
          v38 = *(_DWORD *)(v43 + 12);
        }
        v24 += v18;
        LODWORD(v36) = v38 + v36;
        if ( (_DWORD)v35 )
        {
          v59 += v35;
          LODWORD(v36) = v38;
        }
      }
      v57 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v59)),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v58)));
      if ( (v43 & 1) != 0 )
        break;
      v35 = *(unsigned int *)(v43 + 20);
      v39 = *(unsigned int *)(v43 + 24);
      v24 += *(_DWORD *)(v43 + 16);
      if ( !(_DWORD)v35 )
        goto LABEL_19;
      v59 += v35;
      LODWORD(v36) = v39;
LABEL_20:
      v40 = _mm_load_si128((const __m128i *)&v56);
      a7 = _mm_load_si128(&v57);
      a8 = v40;
      if ( v33 < (unsigned int)sub_565DC0(v18, v35, v30, v39, v31, v32, a7.m128i_u32[0]) )
        goto LABEL_29;
      if ( (__int64 *)a10 == v10 )
      {
        v44 = v62;
        v46 = _mm_load_si128((const __m128i *)&v56);
        *v62 = _mm_load_si128(&v57);
        v44[1] = v46;
        return v44;
      }
      if ( v33 != v60 )
      {
        if ( v24 < v60 )
          goto LABEL_25;
LABEL_24:
        v53 = _mm_loadu_si128(&a7);
        if ( (unsigned int)sub_5682F0(
                             v18,
                             v35,
                             v30,
                             v41,
                             v31,
                             v32,
                             v53.m128i_i32[0],
                             v53.m128i_i32[2],
                             (__int64 *)_mm_loadu_si128(&a8).m128i_i64[0]) )
        {
          a2 = (__int64)v10;
          v17 = _mm_load_si128(&v57);
          if ( !(unsigned __int8)sub_55FE20(v58, v10) )
            goto LABEL_2;
          v44 = v62;
          goto LABEL_44;
        }
        goto LABEL_25;
      }
      if ( v24 >= v33 )
      {
        v54 = _mm_loadu_si128(&a7);
        if ( (unsigned int)sub_5682F0(
                             v18,
                             v35,
                             v30,
                             v41,
                             v31,
                             v32,
                             v54.m128i_i32[0],
                             v54.m128i_i32[2],
                             (__int64 *)_mm_loadu_si128(&a8).m128i_i64[0]) )
        {
          v18 = (__int64)&v66;
          sub_568310(
            (unsigned int)&v66,
            v35,
            v30,
            v41,
            v31,
            v32,
            (__int128)_mm_loadu_si128(&a7),
            (__int128)_mm_loadu_si128(&a8),
            (__int128)_mm_loadu_si128((const __m128i *)&a9),
            (__int128)_mm_loadu_si128((const __m128i *)&a10));
          v55 = _mm_load_si128(&v66);
          if ( !sub_567740(
                  (__int64)&v66,
                  v35,
                  v47,
                  v48,
                  v49,
                  v50,
                  v55.m128i_i32[0],
                  v55.m128i_i32[2],
                  _mm_load_si128(v67).m128i_i64[0]) )
          {
            v17 = _mm_load_si128(&v57);
            v44 = v62;
            if ( !(unsigned __int8)sub_55FE20(v58, v10) )
            {
              v51 = _mm_load_si128(v67);
              *v44 = _mm_load_si128(&v66);
              v44[1] = v51;
              return v44;
            }
LABEL_44:
            v52 = _mm_load_si128((const __m128i *)&v56);
            *v44 = v17;
            v44[1] = v52;
            return v44;
          }
        }
        if ( v60 != v24 )
          goto LABEL_24;
      }
LABEL_25:
      ++v23;
    }
    v39 = HIBYTE(v43);
    v24 += HIBYTE(v43);
LABEL_19:
    LODWORD(v36) = v39 + v36;
    goto LABEL_20;
  }
LABEL_29:
  v44 = v62;
  *v62 = 0;
  v44[1] = 0;
  return v44;
}
