__int64 __fastcall sub_682880(_QWORD *a1, unsigned int **a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // ebp
  unsigned int *v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // eax
  unsigned int v8; // r15d
  _BOOL4 v9; // eax
  unsigned int v10; // r10d
  unsigned __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 p_ptr; // rdi
  size_t v15; // rsi
  __int64 ph; // rbx
  void **v17; // r15
  __int64 v18; // r14
  void **v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  void **v22; // r14
  __int64 v24; // rax
  char *v25; // rdi
  __int64 v26; // r8
  char *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rbp
  void *v31; // rdi
  char *v32; // rbx
  char v33; // al
  char *v34; // rdx
  __int64 v35; // r14
  __int64 i; // r12
  char *v37; // rax
  void *v38; // rdi
  __int64 v39; // rdx
  _DWORD *v40; // r9
  int v41; // eax
  char *v42; // rdi
  char *v43; // r8
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r12
  void *v47; // rdi
  char *v48; // rbx
  char v49; // al
  char *v50; // rdx
  __int64 v51; // r15
  __int64 k; // r13
  char *v53; // rax
  void *v54; // rdi
  void *v55; // rdi
  void *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rbp
  void *v59; // rdi
  char *v60; // r12
  char v61; // cl
  char *v62; // r8
  __int64 v63; // r14
  __int64 j; // r13
  char *v65; // rax
  void *v66; // rdi
  unsigned int *v67; // rsi
  int v68; // eax
  unsigned int v69; // edx
  void *v70; // rdi
  void *v71; // rdi
  void *v72; // rdi
  void *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // r14
  __int64 v76; // r11
  unsigned __int64 v77; // r10
  __int64 v78; // rbx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  _DWORD *v82; // rdi
  __int64 v83; // rax
  void *v84; // rbx
  __m128i v85; // xmm1
  __m128i v86; // xmm3
  const char *v87; // rdx
  __m128i v88; // xmm2
  __m128i v89; // xmm4
  __int64 v90; // rax
  __int64 v91; // rax
  void *v92; // rcx
  _DWORD *v93; // rdi
  __m128i v94; // xmm0
  __int64 v95; // rsi
  void *v96; // rax
  void *v97; // rax
  __int64 *v98; // [rsp+10h] [rbp-B8h]
  unsigned int n; // [rsp+18h] [rbp-B0h]
  unsigned int nb; // [rsp+18h] [rbp-B0h]
  size_t na; // [rsp+18h] [rbp-B0h]
  size_t nf; // [rsp+18h] [rbp-B0h]
  size_t nd; // [rsp+18h] [rbp-B0h]
  __int64 nc; // [rsp+18h] [rbp-B0h]
  __int64 ne; // [rsp+18h] [rbp-B0h]
  int v106; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v107; // [rsp+20h] [rbp-A8h]
  __int64 v108; // [rsp+20h] [rbp-A8h]
  unsigned int v109; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v110; // [rsp+28h] [rbp-A0h]
  void *v111; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v112; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+28h] [rbp-A0h]
  __m128i v114; // [rsp+30h] [rbp-98h] BYREF
  __int64 v115; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v116; // [rsp+48h] [rbp-80h]
  unsigned __int64 v117; // [rsp+50h] [rbp-78h]
  char *v118; // [rsp+58h] [rbp-70h]
  unsigned __int64 v119; // [rsp+68h] [rbp-60h] BYREF
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v121; // [rsp+78h] [rbp-50h]
  unsigned __int64 v122; // [rsp+88h] [rbp-40h]

  v2 = (__int64)a1;
  v122 = __readfsqword(0x28u);
  v3 = (__int64)a2;
  v4 = sub_6781F0((__int64)a2);
  if ( v4 )
    return v4;
  v5 = *a2;
  v6 = **a2;
  if ( v6 != -1 && (*(_BYTE *)(a1[2] + 12LL) & 8) != 0 )
    v6 &= ~1u;
  v98 = *(__int64 **)(*a1 + 1648LL);
  LOBYTE(v7) = sub_3B8910((__int64)a1, v6);
  v8 = v7;
  if ( !(_BYTE)v7 )
    return 1;
  v9 = (*(_BYTE *)(a1[2] + 12LL) & 8) != 0;
  v10 = v6 + v9 + 1;
  if ( v10 < v5[1] )
  {
    ptr = nullptr;
    v121 = 0;
    v106 = v6 + v9 + 1;
    v119 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v5[1])).m128i_u64[0];
    v24 = sub_67D7D0(a1, &ptr, &v119);
    v25 = (char *)ptr;
    v11 = &v119;
    v26 = v24;
    v10 = v106;
    if ( v24 )
    {
      v27 = (char *)ptr;
      v28 = 0;
      while ( v5[1] >= *(_DWORD *)(*(_QWORD *)v27 + 4LL) )
      {
        ++v28;
        v27 += 96;
        if ( v26 == v28 )
          goto LABEL_68;
      }
      if ( ptr )
      {
        v29 = v121;
        if ( (_QWORD)v121 )
        {
          v30 = 0;
          do
          {
            v32 = &v25[96 * v30];
            v33 = v32[89];
            if ( v33 == 2 )
            {
              v34 = *((char **)v32 + 3);
              if ( v34 )
              {
                v35 = *((_QWORD *)v32 + 4);
                if ( v35 )
                {
                  for ( i = 0; i != v35; ++i )
                  {
                    v37 = &v34[40 * i];
                    v38 = *(void **)v37;
                    if ( *(_QWORD *)v37 )
                    {
                      *((_QWORD *)v37 + 1) = 0;
                      qfree(v38);
                      v34 = *((char **)v32 + 3);
                    }
                  }
                }
                *((_QWORD *)v32 + 4) = 0;
                qfree(v34);
              }
            }
            else if ( v33 == 1 )
            {
              v72 = *((void **)v32 + 7);
              if ( v72 )
              {
                *((_QWORD *)v32 + 8) = 0;
                qfree(v72);
              }
              v73 = *((void **)v32 + 3);
              if ( v73 )
              {
                *((_QWORD *)v32 + 4) = 0;
                qfree(v73);
              }
            }
            v31 = *(void **)v32;
            v32[89] = 0;
            if ( v31 )
            {
              *((_QWORD *)v32 + 1) = 0;
              qfree(v31);
            }
            ++v30;
            v25 = (char *)ptr;
          }
          while ( v29 != v30 );
        }
        *(_QWORD *)&v121 = 0;
        qfree(v25);
      }
      return 7;
    }
