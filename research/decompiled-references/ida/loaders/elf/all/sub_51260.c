unsigned __int64 __fastcall sub_51260(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        int a9)
{
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdi
  __m128i v15; // xmm1
  unsigned __int64 v16; // r8
  __int64 *v17; // rdi
  __m128i v18; // xmm0
  __int16 v19; // dx
  int v20; // r15d
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r12
  const __m128i *v24; // rbp
  int i; // r12d
  unsigned __int64 v26; // rdx
  size_t v27; // r9
  __int64 v28; // r8
  size_t v29; // r10
  __int64 v30; // rsi
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  size_t v33; // r10
  __int64 v34; // r9
  size_t v35; // r11
  __int64 v36; // rsi
  void *v37; // rdi
  unsigned __int64 v38; // rdx
  size_t v39; // r9
  __int64 v40; // r8
  size_t v41; // r10
  __int64 v42; // rsi
  const char *v43; // rdi
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rdi
  _DWORD *v50; // rax
  unsigned __int64 v51; // r12
  size_t v52; // r9
  __int64 v53; // r8
  size_t v54; // r10
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+0h] [rbp-1E8h]
  int v58; // [rsp+0h] [rbp-1E8h]
  char v59; // [rsp+8h] [rbp-1E0h]
  size_t v60; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v61; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v63; // [rsp+10h] [rbp-1D8h]
  size_t v64; // [rsp+10h] [rbp-1D8h]
  size_t v65; // [rsp+18h] [rbp-1D0h]
  __int64 v66; // [rsp+18h] [rbp-1D0h]
  size_t v67; // [rsp+18h] [rbp-1D0h]
  __int64 v68; // [rsp+18h] [rbp-1D0h]
  size_t v69; // [rsp+20h] [rbp-1C8h]
  size_t v70; // [rsp+20h] [rbp-1C8h]
  size_t v71; // [rsp+20h] [rbp-1C8h]
  __int64 v72; // [rsp+28h] [rbp-1C0h]
  __int64 v73; // [rsp+28h] [rbp-1C0h]
  __int64 v74; // [rsp+28h] [rbp-1C0h]
  size_t v75; // [rsp+30h] [rbp-1B8h]
  __int16 v81; // [rsp+6Eh] [rbp-17Ah] BYREF
  __m128i v82; // [rsp+70h] [rbp-178h] BYREF
  __int64 v83; // [rsp+80h] [rbp-168h] BYREF
  __int128 v84; // [rsp+88h] [rbp-160h]
  const char *v85; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v86; // [rsp+A8h] [rbp-140h]
  void *src; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v88; // [rsp+C8h] [rbp-120h]
  __m128i v89[12]; // [rsp+E0h] [rbp-108h] BYREF
  unsigned __int64 v90; // [rsp+1A8h] [rbp-40h]

  v10 = a3->m128i_i64[0];
  v11 = 0;
  v90 = __readfsqword(0x28u);
  v12 = 0;
  v84 = 0;
  v13 = -1;
  v83 = 0;
  while ( v10 < a3->m128i_i64[1] )
  {
    if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v12 + 1) )
    {
      v83 = qvector_reserve(&v83, v11, v12 + 1, 216);
      v11 = v83;
      v13 = -1;
      v12 = v84;
    }
    v14 = v11 + 216 * v12;
    *(_OWORD *)v14 = 0;
    *(_OWORD *)(v14 + 56) = v13;
    *(_OWORD *)(v14 + 72) = v13;
    *(_OWORD *)(v14 + 88) = v13;
    *(_QWORD *)(v14 + 32) = 0;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0;
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 104) = v13;
    *(_QWORD *)(v14 + 184) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 192) = 0;
    *(_OWORD *)(v14 + 120) = v13;
    *(_OWORD *)(v14 + 136) = v13;
    *(_OWORD *)(v14 + 152) = v13;
    *(_OWORD *)(v14 + 168) = v13;
    *(_OWORD *)(v14 + 200) = 0;
    v15 = _mm_loadu_si128(a3);
    *(_QWORD *)&v84 = v84 + 1;
    *(__m128i *)v14 = v15;
    *(__m128i *)(v14 + 16) = _mm_loadu_si128(a3 + 1);
    *(__m128i *)(v14 + 32) = _mm_loadu_si128(a3 + 2);
    *(__m128i *)(v14 + 48) = _mm_loadu_si128(a3 + 3);
    *(__m128i *)(v14 + 64) = _mm_loadu_si128(a3 + 4);
    *(__m128i *)(v14 + 80) = _mm_loadu_si128(a3 + 5);
    *(__m128i *)(v14 + 96) = _mm_loadu_si128(a3 + 6);
    *(__m128i *)(v14 + 112) = _mm_loadu_si128(a3 + 7);
    *(__m128i *)(v14 + 128) = _mm_loadu_si128(a3 + 8);
    *(__m128i *)(v14 + 144) = _mm_loadu_si128(a3 + 9);
    *(__m128i *)(v14 + 160) = _mm_loadu_si128(a3 + 10);
    a8 = _mm_loadu_si128(a3 + 11);
    *(_QWORD *)(v14 + 8) = v10 + 0x4000000;
    *(_QWORD *)v14 = v10;
    *(__m128i *)(v14 + 176) = a8;
    v16 = a3->m128i_u64[1];
    if ( v10 + 0x4000000 <= v16 )
      v16 = v10 + 0x4000000;
    v17 = (__int64 *)(v14 + 192);
    *(v17 - 23) = v16;
    sub_2B240(v17, (__int64)"chunk %zu: %a-%a  ", (_QWORD)v84, v10);
    v12 = v84;
    v11 = v83;
    v10 += 0x4000000LL;
    v13 = -1;
  }
  v18.m128i_i64[0] = 0;
  v85 = nullptr;
  v81 = 0;
  v86 = 0;
  if ( !v12 )
    goto LABEL_56;
  v19 = 0;
  v20 = 1;
  while ( 1 )
  {
    v24 = (const __m128i *)(v11 + 216LL * (v20 - 1));
    if ( !v19 )
    {
      v59 = 0;
      v58 = 0;
      v89[0] = _mm_loadu_si128(v24);
      v89[1] = _mm_loadu_si128(v24 + 1);
      v89[2] = _mm_loadu_si128(v24 + 2);
      v89[3] = _mm_loadu_si128(v24 + 3);
      v89[4] = _mm_loadu_si128(v24 + 4);
      v89[5] = _mm_loadu_si128(v24 + 5);
      v89[6] = _mm_loadu_si128(v24 + 6);
      v89[7] = _mm_loadu_si128(v24 + 7);
      v89[8] = _mm_loadu_si128(v24 + 8);
      v89[9] = _mm_loadu_si128(v24 + 9);
      v89[10] = _mm_loadu_si128(v24 + 10);
      v18 = _mm_loadu_si128(v24 + 11);
      v89[11] = v18;
      v82 = *v24;
      while ( 1 )
      {
        sub_2B240(
          (__int64 *)&v85,
          (__int64)"STARTITEM 0\n"
                   "BUTTON YES Load this chunk\n"
                   "BUTTON NO Skip this chunk\n"
                   "BUTTON CANCEL Skip this segment\n"
                   "HELP\n"
                   "This form allows the loading of huge segments in chunks of max %dMB\n"
                   "'Load this chunk' will load the current chunk\n"
                   "'Skip this chunk' will skip the current chunk\n"
                   "'Load all chunks' will load all remaning chunks\n"
                   "'Skip all segment' will skip all remaining chunks\n"
                   "ENDHELP\n"
                   "Segment %a .. %a is too big\n"
                   "Please choose the parts to load\n"
                   "CURRENT CHUNK: %d\n",
          64,
          *(double *)v18.m128i_i64,
          *(double *)a8.m128i_i64,
          a3->m128i_i64[0]);
        if ( v58 )
          break;
        if ( v59 )
          goto LABEL_77;
LABEL_19:
        for ( i = 1; (unsigned __int64)v84 >= i; ++i )
        {
          v31 = v83 + 216LL * (i - 1);
          v32 = *(_QWORD *)(v31 + 200);
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v32 != 1 )
            {
              v34 = v86;
              v35 = v32 - 1;
              if ( (_QWORD)v86 )
              {
                v34 = v86 - 1;
                v35 = v33 + v86 - 1;
                v32 += v86 - 1;
              }
              v36 = (__int64)v85;
              if ( *((_QWORD *)&v86 + 1) < v32 )
              {
                v75 = v35;
                v73 = v34;
                v70 = v33;
                v66 = v83 + 216LL * (i - 1);
                v62 = v32;
                v85 = (const char *)qvector_reserve(&v85, v85, v32, 1);
                v35 = v75;
                v36 = (__int64)v85;
                v34 = v73;
                v33 = v70;
                v31 = v66;
                v32 = v62;
              }
              *(_QWORD *)&v86 = v32;
              *(_BYTE *)(v36 + v35) = 0;
              memcpy((void *)&v85[v34], *(const void **)(v31 + 192), v33);
            }
          }
          if ( v20 == i )
          {
            v88 = 0;
            src = nullptr;
            src = (void *)qvector_reserve(&src, 0, 11, 1);
            *(_QWORD *)&v88 = 11;
            strcpy((char *)src, " *current*");
            v37 = src;
            v38 = v88;
            if ( (_QWORD)v88 )
            {
              v39 = v88 - 1;
              if ( (_QWORD)v88 != 1 )
              {
                v40 = v86;
                v41 = v88 - 1;
                if ( (_QWORD)v86 )
                {
                  v40 = v86 - 1;
                  v41 = v39 + v86 - 1;
                  v38 = v88 + v86 - 1;
                }
                v42 = (__int64)v85;
                if ( *((_QWORD *)&v86 + 1) < v38 )
                {
                  v74 = v40;
                  v71 = v88 - 1;
                  v67 = v41;
                  v63 = v38;
                  v85 = (const char *)qvector_reserve(&v85, v85, v38, 1);
                  v40 = v74;
                  v42 = (__int64)v85;
                  v39 = v71;
                  v41 = v67;
                  v38 = v63;
                }
                *(_QWORD *)&v86 = v38;
                *(_BYTE *)(v42 + v41) = 0;
                memcpy((void *)&v85[v40], src, v39);
                v37 = src;
              }
            }
            if ( v37 )
            {
              *(_QWORD *)&v88 = 0;
              qfree(v37);
            }
          }
          v88 = 0;
          src = nullptr;
          src = (void *)qvector_reserve(&src, 0, 2, 1);
          *(_QWORD *)&v88 = 2;
          *(_BYTE *)src = 10;
          *((_BYTE *)src + 1) = 0;
          v26 = v88;
          if ( (_QWORD)v88 )
          {
            v27 = v88 - 1;
            if ( (_QWORD)v88 != 1 )
            {
              v28 = v86;
              v29 = v88 - 1;
              if ( (_QWORD)v86 )
              {
                v28 = v86 - 1;
                v29 = v27 + v86 - 1;
                v26 = v88 + v86 - 1;
              }
              v30 = (__int64)v85;
              if ( *((_QWORD *)&v86 + 1) < v26 )
              {
                v72 = v28;
                v69 = v88 - 1;
                v65 = v29;
                v61 = v26;
                v85 = (const char *)qvector_reserve(&v85, v85, v26, 1);
                v28 = v72;
                v30 = (__int64)v85;
                v27 = v69;
                v29 = v65;
                v26 = v61;
              }
              *(_QWORD *)&v86 = v26;
              *(_BYTE *)(v30 + v29) = 0;
              memcpy((void *)&v85[v28], src, v27);
            }
          }
          if ( src )
          {
            *(_QWORD *)&v88 = 0;
            qfree(src);
          }
        }
        sub_2BDC0((__int64 *)&v85, (__int64)"\n<Chunk %d Start:M::18::><Chunk End:M::18::><Load all chunks:C>>\n", v20);
        v43 = &s1;
        if ( (_QWORD)v86 )
          v43 = v85;
        v44 = sub_342D0((__int64)v43, &v82, &v82.m128i_u64[1], &v81);
        v18 = _mm_loadl_epi64(&v82);
        a8 = _mm_loadl_epi64((const __m128i *)&v82.m128i_u64[1]);
        v89[0] = _mm_unpacklo_epi64(v18, a8);
        switch ( v44 )
        {
          case 0:
            goto LABEL_13;
          case 1:
            if ( v18.m128i_i64[0] >= (unsigned __int64)a8.m128i_i64[0] )
            {
              v58 = 4;
            }
            else if ( a8.m128i_i64[0] - v18.m128i_i64[0] > 0x4000000uLL )
            {
              v58 = 1;
            }
            else
            {
              v56 = *(_QWORD *)(a4 + 16);
              if ( v18.m128i_i64[0] < v56 )
              {
                v58 = 2;
              }
              else
              {
                if ( (*(_QWORD *)(a2 + 456) & (*(_QWORD *)(a4 + 40) + v56)) >= a8.m128i_i64[0] )
                {
                  if ( (unsigned __int8)sub_42F60(a1, v89, a6, a5, a9) && (*(_BYTE *)(a1 + 521) & 8) == 0 )
                    sub_496A0(
                      (__int64 *)a1,
                      a2,
                      (unsigned int)(*(_DWORD *)(a4 + 8) + v89[0].m128i_i32[0] - *(_DWORD *)(a4 + 16)),
                      (unsigned __int64 *)(*(_QWORD *)(a2 + 456) & v89[0].m128i_i64[0]),
                      (unsigned __int64 *)(v89[0].m128i_i64[1] & *(_QWORD *)(a2 + 456)),
                      a4,
                      *(double *)v18.m128i_i64,
                      *(double *)a8.m128i_i64);
                  goto LABEL_13;
                }
                v58 = 3;
              }
            }
            break;
          case -1:
            goto LABEL_53;
        }
      }
      v88 = 0;
      src = nullptr;
      v50 = (_DWORD *)qvector_reserve(&src, 0, 8, 1);
      src = v50;
      *(_QWORD *)&v88 = 8;
      *v50 = 1330795077;
      *(_DWORD *)((char *)v50 + 3) = 540693071;
      *((_BYTE *)src + 7) = 0;
      v51 = v88;
      if ( (_QWORD)v88 )
      {
        v52 = v88 - 1;
        if ( (_QWORD)v88 != 1 )
        {
          v53 = v86;
          v54 = v88 - 1;
          if ( (_QWORD)v86 )
          {
            v53 = v86 - 1;
            v54 = v52 + v86 - 1;
            v51 = v88 + v86 - 1;
          }
          v55 = (__int64)v85;
          if ( *((_QWORD *)&v86 + 1) < v51 )
          {
            v68 = v53;
            v64 = v88 - 1;
            v60 = v54;
            v85 = (const char *)qvector_reserve(&v85, v85, v51, 1);
            v53 = v68;
            v55 = (__int64)v85;
            v52 = v64;
            v54 = v60;
          }
          *(_QWORD *)&v86 = v51;
          *(_BYTE *)(v55 + v54) = 0;
          memcpy((void *)&v85[v53], src, v52);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v88 = 0;
        qfree(src);
      }
      switch ( v58 )
      {
        case 3:
          sub_2BDC0((__int64 *)&v85, (__int64)"segment end 0x%a is higher than 0x%a\n", 0.0, *(double *)a8.m128i_i64);
          break;
        case 4:
          sub_2BDC0(
            (__int64 *)&v85,
            (__int64)"segment start 0x%a is higher than its end 0x%a\n",
            0.0,
            *(double *)a8.m128i_i64);
          break;
        case 2:
          sub_2BDC0((__int64 *)&v85, (__int64)"segment start 0x%a is lower than 0x%a\n", 0.0, *(double *)a8.m128i_i64);
          break;
        default:
          sub_2BDC0((__int64 *)&v85, (__int64)"segment too large (0x%a)\n", 0.0);
          break;
      }
LABEL_77:
      v59 = 1;
      v89[0] = _mm_loadu_si128(v24);
      v82.m128i_i64[0] = v89[0].m128i_i64[0];
      _mm_storeh_ps((double *)&v82.m128i_i64[1], (__m128)v89[0]);
      goto LABEL_19;
    }
    v21 = v24->m128i_i64[0];
    v22 = v24->m128i_i64[1];
    v23 = *(_QWORD *)(a4 + 8);
    v57 = *(_QWORD *)(a4 + 16);
    if ( (unsigned __int8)sub_42F60(a1, (const __m128i *)(v11 + 216LL * (v20 - 1)), a6, a5, a9)
      && (*(_BYTE *)(a1 + 521) & 8) == 0 )
    {
      sub_496A0(
        (__int64 *)a1,
        a2,
        (unsigned int)(v23 - v57 + v21),
        (unsigned __int64 *)(v21 & *(_QWORD *)(a2 + 456)),
        (unsigned __int64 *)(v22 & *(_QWORD *)(a2 + 456)),
        a4,
        *(double *)v18.m128i_i64,
        *(double *)a8.m128i_i64);
    }
LABEL_13:
    if ( (unsigned __int64)v84 < ++v20 )
      break;
    v19 = v81;
    v11 = v83;
  }
LABEL_53:
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  v11 = v83;
LABEL_56:
  if ( v11 )
  {
    v45 = v84;
    if ( (_QWORD)v84 )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        v48 = *(_QWORD *)(v11 + v46 + 192);
        if ( v48 )
        {
          *(_QWORD *)(v11 + v46 + 200) = 0;
          qfree(v48);
          v11 = v83;
        }
        ++v47;
        v46 += 216;
      }
      while ( v45 != v47 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v11);
  }
  return v90 - __readfsqword(0x28u);
}

