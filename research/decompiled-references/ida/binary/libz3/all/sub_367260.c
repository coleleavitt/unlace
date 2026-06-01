__m128i *__fastcall sub_367260(__int64 a1, __m128i *a2, __int64 a3, int a4)
{
  __m128i *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __m128i *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdi
  __m128i *v10; // rax
  __m128i *v11; // r12
  __int64 *v12; // r13
  __m128i *v13; // r8
  __int64 v14; // r15
  __int64 v15; // rax
  __m128i *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rcx
  int v22; // r13d
  unsigned int v23; // r9d
  unsigned int v24; // edi
  int v25; // r11d
  size_t v26; // r14
  __m128i *v27; // rbx
  __int64 v28; // r11
  __m128i *v29; // r10
  __m128i *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r9d
  __m128i **v36; // r11
  __m128i **i; // r13
  __m128i *v38; // r10
  __int64 v39; // rax
  __m128i *v40; // r8
  __m128i *j; // rax
  __int64 *v42; // rax
  __m128i *v43; // rax
  __m128i *v44; // r10
  __m128i *v45; // rdx
  const __m128i *v46; // r9
  const __m128i *v47; // r13
  __int64 v48; // rdx
  __m128i *v49; // rsi
  __m128i *v50; // rdx
  __m128i v51; // xmm0
  _QWORD *v52; // rax
  __m128i *v53; // rdx
  int v54; // r14d
  __m128i *v55; // rax
  __m128i *v56; // r13
  unsigned int v57; // r10d
  __int64 v58; // rsi
  unsigned int v59; // ecx
  unsigned int v60; // r14d
  size_t v61; // r15
  __m128i *v62; // r9
  __int64 v63; // rax
  __m128i *v64; // rdi
  __m128i *k; // rax
  __int64 v66; // rdx
  char v67; // al
  __int64 v68; // rcx
  unsigned int v69; // r11d
  __m128i *v70; // r9
  int v71; // esi
  __int64 v72; // r14
  __m128i *v73; // rdi
  __m128i *result; // rax
  __int64 *v75; // r11
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r14
  __m128i *v80; // rax
  unsigned int v81; // r11d
  __m128i *v82; // r8
  __m128i *v83; // r9
  __m128i *v84; // rax
  __m128i *v85; // r10
  __m128i *m; // rax
  __int64 v87; // rdx
  __m128i *v88; // rsi
  __int64 *v89; // rdx
  __int64 v90; // rsi
  __int64 *v91; // rdx
  unsigned int v92; // eax
  char v93; // al
  unsigned int v94; // eax
  __int64 v95; // rdi
  __m128i *v96; // rax
  __m128i *v97; // r9
  char *v98; // rax
  __int64 v99; // rdx
  __m128i *v100; // rcx
  __int64 *v101; // rdx
  unsigned int v102; // [rsp+8h] [rbp-B0h]
  unsigned int v103; // [rsp+Ch] [rbp-ACh]
  int v104; // [rsp+10h] [rbp-A8h]
  char v105; // [rsp+10h] [rbp-A8h]
  unsigned int v106; // [rsp+10h] [rbp-A8h]
  __m128i *v107; // [rsp+10h] [rbp-A8h]
  int v108; // [rsp+18h] [rbp-A0h]
  unsigned int v109; // [rsp+18h] [rbp-A0h]
  __int64 v110; // [rsp+18h] [rbp-A0h]
  unsigned int v111; // [rsp+20h] [rbp-98h]
  __int64 v112; // [rsp+20h] [rbp-98h]
  __m128i *v113; // [rsp+20h] [rbp-98h]
  __int64 v114; // [rsp+20h] [rbp-98h]
  __m128i *v115; // [rsp+20h] [rbp-98h]
  __int64 v117; // [rsp+30h] [rbp-88h]
  __m128i *v118; // [rsp+30h] [rbp-88h]
  __m128i *v119; // [rsp+38h] [rbp-80h]
  __m128i *v120; // [rsp+38h] [rbp-80h]
  __int64 *v122; // [rsp+40h] [rbp-78h]
  __m128i *v123; // [rsp+40h] [rbp-78h]
  int v125; // [rsp+50h] [rbp-68h]
  __m128i *v126; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v127; // [rsp+68h] [rbp-50h]
  unsigned int v128; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v129; // [rsp+70h] [rbp-48h]

  v4 = a2;
  v5 = sub_186B270(0x80u);
  v6 = a2->m128i_u32[2];
  *(_QWORD *)v5 = 0;
  v7 = (__m128i *)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v8 = 8 * v6;
  *(_QWORD *)(v5 + 16) = 0;
  v9 = 8 * v6;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  v102 = v6;
  v10 = (__m128i *)sub_186B270(8 * v6);
  v11 = v10;
  if ( (_DWORD)v6 )
  {
    a2 = nullptr;
    v9 = (__int64)v10;
    memset(v10, 0, 8 * v6);
  }
  v12 = (__int64 *)v4->m128i_i64[0];
  v13 = (__m128i *)((char *)v11 + v8);
  v14 = v4->m128i_i64[0] + v8;
  if ( v4->m128i_i64[0] != v14 )
  {
    do
    {
      while ( (unsigned __int64)*v12 <= 1 )
      {
        if ( (__int64 *)v14 == ++v12 )
          goto LABEL_12;
      }
      v15 = 8LL * (*(_DWORD *)(*v12 + 12) & (v102 - 1));
      v16 = (__m128i *)((char *)v11 + v15);
      if ( v8 == v15 )
      {
LABEL_61:
        if ( v11 == v16 )
        {
LABEL_199:
          sub_1872CE0("");
          sub_1873130(114, 181);
        }
        v17 = (__int64 *)v11;
        while ( *v17 )
        {
          if ( v16 == (__m128i *)++v17 )
            goto LABEL_199;
        }
      }
      else
      {
        v17 = &v11->m128i_i64[(unsigned __int64)v15 / 8];
        while ( *v17 )
        {
          if ( v13 == (__m128i *)++v17 )
            goto LABEL_61;
        }
      }
      v18 = *v12++;
      *v17 = v18;
    }
    while ( (__int64 *)v14 != v12 );
  }
LABEL_12:
  v103 = v4->m128i_u32[3];
  v19 = v11;
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      v20 = (__int64 *)v19;
      if ( v19->m128i_i64[0] > 1uLL )
        break;
      v19 = (__m128i *)((char *)v19 + 8);
      if ( v13 == v19 )
        goto LABEL_210;
    }
    if ( v13 != v19 )
    {
      v108 = 0;
      v21 = v19->m128i_i64[0];
      v22 = 0;
      v23 = 8;
      while ( 1 )
      {
        v24 = 2 * v23;
        v104 = 2 * v23;
        if ( 3 * v23 >= 4 * (v22 + v108) )
        {
          v25 = v23 - 1;
          v26 = 16LL * v23;
          v27 = &v7[v26 / 0x10];
          goto LABEL_20;
        }
        v119 = v13;
        v117 = v21;
        v26 = 16LL * v24;
        v111 = v23;
        v43 = (__m128i *)sub_186B270(v26);
        v21 = v117;
        v44 = v43;
        v13 = v119;
        v45 = &v43[v26 / 0x10];
        if ( v24 )
          break;
        v27 = v43;
        v25 = -1;
        v46 = &v7[v111];
        if ( v7 != v46 )
          goto LABEL_78;
LABEL_86:
        if ( v7 )
        {
          v125 = v25;
          v120 = v44;
          v118 = v13;
          v112 = v21;
          sub_186B220(v7);
          v25 = v125;
          v44 = v120;
          v13 = v118;
          v21 = v112;
        }
        v23 = v104;
        v7 = v44;
        v22 = 0;
LABEL_20:
        v9 = *(unsigned int *)(v21 + 12);
        v28 = 16LL * ((unsigned int)v9 & v25);
        v29 = &v7[(unsigned __int64)v28 / 0x10];
        if ( v28 == v26 )
        {
          a2 = nullptr;
LABEL_28:
          if ( v29 != v7 )
          {
            v30 = v7;
            do
            {
              while ( 1 )
              {
                v32 = v30->m128i_i64[0];
                if ( v30->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v32 + 12) == (_DWORD)v9 && v32 == v21 )
                  goto LABEL_95;
                if ( v29 == ++v30 )
                  goto LABEL_36;
              }
              if ( !v32 )
                goto LABEL_66;
              a2 = v30++;
            }
            while ( v29 != v30 );
          }
LABEL_36:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v30 = &v7[(unsigned __int64)v28 / 0x10];
        a2 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = v30->m128i_i64[0];
            if ( v30->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v31 + 12) == (_DWORD)v9 && v31 == v21 )
            {
LABEL_95:
              v30->m128i_i64[0] = v21;
              v30->m128i_i32[2] = 0;
              goto LABEL_69;
            }
            if ( ++v30 == v27 )
              goto LABEL_28;
          }
          if ( !v31 )
            break;
          a2 = v30++;
          if ( v30 == v27 )
            goto LABEL_28;
        }
