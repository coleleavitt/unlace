__int64 __fastcall sub_7E09C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __m128i *v9; // rbx
  __int32 v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __m128i *v15; // rax
  __int64 result; // rax
  unsigned int v17; // r10d
  __int64 *v18; // r13
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r14
  const __m128i *v32; // r13
  __int64 v33; // r13
  __int64 v34; // rdi
  __m128i *v35; // rcx
  int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // edi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  __m128i *v42; // rax
  __int64 v43; // rsi
  bool v44; // al
  int v45; // edx
  int v46; // eax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // r9d
  unsigned int v50; // ecx
  __int64 v51; // r8
  int v52; // esi
  unsigned int v53; // ecx
  int i; // eax
  int v55; // edi
  int v56; // esi
  __int64 v57; // r14
  int v58; // esi
  __int64 v59; // rax
  __int8 *v60; // rbx
  __int64 v61; // r14
  int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // ecx
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  int v74; // edi
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rsi
  __int64 *j; // rax
  __int64 v79; // rdx
  int v80; // edi
  int v81; // edi
  unsigned int v82; // r14d
  _QWORD *v83; // rcx
  __int64 v84; // r10
  int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r14d
  __int64 *v89; // r13
  __int8 *v90; // r13
  int v91; // eax
  int v92; // ecx
  int v93; // r14d
  __int64 v94; // rdx
  __int64 v95; // rdi
  _QWORD *v96; // rcx
  bool v97; // al
  __int64 v98; // rax
  unsigned int v99; // ecx
  int v101; // [rsp+8h] [rbp-A0h]
  __int64 v102; // [rsp+8h] [rbp-A0h]
  __int64 v103; // [rsp+8h] [rbp-A0h]
  __int64 v104; // [rsp+8h] [rbp-A0h]
  __int64 v105; // [rsp+8h] [rbp-A0h]
  _QWORD *v106; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v107; // [rsp+10h] [rbp-98h]
  unsigned int v108; // [rsp+10h] [rbp-98h]
  unsigned int v109; // [rsp+10h] [rbp-98h]
  int v110; // [rsp+10h] [rbp-98h]
  unsigned __int64 v111; // [rsp+18h] [rbp-90h]
  int v112; // [rsp+20h] [rbp-88h]
  unsigned int v113; // [rsp+20h] [rbp-88h]
  int v114; // [rsp+24h] [rbp-84h]
  __int64 v115; // [rsp+28h] [rbp-80h]
  __int64 v116; // [rsp+38h] [rbp-70h] BYREF
  __m128i v117[6]; // [rsp+40h] [rbp-68h] BYREF

  if ( !a2 )
    return 1;
  v9 = v117;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v17 = *(_DWORD *)(a6 + 16);
    v18 = *(__int64 **)a6;
    v20 = 0;
    if ( !v17 )
      goto LABEL_81;
    v21 = 1;
    v22 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
    v23 = nullptr;
    LODWORD(v24) = (v17 - 1) & v22;
    v25 = &v18[2 * (unsigned int)v24];
    v26 = *v25;
    if ( a3 == *v25 )
    {
LABEL_7:
      v27 = v25[1];
      v28 = (unsigned __int64 *)(v25 + 1);
      if ( v27 > 7 )
      {
        v9 = v117;
        if ( (~(_BYTE)v27 & 6) != 0 )
        {
          v33 = operator new(0xB8u);
          sub_7DB1A0(v117, v25[1]);
          sub_7DD830(v33, v117);
          v34 = v25[1];
          if ( v34 )
          {
            if ( (v25[1] & 6) == 4 )
            {
              v67 = (void *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v67 )
                operator delete(v67, 0x28u);
            }
          }
          v27 = v33 | 6;
          v25[1] = v33 | 6;
        }
        v29 = *(unsigned int *)(a1 + 16);
        v30 = *(_QWORD *)(a1 + 8);
        v31 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v32 = (const __m128i *)(v30 + 40 * v29 - 40);
        if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
          goto LABEL_30;
        if ( (*(_BYTE *)(v31 + 96) & 1) != 0 )
        {
          v101 = 1;
          v107 = v31 + 104;
          v111 = v31 + 184;
        }
        else
        {
          v43 = *(unsigned int *)(v31 + 112);
          v107 = *(_QWORD *)(v31 + 104);
          v111 = v107 + 40 * v43;
          if ( !(_DWORD)v43 )
            goto LABEL_20;
          v101 = v43 - 1;
        }
        v117[0].m128i_i32[0] = 73;
        v44 = sub_7204C0(v117[0].m128i_i32, v32->m128i_i32[0]);
        v45 = v32->m128i_i32[0];
        if ( v44 )
        {
          v68 = v32->m128i_i64[1];
          v112 = v32->m128i_i32[0];
          v117[0].m128i_i64[0] = v32[1].m128i_i64[0];
          v116 = v68;
          v46 = sub_7DB4D0(&v116, v117);
          v45 = v112;
        }
        else if ( v45 == 5 )
        {
          v69 = v32->m128i_i64[1];
          v116 = v32[1].m128i_i64[0];
          v117[0].m128i_i64[0] = v69;
          v46 = sub_7DB530(v117, &v116);
          v45 = 5;
        }
        else
        {
          v46 = -1916529075;
          if ( v45 > 73 )
          {
            v47 = v32->m128i_u64[1];
            v48 = 0x9DDFEA08EB382D69LL
                * (((0x9DDFEA08EB382D69LL * (HIDWORD(v47) ^ (8LL * (unsigned int)v47 - 0xAE502812AA7333LL))) >> 47)
                 ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v47) ^ (8LL * (unsigned int)v47 - 0xAE502812AA7333LL)))
                 ^ HIDWORD(v47));
            v46 = -348639895 * (v48 ^ (v48 >> 47));
          }
        }
        v49 = 1;
        v50 = v46 & v101;
        while ( 2 )
        {
          v51 = v107 + 40LL * v50;
          v52 = *(_DWORD *)v51;
          if ( !v45 )
          {
            if ( v52 )
            {
              v53 = v101 & (v49 + v50);
              v51 = v107 + 40LL * v53;
              if ( *(_DWORD *)v51 )
              {
                for ( i = v49 + 1; ; ++i )
                {
                  v53 = v101 & (i + v53);
                  v51 = v107 + 40LL * v53;
                  if ( !*(_DWORD *)v51 )
                    break;
                }
              }
            }
            goto LABEL_18;
          }
          while ( 1 )
          {
            if ( v45 == 1045 )
            {
              if ( v52 == 1045 )
                goto LABEL_18;
              goto LABEL_74;
            }
            if ( v52 != v45 )
              goto LABEL_74;
            if ( v52 != 6 )
              break;
            if ( *(_QWORD *)(v51 + 8) == v32->m128i_i64[1] )
              goto LABEL_18;
            v66 = v49 + v50;
            ++v49;
            v50 = v101 & v66;
            v51 = v107 + 40LL * v50;
            v52 = *(_DWORD *)v51;
          }
          v117[0].m128i_i32[0] = 73;
          v115 = v51;
          v114 = v49;
          v113 = v50;
          v97 = sub_7204C0(v117[0].m128i_i32, v32->m128i_i32[0]);
          v50 = v113;
          v49 = v114;
          v51 = v115;
          if ( v97 || v32->m128i_i32[0] == 5 )
          {
            if ( v32->m128i_i64[1] != *(_QWORD *)(v115 + 8) || v32[1].m128i_i64[0] != *(_QWORD *)(v115 + 16) )
            {
              v52 = *(_DWORD *)v115;
              goto LABEL_74;
            }
            goto LABEL_18;
          }
          v52 = *(_DWORD *)v115;
          if ( v32->m128i_i32[0] <= 73 )
          {
            if ( v52 <= 73 || !*(_QWORD *)(v115 + 8) )
            {
LABEL_18:
              if ( v51 != v111 )
                goto LABEL_3;
              v29 = *(unsigned int *)(a1 + 16);
              v30 = *(_QWORD *)(a1 + 8);
LABEL_20:
              v32 = (const __m128i *)(v30 + 40 * v29 - 40);
              if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
              {
LABEL_30:
                v39 = *(unsigned int *)(v31 + 8);
                v40 = *(_QWORD *)v31;
                v41 = v39 + 1;
                if ( *(unsigned int *)(v31 + 12) < (unsigned __int64)(v39 + 1) )
                {
                  if ( (unsigned __int64)v32 < v40 || (unsigned __int64)v32 >= v40 + 40 * v39 )
                  {
                    sub_25D6060(v31, v31 + 16, v41, 40);
                    v40 = *(_QWORD *)v31;
                    v39 = *(unsigned int *)(v31 + 8);
                  }
                  else
                  {
                    v90 = &v32->m128i_i8[-v40];
                    sub_25D6060(v31, v31 + 16, v41, 40);
                    v40 = *(_QWORD *)v31;
                    v39 = *(unsigned int *)(v31 + 8);
                    v32 = (const __m128i *)&v90[*(_QWORD *)v31];
                  }
                }
                v42 = (__m128i *)(v40 + 40 * v39);
                *v42 = _mm_loadu_si128(v32);
                v42[1] = _mm_loadu_si128(v32 + 1);
                v42[2].m128i_i64[0] = v32[2].m128i_i64[0];
                ++*(_DWORD *)(v31 + 8);
                goto LABEL_3;
              }
              v102 = v31 + 96;
              if ( (unsigned __int8)sub_7DB920(v31 + 96, (__int64)v32, &v116) )
                goto LABEL_3;
              v35 = (__m128i *)v116;
              v117[0].m128i_i64[0] = v116;
              v36 = (*(_DWORD *)(v31 + 96) >> 1) + 1;
              if ( (*(_BYTE *)(v31 + 96) & 1) != 0 )
              {
                v38 = 6;
                v37 = 2;
              }
              else
              {
                v37 = *(_DWORD *)(v31 + 112);
                v38 = 3 * v37;
              }
              if ( 4 * v36 >= v38 )
              {
                v37 *= 2;
              }
              else if ( v37 >> 3 < v37 - (v36 + *(_DWORD *)(v31 + 100)) )
              {
LABEL_27:
                *(_DWORD *)(v31 + 96) = *(_DWORD *)(v31 + 96) & 1 | (2 * v36);
                if ( v35->m128i_i32[0] )
                  --*(_DWORD *)(v31 + 100);
                *v35 = _mm_loadu_si128(v32);
                v35[1] = _mm_loadu_si128(v32 + 1);
                v35[2].m128i_i64[0] = v32[2].m128i_i64[0];
                goto LABEL_30;
              }
              sub_7DD180(v102, v37);
              sub_7DB920(v102, (__int64)v32, v117);
              v35 = (__m128i *)v117[0].m128i_i64[0];
              v36 = (*(_DWORD *)(v31 + 96) >> 1) + 1;
              goto LABEL_27;
            }
          }
          else
          {
            v98 = v32->m128i_i64[1];
            if ( v52 > 73 )
            {
              if ( v98 == *(_QWORD *)(v115 + 8) )
                goto LABEL_18;
              goto LABEL_126;
            }
            if ( !v98 )
              goto LABEL_18;
LABEL_74:
            if ( !v52 )
            {
              v51 = v31 + 184;
              if ( (*(_BYTE *)(v31 + 96) & 1) == 0 )
                v51 = *(_QWORD *)(v31 + 104) + 40LL * *(unsigned int *)(v31 + 112);
              goto LABEL_18;
            }
          }
LABEL_126:
          v99 = v49 + v50;
          v45 = v32->m128i_i32[0];
          ++v49;
          v50 = v101 & v99;
          continue;
        }
      }
