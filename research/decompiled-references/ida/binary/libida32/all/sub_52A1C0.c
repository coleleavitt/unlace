__int64 __fastcall sub_52A1C0(
        __int64 *a1,
        const __m128i *a2,
        unsigned __int8 a3,
        unsigned __int8 *a4,
        unsigned __int8 a5)
{
  __int64 v5; // r15
  char v6; // r12
  int v9; // eax
  __int64 result; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // eax
  __int64 v17; // rdx
  const char *v18; // rax
  int v19; // eax
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx
  __m128i v23; // xmm2
  __m128i *v24; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // rax
  __m128i v29; // xmm0
  int v30; // eax
  __int64 v31; // rax
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __m128i si128; // xmm3
  __m128i v37; // xmm0
  __m128i v38; // xmm2
  __m128i v39; // xmm1
  __int64 v40; // rdx
  __m128i v41; // xmm3
  __int64 v42; // rcx
  __m128i v43; // xmm3
  __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rbx
  void *v47; // rdi
  void *v48; // rdi
  __int64 v49; // rax
  __m128i v50; // xmm5
  __m128i v51; // xmm4
  __m128i v52; // xmm3
  __m128i v53; // xmm2
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  void *v56; // r13
  __int64 v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rbp
  void *v60; // rdi
  void *v61; // rdi
  __int64 v62; // rbx
  __m128i v63; // xmm0
  __int32 v64; // eax
  __m128i v65; // xmm0
  __int32 v66; // eax
  const __m128i *v67; // r8
  __m128i v68; // xmm0
  const __m128i *v69; // r14
  void *v70; // rax
  void *v71; // rax
  void *ptr; // [rsp+0h] [rbp-108h]
  void *v74; // [rsp+10h] [rbp-F8h]
  size_t na; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+18h] [rbp-F0h]
  _BYTE v77[48]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v78; // [rsp+50h] [rbp-B8h]
  __m128i v79; // [rsp+60h] [rbp-A8h]
  __m128i v80; // [rsp+70h] [rbp-98h]
  __m128i v81; // [rsp+80h] [rbp-88h]
  __m128i v82; // [rsp+90h] [rbp-78h]
  __m128i v83; // [rsp+A0h] [rbp-68h]
  __m128i v84; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( (((unsigned __int8)a2 ^ a3) & 0xF) != 0 )
  {
    if ( !under_debugger )
      interr(881);
  }
  else
  {
    v6 = (char)a2;
    switch ( a3 )
    {
      case 0xAu:
        if ( !sub_525D80((__int64 *)a4, a5) )
          return 0;
        *a1 = 0;
        copy_tinfo_t(a1);
        a1[1] = 0;
        copy_tinfo_t(a1 + 1);
        a1[2] = 0;
        copy_tinfo_t(a1 + 2);
        *((_DWORD *)a1 + 6) = *((_DWORD *)a4 + 6);
        *((_WORD *)a1 + 14) = *((_WORD *)a4 + 14);
        goto LABEL_5;
      case 0xBu:
        *a1 = 0;
        copy_tinfo_t(a1);
        v11 = _mm_loadl_epi64((const __m128i *)(a4 + 8));
        v12 = *a1;
        LOBYTE(v12) = *a1 & 0x3F;
        v13 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v11, 229));
        a1[1] = v11.m128i_i64[0];
        *a1 = v12;
        if ( v13 >= 0 && !__CFADD__(v13, _mm_cvtsi128_si32(v11)) && (a5 || (get_tinfo_property(v12, 2) & 0xF) != 0xE) )
          goto LABEL_5;
        clear_tinfo_t(a1);
        return 0;
      case 0xCu:
        v14 = *((_QWORD *)a4 + 4);
        LOBYTE(v14) = v14 & 0x3F;
        *((_QWORD *)a4 + 4) = v14;
        if ( !(_BYTE)v14 )
          return 0;
        if ( !*((_QWORD *)a4 + 1) )
          goto LABEL_47;
        v15 = a4[88];
        v16 = v15 & 0xF0;
        if ( (v15 & 0xF0) == 0xC0 )
          v16 = *((_DWORD *)a4 + 7);
        if ( v16 <= 0x10 )
          v16 = getinf(99);
        if ( v16 == 32 )
          return 0;
        v17 = *(_QWORD *)a4;
        a2 = (const __m128i *)(*(_QWORD *)a4 + 80LL * *((_QWORD *)a4 + 1));
        if ( v16 - 208 > 0x2F )
        {
          if ( (const __m128i *)v17 != a2 )
            goto LABEL_66;
LABEL_47:
          v49 = qalloc_or_throw(96, a2->m128i_i8);
          *(_OWORD *)(v49 + 8) = 0;
          *(_OWORD *)(v49 + 72) = 0;
          *(_QWORD *)v49 = 0;
          v50 = _mm_loadu_si128((const __m128i *)v49);
          *(_QWORD *)(v49 + 24) = 0;
          v51 = _mm_loadu_si128((const __m128i *)(v49 + 16));
          *(_QWORD *)(v49 + 32) = 0;
          *(_QWORD *)(v49 + 40) = 0;
          v52 = _mm_loadu_si128((const __m128i *)(v49 + 32));
          *(_QWORD *)(v49 + 48) = 0;
          *(_DWORD *)(v49 + 56) = 0;
          v53 = _mm_loadu_si128((const __m128i *)(v49 + 48));
          *(_QWORD *)(v49 + 64) = 0;
          v54 = _mm_loadu_si128((const __m128i *)(v49 + 64));
          *(_BYTE *)(v49 + 88) = 16;
          v55 = _mm_loadu_si128((const __m128i *)(v49 + 80));
          v79 = v50;
          *(__m128i *)v49 = _mm_loadu_si128((const __m128i *)a4);
          v80 = v51;
          *(__m128i *)(v49 + 16) = _mm_loadu_si128((const __m128i *)a4 + 1);
          v81 = v52;
          *(__m128i *)(v49 + 32) = _mm_loadu_si128((const __m128i *)a4 + 2);
          v82 = v53;
          *(__m128i *)(v49 + 48) = _mm_loadu_si128((const __m128i *)a4 + 3);
          v83 = v54;
          v84 = v55;
          *(__m128i *)(v49 + 64) = _mm_loadu_si128((const __m128i *)a4 + 4);
          *(__m128i *)(v49 + 80) = _mm_loadu_si128((const __m128i *)a4 + 5);
          *(__m128i *)a4 = v50;
          *((__m128i *)a4 + 1) = v51;
          *((__m128i *)a4 + 2) = v52;
          *((__m128i *)a4 + 3) = v53;
          *((__m128i *)a4 + 4) = v54;
          *((__m128i *)a4 + 5) = v55;
          *a1 = v49;
          goto LABEL_5;
        }
        if ( (const __m128i *)v17 == a2 )
          goto LABEL_47;
        v18 = *(const char **)a4;
        do
        {
          if ( !*(_DWORD *)v18 )
            return 0;
          v18 += 80;
        }
        while ( a2 != (const __m128i *)v18 );