LABEL_66:
        if ( a2 )
          --v22;
        else
          a2 = v30;
        a2->m128i_i64[0] = v21;
        a2->m128i_i32[2] = 0;
        ++v108;
LABEL_69:
        v42 = v20 + 1;
        if ( v20 + 1 != (__int64 *)v13 )
        {
          while ( 1 )
          {
            v21 = *v42;
            v20 = v42;
            if ( (unsigned __int64)*v42 > 1 )
              break;
            if ( v13 == (__m128i *)++v42 )
              goto LABEL_37;
          }
          if ( v13 != (__m128i *)v42 )
            continue;
        }
        goto LABEL_37;
      }
      do
      {
        v43->m128i_i64[0] = 0;
        ++v43;
        v43[-1].m128i_i32[2] = 0;
      }
      while ( v45 != v43 );
      v27 = &v44[v26 / 0x10];
      v46 = &v7[v111];
      v25 = v104 - 1;
LABEL_78:
      v47 = v7;
      do
      {
        while ( v47->m128i_i64[0] <= 1uLL )
        {
          if ( ++v47 == v46 )
            goto LABEL_86;
        }
        v48 = 16LL * (*(_DWORD *)(v47->m128i_i64[0] + 12) & (unsigned int)v25);
        v49 = &v44[(unsigned __int64)v48 / 0x10];
        if ( v26 == v48 )
        {
LABEL_89:
          if ( v44 == v49 )
          {
LABEL_94:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v50 = v44;
          while ( v50->m128i_i64[0] )
          {
            if ( v49 == ++v50 )
              goto LABEL_94;
          }
        }
        else
        {
          v50 = &v44[(unsigned __int64)v48 / 0x10];
          while ( v50->m128i_i64[0] )
          {
            if ( v27 == ++v50 )
              goto LABEL_89;
          }
        }
        v51 = _mm_loadu_si128(v47++);
        *v50 = v51;
      }
      while ( v47 != v46 );
      goto LABEL_86;
    }
  }
