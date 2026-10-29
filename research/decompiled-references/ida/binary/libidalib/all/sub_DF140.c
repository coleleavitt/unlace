unsigned __int64 __fastcall sub_DF140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r10
  int v6; // edi
  char **v8; // r9
  _DWORD *v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  int i; // eax
  int *v13; // rax
  char *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rbx
  int v26; // edx
  void *v27; // rbp
  size_t v28; // r13
  char *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r15
  void *v32; // rax
  unsigned __int64 v33; // rbp
  _QWORD *v34; // rax
  __int64 v35; // rbp
  const char *v36; // r13
  size_t v37; // rax
  size_t v38; // r12
  size_t v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // dl
  char v44; // bl
  int v45; // eax
  int v46; // edx
  __int64 v47; // r12
  const char *v48; // r13
  size_t v49; // rax
  size_t v50; // rbx
  int v51; // edx
  char v52; // si
  __int64 v53; // rcx
  char v54; // r8
  int v55; // eax
  char v56; // di
  int v57; // eax
  __int64 v58; // rdx
  int j; // ecx
  __int64 v60; // rsi
  char v61; // cl
  int v62; // ebx
  void *v63; // rdi
  size_t v64; // r14
  size_t v65; // rax
  size_t v66; // r14
  size_t v67; // r12
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  char v71; // dl
  char v72; // r12
  char v73; // r12
  size_t v74; // rax
  size_t v75; // r14
  size_t v76; // r15
  __int64 v77; // rsi
  __int64 v78; // rcx
  char v79; // r12
  char v80; // r14
  void *v81; // r13
  __int64 v82; // r11
  __int16 v83; // r10
  __int64 v84; // r8
  char v85; // r9
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r13
  int v89; // r12d
  __int64 v90; // r14
  __int64 v91; // rax
  __int64 v92; // r14
  int v93; // ebx
  __int64 v94; // r15
  const char *v95; // rdi
  __int64 v96; // rax
  size_t v97; // r12
  void *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  struct _Unwind_Exception *v103; // rbx
  char v104; // [rsp+0h] [rbp-128h]
  char *sb; // [rsp+8h] [rbp-120h]
  char *s; // [rsp+8h] [rbp-120h]
  char *sa; // [rsp+8h] [rbp-120h]
  unsigned __int64 v108; // [rsp+10h] [rbp-118h]
  __int64 v109; // [rsp+18h] [rbp-110h]
  int v110; // [rsp+20h] [rbp-108h]
  __int64 v111; // [rsp+30h] [rbp-F8h]
  __int64 v112; // [rsp+40h] [rbp-E8h]
  char v113; // [rsp+4Bh] [rbp-DDh]
  __int16 v114; // [rsp+4Ch] [rbp-DCh]
  __int64 v115; // [rsp+50h] [rbp-D8h]
  __int64 v116; // [rsp+58h] [rbp-D0h]
  __int64 v117; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v118; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v119; // [rsp+88h] [rbp-A0h]
  __int128 v120; // [rsp+98h] [rbp-90h]
  void *src; // [rsp+B0h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-70h]
  __int64 v123; // [rsp+C8h] [rbp-60h]
  int v124; // [rsp+D0h] [rbp-58h]
  char v125; // [rsp+D4h] [rbp-54h]
  __int64 v126; // [rsp+D8h] [rbp-50h]
  char *v127; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v128; // [rsp+E8h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v5 = dbg;
  if ( dbg )
  {
    v6 = *(_DWORD *)(dbg + 64LL);
    if ( v6 )
    {
      v8 = (char **)&unk_230BA0;
      v9 = *(_DWORD **)(dbg + 56LL);
      v10 = unk_230BA0;
      if ( v6 <= 0 )
        goto LABEL_13;
      while ( 1 )
      {
        v9 += 2;
        v11 = -1;
        for ( i = 0; i != v6; ++i )
        {
          a4 = *v9 & (unsigned int)v10;
          if ( (*v9 & (unsigned int)v10) != 0 )
          {
            if ( v11 != -1 )
              goto LABEL_126;
            v11 = i;
          }
          v9 += 8;
        }
        if ( v11 == -2 )
LABEL_126:
          sub_92050(
            (__int64)"%s debugger: more than one special register present",
            *(_QWORD *)(v5 + 8),
            (__int64)v9,
            a4,
            v10,
            (__int64)v8,
            v104);
        v13 = (int *)v8[1];
        v8 += 2;
        *v13 = v11;
        if ( &off_230BF0 == v8 )
          break;
        while ( 1 )
        {
          v6 = *(_DWORD *)(v5 + 64);
          v10 = *(unsigned int *)v8;
          v9 = *(_DWORD **)(v5 + 56);
          if ( v6 > 0 )
            break;
LABEL_13:
          v14 = v8[1];
          v8 += 2;
          *(_DWORD *)v14 = -1;
          if ( &off_230BF0 == v8 )
            goto LABEL_14;
        }
      }
LABEL_14:
      if ( dword_245174 < 0 )
        sub_92050(
          (__int64)"%s debugger: no IP/PC register found",
          *(_QWORD *)(v5 + 8),
          (__int64)v9,
          a4,
          v10,
          (__int64)v8,
          v104);
      v15 = dbg;
      v16 = *(_QWORD **)(dbg + 40LL);
      if ( !v16 )
      {
        if ( !under_debugger )
        {
          v103 = (struct _Unwind_Exception *)interr();
          if ( v4 )
            qfree();
          _Unwind_Resume(v103);
        }
        goto LABEL_131;
      }
      v17 = *(_QWORD **)(dbg + 40LL);
      if ( *v16 )
      {
        do
          ++v17;
        while ( *v17 );
        v108 = v17 - v16;
        v18 = (1 << v108) - 1;
      }
      else
      {
        v108 = 0;
        v18 = 0;
      }
      v19 = dword_2524EC;
      dword_2524EC = v18;
      if ( v19 && v18 != v19 )
        dword_2526BC |= 4u;
      v20 = qword_2524F0;
      if ( qword_2524F0 )
      {
        v21 = xmmword_2524F8;
        if ( (_QWORD)xmmword_2524F8 )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            if ( *(_QWORD *)(v20 + v22) )
            {
              *(_QWORD *)(v20 + v22 + 8) = 0;
              qfree();
              v20 = qword_2524F0;
            }
            ++v23;
            v22 += 56;
          }
          while ( v23 != v21 );
        }
        *(_QWORD *)&xmmword_2524F8 = 0;
        qfree();
        qword_2524F0 = 0;
        *((_QWORD *)&xmmword_2524F8 + 1) = 0;
        v15 = dbg;
      }
      v24 = *(int *)(v15 + 64);
      v25 = xmmword_2524F8;
      v26 = *(_DWORD *)(v15 + 64);
      if ( v24 == (_QWORD)xmmword_2524F8 )
      {
LABEL_46:
        LODWORD(v118) = 0;
        *((_QWORD *)&v118 + 1) = 0;
        *(_QWORD *)&v119 = &v118;
        *((_QWORD *)&v119 + 1) = &v118;
        *(_QWORD *)&v120 = 0;
        v109 = 0;
        v111 = 0;
        if ( v26 <= 0 )
        {
LABEL_75:
          sub_C8140();
          sub_BCE00(*((_QWORD **)&v118 + 1));
          return v128 - __readfsqword(0x28u);
        }
        while ( 1 )
        {
          v35 = 32 * v111 + *(_QWORD *)(v15 + 56);
          v36 = *(const char **)v35;
          *(_OWORD *)n = 0;
          src = nullptr;
          if ( v36 )
          {
            v37 = strlen(v36);
            v38 = v37 + 1;
            v39 = v37;
            src = (void *)qvector_reserve();
            n[0] = v38;
            memmove(src, v36, v39);
            *((_BYTE *)src + v39) = 0;
          }
          sub_DEF00(&v117, (__int64)&src);
          v44 = v43;
          if ( src )
          {
            n[0] = 0;
            qfree();
          }
          if ( !v44 )
            goto LABEL_125;
          v45 = *(unsigned __int8 *)(v35 + 12);
          if ( *(_BYTE *)(v35 + 12) )
          {
            v46 = 0;
            do
            {
              while ( (v45 & 1) == 0 )
              {
                ++v46;
                v45 >>= 1;
              }
              if ( v46 >= v108 )
                sub_92050(
                  (__int64)"%s debugger: wrong register class for %s",
                  *(_QWORD *)(dbg + 8LL),
                  *(_QWORD *)v35,
                  v46,
                  v41,
                  v42,
                  v104);
              ++v46;
              v45 >>= 1;
            }
            while ( v45 );
          }
          v47 = qword_2524F0 + v109;
          *(_DWORD *)(qword_2524F0 + v109 + 44) = v111;
          v48 = *(const char **)v35;
          if ( *(_QWORD *)v35 && (v49 = strlen(*(const char **)v35), (v50 = v49) != 0) )
          {
            v63 = *(void **)v47;
            v64 = v49 + 1;
            if ( *(_QWORD *)(v47 + 16) < v49 + 1 )
            {
              v99 = qvector_reserve();
              *(_QWORD *)v47 = v99;
              v63 = (void *)v99;
            }
            *(_QWORD *)(v47 + 8) = v64;
            memmove(v63, v48, v50);
            *(_BYTE *)(*(_QWORD *)v47 + v50) = 0;
            v51 = *(_DWORD *)(v47 + 44);
          }
          else
          {
            *(_QWORD *)(v47 + 8) = 0;
            v51 = v111;
          }
          v52 = *(_BYTE *)(v35 + 13);
          *(_BYTE *)(v47 + 32) = -1;
          *(_BYTE *)(v47 + 34) = v52;
          if ( v51 < 0 )
            break;
          v53 = dbg;
          if ( *(_DWORD *)(dbg + 64LL) <= v51 )
            break;
          v54 = *(_BYTE *)(v47 + 36);
          v55 = *(_DWORD *)(*(_QWORD *)(dbg + 56LL) + 32LL * v51 + 8);
          if ( v55 == -1 || (v56 = v54 | 2, (v55 & 1) == 0) )
            v56 = v54 & 0xFD;
          *(_BYTE *)(v47 + 36) = v56;
          if ( (*(_BYTE *)(v35 + 9) & 1) == 0 && *(_QWORD *)(v35 + 16) )
          {
            *(_QWORD *)(v47 + 24) = 0;
            v116 = *(_QWORD *)(v35 + 24);
            v110 = 8 * get_dtype_size() - 1;
            while ( v110 >= 0 )
            {
              v88 = qword_2524F0 + v109;
              v89 = v110 - 1;
              sa = *(char **)(*(_QWORD *)(v35 + 16) + 8LL * v110);
              v90 = *(_QWORD *)(qword_2524F0 + v109 + 24);
              v91 = 1LL << v110;
              if ( sa )
              {
                v92 = v91 | v90;
                v93 = 1;
                *(_QWORD *)(v88 + 24) = v92;
                v94 = 8LL * v89;
                if ( v110 )
                {
                  while ( 1 )
                  {
                    v95 = *(const char **)(*(_QWORD *)(v35 + 16) + v94);
                    v96 = 1LL << v89;
                    if ( !v95 )
                      break;
                    v92 |= v96;
                    *(_QWORD *)(v88 + 24) = v92;
                    if ( !strcmp(v95, sa) )
                    {
                      --v89;
                      ++v93;
                      v94 -= 8;
                      if ( v89 != -1 )
                        continue;
                    }
                    goto LABEL_89;
                  }
                  *(_QWORD *)(v88 + 24) = v92 & ~v96;
                }
LABEL_89:
                src = nullptr;
                *(_OWORD *)n = 0;
                v65 = strlen(sa);
                v66 = v65 + 1;
                v67 = v65;
                src = (void *)qvector_reserve();
                n[0] = v66;
                memmove(src, sa, v67);
                *((_BYTE *)src + v67) = 0;
                sub_DEF00(&v117, (__int64)&src);
                v72 = v71;
                if ( src )
                {
                  n[0] = 0;
                  qfree();
                }
                if ( !v72 )
                  sub_92050(
                    (__int64)"%s debugger: duplicate register %s",
                    *(_QWORD *)(dbg + 8LL),
                    (__int64)sa,
                    v68,
                    v69,
                    v70,
                    v104);
                v73 = 1;
                HIWORD(v124) = 0;
                HIDWORD(v126) = v111;
                src = nullptr;
                v123 = 0;
                v125 = 1;
                LODWORD(v126) = -1;
                v127 = nullptr;
                LOBYTE(v124) = v110 + 1 - v93;
                BYTE1(v124) = v93;
                *(_OWORD *)n = 0;
                v74 = strlen(sa);
                v75 = v74;
                v76 = v74;
                if ( v74 )
                {
                  v97 = v74 + 1;
                  v98 = (void *)qvector_reserve();
                  n[0] = v97;
                  src = v98;
                  memmove(v98, sa, v75);
                  *((_BYTE *)src + v75) = 0;
                  v76 = n[0];
                  v73 = v125;
                }
                BYTE2(v124) = 0;
                v77 = qword_2524F0;
                if ( (*(_BYTE *)(qword_2524F0 + v109 + 36) & 2) != 0
                  || (v78 = v116, !_bittest64(&v78, (unsigned int)(char)v124)) )
                {
                  v79 = v73 | 2;
                }
                else
                {
                  v79 = v73 & 0xFD;
                }
                v125 = v79;
                v80 = 0;
                v81 = nullptr;
                if ( v76 )
                {
                  v81 = (void *)qalloc_or_throw();
                  memcpy(v81, src, v76);
                  v80 = BYTE2(v124);
                  v79 = v125;
                  v77 = qword_2524F0;
                }
                v82 = v123;
                v83 = v124;
                v84 = v126;
                v85 = HIBYTE(v124);
                s = v127;
                v86 = xmmword_2524F8;
                if ( *((_QWORD *)&xmmword_2524F8 + 1) < (unsigned __int64)(xmmword_2524F8 + 1) )
                {
                  v115 = v126;
                  v114 = v124;
                  v113 = HIBYTE(v124);
                  v112 = v123;
                  v77 = qvector_reserve();
                  v84 = v115;
                  v83 = v114;
                  v85 = v113;
                  v82 = v112;
                  qword_2524F0 = v77;
                  v86 = xmmword_2524F8;
                }
                v110 -= v93;
                v87 = v77 + 56 * v86;
                *(_QWORD *)v87 = v81;
                *(__m128i *)(v87 + 8) = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
                *(_QWORD *)(v87 + 24) = v82;
                *(_WORD *)(v87 + 32) = v83;
                *(_BYTE *)(v87 + 34) = v80;
                *(_BYTE *)(v87 + 35) = v85;
                *(_BYTE *)(v87 + 36) = v79;
                *(_QWORD *)(v87 + 40) = v84;
                *(_QWORD *)(v87 + 48) = s;
                *(_QWORD *)&xmmword_2524F8 = xmmword_2524F8 + 1;
                if ( src )
                {
                  n[0] = 0;
                  qfree();
                }
              }
              else
              {
                --v110;
                *(_QWORD *)(v88 + 24) = v90 & ~v91;
              }
            }
          }
          else
          {
            if ( v51 >= *(_DWORD *)(v53 + 64) )
            {
              v58 = -1;
            }
            else
            {
              v57 = sub_C7350(v47);
              v58 = 0;
              if ( v57 > 0 )
              {
                for ( j = 0; j != v57; ++j )
                {
                  v60 = 1LL << j;
                  v58 |= v60;
                }
              }
              v61 = *(_BYTE *)(v47 + 32);
              if ( v61 != -1 )
                v58 <<= v61;
            }
            *(_QWORD *)(v47 + 24) = v58;
            if ( (*(_BYTE *)(v35 + 9) & 1) != 0 )
            {
              *(_DWORD *)(v47 + 40) = find_custom_data_format();
              if ( get_custom_data_format() )
              {
                v62 = *(_DWORD *)(v47 + 40);
              }
              else
              {
                *(_DWORD *)(v47 + 40) = -1;
                v62 = -1;
              }
              netnode_check();
              if ( netnode_hashval() > 0 )
                v62 = (int)src;
              *(_DWORD *)(v47 + 40) = v62;
            }
          }
          ++v111;
          v109 += 56;
          v15 = dbg;
          if ( *(_DWORD *)(dbg + 64LL) <= (int)v111 )
            goto LABEL_75;
        }
        if ( !under_debugger )
        {
          interr();
LABEL_125:
          sub_92050(
            (__int64)"%s debugger: duplicate register %s",
            *(_QWORD *)(dbg + 8LL),
            *(_QWORD *)v35,
            v40,
            v41,
            v42,
            v104);
        }
LABEL_131:
        BUG();
      }
      v117 = 0;
      v119 = 0;
      BYTE8(v119) = -1;
      BYTE12(v119) = 1;
      v120 = 0xFFFFFFFFFFFFFFFFLL;
      v118 = 0;
      if ( v24 < (unsigned __int64)xmmword_2524F8 )
      {
        v33 = v24;
        do
        {
          v34 = (_QWORD *)(qword_2524F0 + 56 * v33);
          if ( *v34 )
          {
            v34[1] = 0;
            qfree();
          }
          ++v33;
        }
        while ( v33 < v25 );
      }
      else
      {
        if ( (unsigned __int64)&v117 >= qword_2524F0
          && (unsigned __int64)&v117 < qword_2524F0 + 56LL * *((_QWORD *)&xmmword_2524F8 + 1) )
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          sub_B8900(&src, (__int64)&v117);
          v123 = 0;
          v125 = 1;
          v27 = src;
          v126 = -1;
          v28 = n[0];
          v124 = 255;
          v127 = nullptr;
          if ( *((_QWORD *)&xmmword_2524F8 + 1) < v24 )
            qword_2524F0 = qvector_reserve();
          v29 = (char *)xmmword_2524F8;
          if ( (unsigned __int64)xmmword_2524F8 < v24 )
          {
            v30 = 56 * xmmword_2524F8;
            do
            {
              v31 = v30 + qword_2524F0;
              *(_QWORD *)v31 = 0;
              *(_OWORD *)(v31 + 8) = 0;
              if ( v28 )
              {
                sb = v29;
                v32 = (void *)qalloc_or_throw();
                *(_QWORD *)v31 = v32;
                *(_QWORD *)(v31 + 16) = v28;
                memcpy(v32, v27, v28);
                *(_QWORD *)(v31 + 8) = v28;
                v29 = sb;
              }
              ++v29;
              *(_BYTE *)(v31 + 36) = 1;
              v30 += 56;
              *(_QWORD *)(v31 + 24) = 0;
              *(_DWORD *)(v31 + 32) = 255;
              *(_QWORD *)(v31 + 40) = -1;
              *(_QWORD *)(v31 + 48) = 0;
            }
            while ( (char *)v24 != v29 );
          }
          *(_QWORD *)&xmmword_2524F8 = v24;
          if ( v27 )
            qfree();
          goto LABEL_45;
        }
        if ( *((_QWORD *)&xmmword_2524F8 + 1) < v24 )
        {
          v102 = qvector_reserve();
          v25 = xmmword_2524F8;
          qword_2524F0 = v102;
        }
        if ( v25 < v24 )
        {
          v100 = 56 * v25;
          do
          {
            ++v25;
            v101 = v100 + qword_2524F0;
            v100 += 56;
            *(_QWORD *)v101 = 0;
            *(_QWORD *)(v101 + 24) = 0;
            *(_QWORD *)(v101 + 32) = 0x1000000FFLL;
            *(_QWORD *)(v101 + 40) = -1;
            *(_QWORD *)(v101 + 48) = 0;
            *(_OWORD *)(v101 + 8) = 0;
          }
          while ( v24 != v25 );
        }
      }
      *(_QWORD *)&xmmword_2524F8 = v24;
LABEL_45:
      v15 = dbg;
      v26 = *(_DWORD *)(dbg + 64LL);
      goto LABEL_46;
    }
  }
  return v128 - __readfsqword(0x28u);
}

