__int64 __fastcall sub_C04CF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  _QWORD *v63; // r11
  __int64 *v64; // r10
  __int64 v65; // r9
  _QWORD *i; // rdx
  __int64 *v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // edi
  _QWORD *v70; // rsi
  __int64 v71; // r8
  int v72; // r10d
  int v73; // r10d
  unsigned int v74; // r9d
  unsigned int v75; // eax
  _QWORD *v76; // rax
  __int64 *v77; // rcx
  _QWORD *v78; // r11
  unsigned int v79; // r10d
  __int64 *v80; // r9
  _QWORD *m; // rdx
  __int64 *v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // edi
  _QWORD *v85; // rsi
  __int64 v86; // r8
  int v87; // ecx
  __int64 v88; // r9
  int v89; // ecx
  _QWORD *v90; // r8
  __int64 v91; // rdx
  _QWORD *k; // rdx
  __int64 v93; // rdx
  _QWORD *n; // rdx
  _QWORD *v95; // rcx
  _QWORD *v96; // rcx
  int v97; // ecx
  __int64 v98; // [rsp+8h] [rbp-90h]
  __int64 v100; // [rsp+18h] [rbp-80h]
  __int64 v102; // [rsp+28h] [rbp-70h]
  unsigned int v103; // [rsp+30h] [rbp-68h]
  int j; // [rsp+30h] [rbp-68h]
  __int64 *v105; // [rsp+30h] [rbp-68h]
  unsigned int v106; // [rsp+30h] [rbp-68h]
  int v107; // [rsp+30h] [rbp-68h]
  __int64 *v108; // [rsp+38h] [rbp-60h]
  unsigned int v109; // [rsp+38h] [rbp-60h]
  unsigned int v110; // [rsp+38h] [rbp-60h]
  int v111; // [rsp+4Ch] [rbp-4Ch]
  int v112; // [rsp+4Ch] [rbp-4Ch]

  v5 = a1;
  v98 = sub_F3F500(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3 & 0xFFFFFFFFFFFFFFF0LL, a4, a5);
  v7 = v98;
  v100 = sub_EBA840(*(_QWORD *)(*a1 + 16LL), v98);
  if ( (*(_BYTE *)(v98 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v7 = *(_QWORD *)(v98 + 104);
    sub_6E4DB0((__int64 *)(v7 + 96), v7, v8, v9, v10, v11);
    v102 = *(unsigned int *)(*(_QWORD *)(v98 + 128) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(v98 + 128) + 16LL) )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v98 + 104);
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
                v48 = sub_962430((__int64)(v16 + 294), 24, 24, 3, v10, v11);
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
        v17 = *(_QWORD *)(v98 + 128);
        if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
          v18 = sub_B72C40(v17);
        else
          v18 = *(_QWORD *)(v17 + 24);
        v19 = v18 + 24 * v12;
        v20 = *(_QWORD *)(**(_QWORD **)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v20 + 8) & 0xF) != 0 )
          v20 = sub_F411C0(**(_QWORD **)(v19 + 16));
        v24 = sub_F3F530(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
        v25 = *(_QWORD *)(a2 + 8);
        v26 = (_DWORD *)(v25 + 56LL * (unsigned int)v12);
        if ( *v26 != 10 )
          return 0;
        v27 = *(_QWORD *)(v24 + 128);
        if ( v27
          || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v25, v21, v22, v23),
              (v27 = *(_QWORD *)(v24 + 128)) != 0) )
        {
          v27 = *(_QWORD *)(v27 + 88);
        }
        v28 = *(_QWORD *)(v100 + 72);
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
            v108 = *(__int64 **)(v28 + 64);
            v103 = *(_DWORD *)(v28 + 80);
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
            v62 = (_QWORD *)sub_220C370(16LL * (unsigned int)v61, 8, v29, v30, v22, v23);
            v63 = v62;
            *(_QWORD *)(v28 + 64) = v62;
            if ( v108 )
            {
              *(_QWORD *)(v28 + 72) = 0;
              v64 = &v108[2 * v103];
              v65 = *(unsigned int *)(v28 + 80);
              for ( i = &v62[2 * v65]; i != v62; v62 += 2 )
                *v62 = -4096;
              v67 = v108;
              for ( j = v65 - 1; v64 != v67; v67 += 2 )
              {
                v68 = *v67;
                if ( *v67 != -8192 && v68 != -4096 )
                {
                  if ( !(_DWORD)v65 )
                  {
                    *(_QWORD *)&dword_0 = *v67;
                    BUG();
                  }
                  v69 = j & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
                  v70 = &v63[2 * v69];
                  v71 = *v70;
                  if ( *v70 != v68 && v71 != -4096 )
                  {
                    v111 = 1;
                    v95 = nullptr;
                    while ( 1 )
                    {
                      if ( !v95 && v71 == -8192 )
                        v95 = v70;
                      v69 = j & (v111 + v69);
                      ++v111;
                      v70 = &v63[2 * v69];
                      v71 = *v70;
                      if ( v68 == *v70 )
                        break;
                      if ( v71 == -4096 )
                      {
                        if ( v95 )
                          v70 = v95;
                        break;
                      }
                    }
                  }
                  *v70 = v68;
                  v70[1] = v67[1];
                  ++*(_DWORD *)(v28 + 72);
                }
              }
              operator delete();
              v63 = *(_QWORD **)(v28 + 64);
              v72 = *(_DWORD *)(v28 + 80);
              v56 = *(_DWORD *)(v28 + 72) + 1;
            }
            else
            {
              v91 = *(unsigned int *)(v28 + 80);
              *(_QWORD *)(v28 + 72) = 0;
              v72 = v91;
              for ( k = &v62[2 * v91]; k != v62; v62 += 2 )
                *v62 = -4096;
              v56 = 1;
            }
            if ( !v72 )
            {
LABEL_140:
              ++*(_DWORD *)(v28 + 72);
              BUG();
            }
            v73 = v72 - 1;
            v74 = v73 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v33 = &v63[2 * v74];
            v59 = *v33;
            if ( *v33 == v27 )
            {
              v59 = v27;
              goto LABEL_51;
            }
            v97 = 1;
            v90 = nullptr;
            if ( v59 != -4096 )
            {
              while ( 1 )
              {
                if ( !v90 && v59 == -8192 )
                  v90 = v33;
                v74 = v73 & (v97 + v74);
                v33 = &v63[2 * v74];
                v59 = *v33;
                if ( v27 == *v33 )
                  goto LABEL_51;
                if ( v59 == -4096 )
                {
LABEL_123:
                  if ( !v90 )
                    break;
                  v59 = *v90;
                  v33 = v90;
                  goto LABEL_51;
                }
                ++v97;
              }
            }