LABEL_210:
  v27 = v7 + 8;
  v26 = 128;
  v23 = 8;
LABEL_37:
  v33 = *(_QWORD **)a3;
  v34 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 != v34 )
  {
    while ( *v33 <= 1u )
    {
      v33 += 2;
      if ( (_QWORD *)v34 == v33 )
        goto LABEL_103;
    }
    if ( (_QWORD *)v34 != v33 )
    {
      v35 = v23 - 1;
      do
      {
        v36 = (__m128i **)v33[1];
        if ( v36 )
        {
          for ( i = &v36[*((unsigned int *)v36 - 1)]; i != v36; ++j->m128i_i32[2] )
          {
            v38 = *v36;
            v9 = (*v36)->m128i_u32[3];
            v39 = 16LL * (v35 & (*v36)->m128i_i32[3]);
            v40 = &v7[(unsigned __int64)v39 / 0x10];
            if ( v39 == v26 )
            {
LABEL_53:
              if ( v40 != v7 )
              {
                for ( j = v7; v40 != j; ++j )
                {
                  a2 = (__m128i *)j->m128i_i64[0];
                  if ( j->m128i_i64[0] > 1uLL )
                  {
                    if ( a2->m128i_i32[3] == (_DWORD)v9 && v38 == a2 )
                      goto LABEL_97;
                  }
                  else if ( !a2 )
                  {
                    break;
                  }
                }
              }
LABEL_231:
              BUG();
            }
            j = &v7[(unsigned __int64)v39 / 0x10];
            while ( 1 )
            {
              while ( 1 )
              {
                a2 = (__m128i *)j->m128i_i64[0];
                if ( j->m128i_i64[0] > 1uLL )
                  break;
                if ( !a2 )
                  goto LABEL_231;
                if ( ++j == v27 )
                  goto LABEL_53;
              }
              if ( a2->m128i_i32[3] == (_DWORD)v9 && v38 == a2 )
                break;
              if ( ++j == v27 )
                goto LABEL_53;
            }
LABEL_97:
            ++v36;
          }
        }
        v52 = v33 + 2;
        if ( (_QWORD *)v34 == v33 + 2 )
          break;
        while ( 1 )
        {
          v33 = v52;
          if ( *v52 > 1u )
            break;
          v52 += 2;
          if ( (_QWORD *)v34 == v52 )
            goto LABEL_103;
        }
      }
      while ( (_QWORD *)v34 != v52 );
    }
  }
