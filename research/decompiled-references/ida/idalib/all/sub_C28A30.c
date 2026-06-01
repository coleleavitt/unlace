__int64 __fastcall sub_C28A30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rdx
  _DWORD *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned int v32; // r8d
  _QWORD *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbp
  unsigned int v40; // ebx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v44; // r13
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _DWORD *v49; // rax
  __int64 v50; // rdi
  int v51; // edx
  __int64 v52; // rbx
  unsigned int v53; // eax
  int v54; // r9d
  _QWORD *v55; // r11
  int v56; // edi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 *v63; // rcx
  _QWORD *v64; // r11
  __int64 *v65; // r10
  __int64 v66; // r9
  _QWORD *i; // rdx
  __int64 *v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // edi
  _QWORD *v71; // rsi
  __int64 v72; // r8
  int v73; // r10d
  int v74; // r10d
  unsigned int v75; // r9d
  unsigned int v76; // eax
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  _QWORD *v79; // r11
  unsigned int v80; // r10d
  __int64 *v81; // r9
  _QWORD *k; // rdx
  __int64 *v83; // rax
  __int64 v84; // rdx
  unsigned int v85; // edi
  _QWORD *v86; // rsi
  __int64 v87; // r8
  int v88; // ecx
  __int64 v89; // r9
  int v90; // ecx
  _QWORD *v91; // r8
  __int64 v92; // rdx
  _QWORD *j; // rdx
  __int64 v94; // rdx
  _QWORD *m; // rdx
  _QWORD *v96; // rcx
  _QWORD *v97; // rcx
  int v98; // ecx
  __int64 v99; // [rsp+8h] [rbp-90h]
  __int64 v101; // [rsp+18h] [rbp-80h]
  __int64 v103; // [rsp+28h] [rbp-70h]
  unsigned int v104; // [rsp+30h] [rbp-68h]
  int v105; // [rsp+30h] [rbp-68h]
  _QWORD *v106; // [rsp+30h] [rbp-68h]
  unsigned int v107; // [rsp+30h] [rbp-68h]
  int v108; // [rsp+30h] [rbp-68h]
  __int64 *v109; // [rsp+38h] [rbp-60h]
  __int64 v110; // [rsp+38h] [rbp-60h]
  unsigned int v111; // [rsp+38h] [rbp-60h]
  unsigned int v112; // [rsp+38h] [rbp-60h]
  __int64 *v113; // [rsp+40h] [rbp-58h]
  __int64 v114; // [rsp+40h] [rbp-58h]
  int v115; // [rsp+4Ch] [rbp-4Ch]
  int v116; // [rsp+4Ch] [rbp-4Ch]
  _QWORD *v117; // [rsp+50h] [rbp-48h]

  v5 = a1;
  v99 = sub_F63240(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3 & 0xFFFFFFFFFFFFFFF0LL, a4, a5);
  v7 = v99;
  v101 = sub_EDE580(*(_QWORD *)(*a1 + 16LL), v99);
  if ( (*(_BYTE *)(v99 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v7 = *(_QWORD *)(v99 + 104);
    sub_7052B0((__int64 *)(v7 + 96), v7, v8, v9, v10, v11);
    v103 = *(unsigned int *)(*(_QWORD *)(v99 + 128) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(v99 + 128) + 16LL) )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v99 + 104);
        v14 = *(_QWORD *)(v13 + 96);
        v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v14 & 1) == 0 )
        {
          v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v14 & 2) == 0 )
              goto LABEL_7;
            v44 = v16[2295];
            v45 = v13 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v44 )
            {
              v46 = v16[294];
              v16[304] += 24LL;
              v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v16[295] >= v47 + 24 && v46 )
              {
                v16[294] = v47 + 24;
                v48 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v48 = sub_986170((__int64)(v16 + 294), 24, 24, 3, v10, v11);
                v47 = v48 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v48 = v44;
              v45 = v47 | 4;
              *(_DWORD *)(v48 + 8) = 0;
              *(_QWORD *)(v48 + 16) = v13;
            }
            v15 = v45 & 0xFFFFFFFFFFFFFFFELL;
            v14 = v15 | 1;
            *(_QWORD *)(v13 + 96) = v15 | 1;
          }
        }
        if ( v15 )
        {
          if ( (v15 & 4) != 0 )
          {
            v49 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v49 )
            {
              v50 = *(_QWORD *)v49;
              v51 = *(_DWORD *)(*(_QWORD *)v49 + 12LL);
              if ( v49[2] != v51 )
              {
                v49[2] = v51;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 152LL))(v50, v13);
              }
            }
          }
        }