LABEL_86:
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
            v109 = *(_DWORD *)(v28 + 80);
            v105 = *(__int64 **)(v28 + 64);
            v75 = ((((((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
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
            if ( v75 < 0x40 )
              v75 = 64;
            *(_DWORD *)(v28 + 80) = v75;
            v76 = (_QWORD *)sub_220C370(16LL * v75, 8, v29, v30, v57, v58);
            v77 = v105;
            v78 = v76;
            *(_QWORD *)(v28 + 64) = v76;
            v79 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
            if ( v105 )
            {
              *(_QWORD *)(v28 + 72) = 0;
              v80 = &v105[2 * v109];
              v106 = *(_DWORD *)(v28 + 80);
              for ( m = &v76[2 * v106]; m != v76; v76 += 2 )
                *v76 = -4096;
              v82 = v77;
              v110 = v106 - 1;
              do
              {
                v83 = *v82;
                if ( *v82 != -4096 && v83 != -8192 )
                {
                  if ( !v106 )
                  {
                    *(_QWORD *)&dword_0 = *v82;
                    BUG();
                  }
                  v84 = v110 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
                  v85 = &v78[2 * v84];
                  v86 = *v85;
                  if ( v83 != *v85 && v86 != -4096 )
                  {
                    v112 = 1;
                    v96 = nullptr;
                    while ( 1 )
                    {
                      if ( !v96 && v86 == -8192 )
                        v96 = v85;
                      v84 = v110 & (v112 + v84);
                      ++v112;
                      v85 = &v78[2 * v84];
                      v86 = *v85;
                      if ( v83 == *v85 )
                        break;
                      if ( v86 == -4096 )
                      {
                        if ( v96 )
                          v85 = v96;
                        break;
                      }
                    }
                  }
                  *v85 = v83;
                  v85[1] = v82[1];
                  ++*(_DWORD *)(v28 + 72);
                }
                v82 += 2;
              }
              while ( v80 != v82 );
              operator delete();
              v78 = *(_QWORD **)(v28 + 64);
              v87 = *(_DWORD *)(v28 + 80);
              v79 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
              v56 = *(_DWORD *)(v28 + 72) + 1;
            }
            else
            {
              v93 = *(unsigned int *)(v28 + 80);
              *(_QWORD *)(v28 + 72) = 0;
              v87 = v93;
              for ( n = &v76[2 * v93]; n != v76; v76 += 2 )
                *v76 = -4096;
              v56 = 1;
            }
            if ( !v87 )
              goto LABEL_140;
            v107 = v87 - 1;
            v88 = (v87 - 1) & v79;
            v33 = &v78[2 * v88];
            v59 = *v33;
            if ( v27 != *v33 )
            {
              v89 = 1;
              v90 = nullptr;
              if ( v59 == -4096 )
                goto LABEL_86;
              while ( 1 )
              {
                if ( !v90 && v59 == -8192 )
                  v90 = v33;
                v88 = v107 & (unsigned int)(v88 + v89);
                v33 = &v78[2 * v88];
                v59 = *v33;
                if ( v27 == *v33 )
                  break;
                if ( v59 == -4096 )
                  goto LABEL_123;
                ++v89;
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
          v37 = sub_F411C0(**(_QWORD **)(v19 + 16)) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v37 = *(_QWORD *)v36 & 0xFFFFFFFFFFFFFFF0LL;
        v7 = (__int64)v26;
        if ( !(unsigned __int8)sub_C04CF0(a1, v26, v37, v35) )
          return 0;
        if ( v102 == ++v12 )
        {
          v5 = a1;
          break;
        }
      }
    }
  }
  v38 = sub_B5ABC0(v98, v7, v8, v9, v10, v11);
  v39 = v38;
  if ( !v38 )
    return 1;
  v40 = 0;
  if ( (*(_BYTE *)(v38 + 68) & 1) != 0 )
  {
LABEL_43:
    v52 = *v5;
    v53 = sub_EC7AA0(v5[13]);
    sub_E0FF40(v52, v53, 2390, 0);
  }
  else
  {
LABEL_24:
    v41 = sub_A742B0(*(_QWORD *)(*v5 + 16LL), *(_QWORD *)(*(_QWORD *)(v100 + 48) + 8LL * v40));
    if ( (unsigned __int8)sub_C056F0(
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