LABEL_58:
      v9 = v117;
      v57 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
      v58 = *(_DWORD *)v57;
      v117[0].m128i_i32[0] = 77;
      if ( sub_7204C0(v117[0].m128i_i32, v58) && (v59 = *(_QWORD *)(v57 + 8)) != 0 )
      {
        *v28 = v59 & 0xFFFFFFFFFFFFFFF9LL;
      }
      else
      {
        v61 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
        v62 = *(_DWORD *)v61;
        v117[0].m128i_i32[0] = 176;
        if ( sub_7204C0(v117[0].m128i_i32, v62) && (v63 = *(_QWORD *)(v61 + 8)) != 0 )
        {
          *v28 = v63 & 0xFFFFFFFFFFFFFFF9LL | 2;
        }
        else
        {
          v64 = operator new(0x28u);
          v65 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16);
          *(__m128i *)v64 = _mm_loadu_si128((const __m128i *)(v65 - 40));
          *(__m128i *)(v64 + 16) = _mm_loadu_si128((const __m128i *)(v65 - 24));
          *(_QWORD *)(v64 + 32) = *(_QWORD *)(v65 - 8);
          *v28 = v64 & 0xFFFFFFFFFFFFFFF9LL | 4;
        }
      }
      goto LABEL_3;
    }
    while ( v26 != -4096 )
    {
      if ( v26 == -8192 && !v23 )
        v23 = v25;
      v24 = (v17 - 1) & ((_DWORD)v24 + v21);
      v25 = &v18[2 * v24];
      v26 = *v25;
      if ( a3 == *v25 )
        goto LABEL_7;
      ++v21;
    }
    v55 = *(_DWORD *)(a6 + 8);
    v20 = 2 * v17;
    if ( !v23 )
      v23 = v25;
    v56 = v55 + 1;
    if ( 4 * (v55 + 1) < 3 * v17 )
    {
      if ( v17 >> 3 < v17 - *(_DWORD *)(a6 + 12) - v56 )
      {
LABEL_55:
        *(_DWORD *)(a6 + 8) = v56;
        if ( *v23 != -4096 )
          --*(_DWORD *)(a6 + 12);
        *v23 = a3;
        v28 = (unsigned __int64 *)(v23 + 1);
        v23[1] = 0;
        goto LABEL_58;
      }
      v105 = a6;
      v109 = v22;
      sub_7DDC80(a6, v17);
      a6 = v105;
      v91 = *(_DWORD *)(v105 + 16);
      v56 = *(_DWORD *)(v105 + 8) + 1;
      if ( v91 )
      {
        v92 = v91 - 1;
        v93 = 1;
        v89 = nullptr;
        LODWORD(v94) = (v91 - 1) & v109;
        v23 = (__int64 *)(*(_QWORD *)v105 + 16LL * (unsigned int)v94);
        v95 = *v23;
        if ( a3 == *v23 )
          goto LABEL_55;
        while ( v95 != -4096 )
        {
          if ( v95 == -8192 && !v89 )
            v89 = v23;
          v94 = v92 & (unsigned int)(v94 + v93);
          v23 = (__int64 *)(*(_QWORD *)v105 + 16 * v94);
          v95 = *v23;
          if ( a3 == *v23 )
            goto LABEL_55;
          ++v93;
        }
        goto LABEL_100;
      }
    }
    else
    {
LABEL_81:
      v108 = *(_DWORD *)(a6 + 16);
      v103 = a6;
      v70 = ((((((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
                 | (unsigned int)(v20 - 1)
                 | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
               | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
             | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
               | (unsigned int)(v20 - 1)
               | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
             | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
             | (unsigned int)(v20 - 1)
             | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
           | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
           | (unsigned int)(v20 - 1)
           | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1))
          + 1;
      if ( (unsigned int)v70 < 0x40 )
        LODWORD(v70) = 64;
      *(_DWORD *)(a6 + 16) = v70;
      v71 = sub_25CC9C0(16LL * (unsigned int)v70, 8);
      a6 = v103;
      v72 = (_QWORD *)v71;
      v73 = *(unsigned int *)(v103 + 16);
      *(_QWORD *)v103 = v71;
      v74 = v73;
      v75 = 16 * v73;
      v76 = (_QWORD *)(v71 + v75);
      if ( v18 )
      {
        *(_QWORD *)(v103 + 8) = 0;
        v77 = 2LL * v108;
        if ( v75 )
        {
          if ( (((_BYTE)v76 - (_BYTE)v72) & 0x10) == 0 || (*v72 = -4096, v72 += 2, v72 != v76) )
          {
            do
            {
              *v72 = -4096;
              v72 += 4;
              *(v72 - 2) = -4096;
            }
            while ( v72 != v76 );
          }
        }
        for ( j = v18; &v18[v77] != j; j += 2 )
        {
          v79 = *j;
          if ( *j != -8192 && v79 != -4096 )
          {
            v80 = *(_DWORD *)(a6 + 16);
            if ( !v80 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v81 = v80 - 1;
            v82 = v81 & (((unsigned int)v79 >> 9) ^ ((unsigned int)v79 >> 4));
            v83 = (_QWORD *)(*(_QWORD *)a6 + 16LL * v82);
            v84 = *v83;
            if ( v79 != *v83 )
            {
              v110 = 1;
              v106 = nullptr;
              while ( v84 != -4096 )
              {
                if ( v84 == -8192 )
                {
                  if ( v106 )
                    v83 = v106;
                  v106 = v83;
                }
                v82 = v81 & (v110 + v82);
                v83 = (_QWORD *)(*(_QWORD *)a6 + 16LL * v82);
                v84 = *v83;
                if ( v79 == *v83 )
                  goto LABEL_93;
                ++v110;
              }
              if ( v106 )
                v83 = v106;
            }
LABEL_93:
            *v83 = v79;
            v83[1] = j[1];
            ++*(_DWORD *)(a6 + 8);
          }
        }
        v104 = a6;
        operator delete();
        a6 = v104;
        v72 = *(_QWORD **)v104;
        v74 = *(_DWORD *)(v104 + 16);
        v56 = *(_DWORD *)(v104 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v103 + 8) = 0;
        if ( v72 != v76 )
        {
          v96 = v72;
          if ( (((_BYTE)v76 - (_BYTE)v72) & 0x10) == 0 || (v96 = v72 + 2, *v72 = -4096, v72 + 2 != v76) )
          {
            do
            {
              *v96 = -4096;
              v96 += 4;
              *(v96 - 2) = -4096;
            }
            while ( v96 != v76 );
          }
        }
        v56 = 1;
      }
      if ( v74 )
      {
        v85 = v74 - 1;
        LODWORD(v86) = v85 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
        v23 = &v72[2 * (unsigned int)v86];
        v87 = *v23;
        if ( a3 == *v23 )
          goto LABEL_55;
        v88 = 1;
        v89 = nullptr;
        while ( v87 != -4096 )
        {
          if ( !v89 && v87 == -8192 )
            v89 = v23;
          v86 = v85 & (unsigned int)(v86 + v88);
          v23 = &v72[2 * v86];
          v87 = *v23;
          if ( a3 == *v23 )
            goto LABEL_55;
          ++v88;
        }
LABEL_100:
        if ( v89 )
          v23 = v89;
        goto LABEL_55;
      }
    }
    ++*(_DWORD *)(a6 + 8);
    BUG();
  }
LABEL_3:
  v10 = sub_720580(a2);
  v11 = *(unsigned int *)(a1 + 20);
  v117[0].m128i_i64[1] = a2;
  v117[0].m128i_i32[0] = v10;
  v12 = *(unsigned int *)(a1 + 16);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12 + 1;
  if ( v11 < v12 + 1 )
  {
    if ( (unsigned __int64)v117 < v13 || (unsigned __int64)v117 >= v13 + 40 * v12 )
    {
      sub_25D6060(a1 + 8, a1 + 24, v14, 40);
      v13 = *(_QWORD *)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
    }
    else
    {
      v60 = &v117[0].m128i_i8[-v13];
      sub_25D6060(a1 + 8, a1 + 24, v14, 40);
      v13 = *(_QWORD *)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      v9 = (__m128i *)&v60[v13];
    }
  }
  v15 = (__m128i *)(v13 + 40 * v12);
  *v15 = _mm_loadu_si128(v9);
  v15[1] = _mm_loadu_si128(v9 + 1);
  v15[2].m128i_i64[0] = v9[2].m128i_i64[0];
  ++*(_DWORD *)(a1 + 16);
  result = sub_7DFDB0(a5, *a4);
  --*(_DWORD *)(a1 + 16);
  return result;
}

