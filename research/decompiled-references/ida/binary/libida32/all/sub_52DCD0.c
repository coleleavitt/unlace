__int64 __fastcall sub_52DCD0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  const char *v9; // rsi
  unsigned __int8 v10; // dl
  const char *m128i_i8; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __m128i v15; // xmm0
  int v16; // eax
  _QWORD *v17; // r12
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r15
  void *v24; // rax
  void *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int8 v36; // al
  __m128i v37; // xmm0
  __int64 v38; // rbp
  const __m128i *v39; // r8
  __m128i v40; // xmm0
  const __m128i *v41; // r13
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r13
  size_t v48; // rcx
  size_t v49; // r15
  size_t v50; // r13
  __int64 v51; // rbx
  size_t v52; // r15
  void *v53; // rax
  void *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rbp
  __m128i v59; // xmm0
  __int64 v60; // rdx
  char v61; // al
  __m128i v62; // xmm0
  __int64 v63; // rbx
  __int64 v64; // r15
  __m128i v65; // xmm0
  void *v66; // rax
  void *v67; // rax
  __int64 v68; // [rsp+0h] [rbp-50h]
  __int64 v69; // [rsp+0h] [rbp-50h]
  __int64 v70; // [rsp+0h] [rbp-50h]
  __int64 v71; // [rsp+0h] [rbp-50h]
  _QWORD *v72; // [rsp+8h] [rbp-48h]
  size_t v73; // [rsp+8h] [rbp-48h]
  size_t v74; // [rsp+8h] [rbp-48h]
  size_t v75; // [rsp+8h] [rbp-48h]
  size_t v76; // [rsp+8h] [rbp-48h]
  size_t v77; // [rsp+8h] [rbp-48h]
  size_t na; // [rsp+10h] [rbp-40h]
  size_t n; // [rsp+10h] [rbp-40h]
  size_t nc; // [rsp+10h] [rbp-40h]
  size_t nb; // [rsp+10h] [rbp-40h]

  result = 0;
  if ( !a2[4] )
  {
    v3 = a2;
    if ( (~(unsigned __int8)*((_WORD *)a2 + 34) & 0x70) != 0 )
    {
      sub_528890(a1);
      *(_QWORD *)(a1 + 48) = a2[6];
      *(_DWORD *)(a1 + 56) = *((_DWORD *)a2 + 14);
      *(_DWORD *)(a1 + 60) = *((_DWORD *)a2 + 15);
      *(_WORD *)(a1 + 68) = *((_WORD *)a2 + 34);
      *(_BYTE *)(a1 + 70) = *((_BYTE *)a2 + 70);
      *(_BYTE *)(a1 + 71) = *((_BYTE *)a2 + 71);
      if ( a2[5] )
      {
        v5 = qalloc_or_throw(24, (const char *)a2);
        v6 = (_QWORD *)a2[5];
        *(_QWORD *)v5 = 0;
        v72 = v6;
        *(_OWORD *)(v5 + 8) = 0;
        v7 = v6[1];
        v68 = v7;
        if ( v7 )
        {
          v18 = v7;
          v19 = qalloc_or_throw(48 * v7, (const char *)a2);
          *(_QWORD *)v5 = v19;
          v20 = v19;
          v21 = 0;
          *(_QWORD *)(v5 + 16) = v18;
          while ( 1 )
          {
            v22 = 48 * v21 + v20;
            v23 = *v72 + 48 * v21;
            *(_QWORD *)v22 = 0;
            *(_OWORD *)(v22 + 8) = 0;
            if ( *(_QWORD *)(v23 + 8) )
            {
              na = *(_QWORD *)(v23 + 8);
              v24 = (void *)qalloc_or_throw(na, (const char *)a2);
              *(_QWORD *)v22 = v24;
              *(_QWORD *)(v22 + 16) = na;
              a2 = *(_QWORD **)v23;
              memcpy(v24, *(const void **)v23, na);
              *(_QWORD *)(v22 + 8) = na;
            }
            *(_QWORD *)(v22 + 24) = 0;
            *(_OWORD *)(v22 + 32) = 0;
            if ( *(_QWORD *)(v23 + 32) )
            {
              n = *(_QWORD *)(v23 + 32);
              v25 = (void *)qalloc_or_throw(n, (const char *)a2);
              *(_QWORD *)(v22 + 24) = v25;
              *(_QWORD *)(v22 + 40) = n;
              a2 = *(_QWORD **)(v23 + 24);
              memcpy(v25, a2, n);
              *(_QWORD *)(v22 + 32) = n;
            }
            if ( v68 == ++v21 )
              break;
            v20 = *(_QWORD *)v5;
          }
          *(_QWORD *)(v5 + 8) = v68;
        }
        *(_QWORD *)(a1 + 40) = v5;
      }
      v8 = v3[9];
      if ( v8 )
        *(_QWORD *)(a1 + 72) = qstrdup(v8);
      v9 = (const char *)*(unsigned __int8 *)(a1 + 70);
      v10 = *(_BYTE *)(a1 + 70) & 0xF;
      switch ( v10 )
      {
        case 0xAu:
          copy_tinfo_t(a1);
          copy_tinfo_t(a1 + 8);
          copy_tinfo_t(a1 + 16);
          *(_DWORD *)(a1 + 24) = *((_DWORD *)v3 + 6);
          *(_BYTE *)(a1 + 28) = *((_BYTE *)v3 + 28);
          *(_BYTE *)(a1 + 29) = *((_BYTE *)v3 + 29);
          goto LABEL_13;
        case 0xBu:
          copy_tinfo_t(a1);
          *(_DWORD *)(a1 + 8) = *((_DWORD *)v3 + 2);
          *(_DWORD *)(a1 + 12) = *((_DWORD *)v3 + 3);
          goto LABEL_13;
        case 0xCu:
          v26 = qalloc_or_throw(96, v9);
          sub_529AC0(v26, *v3);
          goto LABEL_27;
        case 0xDu:
          m128i_i8 = (const char *)((unsigned __int8)v9 & 0x30);
          if ( (_BYTE)m128i_i8 == 32 )
          {
            v27 = qalloc_or_throw(56, m128i_i8);
            v28 = *v3;
            *(_QWORD *)v27 = 0;
            v26 = v27;
            *(_OWORD *)(v27 + 8) = 0;
            v29 = *(_QWORD *)(v28 + 8);
            v69 = v29;
            if ( v29 )
            {
              v45 = *(_QWORD *)(v28 + 8);
              v46 = qalloc_or_throw(56 * v29, m128i_i8);
              *(_QWORD *)v26 = v46;
              v47 = v46;
              v48 = 0;
              *(_QWORD *)(v26 + 16) = v45;
              while ( 1 )
              {
                v50 = 56 * v48 + v47;
                v51 = *(_QWORD *)v28 + 56 * v48;
                *(_QWORD *)v50 = 0;
                *(_OWORD *)(v50 + 8) = 0;
                v52 = *(_QWORD *)(v51 + 8);
                if ( v52 )
                {
                  v74 = v48;
                  v53 = (void *)qalloc_or_throw(*(_QWORD *)(v51 + 8), m128i_i8);
                  *(_QWORD *)v50 = v53;
                  *(_QWORD *)(v50 + 16) = v52;
                  m128i_i8 = *(const char **)v51;
                  memcpy(v53, *(const void **)v51, v52);
                  *(_QWORD *)(v50 + 8) = v52;
                  v48 = v74;
                }
                *(_QWORD *)(v50 + 24) = 0;
                *(_OWORD *)(v50 + 32) = 0;
                v49 = *(_QWORD *)(v51 + 32);
                if ( v49 )
                {
                  v75 = v48;
                  v54 = (void *)qalloc_or_throw(*(_QWORD *)(v51 + 32), m128i_i8);
                  *(_QWORD *)(v50 + 24) = v54;
                  *(_QWORD *)(v50 + 40) = v49;
                  m128i_i8 = *(const char **)(v51 + 24);
                  memcpy(v54, m128i_i8, v49);
                  *(_QWORD *)(v50 + 32) = v49;
                  v48 = v75;
                }
                ++v48;
                *(_QWORD *)(v50 + 48) = *(_QWORD *)(v51 + 48);
                if ( v69 == v48 )
                  break;
                v47 = *(_QWORD *)v26;
              }
              *(_QWORD *)(v26 + 8) = v69;
            }
            *(_QWORD *)(v26 + 24) = 0;
            *(_OWORD *)(v26 + 32) = 0;
            v30 = *(_QWORD *)(v28 + 32);
            if ( v30 )
            {
              v44 = (void *)qalloc_or_throw(4 * v30, m128i_i8);
              *(_QWORD *)(v26 + 24) = v44;
              *(_QWORD *)(v26 + 40) = v30;
              memcpy(v44, *(const void **)(v28 + 24), 4 * v30);
              *(_QWORD *)(v26 + 32) = v30;
            }
            *(_DWORD *)(v26 + 48) = *(_DWORD *)(v28 + 48);
            *(_BYTE *)(v26 + 52) = *(_BYTE *)(v28 + 52);
LABEL_27:
            *(_QWORD *)a1 = v26;
          }
          else if ( (unsigned __int8)m128i_i8 > 0x20u )
          {
            if ( (_BYTE)m128i_i8 == 48 )
            {
              if ( !under_debugger )
                interr(2979);
LABEL_63:
              BUG();
            }
          }
          else
          {
            v12 = qalloc_or_throw(56, m128i_i8);
            v13 = *v3;
            *(_QWORD *)v12 = 0;
            v14 = v12;
            *(_OWORD *)(v12 + 8) = 0;
            v73 = *(_QWORD *)(v13 + 8);
            if ( v73 )
            {
              *(_QWORD *)v12 = qalloc_or_throw(v73 << 7, m128i_i8);
              *(_QWORD *)(v14 + 16) = v73;
              v71 = 0;
              do
              {
                v38 = (v71 << 7) + *(_QWORD *)v14;
                v39 = (const __m128i *)(*(_QWORD *)v13 + (v71 << 7));
                v40 = _mm_loadu_si128(v39);
                *(_QWORD *)(v38 + 16) = 0;
                v41 = v39;
                *(_OWORD *)(v38 + 24) = 0;
                *(__m128i *)v38 = v40;
                if ( v39[1].m128i_i64[1] )
                {
                  nc = v39[1].m128i_u64[1];
                  v42 = (void *)qalloc_or_throw(nc, m128i_i8);
                  *(_QWORD *)(v38 + 16) = v42;
                  *(_QWORD *)(v38 + 32) = nc;
                  m128i_i8 = (const char *)v41[1].m128i_i64[0];
                  memcpy(v42, m128i_i8, nc);
                  *(_QWORD *)(v38 + 24) = nc;
                }
                *(_QWORD *)(v38 + 40) = 0;
                *(_OWORD *)(v38 + 48) = 0;
                if ( v41[3].m128i_i64[0] )
                {
                  nb = v41[3].m128i_u64[0];
                  v43 = (void *)qalloc_or_throw(nb, m128i_i8);
                  *(_QWORD *)(v38 + 40) = v43;
                  *(_QWORD *)(v38 + 56) = nb;
                  memcpy(v43, (const void *)v41[2].m128i_i64[1], nb);
                  *(_QWORD *)(v38 + 48) = nb;
                }
                *(_QWORD *)(v38 + 64) = 0;
                m128i_i8 = v41[4].m128i_i8;
                copy_tinfo_t(v38 + 64);
                v34 = _mm_loadu_si128((const __m128i *)((char *)v41 + 72));
                v35 = v41[7].m128i_i64[0];
                ++v71;
                *(_QWORD *)(v38 + 104) = v41[6].m128i_i64[1];
                v36 = v41[7].m128i_i8[8];
                *(__m128i *)(v38 + 72) = v34;
                v37 = _mm_loadu_si128((const __m128i *)((char *)v41 + 88));
                *(_BYTE *)(v38 + 120) = v36;
                *(_QWORD *)(v38 + 112) = v35;
                *(__m128i *)(v38 + 88) = v37;
              }
              while ( v73 != v71 );
              *(_QWORD *)(v14 + 8) = v73;
            }
            v15 = _mm_loadu_si128((const __m128i *)(v13 + 24));
            *(_QWORD *)(v14 + 40) = *(_QWORD *)(v13 + 40);
            v16 = *(_DWORD *)(v13 + 48);
            *(__m128i *)(v14 + 24) = v15;
            *(_DWORD *)(v14 + 48) = v16;
            *(_QWORD *)a1 = v14;
            v17 = (_QWORD *)v3[1];
            if ( v17 )
            {
              v31 = qalloc_or_throw(24, m128i_i8);
              *(_QWORD *)v31 = 0;
              v32 = (__int64 *)v31;
              *(_OWORD *)(v31 + 8) = 0;
              v33 = v17[1];
              v70 = v33;
              if ( v33 )
              {
                v55 = v17[1];
                v56 = qalloc_or_throw(v33 << 7, m128i_i8);
                *v32 = v56;
                v57 = v56;
                v58 = 0;
                v32[2] = v55;
                while ( 1 )
                {
                  v63 = (v58 << 7) + v57;
                  v64 = *v17 + (v58 << 7);
                  v65 = _mm_loadu_si128((const __m128i *)v64);
                  *(_QWORD *)(v63 + 16) = 0;
                  *(_OWORD *)(v63 + 24) = 0;
                  *(__m128i *)v63 = v65;
                  if ( *(_QWORD *)(v64 + 24) )
                  {
                    v76 = *(_QWORD *)(v64 + 24);
                    v66 = (void *)qalloc_or_throw(v76, m128i_i8);
                    *(_QWORD *)(v63 + 16) = v66;
                    *(_QWORD *)(v63 + 32) = v76;
                    m128i_i8 = *(const char **)(v64 + 16);
                    memcpy(v66, m128i_i8, v76);
                    *(_QWORD *)(v63 + 24) = v76;
                  }
                  *(_QWORD *)(v63 + 40) = 0;
                  *(_OWORD *)(v63 + 48) = 0;
                  if ( *(_QWORD *)(v64 + 48) )
                  {
                    v77 = *(_QWORD *)(v64 + 48);
                    v67 = (void *)qalloc_or_throw(v77, m128i_i8);
                    *(_QWORD *)(v63 + 40) = v67;
                    *(_QWORD *)(v63 + 56) = v77;
                    memcpy(v67, *(const void **)(v64 + 40), v77);
                    *(_QWORD *)(v63 + 48) = v77;
                  }
                  *(_QWORD *)(v63 + 64) = 0;
                  m128i_i8 = (const char *)(v64 + 64);
                  copy_tinfo_t(v63 + 64);
                  v59 = _mm_loadu_si128((const __m128i *)(v64 + 72));
                  ++v58;
                  v60 = *(_QWORD *)(v64 + 112);
                  *(_QWORD *)(v63 + 104) = *(_QWORD *)(v64 + 104);
                  v61 = *(_BYTE *)(v64 + 120);
                  *(__m128i *)(v63 + 72) = v59;
                  v62 = _mm_loadu_si128((const __m128i *)(v64 + 88));
                  *(_QWORD *)(v63 + 112) = v60;
                  *(_BYTE *)(v63 + 120) = v61;
                  *(__m128i *)(v63 + 88) = v62;
                  if ( v70 == v58 )
                    break;
                  v57 = *v32;
                }
                v32[1] = v70;
              }
              *(_QWORD *)(a1 + 8) = v32;
            }
          }
LABEL_13:
          result = 1;
          break;
        case 0xEu:
          *(_WORD *)a1 = *(_WORD *)v3;
          *(_BYTE *)(a1 + 2) = *((_BYTE *)v3 + 2);
          goto LABEL_13;
        default:
          if ( v10 <= 9u )
            goto LABEL_13;
          if ( !under_debugger )
            interr(2980);
          goto LABEL_63;
      }
    }
  }
  return result;
}