LABEL_7:
        v17 = *(_QWORD *)(v99 + 128);
        if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
          v18 = sub_B96980(v17);
        else
          v18 = *(_QWORD *)(v17 + 24);
        v19 = v18 + 24 * v12;
        v20 = *(_QWORD *)(**(_QWORD **)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v20 + 8) & 0xF) != 0 )
          v20 = sub_F64F00(**(_QWORD **)(v19 + 16));
        v24 = sub_F63270(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
        v25 = *(_QWORD *)(a2 + 8);
        v26 = (_DWORD *)(v25 + 56LL * (unsigned int)v12);
        if ( *v26 != 10 )
          return 0;
        v27 = *(_QWORD *)(v24 + 128);
        if ( v27
          || (sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v25, v21, v22, v23),
              (v27 = *(_QWORD *)(v24 + 128)) != 0) )
        {
          v27 = *(_QWORD *)(v27 + 88);
        }
        v28 = *(_QWORD *)(v101 + 72);
        v29 = *(unsigned int *)(v28 + 80);
        v30 = *(_QWORD *)(v28 + 64);
        if ( !(_DWORD)v29 )
          goto LABEL_54;
        v31 = (unsigned int)(v29 - 1);
        v32 = v31 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
        v33 = (_QWORD *)(v30 + 16LL * v32);
        v34 = *v33;
        if ( v27 != *v33 )
        {
          v54 = 1;
          v55 = nullptr;
          if ( v34 != -4096 )
          {
            while ( 1 )
            {
              if ( v34 == -8192 && !v55 )
                v55 = v33;
              v32 = v31 & (v54 + v32);
              v33 = (_QWORD *)(v30 + 16LL * v32);
              v34 = *v33;
              if ( v27 == *v33 )
                goto LABEL_16;
              if ( v34 == -4096 )
                break;
              ++v54;
            }
            if ( v55 )
              v33 = v55;
          }
          v22 = (unsigned int)(3 * v29);
          v56 = *(_DWORD *)(v28 + 72) + 1;
          v23 = (unsigned int)(4 * v56);
          if ( (unsigned int)v23 >= (unsigned int)v22 )
          {
LABEL_54:
            v109 = *(__int64 **)(v28 + 64);
            v104 = *(_DWORD *)(v28 + 80);
            v60 = (((((((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v29 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v29 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v29 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v29 - 1) | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v29 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v29 - 1) >> 1);
            v61 = ((v60 >> 16) | v60) + 1;
            if ( (unsigned int)v61 < 0x40 )
              LODWORD(v61) = 64;
            *(_DWORD *)(v28 + 80) = v61;
            v62 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v61, 8, v29, v30, v22, v23);
            v63 = v109;
            v64 = v62;
            *(_QWORD *)(v28 + 64) = v62;
            if ( v109 )
            {
              *(_QWORD *)(v28 + 72) = 0;
              v110 = 2LL * v104;
              v65 = &v63[v110];
              v66 = *(unsigned int *)(v28 + 80);
              for ( i = &v62[2 * v66]; i != v62; v62 += 2 )
                *v62 = -4096;
              v68 = v63;
              v105 = v66 - 1;
              if ( v63 != v65 )
              {
                v113 = v63;
                do
                {
                  v69 = *v68;
                  if ( *v68 != -8192 && v69 != -4096 )
                  {
                    if ( !(_DWORD)v66 )
                    {
                      *(_QWORD *)&dword_0 = *v68;
                      BUG();
                    }
                    v70 = v105 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
                    v71 = &v64[2 * v70];
                    v72 = *v71;
                    if ( *v71 != v69 && v72 != -4096 )
                    {
                      v115 = 1;
                      v96 = nullptr;
                      while ( 1 )
                      {
                        if ( !v96 && v72 == -8192 )
                          v96 = v71;
                        v70 = v105 & (v115 + v70);
                        ++v115;
                        v71 = &v64[2 * v70];
                        v72 = *v71;
                        if ( v69 == *v71 )
                          break;
                        if ( v72 == -4096 )
                        {
                          if ( v96 )
                            v71 = v96;
                          break;
                        }
                      }
                    }
                    *v71 = v69;
                    v71[1] = v68[1];
                    ++*(_DWORD *)(v28 + 72);
                  }
                  v68 += 2;
                }
                while ( v65 != v68 );
                v63 = v113;
              }
              operator delete(v63, v110 * 8, 8);
              v64 = *(_QWORD **)(v28 + 64);
              v73 = *(_DWORD *)(v28 + 80);
              v56 = *(_DWORD *)(v28 + 72) + 1;
            }
            else
            {
              v92 = *(unsigned int *)(v28 + 80);
              *(_QWORD *)(v28 + 72) = 0;
              v73 = v92;
              for ( j = &v62[2 * v92]; j != v62; v62 += 2 )
                *v62 = -4096;
              v56 = 1;
            }
            if ( !v73 )
            {
LABEL_142:
              ++*(_DWORD *)(v28 + 72);
              BUG();
            }
            v74 = v73 - 1;
            v75 = v74 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v33 = &v64[2 * v75];
            v59 = *v33;
            if ( *v33 == v27 )
            {
              v59 = v27;
              goto LABEL_51;
            }
            v98 = 1;
            v91 = nullptr;
            if ( v59 != -4096 )
            {
              while ( 1 )
              {
                if ( !v91 && v59 == -8192 )
                  v91 = v33;
                v75 = v74 & (v98 + v75);
                v33 = &v64[2 * v75];
                v59 = *v33;
                if ( v27 == *v33 )
                  goto LABEL_51;
                if ( v59 == -4096 )
                {
LABEL_125:
                  if ( !v91 )
                    break;
                  v59 = *v91;
                  v33 = v91;
                  goto LABEL_51;
                }
                ++v98;
              }
            }
LABEL_88:
            *(_DWORD *)(v28 + 72) = v56;
          }
          else
          {
            v57 = (unsigned int)(v29 - *(_DWORD *)(v28 + 76) - v56);
            v58 = (unsigned int)v29 >> 3;
            if ( (unsigned int)v57 > (unsigned int)v58 )
            {
              v59 = *v33;
              goto LABEL_51;
            }
            v111 = *(_DWORD *)(v28 + 80);
            v106 = *(_QWORD **)(v28 + 64);
            v76 = ((((((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
                     | (v31 >> 1)
                     | v31
                     | (((v31 >> 1) | v31) >> 2)) >> 8)
                   | (((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
                   | (v31 >> 1)
                   | v31
                   | (((v31 >> 1) | v31) >> 2)) >> 16)
                 | (((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4) | (v31 >> 1)
                                                                           | v31
                                                                           | (((v31 >> 1) | v31) >> 2)) >> 8)
                 | (((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
                 | (v31 >> 1)
                 | v31
                 | (((v31 >> 1) | v31) >> 2))
                + 1;
            if ( v76 < 0x40 )
              v76 = 64;
            *(_DWORD *)(v28 + 80) = v76;
            v77 = (_QWORD *)sub_22300B0(16LL * v76, 8, v29, v30, v57, v58);
            v78 = v106;
            v79 = v77;
            *(_QWORD *)(v28 + 64) = v77;
            v80 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
            if ( v106 )
            {
              *(_QWORD *)(v28 + 72) = 0;
              v114 = 2LL * v111;
              v81 = &v106[v114];
              v107 = *(_DWORD *)(v28 + 80);
              for ( k = &v77[2 * v107]; k != v77; v77 += 2 )
                *v77 = -4096;
              v117 = v78;
              v83 = v78;
              v112 = v107 - 1;
              do
              {
                v84 = *v83;
                if ( *v83 != -4096 && v84 != -8192 )
                {
                  if ( !v107 )
                  {
                    *(_QWORD *)&dword_0 = *v83;
                    BUG();
                  }
                  v85 = v112 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
                  v86 = &v79[2 * v85];
                  v87 = *v86;
                  if ( v84 != *v86 && v87 != -4096 )
                  {
                    v116 = 1;
                    v97 = nullptr;
                    while ( 1 )
                    {
                      if ( !v97 && v87 == -8192 )
                        v97 = v86;
                      v85 = v112 & (v116 + v85);
                      ++v116;
                      v86 = &v79[2 * v85];
                      v87 = *v86;
                      if ( v84 == *v86 )
                        break;
                      if ( v87 == -4096 )
                      {
                        if ( v97 )
                          v86 = v97;
                        break;
                      }
                    }
                  }
                  *v86 = v84;
                  v86[1] = v83[1];
                  ++*(_DWORD *)(v28 + 72);
                }
                v83 += 2;
              }
              while ( v81 != v83 );
              operator delete(v117, v114 * 8, 8);
              v79 = *(_QWORD **)(v28 + 64);
              v88 = *(_DWORD *)(v28 + 80);
              v80 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
              v56 = *(_DWORD *)(v28 + 72) + 1;
            }
            else
            {
              v94 = *(unsigned int *)(v28 + 80);
              *(_QWORD *)(v28 + 72) = 0;
              v88 = v94;
              for ( m = &v77[2 * v94]; m != v77; v77 += 2 )
                *v77 = -4096;
              v56 = 1;
            }
            if ( !v88 )
              goto LABEL_142;
            v108 = v88 - 1;
            v89 = (v88 - 1) & v80;
            v33 = &v79[2 * v89];
            v59 = *v33;
            if ( v27 != *v33 )
            {
              v90 = 1;
              v91 = nullptr;
              if ( v59 == -4096 )
                goto LABEL_88;
              while ( 1 )
              {
                if ( !v91 && v59 == -8192 )
                  v91 = v33;
                v89 = v108 & (unsigned int)(v89 + v90);
                v33 = &v79[2 * v89];
                v59 = *v33;
                if ( v27 == *v33 )
                  break;
                if ( v59 == -4096 )
                  goto LABEL_125;
                ++v90;
              }
            }
LABEL_51:
            *(_DWORD *)(v28 + 72) = v56;
            if ( v59 != -4096 )
              --*(_DWORD *)(v28 + 76);
          }
          *v33 = v27;
          v35 = a4;
          v33[1] = 0;
          goto LABEL_17;
        }
LABEL_16:
        v35 = v33[1] + a4;
LABEL_17:
        v36 = **(_QWORD **)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        if ( (*(_BYTE *)(*(_QWORD *)v36 + 8LL) & 0xF) != 0 )
          v37 = sub_F64F00(**(_QWORD **)(v19 + 16)) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v37 = *(_QWORD *)v36 & 0xFFFFFFFFFFFFFFF0LL;
        v7 = (__int64)v26;
        if ( !(unsigned __int8)sub_C28A30(a1, v26, v37, v35) )
          return 0;
        if ( v103 == ++v12 )
        {
          v5 = a1;
          break;
        }
      }
    }
  }
  v38 = sub_B7E900(v99, v7, v8, v9, v10, v11);
  v39 = v38;
  if ( !v38 )
    return 1;
  v40 = 0;
  if ( (*(_BYTE *)(v38 + 68) & 1) != 0 )
  {
LABEL_43:
    v52 = *v5;
    v53 = sub_EEB7E0(v5[13]);
    sub_E33C80(v52, v53, 2390, 0);
  }
  else
  {
LABEL_24:
    v41 = sub_A97FF0(*(_QWORD *)(*v5 + 16LL), *(_QWORD *)(*(_QWORD *)(v101 + 48) + 8LL * v40));
    if ( (unsigned __int8)sub_C29430(
                            v5,
                            *(_QWORD *)(a2 + 8) + 56LL * (*(_DWORD *)(a2 + 16) + v40),
                            *(_QWORD *)(v39 + 48),
                            v41 + a4) )
    {
      ++v40;
      while ( 1 )
      {
        v42 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v39 = v42;
        if ( !v42 )
          return 1;
        if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 49 <= 2 )
        {
          if ( (*(_BYTE *)(v42 + 68) & 1) == 0 )
            goto LABEL_24;
          goto LABEL_43;
        }
      }
    }
  }
  return 0;
}
