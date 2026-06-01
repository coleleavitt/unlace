__int64 __fastcall sub_542EF0(__int64 *a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 *a4, char a5)
{
  __int64 v5; // r13
  int v8; // eax
  __int64 result; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r12
  __m128i v22; // xmm2
  __m128i *v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  int v29; // eax
  __int64 v30; // rax
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i si128; // xmm3
  __m128i v36; // xmm0
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  __int64 v39; // rdx
  __m128i v40; // xmm3
  __int64 v41; // rcx
  __m128i v42; // xmm3
  __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // r12
  void *v46; // rdi
  void *v47; // rdi
  __int64 v48; // rax
  __m128i v49; // xmm5
  __m128i v50; // xmm4
  __m128i v51; // xmm3
  __m128i v52; // xmm1
  __m128i v53; // xmm0
  void *v54; // r13
  __int64 v55; // r12
  __int64 v56; // rbx
  __int64 v57; // rbp
  void *v58; // rdi
  void *v59; // rdi
  __m128i *v60; // r14
  __m128i v61; // xmm0
  __int32 v62; // eax
  __m128i v63; // xmm0
  __int32 v64; // eax
  __m128i v65; // xmm0
  const __m128i *v66; // r8
  __m128i v67; // xmm0
  const __m128i *v68; // r12
  void *v69; // rax
  void *v70; // rax
  __int64 v72; // [rsp+8h] [rbp-110h]
  __int64 v73; // [rsp+10h] [rbp-108h]
  __int64 v74; // [rsp+18h] [rbp-100h]
  size_t na; // [rsp+28h] [rbp-F0h]
  size_t n; // [rsp+28h] [rbp-F0h]
  _BYTE v77[48]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-B8h]
  __m128i v79; // [rsp+70h] [rbp-A8h]
  __m128i v80; // [rsp+80h] [rbp-98h]
  __m128i v81; // [rsp+90h] [rbp-88h]
  __int128 v82; // [rsp+A0h] [rbp-78h]
  __m128i v83; // [rsp+B0h] [rbp-68h]
  __m128i v84; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v85; // [rsp+D8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( ((a2 ^ a3) & 0xF) != 0 )
  {
    if ( !under_debugger )
      interr(881);
  }
  else
  {
    switch ( a3 )
    {
      case 0xAu:
        if ( !sub_53EA80((__int64 *)a4, a5) )
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
        v10 = _mm_loadl_epi64((const __m128i *)(a4 + 8));
        v11 = *a1;
        LOBYTE(v11) = *a1 & 0x3F;
        v12 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229));
        a1[1] = v10.m128i_i64[0];
        *a1 = v11;
        if ( v12 >= 0 && !__CFADD__(v12, _mm_cvtsi128_si32(v10)) && (a5 || (get_tinfo_property(v11, 2) & 0xF) != 0xE) )
          goto LABEL_5;
        clear_tinfo_t(a1);
        return 0;
      case 0xCu:
        v13 = *((_QWORD *)a4 + 4);
        LOBYTE(v13) = v13 & 0x3F;
        *((_QWORD *)a4 + 4) = v13;
        if ( !(_BYTE)v13 )
          return 0;
        if ( !*((_QWORD *)a4 + 1) )
          goto LABEL_47;
        v14 = a4[88];
        v15 = v14 & 0xF0;
        if ( (v14 & 0xF0) == 0xC0 )
          v15 = *((_DWORD *)a4 + 7);
        if ( v15 <= 0x10 )
          v15 = getinf(99);
        if ( v15 == 32 )
          return 0;
        v16 = *(_QWORD *)a4;
        v17 = *(_QWORD *)a4 + 80LL * *((_QWORD *)a4 + 1);
        if ( v15 - 208 > 0x2F )
        {
          if ( v16 != v17 )
            goto LABEL_66;
LABEL_47:
          v48 = qalloc_or_throw(96);
          *(_OWORD *)(v48 + 8) = 0;
          *(_OWORD *)(v48 + 72) = 0;
          *(_QWORD *)v48 = 0;
          v49 = _mm_loadu_si128((const __m128i *)v48);
          *(_QWORD *)(v48 + 24) = 0;
          v50 = _mm_loadu_si128((const __m128i *)(v48 + 16));
          *(_QWORD *)(v48 + 32) = 0;
          *(_QWORD *)(v48 + 40) = 0;
          v51 = _mm_loadu_si128((const __m128i *)(v48 + 32));
          *(_QWORD *)(v48 + 64) = 0;
          v52 = _mm_loadu_si128((const __m128i *)(v48 + 64));
          *(_BYTE *)(v48 + 88) = 16;
          *(_OWORD *)(v48 + 48) = 0;
          v82 = 0;
          v53 = _mm_loadu_si128((const __m128i *)(v48 + 80));
          *(__m128i *)v48 = _mm_loadu_si128((const __m128i *)a4);
          v79 = v49;
          *(__m128i *)(v48 + 16) = _mm_loadu_si128((const __m128i *)a4 + 1);
          v80 = v50;
          *(__m128i *)(v48 + 32) = _mm_loadu_si128((const __m128i *)a4 + 2);
          v81 = v51;
          *(__m128i *)(v48 + 48) = _mm_loadu_si128((const __m128i *)a4 + 3);
          v83 = v52;
          *(__m128i *)(v48 + 64) = _mm_loadu_si128((const __m128i *)a4 + 4);
          v84 = v53;
          *(__m128i *)(v48 + 80) = _mm_loadu_si128((const __m128i *)a4 + 5);
          *(__m128i *)a4 = v49;
          *((__m128i *)a4 + 1) = v50;
          *((__m128i *)a4 + 2) = v51;
          *((_OWORD *)a4 + 3) = 0;
          *((__m128i *)a4 + 4) = v52;
          *((__m128i *)a4 + 5) = v53;
          *a1 = v48;
          goto LABEL_5;
        }
        if ( v16 == v17 )
          goto LABEL_47;
        v18 = *(_DWORD **)a4;
        do
        {
          if ( !*v18 )
            return 0;
          v18 += 20;
        }
        while ( (_DWORD *)v17 != v18 );