LABEL_68:
    if ( ptr )
    {
      v57 = v121;
      if ( (_QWORD)v121 )
      {
        v109 = v4;
        n = v6;
        v58 = 0;
        v114.m128i_i64[0] = v2;
        v115 = v3;
        v116 = &v119;
        do
        {
          v60 = &v25[96 * v58];
          v61 = v60[89];
          if ( v61 == 2 )
          {
            v62 = *((char **)v60 + 3);
            if ( v62 )
            {
              v63 = *((_QWORD *)v60 + 4);
              if ( v63 )
              {
                for ( j = 0; j != v63; ++j )
                {
                  v65 = &v62[40 * j];
                  v66 = *(void **)v65;
                  if ( *(_QWORD *)v65 )
                  {
                    *((_QWORD *)v65 + 1) = 0;
                    qfree(v66);
                    v62 = *((char **)v60 + 3);
                  }
                }
              }
              *((_QWORD *)v60 + 4) = 0;
              qfree(v62);
            }
          }
          else if ( v61 == 1 )
          {
            v70 = *((void **)v60 + 7);
            if ( v70 )
            {
              *((_QWORD *)v60 + 8) = 0;
              qfree(v70);
            }
            v71 = *((void **)v60 + 3);
            if ( v71 )
            {
              *((_QWORD *)v60 + 4) = 0;
              qfree(v71);
            }
          }
          v59 = *(void **)v60;
          v60[89] = 0;
          if ( v59 )
          {
            *((_QWORD *)v60 + 1) = 0;
            qfree(v59);
          }
          ++v58;
          v25 = (char *)ptr;
        }
        while ( v57 != v58 );
        v6 = n;
        v10 = v106;
        v4 = v109;
        v2 = v114.m128i_i64[0];
        v3 = v115;
        v11 = v116;
      }
      v107 = v11;
      nb = v10;
      *(_QWORD *)&v121 = 0;
      qfree(v25);
      v11 = v107;
      v10 = nb;
    }
  }
  else
  {
    v11 = &v119;
  }
  ptr = nullptr;
  v119 = __PAIR64__(v10, v6);
  v121 = 0;
  v12 = sub_67D7D0(v2, &ptr, v11);
  v13 = v12;
  if ( *(_BYTE *)(v3 + 89) != 2 )
    goto LABEL_45;
  if ( !v12 )
  {
    p_ptr = (unsigned __int64)&ptr;
    v15 = v3;
    sub_67CC70((__int64 *)&ptr, (void **)v3);
    goto LABEL_11;
  }
  if ( *(_QWORD *)(v3 + 8)
    && (v39 = *(_QWORD *)(v3 + 32)) != 0
    && (v40 = *(_DWORD **)v3, v41 = v121 - 1, (int)v121 - 1 >= 0) )
  {
    v42 = (char *)ptr;
    v43 = (char *)ptr + 96 * v41;
    v44 = (__int64)&v43[-96 * v41 - 96];
    while ( v43[89] != 2 || *v40 != **(_DWORD **)v43 || v40[1] != *(_DWORD *)(*(_QWORD *)v43 + 4LL) )
    {
      v43 -= 96;
      if ( v43 == (char *)v44 )
        goto LABEL_45;
    }
    v74 = 40 * v39;
    v75 = *(_QWORD *)(v3 + 24);
    v118 = v43 + 24;
    v108 = v75 + v74;
    if ( v75 == v75 + v74 )
    {
      v45 = v121;
      if ( !ptr )
        return v4;
      goto LABEL_50;
    }
    LOBYTE(p_ptr) = 0;
    do
    {
      v15 = *((_QWORD *)v43 + 4);
      v76 = v75;
      v75 += 40;
      v77 = *(_QWORD *)(v75 - 32);
      if ( (int)v15 <= 0 )
      {
LABEL_124:
        v84 = nullptr;
        if ( v77 )
        {
          v114.m128i_i64[0] = (__int64)v43;
          v112 = v77;
          nc = 8 * v77;
          v84 = (void *)qalloc_or_throw(8 * v77, (const char *)v15);
          memcpy(v84, *(const void **)(v75 - 40), nc);
          v43 = (char *)v114.m128i_i64[0];
          v77 = v112;
          v15 = *(_QWORD *)(v114.m128i_i64[0] + 32);
        }
        v85 = _mm_cvtsi32_si128(*(_DWORD *)(v75 - 16));
        v86 = _mm_cvtsi32_si128(*(_DWORD *)(v75 - 12));
        v87 = (const char *)(v15 + 1);
        v88 = _mm_cvtsi32_si128(*(_DWORD *)(v75 - 8));
        v89 = _mm_cvtsi32_si128(*(_DWORD *)(v75 - 4));
        v90 = *((_QWORD *)v43 + 3);
        if ( *((_QWORD *)v43 + 5) < v15 + 1 )
        {
          v95 = *((_QWORD *)v43 + 3);
          v117 = v77;
          nd = (size_t)v43;
          LODWORD(v116) = _mm_cvtsi128_si32(v86);
          LODWORD(v115) = _mm_cvtsi128_si32(v85);
          v114.m128i_i32[0] = _mm_cvtsi128_si32(v89);
          v90 = qvector_reserve(v118, v95, v87, 40);
          v43 = (char *)nd;
          v77 = v117;
          v86 = _mm_cvtsi32_si128((unsigned int)v116);
          v85 = _mm_cvtsi32_si128(v115);
          v15 = *(_QWORD *)(nd + 32);
          v89 = _mm_cvtsi32_si128(v114.m128i_u32[0]);
          *(_QWORD *)(nd + 24) = v90;
          v88 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v88));
        }
        v91 = v90 + 40 * v15;
        *(__m128i *)(v91 + 8) = _mm_unpacklo_epi64((__m128i)v77, (__m128i)v77);
        *(_QWORD *)v91 = v84;
        *(__m128i *)(v91 + 24) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v85, v86), _mm_unpacklo_epi32(v88, v89));
        ++*((_QWORD *)v43 + 4);
      }
      else
      {
        v78 = *((_QWORD *)v43 + 3);
        v110 = p_ptr;
        v79 = v76;
        na = *((_QWORD *)v43 + 4);
        v80 = *(_QWORD *)(v76 + 32);
        v81 = v78 + 40LL * (unsigned int)(v15 - 1) + 40;
        while ( 1 )
        {
          if ( *(_QWORD *)(v78 + 32) == v80
            && *(_QWORD *)(v78 + 8) == v77
            && *(_QWORD *)(v78 + 24) == *(_QWORD *)(v79 + 24) )
          {
            if ( (int)v77 <= 0 )
            {
LABEL_138:
              p_ptr = v110;
              goto LABEL_130;
            }
            v114.m128i_i64[0] = v79;
            v82 = *(_DWORD **)v78;
            v83 = 0;
            v15 = *(_QWORD *)(v75 - 40);
            while ( v82[2 * v83] == *(_DWORD *)(v15 + 8 * v83) && v82[2 * v83 + 1] == *(_DWORD *)(v15 + 8 * v83 + 4) )
            {
              if ( v83 == (_DWORD)v77 - 1 )
                goto LABEL_138;
              ++v83;
            }
            v79 = v114.m128i_i64[0];
          }
          if ( *(_DWORD *)(v78 + 36) == *(_DWORD *)(v75 - 4) )
            break;
          v78 += 40;
          if ( v78 == v81 )
          {
            v15 = na;
            goto LABEL_124;
          }
        }
        v92 = nullptr;
        if ( v77 )
        {
          v114.m128i_i64[0] = (__int64)v43;
          v113 = v77;
          ne = 8 * v77;
          v96 = (void *)qalloc_or_throw(8 * v77, (const char *)v15, 8 * v77, 0, v43, v79);
          v15 = *(_QWORD *)(v75 - 40);
          v97 = memcpy(v96, (const void *)v15, ne);
          v43 = (char *)v114.m128i_i64[0];
          v77 = v113;
          v92 = v97;
        }
        v93 = *(_DWORD **)v78;
        v94 = _mm_unpacklo_epi64((__m128i)v77, (__m128i)v77);
        if ( *(_QWORD *)v78 )
        {
          *(_QWORD *)(v78 + 8) = 0;
          v111 = v92;
          nf = (size_t)v43;
          v114 = v94;
          qfree(v93);
          v94 = _mm_load_si128(&v114);
          v92 = v111;
          v43 = (char *)nf;
        }
        *(_QWORD *)v78 = v92;
        *(__m128i *)(v78 + 8) = v94;
        *(_DWORD *)(v78 + 24) = *(_DWORD *)(v75 - 16);
        *(_DWORD *)(v78 + 28) = *(_DWORD *)(v75 - 12);
        *(_DWORD *)(v78 + 32) = *(_DWORD *)(v75 - 8);
        *(_DWORD *)(v78 + 36) = *(_DWORD *)(v75 - 4);
      }
      p_ptr = v8;