LABEL_66:
        while ( *(_BYTE *)(v17 + 64) )
        {
          v17 += 80;
          if ( (const __m128i *)v17 == a2 )
            goto LABEL_47;
        }
        return 0;
      case 0xDu:
        if ( ((unsigned __int8)a2 & 0x3F) != 0x2D )
        {
          v28 = *((void **)a4 + 1);
          memset(v77, 0, 24);
          v74 = v28;
          if ( v28 )
          {
            *(_QWORD *)&v77[16] = v28;
            *(_QWORD *)v77 = qalloc_or_throw((_QWORD)v28 << 7, a2->m128i_i8);
            v62 = *(_QWORD *)v77;
            ptr = nullptr;
            do
            {
              v67 = (const __m128i *)(*(_QWORD *)a4 + ((_QWORD)ptr << 7));
              v68 = _mm_loadu_si128(v67);
              *(_QWORD *)(v62 + 16) = 0;
              v69 = v67;
              *(_OWORD *)(v62 + 24) = 0;
              *(__m128i *)v62 = v68;
              if ( v67[1].m128i_i64[1] )
              {
                na = v67[1].m128i_u64[1];
                v70 = (void *)qalloc_or_throw(na, a2->m128i_i8);
                *(_QWORD *)(v62 + 16) = v70;
                *(_QWORD *)(v62 + 32) = na;
                a2 = (const __m128i *)v69[1].m128i_i64[0];
                memcpy(v70, a2, na);
                *(_QWORD *)(v62 + 24) = na;
              }
              *(_QWORD *)(v62 + 40) = 0;
              *(_OWORD *)(v62 + 48) = 0;
              if ( v69[3].m128i_i64[0] )
              {
                n = v69[3].m128i_u64[0];
                v71 = (void *)qalloc_or_throw(n, a2->m128i_i8);
                *(_QWORD *)(v62 + 40) = v71;
                *(_QWORD *)(v62 + 56) = n;
                memcpy(v71, (const void *)v69[2].m128i_i64[1], n);
                *(_QWORD *)(v62 + 48) = n;
              }
              *(_QWORD *)(v62 + 64) = 0;
              a2 = v69 + 4;
              copy_tinfo_t(v62 + 64);
              v63 = _mm_loadu_si128((const __m128i *)((char *)v69 + 72));
              v62 += 128;
              ptr = (char *)ptr + 1;
              *(_QWORD *)(v62 - 24) = v69[6].m128i_i64[1];
              v64 = v69[7].m128i_i32[0];
              *(__m128i *)(v62 - 56) = v63;
              v65 = _mm_loadu_si128((const __m128i *)((char *)v69 + 88));
              *(_DWORD *)(v62 - 16) = v64;
              v66 = v69[7].m128i_i32[1];
              *(__m128i *)(v62 - 40) = v65;
              *(_DWORD *)(v62 - 12) = v66;
              *(_BYTE *)(v62 - 8) = v69[7].m128i_i8[8];
            }
            while ( v74 != ptr );
            *(_QWORD *)&v77[8] = v74;
          }
          v29 = _mm_loadu_si128((const __m128i *)(a4 + 24));
          *(_QWORD *)&v77[40] = *((_QWORD *)a4 + 5);
          v30 = *((_DWORD *)a4 + 12);
          *(__m128i *)&v77[24] = v29;
          LODWORD(v78) = v30;
          if ( (unsigned __int8)sub_525690((__int64)v77, a5) )
          {
            v31 = qalloc_or_throw(56, (const char *)a5);
            *(_QWORD *)v31 = 0;
            *(_OWORD *)(v31 + 8) = 0;
            v32 = _mm_loadu_si128((const __m128i *)v31);
            *(_OWORD *)(v31 + 24) = 0;
            v33 = _mm_loadu_si128((const __m128i *)(v31 + 16));
            *(_QWORD *)(v31 + 40) = 0;
            v34 = _mm_loadu_si128((const __m128i *)(v31 + 32));
            *(_DWORD *)(v31 + 48) = 1;
            v35 = *(_QWORD *)(v31 + 48);
            *(__m128i *)v31 = _mm_loadu_si128((const __m128i *)a4);
            *(__m128i *)(v31 + 16) = _mm_loadu_si128((const __m128i *)a4 + 1);
            *(__m128i *)(v31 + 32) = _mm_loadu_si128((const __m128i *)a4 + 2);
            si128 = _mm_load_si128((const __m128i *)v77);
            *(_QWORD *)(v31 + 48) = *((_QWORD *)a4 + 6);
            *((_QWORD *)a4 + 6) = v35;
            *(__m128i *)a4 = v32;
            *((__m128i *)a4 + 1) = v33;
            *((__m128i *)a4 + 2) = v34;
            v37 = _mm_loadu_si128((const __m128i *)v31);
            v38 = _mm_loadu_si128((const __m128i *)(v31 + 16));
            v39 = _mm_loadu_si128((const __m128i *)(v31 + 32));
            v40 = *(_QWORD *)(v31 + 48);
            *(__m128i *)v31 = si128;
            v41 = _mm_load_si128((const __m128i *)&v77[16]);
            v79 = v37;
            v82.m128i_i64[0] = v40;
            v80 = v38;
            v81 = v39;
            *(__m128i *)(v31 + 16) = v41;
            v42 = v78;
            v43 = _mm_load_si128((const __m128i *)&v77[32]);
            v78 = v40;
            *(_QWORD *)(v31 + 48) = v42;
            *(__m128i *)(v31 + 32) = v43;
            *a1 = v31;
            *(__m128i *)v77 = v37;
            *(__m128i *)&v77[16] = v38;
            *(__m128i *)&v77[32] = v39;
            if ( v37.m128i_i64[0] )
            {
              v44 = *(_QWORD *)&v77[8];
              v45 = v37.m128i_i64[0] + 64;
              v46 = 0;
              if ( *(_QWORD *)&v77[8] )
              {
                do
                {
                  clear_tinfo_t(v45);
                  v47 = *(void **)(v45 - 24);
                  if ( v47 )
                  {
                    *(_QWORD *)(v45 - 16) = 0;
                    qfree(v47);
                  }
                  v48 = *(void **)(v45 - 48);
                  if ( v48 )
                  {
                    *(_QWORD *)(v45 - 40) = 0;
                    qfree(v48);
                  }
                  ++v46;
                  v45 += 128;
                }
                while ( v44 != v46 );
              }
              qfree((void *)v37.m128i_i64[0]);
            }
            goto LABEL_5;
          }
          v56 = *(void **)v77;
          if ( *(_QWORD *)v77 )
          {
            v57 = *(_QWORD *)&v77[8];
            v58 = *(_QWORD *)v77 + 64LL;
            v59 = 0;
            if ( *(_QWORD *)&v77[8] )
            {
              do
              {
                clear_tinfo_t(v58);
                v60 = *(void **)(v58 - 24);
                if ( v60 )
                {
                  *(_QWORD *)(v58 - 16) = 0;
                  qfree(v60);
                }
                v61 = *(void **)(v58 - 48);
                if ( v61 )
                {
                  *(_QWORD *)(v58 - 40) = 0;
                  qfree(v61);
                }
                ++v59;
                v58 += 128;
              }
              while ( v57 != v59 );
            }
            qfree(v56);
            return 0;
          }
          return 0;
        }
        if ( !under_debugger )
          interr(1062);
        return result;
      case 0xEu:
        v19 = *a4;
        if ( (((_BYTE)v19 - 4) & 0xFB) != 0 && (unsigned __int8)(v19 - 1) > 1u || a4[1] > 8 * v19 )
          return 0;
        *(_WORD *)a1 = *(_WORD *)a4;
        *((_BYTE *)a1 + 2) = a4[2];
        goto LABEL_5;
      case 0x2Du:
        if ( ((unsigned __int8)a2 & 0x3F) == 0x2D )
        {
          if ( (a4[52] & 0x88) == 0x80 && (!*((_QWORD *)a4 + 1) || (*((_QWORD *)a4 + 4) == 0) != ((a4[52] & 0x10) != 0)) )
          {
            v20 = (const char *)(a5 ^ 1u);
            if ( !(unsigned int)sub_401E80((__int64)a4, (char)v20) )
            {
              v21 = qalloc_or_throw(56, v20);
              *(_OWORD *)(v21 + 8) = 0;
              v22 = v21;
              *(_QWORD *)v21 = 0;
              v23 = _mm_loadu_si128((const __m128i *)v21);
              v24 = (__m128i *)v21;
              *(_QWORD *)(v21 + 24) = 0;
              *(_OWORD *)(v21 + 32) = 0;
              v25 = _mm_loadu_si128((const __m128i *)(v21 + 16));
              *(_DWORD *)(v21 + 48) = 0;
              *(_BYTE *)(v21 + 52) = 0x80;
              v26 = *(_QWORD *)(v21 + 48);
              v79 = v23;
              *v24 = _mm_loadu_si128((const __m128i *)a4);
              v82.m128i_i64[0] = v26;
              v24[1] = _mm_loadu_si128((const __m128i *)a4 + 1);
              v80 = v25;
              v24[2] = _mm_loadu_si128((const __m128i *)a4 + 2);
              v27 = *((_QWORD *)a4 + 6);
              v81 = 0;
              v24[3].m128i_i64[0] = v27;
              *((_QWORD *)a4 + 6) = v26;
              *(__m128i *)a4 = v23;
              *((__m128i *)a4 + 1) = v25;
              *((_OWORD *)a4 + 2) = 0;
              sub_51A3C0((__int64)v24);
              *a1 = v22;
LABEL_5:
              *((_WORD *)a1 + 34) |= 1u;
              v9 = *(_DWORD *)(v5 + 2484);
              *((_BYTE *)a1 + 70) = v6;
              *((_DWORD *)a1 + 15) = v9;
              return 1;
            }
          }
          return 0;
        }
        if ( !under_debugger )
          interr(1525);
        return result;
      default:
        if ( !under_debugger )
          interr(884);
        break;
    }
  }
  BUG();
}