LABEL_66:
        while ( *(_BYTE *)(v16 + 64) )
        {
          v16 += 80;
          if ( v16 == v17 )
            goto LABEL_47;
        }
        return 0;
      case 0xDu:
        if ( (a2 & 0x3F) != 0x2D )
        {
          v27 = *((_QWORD *)a4 + 1);
          memset(v77, 0, 24);
          v73 = v27;
          if ( v27 )
          {
            *(_QWORD *)&v77[16] = v27;
            *(_QWORD *)v77 = qalloc_or_throw(144 * v27);
            v60 = (__m128i *)(*(_QWORD *)v77 + 64LL);
            v72 = 0;
            v74 = -64LL - *(_QWORD *)v77;
            do
            {
              v66 = (__m128i *)((char *)v60 + v74 + *(_QWORD *)a4);
              v67 = _mm_loadu_si128(v66);
              v60[-3].m128i_i64[0] = 0;
              v68 = v66;
              *(__m128i *)((char *)&v60[-3] + 8) = 0;
              v60[-4] = v67;
              if ( v66[1].m128i_i64[1] )
              {
                na = v66[1].m128i_u64[1];
                v69 = (void *)qalloc_or_throw(na);
                v60[-3].m128i_i64[0] = (__int64)v69;
                v60[-2].m128i_i64[0] = na;
                memcpy(v69, (const void *)v68[1].m128i_i64[0], na);
                v60[-3].m128i_i64[1] = na;
              }
              v60[-2].m128i_i64[1] = 0;
              v60[-1] = 0;
              if ( v68[3].m128i_i64[0] )
              {
                n = v68[3].m128i_u64[0];
                v70 = (void *)qalloc_or_throw(n);
                v60[-2].m128i_i64[1] = (__int64)v70;
                v60[-1].m128i_i64[1] = n;
                memcpy(v70, (const void *)v68[2].m128i_i64[1], n);
                v60[-1].m128i_i64[0] = n;
              }
              v60->m128i_i64[0] = 0;
              copy_tinfo_t(v60);
              v61 = _mm_loadu_si128((const __m128i *)((char *)v68 + 72));
              v60 += 9;
              ++v72;
              v60[-6].m128i_i64[1] = v68[7].m128i_i64[1];
              v62 = v68[8].m128i_i32[0];
              *(__m128i *)((char *)v60 - 136) = v61;
              v63 = _mm_loadu_si128((const __m128i *)((char *)v68 + 88));
              v60[-5].m128i_i32[0] = v62;
              v64 = v68[8].m128i_i32[1];
              *(__m128i *)((char *)v60 - 120) = v63;
              v65 = _mm_loadu_si128((const __m128i *)((char *)v68 + 104));
              v60[-5].m128i_i32[1] = v64;
              LOBYTE(v64) = v68[8].m128i_i8[8];
              *(__m128i *)((char *)v60 - 104) = v65;
              v60[-5].m128i_i8[8] = v64;
            }
            while ( v73 != v72 );
            *(_QWORD *)&v77[8] = v73;
          }
          v28 = _mm_loadu_si128((const __m128i *)(a4 + 24));
          *(_QWORD *)&v77[40] = *((_QWORD *)a4 + 5);
          v29 = *((_DWORD *)a4 + 12);
          *(__m128i *)&v77[24] = v28;
          LODWORD(v78) = v29;
          if ( (unsigned __int8)sub_53E370((__int64)v77, a5) )
          {
            v30 = qalloc_or_throw(56);
            *(_QWORD *)v30 = 0;
            *(_OWORD *)(v30 + 8) = 0;
            v31 = _mm_loadu_si128((const __m128i *)v30);
            *(_OWORD *)(v30 + 24) = 0;
            v32 = _mm_loadu_si128((const __m128i *)(v30 + 16));
            *(_QWORD *)(v30 + 40) = 0;
            v33 = _mm_loadu_si128((const __m128i *)(v30 + 32));
            *(_DWORD *)(v30 + 48) = 1;
            v34 = *(_QWORD *)(v30 + 48);
            *(__m128i *)v30 = _mm_loadu_si128((const __m128i *)a4);
            *(__m128i *)(v30 + 16) = _mm_loadu_si128((const __m128i *)a4 + 1);
            *(__m128i *)(v30 + 32) = _mm_loadu_si128((const __m128i *)a4 + 2);
            si128 = _mm_load_si128((const __m128i *)v77);
            *(_QWORD *)(v30 + 48) = *((_QWORD *)a4 + 6);
            *((_QWORD *)a4 + 6) = v34;
            *(__m128i *)a4 = v31;
            *((__m128i *)a4 + 1) = v32;
            *((__m128i *)a4 + 2) = v33;
            v36 = _mm_loadu_si128((const __m128i *)v30);
            v37 = _mm_loadu_si128((const __m128i *)(v30 + 16));
            v38 = _mm_loadu_si128((const __m128i *)(v30 + 32));
            v39 = *(_QWORD *)(v30 + 48);
            *(__m128i *)v30 = si128;
            v40 = _mm_load_si128((const __m128i *)&v77[16]);
            v79 = v36;
            *(_QWORD *)&v82 = v39;
            v80 = v37;
            v81 = v38;
            *(__m128i *)(v30 + 16) = v40;
            v41 = v78;
            v42 = _mm_load_si128((const __m128i *)&v77[32]);
            v78 = v39;
            *(_QWORD *)(v30 + 48) = v41;
            *(__m128i *)(v30 + 32) = v42;
            *a1 = v30;
            *(__m128i *)v77 = v36;
            *(__m128i *)&v77[16] = v37;
            *(__m128i *)&v77[32] = v38;
            if ( v36.m128i_i64[0] )
            {
              v43 = *(_QWORD *)&v77[8];
              v44 = v36.m128i_i64[0] + 64;
              v45 = 0;
              if ( *(_QWORD *)&v77[8] )
              {
                do
                {
                  clear_tinfo_t(v44);
                  v46 = *(void **)(v44 - 24);
                  if ( v46 )
                  {
                    *(_QWORD *)(v44 - 16) = 0;
                    qfree(v46);
                  }
                  v47 = *(void **)(v44 - 48);
                  if ( v47 )
                  {
                    *(_QWORD *)(v44 - 40) = 0;
                    qfree(v47);
                  }
                  ++v45;
                  v44 += 144;
                }
                while ( v43 != v45 );
              }
              qfree((void *)v36.m128i_i64[0]);
            }
            goto LABEL_5;
          }
          v54 = *(void **)v77;
          if ( *(_QWORD *)v77 )
          {
            v55 = *(_QWORD *)&v77[8];
            v56 = *(_QWORD *)v77 + 64LL;
            v57 = 0;
            if ( *(_QWORD *)&v77[8] )
            {
              do
              {
                clear_tinfo_t(v56);
                v58 = *(void **)(v56 - 24);
                if ( v58 )
                {
                  *(_QWORD *)(v56 - 16) = 0;
                  qfree(v58);
                }
                v59 = *(void **)(v56 - 48);
                if ( v59 )
                {
                  *(_QWORD *)(v56 - 40) = 0;
                  qfree(v59);
                }
                ++v57;
                v56 += 144;
              }
              while ( v55 != v57 );
            }
            qfree(v54);
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
        if ( (a2 & 0x3F) == 0x2D )
        {
          if ( (a4[52] & 0x88) == 0x80
            && (!*((_QWORD *)a4 + 1) || (*((_QWORD *)a4 + 4) == 0) != ((a4[52] & 0x10) != 0))
            && !(unsigned int)sub_415220((__int64)a4, a5 ^ 1u) )
          {
            v20 = qalloc_or_throw(56);
            *(_OWORD *)(v20 + 8) = 0;
            v21 = v20;
            *(_QWORD *)v20 = 0;
            v22 = _mm_loadu_si128((const __m128i *)v20);
            v23 = (__m128i *)v20;
            *(_QWORD *)(v20 + 24) = 0;
            *(_OWORD *)(v20 + 32) = 0;
            v24 = _mm_loadu_si128((const __m128i *)(v20 + 16));
            *(_DWORD *)(v20 + 48) = 0;
            *(_BYTE *)(v20 + 52) = 0x80;
            v25 = *(_QWORD *)(v20 + 48);
            v79 = v22;
            *v23 = _mm_loadu_si128((const __m128i *)a4);
            *(_QWORD *)&v82 = v25;
            v23[1] = _mm_loadu_si128((const __m128i *)a4 + 1);
            v80 = v24;
            v23[2] = _mm_loadu_si128((const __m128i *)a4 + 2);
            v26 = *((_QWORD *)a4 + 6);
            v81 = 0;
            v23[3].m128i_i64[0] = v26;
            *((_QWORD *)a4 + 6) = v25;
            *(__m128i *)a4 = v22;
            *((__m128i *)a4 + 1) = v24;
            *((_OWORD *)a4 + 2) = 0;
            sub_532B80((__int64)v23);
            *a1 = v21;
LABEL_5:
            *((_WORD *)a1 + 34) |= 1u;
            v8 = *(_DWORD *)(v5 + 2608);
            *((_BYTE *)a1 + 70) = a2;
            *((_DWORD *)a1 + 15) = v8;
            return 1;
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