LABEL_130:
      ;
    }
    while ( v108 != v75 );
    if ( !(_BYTE)p_ptr )
      goto LABEL_47;
  }
  else
  {
LABEL_45:
    p_ptr = (unsigned __int64)&ptr;
    v15 = v3;
    sub_67CC70((__int64 *)&ptr, (void **)v3);
    if ( v13 == -1 )
      goto LABEL_46;
  }
LABEL_11:
  ph = get_ph(p_ptr, (const char *)v15);
  v17 = (void **)ptr;
  v18 = 96 * v121;
  v19 = (void **)((char *)ptr + 96 * v121);
  if ( ptr == v19 )
    goto LABEL_46;
  v20 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 5);
  if ( !v20 )
  {
    sub_681FC0((void **)ptr, (void **)ptr + 12 * v121, -2, ph);
    goto LABEL_105;
  }
  _BitScanReverse64(&v21, v20);
  sub_681FC0((void **)ptr, (void **)ptr + 12 * v121, 2LL * (int)v21, ph);
  if ( v18 <= 1536 )
  {
LABEL_105:
    sub_6811C0((unsigned __int64)v17, v19, ph);
    goto LABEL_46;
  }
  v22 = v17 + 192;
  sub_6811C0((unsigned __int64)v17, v17 + 192, ph);
  do
  {
    sub_680F20(v22, ph);
    v22 += 12;
  }
  while ( v19 != v22 );
