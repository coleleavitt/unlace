char *__fastcall sub_12D7AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r11
  unsigned __int64 v8; // r8
  char *result; // rax
  unsigned int *v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // r11d
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r13
  int *v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r11d
  _DWORD *v22; // rsi
  int *v23; // rdi
  _DWORD *i; // rax
  int v25; // r12d
  __int64 v26; // rbp
  __int64 v27; // rax
  int *v28; // r8
  int v29; // ecx
  int v30; // eax
  void *v31; // r10
  unsigned int v32; // r11d
  void *v33; // rax
  void *v34; // rsi
  int v35; // r15d
  int v36; // edx
  __int64 v37; // rax
  unsigned int *v38; // rcx
  int v39; // edi
  __int64 v40; // rax
  int v41; // esi
  __int64 v42; // rdx
  unsigned int *v43; // r15
  char *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // r13
  int v49; // edi
  unsigned __int64 v50; // rax
  _DWORD *v51; // rax
  __int64 v52; // rdx
  _DWORD *v53; // r15
  unsigned int v54; // r11d
  int *v55; // rdi
  _DWORD *k; // rax
  int *v57; // r15
  int v58; // r12d
  __int64 v59; // rbp
  __int64 v60; // rax
  int *v61; // r8
  int v62; // ecx
  int v63; // eax
  void *v64; // r10
  unsigned int v65; // r11d
  void *v66; // rax
  void *v67; // rsi
  int v68; // edx
  int v69; // eax
  int v70; // edx
  unsigned int v71; // eax
  int v72; // esi
  unsigned int *v73; // r10
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  _DWORD *j; // rcx
  __int64 v78; // rcx
  _DWORD *m; // rcx
  size_t v80; // rcx
  size_t v81; // rcx
  int v82; // r10d
  unsigned int *v83; // r15
  int v84; // r11d
  int *v85; // r9
  int v86; // r11d
  int *v87; // r9
  unsigned int *v88; // [rsp+8h] [rbp-A0h]
  unsigned int v89; // [rsp+10h] [rbp-98h]
  __int64 v90; // [rsp+10h] [rbp-98h]
  unsigned int v91; // [rsp+10h] [rbp-98h]
  int *v92; // [rsp+10h] [rbp-98h]
  int v93; // [rsp+10h] [rbp-98h]
  unsigned int v94; // [rsp+18h] [rbp-90h]
  unsigned int v95; // [rsp+18h] [rbp-90h]
  unsigned int v96; // [rsp+18h] [rbp-90h]
  int v97; // [rsp+18h] [rbp-90h]
  unsigned int v98; // [rsp+18h] [rbp-90h]
  __int64 v99; // [rsp+18h] [rbp-90h]
  unsigned int v100; // [rsp+18h] [rbp-90h]
  int *v101; // [rsp+28h] [rbp-80h]
  unsigned int v102; // [rsp+28h] [rbp-80h]
  unsigned int v103; // [rsp+28h] [rbp-80h]
  __int64 v104; // [rsp+38h] [rbp-70h]
  __int64 v105; // [rsp+38h] [rbp-70h]
  unsigned int *v106; // [rsp+40h] [rbp-68h]
  unsigned int *v107; // [rsp+40h] [rbp-68h]
  int *v108; // [rsp+48h] [rbp-60h]
  unsigned int v109; // [rsp+48h] [rbp-60h]
  int *v110; // [rsp+48h] [rbp-60h]
  unsigned int v111; // [rsp+48h] [rbp-60h]
  unsigned int v112; // [rsp+50h] [rbp-58h]
  void *v113; // [rsp+50h] [rbp-58h]
  unsigned int v114; // [rsp+50h] [rbp-58h]
  void *v115; // [rsp+58h] [rbp-50h]
  int *v116; // [rsp+58h] [rbp-50h]
  int *v117; // [rsp+58h] [rbp-50h]
  _DWORD v118[15]; // [rsp+6Ch] [rbp-3Ch] BYREF

  v6 = a1;
  v8 = *(_QWORD *)(a1 + 96);
  result = (char *)v118;
  v10 = (unsigned int *)v8;
  v88 = (unsigned int *)(v8 + 24LL * *(unsigned int *)(a1 + 104));
  if ( (unsigned int *)v8 != v88 )
  {
    while ( 1 )
    {
      v11 = *(unsigned int *)(a1 + 88);
      v12 = *v10;
      v13 = *((_QWORD *)v10 + 1);
      v14 = v10[4];
      v15 = v10[5];
      v16 = *(int **)(a1 + 72);
      if ( !(_DWORD)v11 )
        goto LABEL_3;
      v97 = *(_DWORD *)(a1 + 88);
      v118[0] = *v10;
      v91 = v12;
      LODWORD(v40) = sub_101AC30(v118);
      v12 = v91;
      LODWORD(v40) = (v97 - 1) & v40;
      v38 = (unsigned int *)&v16[14 * (unsigned int)v40];
      v41 = *v38;
      if ( v91 != *v38 )
        break;
LABEL_24:
      v42 = v38[4];
      result = *((char **)v38 + 1);
      v43 = v38 + 2;
      v44 = &result[16 * v42];
      v45 = (16 * v42) >> 4;
      v46 = (16 * v42) >> 6;
      if ( v46 )
      {
        while ( *(_QWORD *)result != v13
             || *((_DWORD *)result + 2) != (_DWORD)v14
             || *((_DWORD *)result + 3) != (_DWORD)v15 )
        {
          if ( *((_QWORD *)result + 2) == v13
            && *((_DWORD *)result + 6) == (_DWORD)v14
            && *((_DWORD *)result + 7) == (_DWORD)v15 )
          {
            result += 16;
            goto LABEL_33;
          }
          if ( *((_QWORD *)result + 4) == v13
            && *((_DWORD *)result + 10) == (_DWORD)v14
            && *((_DWORD *)result + 11) == (_DWORD)v15 )
          {
            result += 32;
            goto LABEL_33;
          }
          if ( *((_QWORD *)result + 6) == v13
            && *((_DWORD *)result + 14) == (_DWORD)v14
            && *((_DWORD *)result + 15) == (_DWORD)v15 )
          {
            result += 48;
            if ( result != v44 )
              goto LABEL_34;
            goto LABEL_40;
          }
          result += 64;
          if ( !--v46 )
          {
            v45 = (v44 - result) >> 4;
            goto LABEL_50;
          }
        }
        goto LABEL_33;
      }
LABEL_50:
      if ( v45 == 2 )
        goto LABEL_54;
      if ( v45 == 3 )
      {
        if ( *(_QWORD *)result == v13
          && *((_DWORD *)result + 2) == (_DWORD)v14
          && *((_DWORD *)result + 3) == (_DWORD)v15 )
        {
          goto LABEL_33;
        }
        result += 16;
LABEL_54:
        if ( *(_QWORD *)result == v13
          && *((_DWORD *)result + 2) == (_DWORD)v14
          && *((_DWORD *)result + 3) == (_DWORD)v15 )
        {
          goto LABEL_33;
        }
        result += 16;
        if ( *(_QWORD *)result != v13 )
          goto LABEL_40;
        goto LABEL_56;
      }
      if ( v45 != 1 || *(_QWORD *)result != v13 )
        goto LABEL_40;
LABEL_56:
      if ( *((_DWORD *)result + 2) != (_DWORD)v14 || *((_DWORD *)result + 3) != (_DWORD)v15 )
        goto LABEL_40;
LABEL_33:
      if ( result == v44 )
        goto LABEL_40;
LABEL_34:
      v10 += 6;
      if ( v88 == v10 )
      {
        v6 = a1;
        goto LABEL_36;
      }
    }
    v49 = 1;
    v8 = 0;
    if ( v41 != -1 )
    {
      while ( 1 )
      {
        if ( v41 == -2 && !v8 )
          v8 = (unsigned __int64)v38;
        a6 = (unsigned int)(v49 + 1);
        v40 = (v97 - 1) & (unsigned int)(v40 + v49);
        v38 = (unsigned int *)&v16[14 * v40];
        v41 = *v38;
        if ( v91 == *v38 )
          goto LABEL_24;
        if ( v41 == -1 )
          break;
        ++v49;
      }
      if ( v8 )
        v38 = (unsigned int *)v8;
    }
    v11 = *(unsigned int *)(a1 + 88);
    v39 = *(_DWORD *)(a1 + 80) + 1;
    if ( 4 * v39 >= (unsigned int)(3 * v11) )
    {
      v16 = *(int **)(a1 + 72);
LABEL_3:
      v94 = v12;
      v89 = v11;
      v17 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v11 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
      v18 = ((v17 >> 16) | v17) + 1;
      if ( (unsigned int)v18 < 0x40 )
        LODWORD(v18) = 64;
      *(_DWORD *)(a1 + 88) = v18;
      v19 = (_DWORD *)sub_22300B0(56LL * (unsigned int)v18, 8, v11, 64, v8, a6);
      v20 = v89;
      v21 = v94;
      v22 = v19;
      *(_QWORD *)(a1 + 72) = v19;
      if ( v16 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        v90 = 56LL * v89;
        v23 = &v16[14 * v20];
        for ( i = &v19[14 * *(unsigned int *)(a1 + 88)]; i != v22; v22 += 14 )
          *v22 = -1;
        if ( v23 != v16 )
        {
          v101 = v16;
          v104 = v13;
          v106 = v10;
          while ( 1 )
          {
            if ( (unsigned int)(*v16 + 2) <= 1 )
              goto LABEL_10;
            v25 = *(_DWORD *)(a1 + 88);
            if ( !v25 )
            {
              dword_0 = *v16;
              BUG();
            }
            v26 = *(_QWORD *)(a1 + 72);
            v118[0] = *v16;
            LODWORD(v27) = (v25 - 1) & sub_101AC30(v118);
            v28 = (int *)(v26 + 56LL * (unsigned int)v27);
            v29 = *v28;
            if ( *v16 != *v28 )
            {
              v84 = 1;
              v85 = nullptr;
              if ( v29 != -1 )
              {
                while ( 1 )
                {
                  if ( v29 == -2 && !v85 )
                    v85 = v28;
                  v27 = (v25 - 1) & (unsigned int)(v27 + v84);
                  v28 = (int *)(v26 + 56 * v27);
                  v29 = *v28;
                  if ( *v28 == *v16 )
                    break;
                  if ( v29 == -1 )
                  {
                    if ( v85 )
                      v28 = v85;
                    break;
                  }
                  ++v84;
                }
              }
            }
            v30 = *v16;
            v31 = v16 + 6;
            *((_QWORD *)v28 + 2) = 0x200000000LL;
            *v28 = v30;
            v32 = v16[4];
            v33 = v28 + 6;
            *((_QWORD *)v28 + 1) = v28 + 6;
            if ( v32 )
            {
              v34 = *((void **)v16 + 1);
              if ( v28 + 2 != v16 + 2 )
              {
                if ( v34 != v31 )
                {
                  v28[4] = v32;
                  v74 = v16[5];
                  *((_QWORD *)v28 + 1) = v34;
                  v28[5] = v74;
                  *((_QWORD *)v16 + 1) = v31;
                  v16[5] = 0;
                  v16[4] = 0;
                  ++*(_DWORD *)(a1 + 80);
                  goto LABEL_10;
                }
                v80 = 16LL * v32;
                if ( v32 <= 2uLL
                  || (v114 = v32,
                      v110 = v28,
                      sub_2237220(v28 + 2, v28 + 6, v32, 16),
                      v28 = v110,
                      v34 = *((void **)v16 + 1),
                      v32 = v114,
                      v80 = 16LL * (unsigned int)v16[4],
                      v33 = *((void **)v110 + 1),
                      v31 = v16 + 6,
                      v80) )
                {
                  v115 = v31;
                  v112 = v32;
                  v108 = v28;
                  memcpy(v33, v34, v80);
                  v34 = *((void **)v16 + 1);
                  v31 = v115;
                  v32 = v112;
                  v28 = v108;
                }
                v28[4] = v32;
                v16[4] = 0;
              }
            }
            else
            {
              v34 = *((void **)v16 + 1);
            }
            ++*(_DWORD *)(a1 + 80);
            if ( v34 == v31 )
            {
LABEL_10:
              v16 += 14;
              if ( v23 == v16 )
                goto LABEL_18;
            }
            else
            {
              v16 += 14;
              free(v34);
              if ( v23 == v16 )
              {
LABEL_18:
                v21 = v94;
                v16 = v101;
                v14 = (unsigned int)v14;
                v13 = v104;
                v10 = v106;
                break;
              }
            }
          }
        }
        v95 = v21;
        operator delete(v16, v90, 8);
        v22 = *(_DWORD **)(a1 + 72);
        v35 = *(_DWORD *)(a1 + 88);
        v21 = v95;
      }
      else
      {
        v76 = *(unsigned int *)(a1 + 88);
        *(_QWORD *)(a1 + 80) = 0;
        v35 = v76;
        for ( j = &v19[14 * v76]; j != v19; v19 += 14 )
          *v19 = -1;
      }
      if ( !v35 )
        goto LABEL_167;
      v118[0] = v21;
      v96 = v21;
      LODWORD(v37) = sub_101AC30(v118);
      v36 = v35 - 1;
      v12 = v96;
      LODWORD(v37) = (v35 - 1) & v37;
      v38 = &v22[14 * (unsigned int)v37];
      v8 = *v38;
      if ( v96 != (_DWORD)v8 )
      {
        v82 = 1;
        v83 = nullptr;
        v39 = *(_DWORD *)(a1 + 80) + 1;
        if ( (_DWORD)v8 != -1 )
        {
          while ( 1 )
          {
            if ( !v83 && (_DWORD)v8 == -2 )
              v83 = v38;
            a6 = (unsigned int)(v82 + 1);
            v37 = v36 & (unsigned int)(v37 + v82);
            v38 = &v22[14 * v37];
            v8 = *v38;
            if ( v96 == (_DWORD)v8 )
              break;
            if ( (_DWORD)v8 == -1 )
            {
              if ( v83 )
                v38 = v83;
              goto LABEL_68;
            }
            ++v82;
          }
        }
        goto LABEL_68;
      }
    }
    else
    {
      if ( (int)v11 - *(_DWORD *)(a1 + 84) - v39 > (unsigned int)v11 >> 3 )
        goto LABEL_68;
      v98 = *(_DWORD *)(a1 + 88);
      v102 = v91;
      v92 = *(int **)(a1 + 72);
      v50 = ((((((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
                 | (unsigned int)(v11 - 1)
                 | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
               | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
               | (unsigned int)(v11 - 1)
               | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
               | (unsigned int)(v11 - 1)
               | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
             | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
               | (unsigned int)(v11 - 1)
               | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
             | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
           | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
           | (unsigned int)(v11 - 1)
           | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1))
          + 1;
      if ( (unsigned int)v50 < 0x40 )
        LODWORD(v50) = 64;
      *(_DWORD *)(a1 + 88) = v50;
      v51 = (_DWORD *)sub_22300B0(56LL * (unsigned int)v50, 8, v11, 64, v8, a6);
      v52 = v98;
      v53 = v51;
      *(_QWORD *)(a1 + 72) = v51;
      v54 = v102;
      if ( v92 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        v99 = 56LL * v98;
        v55 = &v92[14 * v52];
        for ( k = &v51[14 * *(unsigned int *)(a1 + 88)]; k != v53; v53 += 14 )
          *v53 = -1;
        v57 = v92;
        if ( v92 != v55 )
        {
          v105 = v13;
          v107 = v10;
          while ( 1 )
          {
            if ( (unsigned int)(*v57 + 2) <= 1 )
              goto LABEL_78;
            v58 = *(_DWORD *)(a1 + 88);
            if ( !v58 )
            {
              dword_0 = *v57;
              BUG();
            }
            v59 = *(_QWORD *)(a1 + 72);
            v118[0] = *v57;
            LODWORD(v60) = (v58 - 1) & sub_101AC30(v118);
            v61 = (int *)(v59 + 56LL * (unsigned int)v60);
            v62 = *v61;
            if ( *v57 != *v61 )
            {
              v86 = 1;
              v87 = nullptr;
              if ( v62 != -1 )
              {
                while ( 1 )
                {
                  if ( v62 == -2 && !v87 )
                    v87 = v61;
                  v60 = (v58 - 1) & (unsigned int)(v60 + v86);
                  v61 = (int *)(v59 + 56 * v60);
                  v62 = *v61;
                  if ( *v61 == *v57 )
                    break;
                  if ( v62 == -1 )
                  {
                    if ( v87 )
                      v61 = v87;
                    break;
                  }
                  ++v86;
                }
              }
            }
            v63 = *v57;
            v64 = v57 + 6;
            *((_QWORD *)v61 + 2) = 0x200000000LL;
            *v61 = v63;
            v65 = v57[4];
            v66 = v61 + 6;
            *((_QWORD *)v61 + 1) = v61 + 6;
            if ( v65 )
            {
              v67 = *((void **)v57 + 1);
              if ( v61 + 2 != v57 + 2 )
              {
                if ( v67 != v64 )
                {
                  v61[4] = v65;
                  v75 = v57[5];
                  *((_QWORD *)v61 + 1) = v67;
                  v61[5] = v75;
                  *((_QWORD *)v57 + 1) = v64;
                  v57[5] = 0;
                  v57[4] = 0;
                  ++*(_DWORD *)(a1 + 80);
                  goto LABEL_78;
                }
                v81 = 16LL * v65;
                if ( v65 <= 2uLL
                  || (v117 = v61,
                      v111 = v65,
                      sub_2237220(v61 + 2, v61 + 6, v65, 16),
                      v61 = v117,
                      v67 = *((void **)v57 + 1),
                      v65 = v111,
                      v81 = 16LL * (unsigned int)v57[4],
                      v66 = *((void **)v117 + 1),
                      v64 = v57 + 6,
                      v81) )
                {
                  v116 = v61;
                  v113 = v64;
                  v109 = v65;
                  memcpy(v66, v67, v81);
                  v67 = *((void **)v57 + 1);
                  v61 = v116;
                  v64 = v113;
                  v65 = v109;
                }
                v61[4] = v65;
                v57[4] = 0;
              }
            }
            else
            {
              v67 = *((void **)v57 + 1);
            }
            ++*(_DWORD *)(a1 + 80);
            if ( v67 == v64 )
            {
LABEL_78:
              v57 += 14;
              if ( v55 == v57 )
                goto LABEL_86;
            }
            else
            {
              v57 += 14;
              free(v67);
              if ( v55 == v57 )
              {
LABEL_86:
                v54 = v102;
                v14 = (unsigned int)v14;
                v13 = v105;
                v10 = v107;
                break;
              }
            }
          }
        }
        v103 = v54;
        operator delete(v92, v99, 8);
        v53 = *(_DWORD **)(a1 + 72);
        v68 = *(_DWORD *)(a1 + 88);
        v54 = v103;
      }
      else
      {
        v78 = *(unsigned int *)(a1 + 88);
        *(_QWORD *)(a1 + 80) = 0;
        v68 = v78;
        for ( m = &v51[14 * v78]; m != v51; v51 += 14 )
          *v51 = -1;
      }
      v93 = v68;
      if ( !v68 )
      {
LABEL_167:
        ++*(_DWORD *)(a1 + 80);
        BUG();
      }
      v118[0] = v54;
      v100 = v54;
      v69 = sub_101AC30(v118);
      v12 = v100;
      v70 = v93 - 1;
      v71 = (v93 - 1) & v69;
      v38 = &v53[14 * v71];
      v72 = *v38;
      if ( v100 != *v38 )
      {
        a6 = 1;
        v73 = nullptr;
        v39 = *(_DWORD *)(a1 + 80) + 1;
        if ( v72 != -1 )
        {
          while ( 1 )
          {
            if ( v72 == -2 && !v73 )
              v73 = v38;
            v8 = (unsigned int)(a6 + 1);
            a6 = v71 + (unsigned int)a6;
            v71 = v70 & a6;
            v38 = &v53[14 * (v70 & (unsigned int)a6)];
            v72 = *v38;
            if ( v100 == *v38 )
              break;
            if ( v72 == -1 )
            {
              if ( v73 )
                v38 = v73;
              goto LABEL_68;
            }
            LODWORD(a6) = v8;
          }
        }
        goto LABEL_68;
      }
    }
    v39 = *(_DWORD *)(a1 + 80) + 1;
LABEL_68:
    *(_DWORD *)(a1 + 80) = v39;
    if ( *v38 != -1 )
      --*(_DWORD *)(a1 + 84);
    *v38 = v12;
    v43 = v38 + 2;
    v42 = 0;
    *((_QWORD *)v38 + 1) = v38 + 6;
    *((_QWORD *)v38 + 2) = 0x200000000LL;
LABEL_40:
    v47 = v42 + 1;
    v48 = v14 | (v15 << 32);
    if ( v47 > v43[3] )
      sub_2237220(v43, v43 + 4, v47, 16);
    result = (char *)(*(_QWORD *)v43 + 16LL * v43[2]);
    *(_QWORD *)result = v13;
    *((_QWORD *)result + 1) = v48;
    ++v43[2];
    goto LABEL_34;
  }
LABEL_36:
  *(_DWORD *)(v6 + 104) = 0;
  return result;
}
