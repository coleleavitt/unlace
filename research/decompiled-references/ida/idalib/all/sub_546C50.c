__int64 __fastcall sub_546C50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r13
  __m128i v13; // xmm0
  int v14; // eax
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r13
  size_t v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 *v29; // r14
  size_t v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // r12
  __m128i v38; // xmm0
  void *v39; // rax
  void *v40; // rax
  const __m128i *v41; // rcx
  void *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // rbx
  void *v49; // rax
  void *v50; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __int64 v59; // rbx
  __int64 v60; // r12
  __m128i v61; // xmm0
  void *v62; // rax
  void *v63; // rax
  _QWORD *v64; // [rsp+0h] [rbp-50h]
  size_t v65; // [rsp+0h] [rbp-50h]
  size_t v66; // [rsp+0h] [rbp-50h]
  size_t v67; // [rsp+0h] [rbp-50h]
  size_t v68; // [rsp+0h] [rbp-50h]
  size_t v69; // [rsp+0h] [rbp-50h]
  size_t n; // [rsp+8h] [rbp-48h]
  size_t nb; // [rsp+8h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-48h]
  size_t nd; // [rsp+8h] [rbp-48h]
  size_t nc; // [rsp+8h] [rbp-48h]
  size_t nf; // [rsp+8h] [rbp-48h]
  size_t ne; // [rsp+8h] [rbp-48h]
  const void **v77; // [rsp+10h] [rbp-40h]
  __int64 v78; // [rsp+10h] [rbp-40h]
  const __m128i *v79; // [rsp+10h] [rbp-40h]
  const __m128i *v80; // [rsp+10h] [rbp-40h]

  result = 0;
  if ( !*(_QWORD *)(a2 + 32) && (~(unsigned __int8)*(_WORD *)(a2 + 68) & 0x70) != 0 )
  {
    sub_5415B0(a1);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
    *(_WORD *)(a1 + 68) = *(_WORD *)(a2 + 68);
    *(_BYTE *)(a1 + 70) = *(_BYTE *)(a2 + 70);
    *(_BYTE *)(a1 + 71) = *(_BYTE *)(a2 + 71);
    if ( *(_QWORD *)(a2 + 40) )
    {
      v4 = qalloc_or_throw(24);
      v5 = *(_QWORD **)(a2 + 40);
      *(_QWORD *)v4 = 0;
      *(_OWORD *)(v4 + 8) = 0;
      v6 = v5[1];
      v64 = v5;
      if ( v6 )
      {
        v16 = qalloc_or_throw(48 * v6);
        *(_QWORD *)v4 = v16;
        v17 = v16;
        v18 = 0;
        *(_QWORD *)(v4 + 16) = v6;
        while ( 1 )
        {
          v19 = 48 * v18 + v17;
          v20 = *v64 + 48 * v18;
          *(_QWORD *)v19 = 0;
          *(_OWORD *)(v19 + 8) = 0;
          if ( *(_QWORD *)(v20 + 8) )
          {
            v77 = (const void **)v20;
            nb = *(_QWORD *)(v20 + 8);
            v21 = (void *)qalloc_or_throw(nb);
            *(_QWORD *)v19 = v21;
            *(_QWORD *)(v19 + 16) = nb;
            memcpy(v21, *v77, nb);
            v20 = (__int64)v77;
            *(_QWORD *)(v19 + 8) = nb;
          }
          *(_QWORD *)(v19 + 24) = 0;
          *(_OWORD *)(v19 + 32) = 0;
          if ( *(_QWORD *)(v20 + 32) )
          {
            v78 = v20;
            na = *(_QWORD *)(v20 + 32);
            v22 = (void *)qalloc_or_throw(na);
            *(_QWORD *)(v19 + 24) = v22;
            *(_QWORD *)(v19 + 40) = na;
            memcpy(v22, *(const void **)(v78 + 24), na);
            *(_QWORD *)(v19 + 32) = na;
          }
          if ( v6 == ++v18 )
            break;
          v17 = *(_QWORD *)v4;
        }
        *(_QWORD *)(v4 + 8) = v6;
      }
      *(_QWORD *)(a1 + 40) = v4;
    }
    v7 = *(_QWORD *)(a2 + 72);
    if ( v7 )
      *(_QWORD *)(a1 + 72) = qstrdup(v7);
    v8 = *(_BYTE *)(a1 + 70) & 0xF;
    switch ( v8 )
    {
      case 0xAu:
        copy_tinfo_t(a1);
        copy_tinfo_t(a1 + 8);
        copy_tinfo_t(a1 + 16);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
        *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 29);
        goto LABEL_13;
      case 0xBu:
        copy_tinfo_t(a1);
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
        goto LABEL_13;
      case 0xCu:
        v23 = qalloc_or_throw(96);
        sub_5427C0(v23, *(_QWORD *)a2);
        goto LABEL_27;
      case 0xDu:
        v9 = *(_BYTE *)(a1 + 70) & 0x30;
        if ( v9 == 32 )
        {
          v24 = qalloc_or_throw(56);
          v25 = *(_QWORD *)a2;
          *(_QWORD *)v24 = 0;
          v23 = v24;
          *(_OWORD *)(v24 + 8) = 0;
          v26 = *(_QWORD *)(v25 + 8);
          v65 = v26;
          if ( v26 )
          {
            v43 = *(_QWORD *)(v25 + 8);
            v44 = qalloc_or_throw(56 * v26);
            *(_QWORD *)v23 = v44;
            v45 = v44;
            v46 = 0;
            *(_QWORD *)(v23 + 16) = v43;
            while ( 1 )
            {
              v47 = 56 * v46 + v45;
              v48 = *(_QWORD *)v25 + 56 * v46;
              *(_QWORD *)v47 = 0;
              *(_OWORD *)(v47 + 8) = 0;
              if ( *(_QWORD *)(v48 + 8) )
              {
                nd = *(_QWORD *)(v48 + 8);
                v49 = (void *)qalloc_or_throw(nd);
                *(_QWORD *)v47 = v49;
                *(_QWORD *)(v47 + 16) = nd;
                memcpy(v49, *(const void **)v48, nd);
                *(_QWORD *)(v47 + 8) = nd;
              }
              *(_QWORD *)(v47 + 24) = 0;
              *(_OWORD *)(v47 + 32) = 0;
              if ( *(_QWORD *)(v48 + 32) )
              {
                nc = *(_QWORD *)(v48 + 32);
                v50 = (void *)qalloc_or_throw(nc);
                *(_QWORD *)(v47 + 24) = v50;
                *(_QWORD *)(v47 + 40) = nc;
                memcpy(v50, *(const void **)(v48 + 24), nc);
                *(_QWORD *)(v47 + 32) = nc;
              }
              ++v46;
              *(_QWORD *)(v47 + 48) = *(_QWORD *)(v48 + 48);
              if ( v65 == v46 )
                break;
              v45 = *(_QWORD *)v23;
            }
            *(_QWORD *)(v23 + 8) = v65;
          }
          *(_QWORD *)(v23 + 24) = 0;
          *(_OWORD *)(v23 + 32) = 0;
          v27 = *(_QWORD *)(v25 + 32);
          if ( v27 )
          {
            v42 = (void *)qalloc_or_throw(4 * v27);
            *(_QWORD *)(v23 + 24) = v42;
            *(_QWORD *)(v23 + 40) = v27;
            memcpy(v42, *(const void **)(v25 + 24), 4 * v27);
            *(_QWORD *)(v23 + 32) = v27;
          }
          *(_DWORD *)(v23 + 48) = *(_DWORD *)(v25 + 48);
          *(_BYTE *)(v23 + 52) = *(_BYTE *)(v25 + 52);
LABEL_27:
          *(_QWORD *)a1 = v23;
        }
        else if ( v9 > 0x20u )
        {
          if ( v9 == 48 )
          {
            if ( !under_debugger )
              interr(2979);
LABEL_63:
            BUG();
          }
        }
        else
        {
          v10 = qalloc_or_throw(56);
          v11 = *(_QWORD *)a2;
          *(_QWORD *)v10 = 0;
          v12 = v10;
          *(_OWORD *)(v10 + 8) = 0;
          n = *(_QWORD *)(v11 + 8);
          if ( n )
          {
            v31 = qalloc_or_throw(144 * n);
            *(_QWORD *)(v12 + 16) = n;
            v32 = 0;
            *(_QWORD *)v12 = v31;
            do
            {
              v37 = 144 * v32 + *(_QWORD *)v12;
              v41 = (const __m128i *)(*(_QWORD *)v11 + 144 * v32);
              v38 = _mm_loadu_si128(v41);
              *(_OWORD *)(v37 + 24) = 0;
              *(_QWORD *)(v37 + 16) = 0;
              *(__m128i *)v37 = v38;
              if ( v41[1].m128i_i64[1] )
              {
                v79 = v41;
                v68 = v41[1].m128i_u64[1];
                v39 = (void *)qalloc_or_throw(v68);
                *(_QWORD *)(v37 + 16) = v39;
                *(_QWORD *)(v37 + 32) = v68;
                memcpy(v39, (const void *)v79[1].m128i_i64[0], v68);
                v41 = v79;
                *(_QWORD *)(v37 + 24) = v68;
              }
              *(_QWORD *)(v37 + 40) = 0;
              *(_OWORD *)(v37 + 48) = 0;
              if ( v41[3].m128i_i64[0] )
              {
                v80 = v41;
                v69 = v41[3].m128i_u64[0];
                v40 = (void *)qalloc_or_throw(v69);
                *(_QWORD *)(v37 + 40) = v40;
                *(_QWORD *)(v37 + 56) = v69;
                memcpy(v40, (const void *)v80[2].m128i_i64[1], v69);
                v41 = v80;
                *(_QWORD *)(v37 + 48) = v69;
              }
              v67 = (size_t)v41;
              *(_QWORD *)(v37 + 64) = 0;
              copy_tinfo_t(v37 + 64);
              ++v32;
              v33 = *(_QWORD *)(v67 + 120);
              v34 = *(_QWORD *)(v67 + 128);
              *(__m128i *)(v37 + 72) = _mm_loadu_si128((const __m128i *)(v67 + 72));
              v35 = _mm_loadu_si128((const __m128i *)(v67 + 88));
              *(_QWORD *)(v37 + 120) = v33;
              LOBYTE(v33) = *(_BYTE *)(v67 + 136);
              *(__m128i *)(v37 + 88) = v35;
              v36 = _mm_loadu_si128((const __m128i *)(v67 + 104));
              *(_QWORD *)(v37 + 128) = v34;
              *(_BYTE *)(v37 + 136) = v33;
              *(__m128i *)(v37 + 104) = v36;
            }
            while ( n != v32 );
            *(_QWORD *)(v12 + 8) = n;
          }
          v13 = _mm_loadu_si128((const __m128i *)(v11 + 24));
          *(_QWORD *)(v12 + 40) = *(_QWORD *)(v11 + 40);
          v14 = *(_DWORD *)(v11 + 48);
          *(__m128i *)(v12 + 24) = v13;
          *(_DWORD *)(v12 + 48) = v14;
          *(_QWORD *)a1 = v12;
          v15 = *(_QWORD **)(a2 + 8);
          if ( v15 )
          {
            v28 = qalloc_or_throw(24);
            *(_QWORD *)v28 = 0;
            v29 = (__int64 *)v28;
            *(_OWORD *)(v28 + 8) = 0;
            v30 = v15[1];
            v66 = v30;
            if ( v30 )
            {
              v51 = v15[1];
              v52 = qalloc_or_throw(144 * v30);
              v29[2] = v51;
              v53 = v52;
              v54 = 0;
              for ( *v29 = v52; ; v53 = *v29 )
              {
                v59 = 144 * v54 + v53;
                v60 = *v15 + 144 * v54;
                v61 = _mm_loadu_si128((const __m128i *)v60);
                *(_QWORD *)(v59 + 16) = 0;
                *(_OWORD *)(v59 + 24) = 0;
                *(__m128i *)v59 = v61;
                if ( *(_QWORD *)(v60 + 24) )
                {
                  nf = *(_QWORD *)(v60 + 24);
                  v62 = (void *)qalloc_or_throw(nf);
                  *(_QWORD *)(v59 + 16) = v62;
                  *(_QWORD *)(v59 + 32) = nf;
                  memcpy(v62, *(const void **)(v60 + 16), nf);
                  *(_QWORD *)(v59 + 24) = nf;
                }
                *(_QWORD *)(v59 + 40) = 0;
                *(_OWORD *)(v59 + 48) = 0;
                if ( *(_QWORD *)(v60 + 48) )
                {
                  ne = *(_QWORD *)(v60 + 48);
                  v63 = (void *)qalloc_or_throw(ne);
                  *(_QWORD *)(v59 + 40) = v63;
                  *(_QWORD *)(v59 + 56) = ne;
                  memcpy(v63, *(const void **)(v60 + 40), ne);
                  *(_QWORD *)(v59 + 48) = ne;
                }
                *(_QWORD *)(v59 + 64) = 0;
                copy_tinfo_t(v59 + 64);
                v55 = *(_QWORD *)(v60 + 120);
                ++v54;
                v56 = *(_QWORD *)(v60 + 128);
                *(__m128i *)(v59 + 72) = _mm_loadu_si128((const __m128i *)(v60 + 72));
                v57 = _mm_loadu_si128((const __m128i *)(v60 + 88));
                *(_QWORD *)(v59 + 120) = v55;
                LOBYTE(v55) = *(_BYTE *)(v60 + 136);
                *(__m128i *)(v59 + 88) = v57;
                v58 = _mm_loadu_si128((const __m128i *)(v60 + 104));
                *(_QWORD *)(v59 + 128) = v56;
                *(_BYTE *)(v59 + 136) = v55;
                *(__m128i *)(v59 + 104) = v58;
                if ( v66 == v54 )
                  break;
              }
              v29[1] = v66;
            }
            *(_QWORD *)(a1 + 8) = v29;
          }
        }
LABEL_13:
        result = 1;
        break;
      case 0xEu:
        *(_WORD *)a1 = *(_WORD *)a2;
        *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
        goto LABEL_13;
      default:
        if ( v8 <= 9u )
          goto LABEL_13;
        if ( !under_debugger )
          interr(2980);
        goto LABEL_63;
    }
  }
  return result;
}
