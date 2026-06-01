unsigned __int64 __fastcall sub_24DA10(__m128 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r10
  __int64 p_src; // rdi
  _UNKNOWN **v5; // r9
  _DWORD *v6; // rdx
  int v7; // r8d
  __int64 v8; // rsi
  unsigned int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  void *v25; // rbp
  size_t v26; // r13
  char *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r15
  void *v30; // rax
  unsigned __int64 v31; // rbp
  __int64 *v32; // rax
  const char **v33; // rbp
  const char *v34; // r13
  size_t v35; // rax
  size_t v36; // r12
  size_t v37; // rbx
  __int64 v38; // rcx
  char v39; // dl
  char v40; // bl
  int v41; // eax
  int v42; // edx
  __int64 v43; // r12
  const char *v44; // r13
  size_t v45; // rax
  size_t v46; // rbx
  int v47; // r8d
  int v48; // eax
  __int64 v49; // rax
  char v50; // cl
  unsigned int custom_data_format; // eax
  int v52; // ebx
  const char *v53; // rbp
  void *v54; // rdi
  size_t v55; // r14
  size_t v56; // rax
  size_t v57; // r14
  size_t v58; // r12
  char v59; // dl
  char v60; // r12
  char v61; // r12
  size_t v62; // rax
  size_t v63; // r14
  size_t v64; // r15
  const char *v65; // rsi
  const char *v66; // rdx
  char v67; // r12
  char v68; // r14
  void *v69; // r13
  __int64 v70; // r11
  __int16 v71; // r10
  __int64 v72; // r8
  char v73; // r9
  __int64 v74; // rax
  char *v75; // rax
  __int64 v76; // r13
  int v77; // r12d
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r14
  int v81; // ebx
  __int64 v82; // r15
  const char *v83; // rdi
  __int64 v84; // rax
  size_t v85; // r12
  void *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  struct _Unwind_Exception *v91; // rbx
  char *sb; // [rsp+8h] [rbp-120h]
  char *s; // [rsp+8h] [rbp-120h]
  char *sa; // [rsp+8h] [rbp-120h]
  unsigned __int64 v95; // [rsp+10h] [rbp-118h]
  __int64 v96; // [rsp+18h] [rbp-110h]
  int i; // [rsp+20h] [rbp-108h]
  __int64 v98; // [rsp+30h] [rbp-F8h]
  __int64 v99; // [rsp+40h] [rbp-E8h]
  char v100; // [rsp+4Bh] [rbp-DDh]
  __int16 v101; // [rsp+4Ch] [rbp-DCh]
  __int64 v102; // [rsp+50h] [rbp-D8h]
  const char *v103; // [rsp+58h] [rbp-D0h]
  __int64 v104; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v106; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v107; // [rsp+88h] [rbp-A0h]
  __int128 v108; // [rsp+98h] [rbp-90h]
  void *src; // [rsp+B0h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-70h]
  __int64 v111; // [rsp+C8h] [rbp-60h]
  int v112; // [rsp+D0h] [rbp-58h]
  char v113; // [rsp+D4h] [rbp-54h]
  __int64 v114; // [rsp+D8h] [rbp-50h]
  char *v115; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v116; // [rsp+E8h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v2 = dbg;
  if ( dbg )
  {
    p_src = *(unsigned int *)(dbg + 64);
    if ( (_DWORD)p_src )
    {
      v5 = (_UNKNOWN **)dword_860100;
      v6 = *(_DWORD **)(dbg + 56);
      v7 = dword_860100[0];
      if ( (int)p_src <= 0 )
        goto LABEL_13;
      while ( 1 )
      {
        v6 += 2;
        v8 = 0xFFFFFFFFLL;
        v9 = 0;
        do
        {
          if ( (*v6 & v7) != 0 )
          {
            if ( (_DWORD)v8 != -1 )
              goto LABEL_123;
            v8 = v9;
          }
          ++v9;
          v6 += 8;
        }
        while ( v9 != (_DWORD)p_src );
        if ( (_DWORD)v8 == -2 )
LABEL_123:
          sub_16B930((__int64)"%s debugger: more than one special register present", *(const char **)(v2 + 8));
        v10 = v5[1];
        v5 += 2;
        *v10 = v8;
        if ( v5 == &off_860150 )
          break;
        while ( 1 )
        {
          p_src = *(unsigned int *)(v2 + 64);
          v7 = *(_DWORD *)v5;
          v6 = *(_DWORD **)(v2 + 56);
          if ( (int)p_src > 0 )
            break;
LABEL_13:
          v11 = v5[1];
          v8 = 0xFFFFFFFFLL;
          v5 += 2;
          *v11 = -1;
          if ( v5 == &off_860150 )
            goto LABEL_14;
        }
      }
LABEL_14:
      if ( dword_8BA594 < 0 )
        sub_16B930((__int64)"%s debugger: no IP/PC register found", *(const char **)(v2 + 8));
      v12 = dbg;
      v13 = *(_QWORD **)(dbg + 40);
      if ( !v13 )
      {
        if ( !under_debugger )
        {
          v91 = (struct _Unwind_Exception *)interr(41333, v8, v6, 0, *(double *)a1.m128_u64);
          if ( v1 )
            qfree(v1, (const char *)v8);
          _Unwind_Resume(v91);
        }
        goto LABEL_128;
      }
      v14 = *(_QWORD **)(dbg + 40);
      if ( *v13 )
      {
        do
          ++v14;
        while ( *v14 );
        v95 = v14 - v13;
        v15 = (1 << v95) - 1;
      }
      else
      {
        v95 = 0;
        v15 = 0;
      }
      v16 = dword_8CC38C;
      dword_8CC38C = v15;
      if ( v16 && v16 != v15 )
        dword_8CC55C |= 4u;
      v17 = qword_8CC390;
      if ( qword_8CC390 )
      {
        v18 = xmmword_8CC398;
        if ( (_QWORD)xmmword_8CC398 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            v21 = *(_QWORD *)(v17 + v19);
            if ( v21 )
            {
              *(_QWORD *)(v17 + v19 + 8) = 0;
              qfree(v21, (const char *)v8);
              v17 = qword_8CC390;
            }
            ++v20;
            v19 += 56;
          }
          while ( v20 != v18 );
        }
        *(_QWORD *)&xmmword_8CC398 = 0;
        p_src = v17;
        *(double *)a1.m128_u64 = qfree(v17, (const char *)v8);
        qword_8CC390 = 0;
        *((_QWORD *)&xmmword_8CC398 + 1) = 0;
        v12 = dbg;
      }
      v22 = *(int *)(v12 + 64);
      v23 = xmmword_8CC398;
      v24 = v22;
      if ( v22 == (_QWORD)xmmword_8CC398 )
      {
LABEL_46:
        LODWORD(v106) = 0;
        *(_QWORD *)&v107 = &v106;
        *((_QWORD *)&v107 + 1) = &v106;
        *((_QWORD *)&v106 + 1) = 0;
        *(_QWORD *)&v108 = 0;
        v96 = 0;
        v98 = 0;
        if ( (int)v24 <= 0 )
        {
LABEL_72:
          sub_236750(*(double *)a1.m128_u64, p_src, v8, v24);
          sub_22ADD0(*((_QWORD **)&v106 + 1), (const char *)v8);
          return v116 - __readfsqword(0x28u);
        }
        while ( 1 )
        {
          a1.m128_u64[0] = 0;
          v33 = (const char **)(32 * v98 + *(_QWORD *)(v12 + 56));
          v34 = *v33;
          *(_OWORD *)n = 0;
          src = nullptr;
          if ( v34 )
          {
            v35 = strlen(v34);
            v36 = v35 + 1;
            v37 = v35;
            src = (void *)qvector_reserve(&src, 0, v35 + 1, 1);
            n[0] = v36;
            memmove(src, v34, v37);
            *((_BYTE *)src + v37) = 0;
          }
          sub_24D7D0(&v105, (__int64)&src);
          v40 = v39;
          if ( src )
          {
            n[0] = 0;
            *(double *)a1.m128_u64 = qfree(src, (const char *)&src);
          }
          if ( !v40 )
            goto LABEL_122;
          v41 = *((unsigned __int8 *)v33 + 12);
          if ( *((_BYTE *)v33 + 12) )
          {
            v42 = 0;
            do
            {
              while ( (v41 & 1) == 0 )
              {
                ++v42;
                v41 >>= 1;
              }
              v38 = v42;
              if ( v42 >= v95 )
                sub_16B930((__int64)"%s debugger: wrong register class for %s", *(const char **)(dbg + 8), *v33);
              ++v42;
              v41 >>= 1;
            }
            while ( v41 );
          }
          v43 = qword_8CC390 + v96;
          *(_DWORD *)(qword_8CC390 + v96 + 44) = v98;
          v44 = *v33;
          if ( *v33 && (v45 = strlen(*v33), (v46 = v45) != 0) )
          {
            v54 = *(void **)v43;
            v55 = v45 + 1;
            if ( *(_QWORD *)(v43 + 16) < v45 + 1 )
            {
              v87 = qvector_reserve(v43, *(_QWORD *)v43, v45 + 1, 1);
              *(_QWORD *)v43 = v87;
              v54 = (void *)v87;
            }
            *(_QWORD *)(v43 + 8) = v55;
            memmove(v54, v44, v46);
            *(_BYTE *)(*(_QWORD *)v43 + v46) = 0;
            v24 = *(unsigned int *)(v43 + 44);
          }
          else
          {
            *(_QWORD *)(v43 + 8) = 0;
            v24 = (unsigned int)v98;
          }
          v8 = *((unsigned __int8 *)v33 + 13);
          *(_BYTE *)(v43 + 32) = -1;
          *(_BYTE *)(v43 + 34) = v8;
          if ( (int)v24 < 0 )
            break;
          v38 = dbg;
          if ( *(_DWORD *)(dbg + 64) <= (int)v24 )
            break;
          v47 = *(unsigned __int8 *)(v43 + 36);
          v48 = *(_DWORD *)(*(_QWORD *)(dbg + 56) + 32LL * (int)v24 + 8);
          if ( v48 == -1 || (p_src = v47 | 2u, (v48 & 1) == 0) )
            p_src = v47 & 0xFFFFFFFD;
          *(_BYTE *)(v43 + 36) = p_src;
          if ( (*((_BYTE *)v33 + 9) & 1) == 0 && v33[2] )
          {
            *(_QWORD *)(v43 + 24) = 0;
            p_src = (unsigned __int8)v8;
            v103 = v33[3];
            for ( i = 8 * get_dtype_size((unsigned __int8)v8) - 1; i >= 0; v8 = (unsigned int)i )
            {
              v24 = (__int64)v33[2];
              v76 = qword_8CC390 + v96;
              v77 = i - 1;
              sa = *(char **)(v24 + 8LL * i);
              v78 = *(_QWORD *)(qword_8CC390 + v96 + 24);
              v79 = 1LL << i;
              if ( sa )
              {
                v80 = v79 | v78;
                v81 = 1;
                *(_QWORD *)(v76 + 24) = v80;
                v82 = 8LL * v77;
                if ( i )
                {
                  while ( 1 )
                  {
                    v83 = *(const char **)&v33[2][v82];
                    v84 = 1LL << v77;
                    if ( !v83 )
                      break;
                    v80 |= v84;
                    *(_QWORD *)(v76 + 24) = v80;
                    if ( !strcmp(v83, sa) )
                    {
                      --v77;
                      ++v81;
                      v82 -= 8;
                      if ( v77 != -1 )
                        continue;
                    }
                    goto LABEL_86;
                  }
                  *(_QWORD *)(v76 + 24) = v80 & ~v84;
                }
LABEL_86:
                src = nullptr;
                *(_OWORD *)n = 0;
                v56 = strlen(sa);
                v57 = v56 + 1;
                v58 = v56;
                src = (void *)qvector_reserve(&src, 0, v56 + 1, 1);
                n[0] = v57;
                memmove(src, sa, v58);
                *((_BYTE *)src + v58) = 0;
                sub_24D7D0(&v105, (__int64)&src);
                v60 = v59;
                if ( src )
                {
                  n[0] = 0;
                  qfree(src, (const char *)&src);
                }
                if ( !v60 )
                  sub_16B930((__int64)"%s debugger: duplicate register %s", *(const char **)(dbg + 8), sa);
                v61 = 1;
                HIWORD(v112) = 0;
                HIDWORD(v114) = v98;
                src = nullptr;
                v111 = 0;
                v113 = 1;
                LODWORD(v114) = -1;
                v115 = nullptr;
                LOBYTE(v112) = i + 1 - v81;
                BYTE1(v112) = v81;
                *(_OWORD *)n = 0;
                v62 = strlen(sa);
                v63 = v62;
                v64 = v62;
                if ( v62 )
                {
                  v85 = v62 + 1;
                  v86 = (void *)qvector_reserve(&src, 0, v62 + 1, 1);
                  n[0] = v85;
                  src = v86;
                  memmove(v86, sa, v63);
                  *((_BYTE *)src + v63) = 0;
                  v64 = n[0];
                  v61 = v113;
                }
                BYTE2(v112) = 0;
                v65 = (const char *)qword_8CC390;
                if ( (*(_BYTE *)(qword_8CC390 + v96 + 36) & 2) != 0
                  || (v66 = v103, !_bittest64((const __int64 *)&v66, (unsigned int)(char)v112)) )
                {
                  v67 = v61 | 2;
                }
                else
                {
                  v67 = v61 & 0xFD;
                }
                v113 = v67;
                v68 = 0;
                v69 = nullptr;
                if ( v64 )
                {
                  v69 = (void *)qalloc_or_throw(v64);
                  memcpy(v69, src, v64);
                  v68 = BYTE2(v112);
                  v67 = v113;
                  v65 = (const char *)qword_8CC390;
                }
                v70 = v111;
                v71 = v112;
                v72 = v114;
                v73 = HIBYTE(v112);
                s = v115;
                v74 = xmmword_8CC398;
                if ( *((_QWORD *)&xmmword_8CC398 + 1) < (unsigned __int64)(xmmword_8CC398 + 1) )
                {
                  v102 = v114;
                  v101 = v112;
                  v100 = HIBYTE(v112);
                  v99 = v111;
                  v65 = (const char *)qvector_reserve(&qword_8CC390, v65, xmmword_8CC398 + 1, 56);
                  v72 = v102;
                  v71 = v101;
                  v73 = v100;
                  v70 = v99;
                  qword_8CC390 = (__int64)v65;
                  v74 = xmmword_8CC398;
                }
                i -= v81;
                a1 = (__m128)_mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
                v75 = (char *)&v65[56 * v74];
                v24 = (__int64)s;
                *(_QWORD *)v75 = v69;
                *(__m128 *)(v75 + 8) = a1;
                *((_QWORD *)v75 + 3) = v70;
                *((_WORD *)v75 + 16) = v71;
                v75[34] = v68;
                v75[35] = v73;
                v75[36] = v67;
                *((_QWORD *)v75 + 5) = v72;
                *((_QWORD *)v75 + 6) = s;
                p_src = (__int64)src;
                *(_QWORD *)&xmmword_8CC398 = xmmword_8CC398 + 1;
                if ( src )
                {
                  n[0] = 0;
                  *(double *)a1.m128_u64 = qfree(src, v65);
                }
              }
              else
              {
                --i;
                *(_QWORD *)(v76 + 24) = v78 & ~v79;
              }
            }
          }
          else
          {
            if ( (int)v24 >= *(_DWORD *)(v38 + 64) )
            {
              v49 = -1;
            }
            else
            {
              p_src = v43;
              v49 = sub_233C80(v43);
              v50 = *(_BYTE *)(v43 + 32);
              v24 = v49 << v50;
              if ( v50 != -1 )
                v49 <<= v50;
            }
            *(_QWORD *)(v43 + 24) = v49;
            if ( (*((_BYTE *)v33 + 9) & 1) != 0 )
            {
              custom_data_format = find_custom_data_format(*(_QWORD *)v33[2]);
              *(_DWORD *)(v43 + 40) = custom_data_format;
              if ( get_custom_data_format(custom_data_format) )
              {
                v52 = *(_DWORD *)(v43 + 40);
              }
              else
              {
                *(_DWORD *)(v43 + 40) = -1;
                v52 = -1;
              }
              v53 = *v33;
              netnode_check(&v104, "$ debugger configuration", 0, 0);
              p_src = v104;
              v8 = (__int64)v53;
              if ( netnode_hashval(v104, v53, &src, 8, 72) > 0 )
                v52 = (int)src;
              *(_DWORD *)(v43 + 40) = v52;
            }
          }
          ++v98;
          v96 += 56;
          v12 = dbg;
          if ( *(_DWORD *)(dbg + 64) <= (int)v98 )
            goto LABEL_72;
        }
        if ( !under_debugger )
        {
          interr(40048, v8, v24, v38, *(double *)a1.m128_u64);
LABEL_122:
          sub_16B930((__int64)"%s debugger: duplicate register %s", *(const char **)(dbg + 8), *v33);
        }
LABEL_128:
        BUG();
      }
      v105 = 0;
      v107 = 0;
      a1.m128_u64[0] = 0;
      BYTE8(v107) = -1;
      BYTE12(v107) = 1;
      v108 = 0xFFFFFFFFFFFFFFFFLL;
      v106 = 0;
      if ( v22 < (unsigned __int64)xmmword_8CC398 )
      {
        v31 = v22;
        do
        {
          v32 = (__int64 *)(qword_8CC390 + 56 * v31);
          p_src = *v32;
          if ( *v32 )
          {
            v32[1] = 0;
            *(double *)a1.m128_u64 = qfree(p_src, (const char *)v8);
          }
          ++v31;
        }
        while ( v31 < v23 );
      }
      else
      {
        v8 = qword_8CC390;
        if ( (unsigned __int64)&v105 >= qword_8CC390
          && (unsigned __int64)&v105 < qword_8CC390 + 56LL * *((_QWORD *)&xmmword_8CC398 + 1) )
        {
          v8 = (__int64)&v105;
          src = nullptr;
          p_src = (__int64)&src;
          *(_OWORD *)n = 0;
          sub_227D00(&src, (__int64)&v105);
          v111 = 0;
          v113 = 1;
          v25 = src;
          v114 = -1;
          v26 = n[0];
          v112 = 255;
          v115 = nullptr;
          if ( *((_QWORD *)&xmmword_8CC398 + 1) < v22 )
          {
            v8 = qword_8CC390;
            p_src = (__int64)&qword_8CC390;
            qword_8CC390 = qvector_reserve(&qword_8CC390, qword_8CC390, v22, 56);
          }
          v27 = (char *)xmmword_8CC398;
          if ( (unsigned __int64)xmmword_8CC398 < v22 )
          {
            v28 = 56 * xmmword_8CC398;
            do
            {
              v29 = v28 + qword_8CC390;
              *(_QWORD *)v29 = 0;
              *(_OWORD *)(v29 + 8) = 0;
              if ( v26 )
              {
                sb = v27;
                v30 = (void *)qalloc_or_throw(v26);
                *(_QWORD *)v29 = v30;
                p_src = (__int64)v30;
                v8 = (__int64)v25;
                *(_QWORD *)(v29 + 16) = v26;
                memcpy(v30, v25, v26);
                *(_QWORD *)(v29 + 8) = v26;
                v27 = sb;
              }
              ++v27;
              *(_BYTE *)(v29 + 36) = 1;
              v28 += 56;
              *(_QWORD *)(v29 + 24) = 0;
              *(_DWORD *)(v29 + 32) = 255;
              *(_QWORD *)(v29 + 40) = -1;
              *(_QWORD *)(v29 + 48) = 0;
            }
            while ( (char *)v22 != v27 );
          }
          *(_QWORD *)&xmmword_8CC398 = v22;
          if ( v25 )
          {
            p_src = (__int64)v25;
            *(double *)a1.m128_u64 = qfree(v25, (const char *)v8);
          }
          goto LABEL_45;
        }
        if ( *((_QWORD *)&xmmword_8CC398 + 1) < v22 )
        {
          p_src = (__int64)&qword_8CC390;
          v90 = qvector_reserve(&qword_8CC390, qword_8CC390, v22, 56);
          v23 = xmmword_8CC398;
          qword_8CC390 = v90;
        }
        if ( v23 < v22 )
        {
          a1.m128_u64[0] = 0;
          v88 = 56 * v23;
          do
          {
            v8 = (__int64)&qword_8CC390;
            ++v23;
            v89 = v88 + qword_8CC390;
            v88 += 56;
            *(_QWORD *)v89 = 0;
            *(_QWORD *)(v89 + 24) = 0;
            *(_QWORD *)(v89 + 32) = 0x1000000FFLL;
            *(_QWORD *)(v89 + 40) = -1;
            *(_QWORD *)(v89 + 48) = 0;
            *(_OWORD *)(v89 + 8) = 0;
          }
          while ( v22 != v23 );
        }
      }
      *(_QWORD *)&xmmword_8CC398 = v22;
LABEL_45:
      v12 = dbg;
      v24 = *(unsigned int *)(dbg + 64);
      goto LABEL_46;
    }
  }
  return v116 - __readfsqword(0x28u);
}