LABEL_103:
  v53 = v7;
  if ( v7 == v27 )
  {
    v94 = sub_180B130(v9);
    if ( v94 <= 2 )
    {
LABEL_152:
      result = (__m128i *)sub_186B220(v11);
      goto LABEL_153;
    }
    goto LABEL_203;
  }
  while ( v53->m128i_i64[0] <= 1uLL )
  {
    if ( ++v53 == v27 )
      goto LABEL_113;
  }
  v54 = 0;
  if ( v53 != v27 )
  {
    do
    {
      v55 = v53 + 1;
      v54 += v53->m128i_i32[2] < 2u;
      if ( &v53[1] == v27 )
        break;
      while ( 1 )
      {
        v53 = v55;
        if ( v55->m128i_i64[0] > 1uLL )
          break;
        if ( v27 == ++v55 )
          goto LABEL_113;
      }
    }
    while ( v55 != v27 );
  }
LABEL_113:
  if ( (unsigned int)sub_180B130(v9) > 2 )
  {
LABEL_203:
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(v9, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v95 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v95, "\n");
    }
    else
    {
      sub_180B150(v9, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  if ( v7 == v27 )
    goto LABEL_152;
  v56 = v7;
  while ( v56->m128i_i64[0] <= 1uLL )
  {
    if ( ++v56 == v27 )
      goto LABEL_152;
  }
  if ( v56 == v27 )
    goto LABEL_152;
  v57 = 0;
  do
  {
    if ( v56->m128i_i32[2] > 1u )
    {
      v58 = v56->m128i_i64[0];
      v59 = *(_DWORD *)(v56->m128i_i64[0] + 12);
      v60 = v102 - 1;
      v61 = 8LL * v102;
      v62 = (__m128i *)((char *)v11 + v61);
      v63 = 8LL * ((v102 - 1) & v59);
      v64 = (__m128i *)((char *)v11 + v63);
      if ( v63 != v61 )
      {
        for ( k = (__m128i *)((char *)v11 + v63); v62 != k; k = (__m128i *)((char *)k + 8) )
        {
          v66 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v66 + 12) == v59 && v58 == v66 )
            {
LABEL_190:
              v91 = &k->m128i_i64[1];
              if ( v62 == (__m128i *)&k->m128i_u64[1] )
                v91 = (__int64 *)v11;
              --v103;
              if ( *v91 )
              {
                k->m128i_i64[0] = 1;
                v92 = 64;
                ++v57;
                if ( v103 >= 0x40 )
                  v92 = v103;
                if ( v92 < v57 )
                {
                  v106 = v57;
                  v93 = sub_186AF10(v64);
                  v62 = (__m128i *)((char *)v11 + v61);
                  if ( v93 )
                  {
                    v58 = v56->m128i_i64[0];
                    v57 = v106;
                  }
                  else
                  {
                    v96 = (__m128i *)sub_186B270(v61);
                    v97 = (__m128i *)((char *)v11 + v61);
                    v107 = v96;
                    if ( v102 )
                    {
                      memset(v96, 0, 8LL * v60 + 8);
                      v97 = (__m128i *)((char *)v11 + v61);
                    }
                    v98 = (char *)v11;
                    if ( v97 != v11 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v98 > 1u )
                        {
                          v99 = 8LL * (*(_DWORD *)(*(_QWORD *)v98 + 12LL) & v60);
                          v100 = (__m128i *)((char *)v107 + v99);
                          if ( v61 == v99 )
                          {
LABEL_222:
                            if ( v107 == v100 )
                            {
LABEL_230:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v101 = (__int64 *)v107;
                            while ( *v101 )
                            {
                              if ( v100 == (__m128i *)++v101 )
                                goto LABEL_230;
                            }
                          }
                          else
                          {
                            v101 = &v107->m128i_i64[(unsigned __int64)v99 / 8];
                            while ( *v101 )
                            {
                              if ( &v107->m128i_i8[v61] == (__int8 *)++v101 )
                                goto LABEL_222;
                            }
                          }
                          *v101 = *(_QWORD *)v98;
                        }
                        v98 += 8;
                      }
                      while ( v97 != (__m128i *)v98 );
                    }
                    if ( v11 )
                      sub_186B220(v11);
                    v58 = v56->m128i_i64[0];
                    v62 = (__m128i *)((char *)v107 + v61);
                    v57 = 0;
                    v11 = v107;
                  }
                }
              }
              else
              {
                k->m128i_i64[0] = 0;
              }
              goto LABEL_128;
            }
          }
          else if ( !v66 )
          {
            goto LABEL_128;
          }
        }
      }
      if ( v64 != v11 )
      {
        for ( k = v11; v64 != k; k = (__m128i *)((char *)k + 8) )
        {
          v78 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v78 + 12) == v59 && v58 == v78 )
              goto LABEL_190;
          }
          else if ( !v78 )
          {
            break;
          }
        }
      }
