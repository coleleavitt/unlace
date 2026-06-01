__int64 __fastcall sub_217D6A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __m128i *v8; // rbx
  __m128i *v9; // rsi
  __m128i *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rbx
  char v16; // dl
  __m128i *v17; // rcx
  _BYTE *v18; // rdx
  _BYTE *v19; // rsi
  __m128i v20; // xmm1
  unsigned __int64 v21; // rbx
  size_t v22; // r12
  unsigned __int64 v23; // rax
  char *v24; // rcx
  char *v25; // rax
  __m128i v26; // xmm0
  bool v27; // zf
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __m128i v32; // xmm7
  __m128i v33; // xmm3
  __m128i v34; // xmm7
  __m128i v35; // xmm5
  __m128i v36; // [rsp+0h] [rbp-218h] BYREF
  unsigned __int64 v37; // [rsp+10h] [rbp-208h] BYREF
  __int64 v38; // [rsp+18h] [rbp-200h] BYREF
  __m128i v39[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __int16 v40; // [rsp+40h] [rbp-1D8h]
  __m128i v41[2]; // [rsp+50h] [rbp-1C8h] BYREF
  __int16 v42; // [rsp+70h] [rbp-1A8h]
  __m128i v43; // [rsp+80h] [rbp-198h] BYREF
  __m128i v44; // [rsp+90h] [rbp-188h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-178h]
  __m128i v46; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v47; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-148h]
  __m128i v49; // [rsp+E0h] [rbp-138h] BYREF
  __m128i v50; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v51; // [rsp+100h] [rbp-118h]
  __m128i v52; // [rsp+110h] [rbp-108h] BYREF
  __m128i v53; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+130h] [rbp-E8h]
  __m128i v55; // [rsp+140h] [rbp-D8h] BYREF
  __m128i v56; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+160h] [rbp-B8h]
  __m128i v58; // [rsp+170h] [rbp-A8h] BYREF
  __m128i v59; // [rsp+180h] [rbp-98h] BYREF
  __int64 v60; // [rsp+190h] [rbp-88h]
  __m128i v61; // [rsp+1A0h] [rbp-78h] BYREF
  void *src[2]; // [rsp+1B0h] [rbp-68h]
  __int64 v63; // [rsp+1C0h] [rbp-58h]
  void *ptr[3]; // [rsp+1C8h] [rbp-50h] BYREF
  char v65; // [rsp+1E0h] [rbp-38h] BYREF

  if ( a3 <= 0x33 )
  {
    v58.m128i_i64[0] = (__int64)")";
    v8 = &v43;
    v52.m128i_i64[0] = (__int64)&v38;
    v46.m128i_i64[0] = (__int64)") is smaller than an ELF header (";
    LOWORD(v60) = 259;
    v9 = v41;
    LOWORD(v54) = 267;
    v37 = a3;
    v39[0].m128i_i64[0] = (__int64)&v37;
    v41[0].m128i_i64[0] = (__int64)"invalid buffer: the size (";
    v38 = 52;
    LOWORD(v48) = 259;
    v40 = 267;
    v42 = 259;
    sub_A41580(&v43, v41, v39, a4, 259, 267);
    v11 = v45;
    if ( !(_BYTE)v45 || (v16 = v48) == 0 )
    {
      v10 = (__m128i *)&qword_100;
      LOWORD(v51) = 256;
      goto LABEL_4;
    }
    if ( (_BYTE)v45 == 1 )
    {
      v11 = v48;
      v28 = _mm_load_si128(&v46);
      v29 = _mm_load_si128(&v47);
      v51 = v48;
      v49 = v28;
      v50 = v29;
    }
    else
    {
      if ( (_BYTE)v48 != 1 )
      {
        if ( BYTE1(v45) == 1 )
        {
          v7 = v43.m128i_i64[1];
          v8 = (__m128i *)v43.m128i_i64[0];
        }
        else
        {
          v11 = 2;
        }
        if ( BYTE1(v48) == 1 )
        {
          v6 = v46.m128i_i64[1];
          v10 = (__m128i *)v46.m128i_i64[0];
        }
        else
        {
          v10 = &v46;
          v16 = 2;
        }
        BYTE1(v51) = v16;
        v12 = (unsigned __int8)v54;
        v49.m128i_i64[0] = (__int64)v8;
        v49.m128i_i64[1] = v7;
        v50.m128i_i64[0] = (__int64)v10;
        v50.m128i_i64[1] = v6;
        LOBYTE(v51) = v11;
        if ( (_BYTE)v54 )
          goto LABEL_16;
        goto LABEL_4;
      }
      v11 = v45;
      v33 = _mm_load_si128(&v44);
      v49 = _mm_load_si128(&v43);
      v50 = v33;
      v51 = v45;
    }
    v12 = (unsigned __int8)v54;
    if ( (_BYTE)v54 )
    {
      if ( v11 == 1 )
      {
        v11 = v54;
        v30 = _mm_load_si128(&v52);
        v31 = _mm_load_si128(&v53);
        v57 = v54;
        v55 = v30;
        v56 = v31;
LABEL_44:
        if ( v11 )
        {
          v12 = (unsigned __int8)v60;
          if ( (_BYTE)v60 )
          {
            if ( v11 != 1 )
            {
LABEL_22:
              if ( (_BYTE)v12 == 1 )
              {
                v34 = _mm_load_si128(&v56);
                v61 = _mm_load_si128(&v55);
                *(__m128i *)src = v34;
                v63 = v57;
              }
              else
              {
                if ( BYTE1(v57) == 1 )
                {
                  v4 = v55.m128i_i64[1];
                  v9 = (__m128i *)v55.m128i_i64[0];
                }
                else
                {
                  v9 = &v55;
                  v11 = 2;
                }
                if ( BYTE1(v60) == 1 )
                {
                  v36.m128i_i64[1] = v58.m128i_i64[1];
                  v17 = (__m128i *)v58.m128i_i64[0];
                }
                else
                {
                  v17 = &v58;
                  v12 = 2;
                }
                src[0] = v17;
                v10 = (__m128i *)v36.m128i_i64[1];
                v61.m128i_i64[0] = (__int64)v9;
                v61.m128i_i64[1] = v4;
                src[1] = (void *)v36.m128i_i64[1];
                LOBYTE(v63) = v11;
                BYTE1(v63) = v12;
              }
              goto LABEL_6;
            }
            v32 = _mm_load_si128(&v59);
            v61 = _mm_load_si128(&v58);
            *(__m128i *)src = v32;
            v63 = v60;
LABEL_6:
            v13 = sub_2195B10(&v43, v9, v12, v10);
            v14 = operator new(0x40u);
            sub_2220590(v14, &v61, 3, v13);
            *(_BYTE *)(a1 + 64) |= 1u;
            *(_QWORD *)a1 = v14;
            return a1;
          }
        }
LABEL_5:
        LOWORD(v63) = 256;
        goto LABEL_6;
      }
LABEL_16:
      if ( (_BYTE)v12 != 1 )
      {
        if ( BYTE1(v51) == 1 )
        {
          v36.m128i_i64[0] = v49.m128i_i64[1];
          v9 = (__m128i *)v49.m128i_i64[0];
        }
        else
        {
          v9 = &v49;
          v11 = 2;
        }
        if ( BYTE1(v54) == 1 )
        {
          v5 = v52.m128i_i64[1];
          v10 = (__m128i *)v52.m128i_i64[0];
        }
        else
        {
          v10 = &v52;
          LOBYTE(v12) = 2;
        }
        BYTE1(v57) = v12;
        v12 = (unsigned __int8)v60;
        v55.m128i_i64[0] = (__int64)v9;
        v55.m128i_i64[1] = v36.m128i_i64[0];
        v56.m128i_i64[0] = (__int64)v10;
        v56.m128i_i64[1] = v5;
        LOBYTE(v57) = v11;
        if ( (_BYTE)v60 )
          goto LABEL_22;
        goto LABEL_5;
      }
      v11 = v51;
      v35 = _mm_load_si128(&v50);
      v55 = _mm_load_si128(&v49);
      v56 = v35;
      v57 = v51;
      goto LABEL_44;
    }
LABEL_4:
    v12 = 256;
    LOWORD(v57) = 256;
    goto LABEL_5;
  }
  sub_216E0E0(&v61, a2, a3);
  v18 = src[1];
  v19 = src[0];
  v20 = _mm_load_si128(&v61);
  *(_BYTE *)(a1 + 64) &= ~1u;
  *(_QWORD *)(a1 + 16) = 0;
  v21 = v18 - v19;
  *(__m128i *)a1 = v20;
  *(_QWORD *)(a1 + 24) = 0;
  v22 = v18 - v19;
  *(_QWORD *)(a1 + 32) = 0;
  v23 = 0xCCCCCCCCCCCCCCCDLL * ((v18 - v19) >> 3);
  v24 = nullptr;
  if ( v23 )
  {
    if ( v23 > 0x666666666666666LL )
      std::__throw_bad_alloc();
    v25 = (char *)operator new(v21);
    v18 = src[1];
    v19 = src[0];
    v24 = v25;
    v22 = (char *)src[1] - (char *)src[0];
  }
  v36.m128i_i64[0] = (__int64)v24;
  v26 = _mm_loadl_epi64(&v36);
  *(_QWORD *)(a1 + 32) = &v24[v21];
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v26, v26);
  if ( v19 != v18 )
    v24 = (char *)memmove(v24, v19, v22);
  v27 = ptr[1] == nullptr;
  *(_QWORD *)(a1 + 24) = &v24[v22];
  *(_QWORD *)(a1 + 40) = a1 + 64;
  *(_OWORD *)(a1 + 48) = 0;
  if ( !v27 )
    sub_9C3DB0((void **)(a1 + 40), (const void **)ptr);
  if ( ptr[0] != &v65 )
    free(ptr[0]);
  if ( src[0] )
    operator delete(src[0]);
  return a1;
}