LABEL_46:
  v4 = sub_67BEB0(v98, (__int64 *)&ptr);
  if ( v4 )
  {
LABEL_47:
    v42 = (char *)ptr;
    goto LABEL_48;
  }
  sub_67B220(v2, v3);
  v42 = (char *)ptr;
  if ( (_QWORD)v121 )
  {
    if ( *((_BYTE *)ptr + 89) == 1 && *((_QWORD *)ptr + 1) == 1 && !*((_QWORD *)ptr + 8) )
    {
      v67 = *(unsigned int **)ptr;
      v68 = **(_DWORD **)ptr;
      if ( v68 != -1 )
      {
        v69 = v67[1];
        if ( v69 != -1 && v68 != v69 )
        {
          sub_67FBD0(v98, v67);
          v42 = (char *)ptr;
        }
      }
    }
  }
  v98[8] = -1;
LABEL_48:
  if ( v42 )
  {
    v45 = v121;
    if ( !(_QWORD)v121 )
    {
LABEL_67:
      *(_QWORD *)&v121 = 0;
      qfree(v42);
      return v4;
    }
LABEL_50:
    v46 = 0;
    do
    {
      v48 = &v42[96 * v46];
      v49 = v48[89];
      if ( v49 == 2 )
      {
        v50 = *((char **)v48 + 3);
        if ( v50 )
        {
          v51 = *((_QWORD *)v48 + 4);
          if ( v51 )
          {
            for ( k = 0; k != v51; ++k )
            {
              v53 = &v50[40 * k];
              v54 = *(void **)v53;
              if ( *(_QWORD *)v53 )
              {
                *((_QWORD *)v53 + 1) = 0;
                qfree(v54);
                v50 = *((char **)v48 + 3);
              }
            }
          }
          *((_QWORD *)v48 + 4) = 0;
          qfree(v50);
        }
      }
      else if ( v49 == 1 )
      {
        v55 = *((void **)v48 + 7);
        if ( v55 )
        {
          *((_QWORD *)v48 + 8) = 0;
          qfree(v55);
        }
        v56 = *((void **)v48 + 3);
        if ( v56 )
        {
          *((_QWORD *)v48 + 4) = 0;
          qfree(v56);
        }
      }
      v47 = *(void **)v48;
      v48[89] = 0;
      if ( v47 )
      {
        *((_QWORD *)v48 + 1) = 0;
        qfree(v47);
      }
      ++v46;
      v42 = (char *)ptr;
    }
    while ( v46 != v45 );
    goto LABEL_67;
  }
  return v4;
}