LABEL_128:
      v113 = v62;
      v126 = v11;
      v127 = v102;
      v128 = v103;
      v129 = v57;
      v109 = v57;
      v67 = sub_364320(a1, (__int64 **)&v126, v58, a4 + 1);
      v57 = v109;
      v105 = v67;
      v68 = v56->m128i_i64[0];
      v69 = 2 * v102;
      v70 = v113;
      if ( 3 * v102 < 4 * (v109 + v103) )
      {
        v79 = v69;
        v122 = (__int64 *)v113;
        v61 = 8LL * v69;
        v114 = v56->m128i_i64[0];
        v102 *= 2;
        v80 = (__m128i *)sub_186B270(v61);
        v81 = v102;
        v68 = v114;
        v82 = v80;
        v83 = (__m128i *)v122;
        if ( v102 )
        {
          v84 = (__m128i *)memset(v80, 0, 8 * v79);
          v68 = v114;
          v83 = (__m128i *)v122;
          v81 = v102;
          v82 = v84;
        }
        v60 = v81 - 1;
        v85 = (__m128i *)((char *)v82 + v61);
        for ( m = v11; m != v83; *v89 = v90 )
        {
          while ( m->m128i_i64[0] <= 1uLL )
          {
            m = (__m128i *)((char *)m + 8);
            if ( m == v83 )
              goto LABEL_180;
          }
          v87 = 8LL * (*(_DWORD *)(m->m128i_i64[0] + 12) & v60);
          v88 = (__m128i *)((char *)v82 + v87);
          if ( v61 == v87 )
          {
LABEL_183:
            if ( v82 == v88 )
            {
LABEL_188:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v89 = (__int64 *)v82;
            while ( *v89 )
            {
              if ( v88 == (__m128i *)++v89 )
                goto LABEL_188;
            }
          }
          else
          {
            v89 = &v82->m128i_i64[(unsigned __int64)v87 / 8];
            while ( *v89 )
            {
              if ( v85 == (__m128i *)++v89 )
                goto LABEL_183;
            }
          }
          v90 = m->m128i_i64[0];
          m = (__m128i *)((char *)m + 8);
        }
LABEL_180:
        if ( v11 )
        {
          v123 = (__m128i *)((char *)v82 + v61);
          v115 = v82;
          v110 = v68;
          sub_186B220(v11);
          v85 = v123;
          v82 = v115;
          v68 = v110;
        }
        v70 = v85;
        v11 = v82;
        v57 = 0;
      }
      v71 = *(_DWORD *)(v68 + 12);
      v72 = v71 & v60;
      v73 = (__m128i *)((char *)v11 + 8 * v72);
      if ( 8 * v72 == v61 )
      {
        v75 = nullptr;
LABEL_137:
        if ( v73 != v11 )
        {
          result = v11;
          do
          {
            while ( 1 )
            {
              v77 = result->m128i_i64[0];
              if ( result->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v77 + 12) == v71 && v68 == v77 )
                goto LABEL_189;
              result = (__m128i *)((char *)result + 8);
              if ( v73 == result )
                goto LABEL_145;
            }
            if ( !v77 )
              goto LABEL_164;
            v75 = (__int64 *)result;
            result = (__m128i *)((char *)result + 8);
          }
          while ( v73 != result );
        }
LABEL_145:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = (__m128i *)((char *)v11 + 8 * v72);
      v75 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v76 = result->m128i_i64[0];
          if ( result->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v76 + 12) == v71 && v68 == v76 )
          {
LABEL_189:
            result->m128i_i64[0] = v68;
            goto LABEL_167;
          }
          result = (__m128i *)((char *)result + 8);
          if ( result == v70 )
            goto LABEL_137;
        }
        if ( !v76 )
          break;
        v75 = (__int64 *)result;
        result = (__m128i *)((char *)result + 8);
        if ( result == v70 )
          goto LABEL_137;
      }
LABEL_164:
      if ( v75 )
        --v57;
      else
        v75 = (__int64 *)result;
      *v75 = v68;
      ++v103;
LABEL_167:
      if ( v105 )
        break;
    }
    result = v56 + 1;
    if ( &v56[1] == v27 )
      break;
    while ( 1 )
    {
      v56 = result;
      if ( result->m128i_i64[0] > 1uLL )
        break;
      if ( v27 == ++result )
        goto LABEL_151;
    }
  }
  while ( result != v27 );
LABEL_151:
  if ( v11 )
    goto LABEL_152;
LABEL_153:
  if ( v7 )
    return (__m128i *)sub_186B220(v7);
  return result;
}

