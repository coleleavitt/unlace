__int64 __fastcall sub_D30E40(size_t *a1, __m128i *j)
{
  unsigned int v2; // r12d
  size_t v3; // rdi
  __int64 v4; // rax
  __m128i *v5; // r13
  char *v6; // rcx
  __int64 v7; // r14
  char *v8; // r15
  __int16 v9; // ax
  _DWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbp
  bool v13; // cc
  char v14; // dl
  int v15; // edx
  __int16 v16; // ax
  int v17; // eax
  __int64 v18; // r8
  const __m128i *v19; // rbx
  __int64 v20; // rsi
  __m128i *v21; // rdx
  __m128i *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // r11d
  __m128i *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  char *v29; // r14
  char *v30; // r14
  unsigned int v31; // r11d
  __m128i *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __m128i *v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r12
  __m128i *v41; // rsi
  __m128i *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int16 v45; // r8
  __int16 v46; // ax
  unsigned int v47; // r9d
  __m128i *v48; // rax
  _BYTE *v49; // rdi
  char *v50; // rcx
  char *v51; // rax
  __int64 v52; // rdx
  char *v53; // rcx
  char *v54; // rax
  __int64 v55; // rdx
  __m128i *v57; // rax
  __m128i *v58; // r10
  size_t v59; // r8
  __m128i *v60; // rdx
  unsigned int v61; // r11d
  const __m128i *v62; // r9
  const __m128i *k; // rax
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rsi
  __m128i *v68; // rax
  __m128i *v69; // r10
  __m128i *v70; // rdx
  unsigned int v71; // r11d
  const __m128i *v72; // r9
  const __m128i *i; // rax
  __m128i *v74; // rsi
  __m128i *v75; // rdx
  __m128i v76; // xmm0
  unsigned int v77; // r10d
  _DWORD *v78; // rcx
  _DWORD *v79; // rax
  unsigned int v80; // r10d
  unsigned __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rcx
  char **exception; // rbp
  unsigned int v87; // [rsp+Ch] [rbp-25Ch]
  int v89; // [rsp+18h] [rbp-250h]
  size_t v90; // [rsp+18h] [rbp-250h]
  size_t v91; // [rsp+18h] [rbp-250h]
  char v92; // [rsp+23h] [rbp-245h]
  int v93; // [rsp+24h] [rbp-244h]
  int v94; // [rsp+28h] [rbp-240h]
  __int64 v95; // [rsp+28h] [rbp-240h]
  __m128i *v96; // [rsp+28h] [rbp-240h]
  __int64 v97; // [rsp+38h] [rbp-230h]
  __m128i *v98; // [rsp+38h] [rbp-230h]
  unsigned int v99; // [rsp+38h] [rbp-230h]
  const __m128i *v100; // [rsp+40h] [rbp-228h]
  const __m128i *v101; // [rsp+48h] [rbp-220h]
  __int64 v102[4]; // [rsp+70h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+90h] [rbp-1D8h]
  __int64 v104; // [rsp+98h] [rbp-1D0h]
  _BYTE v105[128]; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v106; // [rsp+120h] [rbp-148h]
  __int64 v107; // [rsp+128h] [rbp-140h]
  __m128i *v108; // [rsp+130h] [rbp-138h] BYREF
  int v109; // [rsp+138h] [rbp-130h]

  v2 = 8;
  v3 = 128;
  v4 = sub_186B270(0x80u);
  v108 = j;
  *(_QWORD *)v4 = 0;
  v5 = (__m128i *)v4;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  ptr = v105;
  v109 = 0;
  v104 = 0x1000000000LL;
  v106 = &v108;
  v89 = 0;
  v107 = 0x1000000001LL;
  v93 = 0;
  do
  {
    while ( 1 )
    {
      if ( a1[2] < Z3_get_estimated_alloc_size_0(v3, j) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, off_1C7E178);
        *exception = (char *)off_1C63670;
        sub_2333C0(exception + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      sub_EE4F40(*a1);
      v3 = (unsigned int)(v107 - 1);
      v6 = (char *)v106 + 16 * v3;
      v7 = *(_QWORD *)v6;
      v8 = v6;
      v9 = *(_WORD *)(*(_QWORD *)v6 + 4LL);
      if ( v9 )
        break;
      v92 = 0;
      v87 = *(_DWORD *)(v7 + 24);
      v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
      if ( v10 && !*v10 && v10[1] == 4 )
      {
        j = *(__m128i **)v6;
        v3 = *a1;
        v92 = sub_15D2CB0(*a1, v7) ^ 1;
      }
      while ( 2 )
      {
        while ( 2 )
        {
          v11 = *((_DWORD *)v8 + 2);
          while ( 2 )
          {
            if ( v11 >= v87 )
            {
              v3 = (unsigned int)(v107 - 1);
              goto LABEL_3;
            }
            v12 = *(_QWORD *)(v7 + 8LL * v11 + 32);
            if ( v11 || !v92 )
              goto LABEL_12;
            v17 = *(_DWORD *)(v12 + 12);
            v18 = 16LL * v2;
            v19 = (__m128i *)((char *)v5 + v18);
            v20 = 16LL * (v17 & (v2 - 1));
            v21 = &v5[(unsigned __int64)v20 / 0x10];
            if ( v20 != v18 )
            {
              v22 = &v5[(unsigned __int64)v20 / 0x10];
              do
              {
                v23 = v22->m128i_i64[0];
                if ( v22->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v23 + 12) == v17 && v12 == v23 )
                    goto LABEL_50;
                }
                else if ( !v23 )
                {
                  goto LABEL_27;
                }
                ++v22;
              }
              while ( v19 != v22 );
              if ( v21 != v5 )
              {
                v22 = v5;
                goto LABEL_72;
              }
              v24 = 2 * v2;
              v3 = 3 * v2;
              if ( (unsigned int)v3 < 4 * (v89 + v93) )
              {
LABEL_147:
                v99 = v24;
                v2 = v24;
                v95 = v24;
                v3 = 16LL * v24;
                v91 = v3;
                v68 = (__m128i *)sub_186B270(v3);
                v69 = v68;
                v18 = v3;
                v70 = &v68[v95];
                if ( v99 )
                {
                  do
                  {
                    v68->m128i_i64[0] = 0;
                    ++v68;
                    v68[-1].m128i_i32[2] = 0;
                  }
                  while ( v68 != v70 );
                }
                v71 = v99 - 1;
                v72 = (__m128i *)((char *)v69 + v3);
                for ( i = v5; v19 != i; *v75 = v76 )
                {
                  while ( i->m128i_i64[0] <= 1uLL )
                  {
                    if ( v19 == ++i )
                      goto LABEL_158;
                  }
                  v3 = *(_DWORD *)(i->m128i_i64[0] + 12) & v71;
                  v74 = &v69[v3];
                  if ( v91 == 16 * v3 )
                  {
LABEL_161:
                    if ( v69 == v74 )
                    {
LABEL_207:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v75 = v69;
                    while ( v75->m128i_i64[0] )
                    {
                      if ( v74 == ++v75 )
                        goto LABEL_207;
                    }
                  }
                  else
                  {
                    v75 = &v69[v3];
                    while ( v75->m128i_i64[0] )
                    {
                      if ( v72 == ++v75 )
                        goto LABEL_161;
                    }
                  }
                  v76 = _mm_loadu_si128(i++);
                }
LABEL_158:
                if ( v5 )
                {
                  v3 = (size_t)v5;
                  v100 = (__m128i *)((char *)v69 + v91);
                  v96 = v69;
                  sub_186B220(v5);
                  v72 = v100;
                  v71 = v99 - 1;
                  v69 = v96;
                  v18 = v91;
                }
                v17 = *(_DWORD *)(v12 + 12);
                v89 = 0;
                v19 = v72;
                v5 = v69;
                v20 = 16LL * (v17 & v71);
                v21 = &v69[(unsigned __int64)v20 / 0x10];
                goto LABEL_28;
              }
              if ( !v18 )
                goto LABEL_44;
LABEL_29:
              j = v21;
              v25 = nullptr;
              while ( 1 )
              {
                while ( 1 )
                {
                  v26 = j->m128i_i64[0];
                  if ( j->m128i_i64[0] <= 1uLL )
                    break;
                  if ( *(_DWORD *)(v26 + 12) == v17 && v12 == v26 )
                  {
LABEL_217:
                    j->m128i_i64[0] = v12;
                    j->m128i_i32[2] = 1;
                    goto LABEL_45;
                  }
                  if ( ++j == v19 )
                    goto LABEL_36;
                }
                if ( !v26 )
                  break;
                v25 = j++;
                if ( j == v19 )
                  goto LABEL_36;
              }
LABEL_141:
              if ( v25 )
                --v89;
              else
                v25 = j;
              v25->m128i_i64[0] = v12;
              v25->m128i_i32[2] = 1;
              ++v93;
              goto LABEL_45;
            }
            v22 = v5;
            if ( v21 == v5 )
            {
              v24 = 2 * v2;
              v3 = 3 * v2;
              if ( (unsigned int)v3 < 4 * (v93 + v89) )
                goto LABEL_147;
              goto LABEL_221;
            }
LABEL_72:
            while ( 1 )
            {
              v35 = v22->m128i_i64[0];
              if ( v22->m128i_i64[0] > 1uLL )
                break;
              if ( !v35 )
              {
LABEL_27:
                v24 = 2 * v2;
                v3 = (unsigned int)(4 * (v89 + v93));
                if ( 3 * v2 < (unsigned int)v3 )
                  goto LABEL_147;
LABEL_28:
                if ( v20 != v18 )
                  goto LABEL_29;
LABEL_221:
                v25 = nullptr;
LABEL_36:
                if ( v5 != v21 )
                {
                  j = v5;
                  do
                  {
                    while ( 1 )
                    {
                      v27 = j->m128i_i64[0];
                      if ( j->m128i_i64[0] <= 1uLL )
                        break;
                      if ( *(_DWORD *)(v27 + 12) == v17 && v12 == v27 )
                        goto LABEL_217;
                      if ( ++j == v21 )
                        goto LABEL_44;
                    }
                    if ( !v27 )
                      goto LABEL_141;
                    v25 = j++;
                  }
                  while ( j != v21 );
                }
                goto LABEL_44;
              }
LABEL_71:
              if ( v21 == ++v22 )
                goto LABEL_27;
            }
            if ( *(_DWORD *)(v35 + 12) != v17 || v12 != v35 )
              goto LABEL_71;
LABEL_50:
            v31 = 2 * v2;
            v94 = v22->m128i_i32[2] + 1;
            v3 = (unsigned int)(4 * (v89 + v93));
            if ( 3 * v2 >= (unsigned int)v3 )
            {
              if ( v20 != v18 )
                goto LABEL_52;
LABEL_135:
              v32 = nullptr;
LABEL_59:
              if ( v5 != v21 )
              {
                for ( j = v5; j != v21; ++j )
                {
                  v34 = j->m128i_i64[0];
                  if ( j->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v34 + 12) == v17 && v12 == v34 )
                      goto LABEL_145;
                  }
                  else
                  {
                    if ( !v34 )
                      goto LABEL_86;
                    v32 = j;
                  }
                }
              }
LABEL_44:
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v97 = v31;
            v2 *= 2;
            v3 = 16LL * v31;
            v90 = v3;
            v57 = (__m128i *)sub_186B270(v3);
            v58 = v57;
            v59 = v3;
            v60 = &v57[v97];
            if ( v2 )
            {
              do
              {
                v57->m128i_i64[0] = 0;
                ++v57;
                v57[-1].m128i_i32[2] = 0;
              }
              while ( v57 != v60 );
            }
            v61 = v2 - 1;
            v62 = (__m128i *)((char *)v58 + v3);
            for ( k = v5; v19 != k; *v65 = v66 )
            {
              while ( k->m128i_i64[0] <= 1uLL )
              {
                if ( v19 == ++k )
                  goto LABEL_132;
              }
              v3 = *(_DWORD *)(k->m128i_i64[0] + 12) & v61;
              v64 = &v58[v3];
              if ( v90 == 16 * v3 )
              {
LABEL_136:
                if ( v58 == v64 )
                {
LABEL_144:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v65 = v58;
                while ( v65->m128i_i64[0] )
                {
                  if ( v64 == ++v65 )
                    goto LABEL_144;
                }
              }
              else
              {
                v65 = &v58[v3];
                while ( v65->m128i_i64[0] )
                {
                  if ( v62 == ++v65 )
                    goto LABEL_136;
                }
              }
              v66 = _mm_loadu_si128(k++);
            }
LABEL_132:
            if ( v5 )
            {
              v3 = (size_t)v5;
              v101 = (__m128i *)((char *)v58 + v90);
              v98 = v58;
              sub_186B220(v5);
              v62 = v101;
              v61 = v2 - 1;
              v58 = v98;
              v59 = v90;
            }
            v17 = *(_DWORD *)(v12 + 12);
            v89 = 0;
            v19 = v62;
            v5 = v58;
            v67 = 16LL * (v17 & v61);
            v21 = &v58[(unsigned __int64)v67 / 0x10];
            if ( v67 == v59 )
              goto LABEL_135;
LABEL_52:
            j = v21;
            v32 = nullptr;
            while ( 1 )
            {
              while ( 1 )
              {
                v33 = j->m128i_i64[0];
                if ( j->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v33 + 12) == v17 && v12 == v33 )
                {
LABEL_145:
                  j->m128i_i64[0] = v12;
                  j->m128i_i32[2] = v94;
                  goto LABEL_45;
                }
                if ( ++j == v19 )
                  goto LABEL_59;
              }
              if ( !v33 )
                break;
              v32 = j++;
              if ( j == v19 )
                goto LABEL_59;
            }
LABEL_86:
            if ( v32 )
              --v89;
            else
              v32 = j;
            v32->m128i_i64[0] = v12;
            v32->m128i_i32[2] = v94;
            ++v93;
LABEL_45:
            v11 = *((_DWORD *)v8 + 2);
LABEL_12:
            ++v11;
            v13 = *(_DWORD *)(v12 + 8) <= 1u;
            *((_DWORD *)v8 + 2) = v11;
            if ( !v13 )
            {
              v14 = *(_BYTE *)(v12 + 6);
              if ( (v14 & 1) == 0 )
              {
                *(_BYTE *)(v12 + 6) = v14 | 1;
                v15 = v104;
                if ( (unsigned int)v104 >= HIDWORD(v104) )
                {
                  v36 = (unsigned int)(2 * HIDWORD(v104));
                  v37 = (__m128i *)sub_186B270(8 * v36);
                  v15 = v104;
                  v3 = (size_t)ptr;
                  j = v37;
                  if ( (_DWORD)v104 )
                  {
                    if ( (unsigned int)(v104 - 1) <= 2 || v37 == (__m128i *)((char *)ptr + 8) )
                    {
                      v81 = 0;
                      v82 = 8LL * (unsigned int)v104;
                      do
                      {
                        j->m128i_i64[v81 / 8] = *(_QWORD *)(v3 + v81);
                        v81 += 8LL;
                      }
                      while ( v81 != v82 );
                    }
                    else
                    {
                      v38 = 0;
                      v39 = 16LL * ((unsigned int)v104 >> 1);
                      do
                      {
                        j[v38 / 0x10] = _mm_loadu_si128((const __m128i *)(v3 + v38));
                        v38 += 16LL;
                      }
                      while ( v39 != v38 );
                      if ( (v15 & 1) != 0 )
                        j->m128i_i64[v15 & 0xFFFFFFFE] = *(_QWORD *)(v3 + 8LL * (v15 & 0xFFFFFFFE));
                    }
                  }
                  if ( (_BYTE *)v3 != v105 && v3 )
                  {
                    sub_186B220((void *)v3);
                    v15 = v104;
                  }
                  ptr = j;
                  HIDWORD(v104) = v36;
                }
                else
                {
                  j = (__m128i *)ptr;
                }
                j->m128i_i64[v15] = v12;
                LODWORD(v104) = v15 + 1;
                break;
              }
              continue;
            }
            break;
          }
          v16 = *(_WORD *)(v12 + 4);
          if ( v16 )
          {
            if ( (unsigned __int16)(v16 - 1) > 1u )
            {
              sub_1872CE0("");
              sub_1873130(114, 269);
            }
            continue;
          }
          break;
        }
        if ( !*(_DWORD *)(v12 + 24) )
          continue;
        break;
      }
      v28 = (unsigned int)v107;
      if ( (unsigned int)v107 >= HIDWORD(v107) )
      {
        v83 = (unsigned int)(2 * HIDWORD(v107));
        v29 = (char *)sub_186B270(16 * v83);
        v3 = (size_t)v106;
        v84 = 0;
        v28 = (unsigned int)v107;
        v85 = 16LL * (unsigned int)v107;
        if ( (_DWORD)v107 )
        {
          do
          {
            *(__m128i *)&v29[v84] = _mm_loadu_si128((const __m128i *)(v3 + v84));
            v84 += 16;
          }
          while ( v85 != v84 );
        }
        if ( (__m128i **)v3 != &v108 && v3 )
        {
          sub_186B220((void *)v3);
          v28 = (unsigned int)v107;
        }
        v106 = v29;
        HIDWORD(v107) = v83;
      }
      else
      {
        v29 = (char *)v106;
      }
      v30 = &v29[16 * v28];
      *(_QWORD *)v30 = v12;
      *((_DWORD *)v30 + 2) = 0;
      LODWORD(v107) = v107 + 1;
    }
    if ( (unsigned __int16)(v9 - 1) > 1u )
    {
      sub_1872CE0("");
      sub_1873130(114, 277);
    }
LABEL_3:
    LODWORD(v107) = v3;
  }
  while ( (_DWORD)v3 );
  v40 = v2;
  v41 = &v5[v40];
  if ( v5 != &v5[v40] )
  {
    v42 = v5;
    while ( v42->m128i_i64[0] <= 1uLL )
    {
      if ( v41 == ++v42 )
        goto LABEL_208;
    }
    if ( v41 != v42 )
    {
      v43 = v42->m128i_i64[0];
      v44 = 0;
      while ( 1 )
      {
        if ( !v44 )
        {
LABEL_101:
          v44 = v42->m128i_i64[0];
          LODWORD(v3) = v42->m128i_i32[2];
          goto LABEL_102;
        }
        v45 = *(_WORD *)(v43 + 4);
        v46 = *(_WORD *)(v44 + 4);
        if ( !v45 )
          break;
        if ( v45 == 2 )
        {
          v47 = *(_DWORD *)(v43 + 40);
          if ( !v46 )
          {
            v80 = *(unsigned __int16 *)(v44 + 28);
            if ( v47 < v80 )
              goto LABEL_101;
            if ( v80 != v47 )
              goto LABEL_102;
            if ( (unsigned int)v3 < v42->m128i_i32[2] )
              goto LABEL_101;
LABEL_185:
            v46 = 0;
            if ( v80 != v47 )
              goto LABEL_102;
            goto LABEL_173;
          }
          if ( v46 == 2 )
          {
            v77 = *(_DWORD *)(v44 + 40);
            if ( v47 < v77 )
              goto LABEL_101;
            if ( v77 != *(_DWORD *)(v43 + 40) )
              goto LABEL_102;
            goto LABEL_171;
          }
          if ( !v47 )
            goto LABEL_101;
          if ( v47 == 1 )
            goto LABEL_190;
        }
        else
        {
          if ( !v46 )
          {
            if ( *(_WORD *)(v44 + 28) > 1u )
              goto LABEL_101;
            if ( *(_WORD *)(v44 + 28) != 1 )
              goto LABEL_102;
LABEL_190:
            if ( (unsigned int)v3 < v42->m128i_i32[2] )
              goto LABEL_101;
            goto LABEL_102;
          }
          if ( v46 != 2 )
            goto LABEL_190;
          if ( *(_DWORD *)(v44 + 40) > 1u )
            goto LABEL_101;
          if ( *(_DWORD *)(v44 + 40) == 1 )
            goto LABEL_190;
        }
LABEL_102:
        v48 = v42 + 1;
        if ( v41 != &v42[1] )
        {
          while ( 1 )
          {
            v43 = v48->m128i_i64[0];
            v42 = v48;
            if ( v48->m128i_i64[0] > 1uLL )
              break;
            if ( v41 == ++v48 )
              goto LABEL_107;
          }
          if ( v41 != v48 )
            continue;
        }
        goto LABEL_107;
      }
      v47 = *(unsigned __int16 *)(v43 + 28);
      if ( !v46 )
      {
        v80 = *(unsigned __int16 *)(v44 + 28);
        if ( v47 < v80 )
          goto LABEL_101;
        if ( (_WORD)v80 == (_WORD)v47 )
        {
          if ( (unsigned int)v3 < v42->m128i_i32[2] )
            goto LABEL_101;
          v80 = *(unsigned __int16 *)(v44 + 28);
        }
        goto LABEL_185;
      }
      if ( v46 == 2 )
      {
        v77 = *(_DWORD *)(v44 + 40);
        if ( v47 < v77 )
          goto LABEL_101;
        v47 = *(unsigned __int16 *)(v43 + 28);
        if ( v77 != v47 )
          goto LABEL_102;
LABEL_171:
        v46 = 2;
        if ( (unsigned int)v3 < v42->m128i_i32[2] )
          goto LABEL_101;
        if ( v77 != v47 )
          goto LABEL_102;
      }
      else
      {
        if ( !*(_WORD *)(v43 + 28) )
          goto LABEL_101;
        if ( *(_WORD *)(v43 + 28) != 1 )
          goto LABEL_102;
        if ( (unsigned int)v3 < v42->m128i_i32[2] )
          goto LABEL_101;
      }
LABEL_173:
      if ( v42->m128i_i32[2] == (_DWORD)v3 && !v45 )
      {
        v78 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
        if ( v78 )
        {
          if ( !*v78 && v78[1] == 2 )
          {
            if ( v46 )
              goto LABEL_101;
            v79 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
            if ( !v79 || *v79 || v79[1] != 2 )
              goto LABEL_101;
          }
        }
      }
      goto LABEL_102;
    }
  }
LABEL_208:
  v44 = 0;
LABEL_107:
  v49 = ptr;
  v50 = (char *)ptr + 8 * (unsigned int)v104;
  v51 = (char *)ptr;
  if ( ptr != v50 )
  {
    do
    {
      v52 = *(_QWORD *)v51;
      v51 += 8;
      *(_BYTE *)(v52 + 6) &= ~1u;
    }
    while ( v51 != v50 );
  }
  LODWORD(v104) = 0;
  if ( v106 != &v108 )
  {
    if ( v106 )
    {
      sub_186B220(v106);
      v49 = ptr;
      v53 = (char *)ptr + 8 * (unsigned int)v104;
      if ( ptr != v53 )
      {
        v54 = (char *)ptr;
        do
        {
          v55 = *(_QWORD *)v54;
          v54 += 8;
          *(_BYTE *)(v55 + 6) &= ~1u;
        }
        while ( v53 != v54 );
      }
    }
  }
  LODWORD(v104) = 0;
  if ( v49 != v105 && v49 )
    sub_186B220(v49);
  if ( v5 )
    sub_186B220(v5);
  return v44;
}

