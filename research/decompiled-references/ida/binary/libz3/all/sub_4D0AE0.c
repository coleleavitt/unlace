__int64 *__fastcall sub_4D0AE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *result; // rax
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64); // rcx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // r12
  __int64 *v15; // r13
  __int64 *v16; // rdx
  int v17; // ecx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r14
  _QWORD *v22; // rbp
  bool v23; // r10
  int v24; // esi
  int v25; // r15d
  __int64 v26; // r8
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 *i; // rax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 *j; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  unsigned int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r10
  int v45; // edi
  __int64 v46; // rax
  __int64 *v47; // r9
  __int64 *k; // rax
  __int64 v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r14
  unsigned int v53; // r10d
  int v54; // esi
  __int64 v55; // r15
  __int64 *v56; // rdi
  __int64 *v57; // rax
  __int64 *v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // r13
  _QWORD *v62; // rax
  unsigned int v63; // r10d
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  __int64 *v66; // rax
  __int64 *m; // r13
  __int64 v68; // rdx
  _QWORD *v69; // rsi
  _QWORD *v70; // rdx
  __int64 v71; // rsi
  unsigned int v72; // r13d
  int v73; // esi
  __int64 v74; // r15
  __int64 *v75; // rdi
  __int64 *v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  _QWORD *v83; // rdx
  __int64 v84; // rcx
  __int64 *v85; // r14
  __int64 v86; // r15
  __int64 (__fastcall *v87)(__int64, __int64); // rax
  __int64 (__fastcall *v88)(__int64); // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r15
  unsigned int v92; // [rsp+8h] [rbp-90h]
  int v93; // [rsp+14h] [rbp-84h]
  bool v94; // [rsp+18h] [rbp-80h]
  __int64 v95; // [rsp+18h] [rbp-80h]
  size_t v96; // [rsp+18h] [rbp-80h]
  __int64 v97; // [rsp+18h] [rbp-80h]
  _QWORD *v98; // [rsp+18h] [rbp-80h]
  __int64 v99; // [rsp+20h] [rbp-78h]
  unsigned int v100; // [rsp+20h] [rbp-78h]
  __int64 v101; // [rsp+20h] [rbp-78h]
  size_t v102; // [rsp+20h] [rbp-78h]
  __int64 v103; // [rsp+28h] [rbp-70h]
  __int64 v104; // [rsp+28h] [rbp-70h]
  _QWORD *v105; // [rsp+28h] [rbp-70h]
  __int64 v106; // [rsp+28h] [rbp-70h]
  __int64 v107; // [rsp+28h] [rbp-70h]
  int v108; // [rsp+30h] [rbp-68h]
  bool v109; // [rsp+30h] [rbp-68h]
  __int64 *v110; // [rsp+30h] [rbp-68h]
  __int64 **v111; // [rsp+38h] [rbp-60h]
  char v113; // [rsp+4Bh] [rbp-4Dh]
  unsigned int v114; // [rsp+4Ch] [rbp-4Ch]
  __int64 v115; // [rsp+50h] [rbp-48h]

  v2 = a1[6];
  sub_654110(v2, a2);
  v115 = v2 + 2360;
  v113 = 0;
  v111 = (__int64 **)sub_63BB40(v2 + 2360);
  result = *v111;
  if ( *v111 )
  {
    v4 = 1;
    do
    {
      if ( v4 >= *((_DWORD *)result - 1) )
        break;
      v5 = result[v4];
      v6 = *(__int64 **)v5;
      v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
      if ( v7 != *(_QWORD *)v5 )
      {
        while ( (unsigned __int64)*v6 <= 1 )
        {
          if ( (__int64 *)v7 == ++v6 )
            goto LABEL_20;
        }
        if ( (__int64 *)v7 != v6 )
        {
          v8 = *v6;
          while ( 1 )
          {
            v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
            if ( v9 == sub_4D0440 )
            {
              v10 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
              if ( v10 == sub_4D0080 )
                v11 = (__int64)(a1 + 8);
              else
                v11 = v10((__int64)a1);
              v12 = sub_4C7190(v11, v8);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
              {
LABEL_53:
                v113 = 1;
LABEL_19:
                result = *v111;
                break;
              }
            }
            else
            {
              v35 = v9((__int64)a1, v8);
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35) )
                goto LABEL_53;
            }
            v13 = v6 + 1;
            if ( (__int64 *)v7 != v6 + 1 )
            {
              while ( 1 )
              {
                v8 = *v13;
                v6 = v13;
                if ( (unsigned __int64)*v13 > 1 )
                  break;
                if ( (__int64 *)v7 == ++v13 )
                  goto LABEL_19;
              }
              if ( (__int64 *)v7 != v13 )
                continue;
            }
            goto LABEL_19;
          }
        }
      }
LABEL_20:
      ++v4;
    }
    while ( result );
    if ( v113 )
    {
      v14 = (__int64 *)sub_186B270(0x40u);
      *(_OWORD *)v14 = 0;
      *((_OWORD *)v14 + 1) = 0;
      v15 = v14 + 8;
      *((_OWORD *)v14 + 2) = 0;
      *((_OWORD *)v14 + 3) = 0;
      result = (__int64 *)v111;
      v16 = *v111;
      if ( !*v111 )
        goto LABEL_176;
      v93 = 0;
      v17 = 0;
      v92 = 8;
      v114 = 1;
      while ( v114 < *((_DWORD *)v16 - 1) )
      {
        do
        {
          v18 = v16[v114];
          v19 = *(_QWORD **)v18;
          v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
          if ( *(_QWORD *)v18 == v20 )
            goto LABEL_46;
          while ( 1 )
          {
            v21 = *v19;
            v22 = v19;
            if ( *v19 > 1u )
              break;
            if ( (_QWORD *)v20 == ++v19 )
              goto LABEL_46;
          }
          if ( (_QWORD *)v20 == v19 )
          {
LABEL_46:
            result = (__int64 *)v92;
            v15 = &v14[v92];
            break;
          }
          v23 = 0;
          do
          {
            v24 = *(_DWORD *)(v21 + 12);
            v25 = v92 - 1;
            v26 = 8LL * v92;
            v27 = &v14[(unsigned __int64)v26 / 8];
            v28 = 8LL * ((v92 - 1) & v24);
            v15 = &v14[(unsigned __int64)v26 / 8];
            v29 = &v14[(unsigned __int64)v28 / 8];
            if ( v28 != v26 )
            {
              for ( i = &v14[(unsigned __int64)v28 / 8]; v27 != i; ++i )
              {
                v31 = *i;
                if ( (unsigned __int64)*i > 1 )
                {
                  if ( *(_DWORD *)(v31 + 12) == v24 && v31 == v21 )
                    goto LABEL_39;
                }
                else if ( !v31 )
                {
                  goto LABEL_38;
                }
              }
            }
            if ( v14 != v29 )
            {
              for ( j = v14; v29 != j; ++j )
              {
                v37 = *j;
                if ( (unsigned __int64)*j > 1 )
                {
                  if ( *(_DWORD *)(v37 + 12) == v24 && v37 == v21 )
                    goto LABEL_39;
                }
                else if ( !v37 )
                {
                  break;
                }
              }
            }
LABEL_38:
            v108 = v17;
            v99 = v20;
            v94 = v23;
            v32 = (__int64 *)sub_63BA90(v115, v21);
            v23 = v94;
            v15 = v27;
            v20 = v99;
            v33 = 8LL * v92;
            v17 = v108;
            if ( *v32 )
            {
              v38 = *v32;
              v109 = v94;
              v39 = 0;
              v40 = v21;
              if ( !*(_DWORD *)(*v32 - 4) )
                goto LABEL_77;
              while ( 1 )
              {
                v41 = *(_QWORD *)(v38 + 8LL * v39);
                v42 = *(unsigned int *)(v41 + 68);
                if ( *(_DWORD *)(v41 + 64) < (unsigned int)v42 )
                {
                  v52 = v40;
                  v72 = 2 * v92;
                  if ( 3 * v92 >= 4 * (v17 + v93) )
                  {
                    v15 = v27;
                    goto LABEL_133;
                  }
                  v106 = v20;
                  v92 *= 2;
                  v102 = 8LL * v72;
                  v79 = (_QWORD *)sub_186B270(v102);
                  v98 = v79;
                  v20 = v106;
                  if ( v72 )
                  {
                    memset(v79, 0, 8LL * v72);
                    v25 = v72 - 1;
                    v20 = v106;
                    v15 = &v98[v102 / 8];
                    if ( v14 != v27 )
                    {
LABEL_154:
                      v80 = v14;
                      do
                      {
                        while ( (unsigned __int64)*v80 <= 1 )
                        {
                          if ( ++v80 == v27 )
                            goto LABEL_162;
                        }
                        v81 = 8LL * (*(_DWORD *)(*v80 + 12) & (unsigned int)v25);
                        v82 = &v98[(unsigned __int64)v81 / 8];
                        if ( v102 == v81 )
                        {
LABEL_165:
                          if ( v98 == v82 )
                          {
LABEL_170:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v83 = v98;
                          while ( *v83 )
                          {
                            if ( v82 == ++v83 )
                              goto LABEL_170;
                          }
                        }
                        else
                        {
                          v83 = &v98[(unsigned __int64)v81 / 8];
                          while ( *v83 )
                          {
                            if ( ++v83 == v15 )
                              goto LABEL_165;
                          }
                        }
                        v84 = *v80++;
                        *v83 = v84;
                      }
                      while ( v80 != v27 );
                      goto LABEL_162;
                    }
                    goto LABEL_163;
                  }
                  v15 = v79;
                  v25 = -1;
                  if ( v14 != v27 )
                    goto LABEL_154;
LABEL_162:
                  if ( v14 )
                  {
LABEL_163:
                    v107 = v20;
                    sub_186B220(v14);
                    v20 = v107;
                  }
                  v33 = v102;
                  v14 = v98;
                  v17 = 0;
LABEL_133:
                  v73 = *(_DWORD *)(v40 + 12);
                  v74 = v73 & (unsigned int)v25;
                  v75 = &v14[v74];
                  if ( 8 * v74 == v33 )
                  {
                    v76 = nullptr;
                  }
                  else
                  {
                    v57 = &v14[v74];
                    v76 = nullptr;
                    do
                    {
                      while ( 1 )
                      {
                        v77 = *v57;
                        if ( (unsigned __int64)*v57 <= 1 )
                          break;
                        v23 = v77 == v52 && *(_DWORD *)(v77 + 12) == v73;
                        if ( v23 )
                        {
                          *v57 = v52;
                          goto LABEL_39;
                        }
                        if ( ++v57 == v15 )
                          goto LABEL_140;
                      }
                      if ( !v77 )
                      {
LABEL_149:
                        if ( v76 )
                          --v17;
                        else
                          v76 = v57;
                        *v76 = v52;
                        v23 = v113;
                        ++v93;
                        goto LABEL_39;
                      }
                      v76 = v57++;
                    }
                    while ( v57 != v15 );
                  }
LABEL_140:
                  if ( v75 == v14 )
                    goto LABEL_104;
                  v57 = v14;
                  while ( 1 )
                  {
                    v78 = *v57;
                    if ( (unsigned __int64)*v57 > 1 )
                    {
                      if ( *(_DWORD *)(v78 + 12) == v73 && v78 == v52 )
                      {
LABEL_129:
                        *v57 = v52;
LABEL_108:
                        v23 = v113;
                        goto LABEL_39;
                      }
                    }
                    else
                    {
                      if ( !v78 )
                        goto LABEL_149;
                      v76 = v57;
                    }
                    if ( v75 == ++v57 )
                      goto LABEL_104;
                  }
                }
                if ( !(_DWORD)v42 )
                  goto LABEL_76;
                v100 = v39;
                v43 = v41 + 8 * v42;
                v95 = v20;
                v103 = v38;
                do
                {
                  while ( 1 )
                  {
                    v15 = v27;
                    v44 = *(_QWORD *)((*(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
                    v45 = *(_DWORD *)(v44 + 12);
                    v46 = 8LL * (v45 & (unsigned int)v25);
                    v47 = &v14[(unsigned __int64)v46 / 8];
                    if ( v33 != v46 )
                    {
                      for ( k = &v14[(unsigned __int64)v46 / 8]; v27 != k; ++k )
                      {
                        v49 = *k;
                        if ( (unsigned __int64)*k > 1 )
                        {
                          if ( *(_DWORD *)(v49 + 12) == v45 && v44 == v49 )
                          {
LABEL_87:
                            v52 = v40;
                            v20 = v95;
                            v53 = 2 * v92;
                            if ( 3 * v92 < 4 * (v17 + v93) )
                            {
                              v61 = v53;
                              v104 = v95;
                              v92 *= 2;
                              v96 = 8LL * v53;
                              v62 = (_QWORD *)sub_186B270(v96);
                              v63 = v92;
                              v33 = v96;
                              v64 = v62;
                              v20 = v104;
                              if ( v92 )
                              {
                                v65 = memset(v62, 0, 8 * v61);
                                v20 = v104;
                                v33 = v96;
                                v63 = v92;
                                v64 = v65;
                              }
                              v25 = v63 - 1;
                              v66 = (_QWORD *)((char *)v64 + v33);
                              for ( m = v14; v27 != m; *v70 = v71 )
                              {
                                while ( (unsigned __int64)*m <= 1 )
                                {
                                  if ( v27 == ++m )
                                    goto LABEL_120;
                                }
                                v68 = 8LL * (*(_DWORD *)(*m + 12) & (unsigned int)v25);
                                v69 = &v64[(unsigned __int64)v68 / 8];
                                if ( v33 == v68 )
                                {
LABEL_123:
                                  if ( v64 == v69 )
                                  {
LABEL_128:
                                    sub_1872CE0("");
                                    sub_1873130(114, 213);
                                  }
                                  v70 = v64;
                                  while ( *v70 )
                                  {
                                    if ( v69 == ++v70 )
                                      goto LABEL_128;
                                  }
                                }
                                else
                                {
                                  v70 = &v64[(unsigned __int64)v68 / 8];
                                  while ( *v70 )
                                  {
                                    if ( v66 == ++v70 )
                                      goto LABEL_123;
                                  }
                                }
                                v71 = *m++;
                              }
LABEL_120:
                              if ( v14 )
                              {
                                v110 = (_QWORD *)((char *)v64 + v33);
                                v105 = v64;
                                v101 = v33;
                                v97 = v20;
                                sub_186B220(v14);
                                v66 = v110;
                                v64 = v105;
                                v33 = v101;
                                v20 = v97;
                              }
                              v14 = v64;
                              v15 = v66;
                              v17 = 0;
                            }
                            v54 = *(_DWORD *)(v52 + 12);
                            v55 = 8LL * (v54 & (unsigned int)v25);
                            v56 = &v14[(unsigned __int64)v55 / 8];
                            if ( v55 != v33 )
                            {
                              v57 = &v14[(unsigned __int64)v55 / 8];
                              v58 = nullptr;
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  v59 = *v57;
                                  if ( (unsigned __int64)*v57 <= 1 )
                                    break;
                                  if ( *(_DWORD *)(v59 + 12) == v54 && v59 == v52 )
                                    goto LABEL_129;
                                  if ( ++v57 == v15 )
                                    goto LABEL_96;
                                }
                                if ( !v59 )
                                  break;
                                v58 = v57++;
                                if ( v57 == v15 )
                                  goto LABEL_96;
                              }
LABEL_105:
                              if ( v58 )
                                --v17;
                              else
                                v58 = v57;
                              *v58 = v52;
                              ++v93;
                              goto LABEL_108;
                            }
                            v58 = nullptr;
LABEL_96:
                            if ( v14 != v56 )
                            {
                              v57 = v14;
                              do
                              {
                                while ( 1 )
                                {
                                  v60 = *v57;
                                  if ( (unsigned __int64)*v57 <= 1 )
                                    break;
                                  if ( *(_DWORD *)(v60 + 12) == v54 && v60 == v52 )
                                    goto LABEL_129;
                                  if ( v56 == ++v57 )
                                    goto LABEL_104;
                                }
                                if ( !v60 )
                                  goto LABEL_105;
                                v58 = v57++;
                              }
                              while ( v56 != v57 );
                            }
LABEL_104:
                            sub_1872CE0("");
                            sub_1873130(114, 405);
                          }
                        }
                        else if ( !v49 )
                        {
                          goto LABEL_74;
                        }
                      }
                    }
                    if ( v14 != v47 )
                      break;
LABEL_74:
                    v41 += 8;
                    if ( v41 == v43 )
                      goto LABEL_75;
                  }
                  v50 = v14;
                  while ( 1 )
                  {
                    v51 = *v50;
                    if ( (unsigned __int64)*v50 <= 1 )
                      break;
                    if ( *(_DWORD *)(v51 + 12) == v45 && v44 == v51 )
                      goto LABEL_87;
LABEL_82:
                    if ( v47 == ++v50 )
                      goto LABEL_74;
                  }
                  if ( v51 )
                    goto LABEL_82;
                  v41 += 8;
                }
                while ( v41 != v43 );
LABEL_75:
                v39 = v100;
                v20 = v95;
                v38 = v103;
LABEL_76:
                if ( ++v39 >= *(_DWORD *)(v38 - 4) )
                {
LABEL_77:
                  v23 = v109;
                  v15 = v27;
                  break;
                }
              }
            }
LABEL_39:
            v34 = v22 + 1;
            if ( (_QWORD *)v20 == v22 + 1 )
              break;
            while ( 1 )
            {
              v21 = *v34;
              v22 = v34;
              if ( *v34 > 1u )
                break;
              if ( (_QWORD *)v20 == ++v34 )
                goto LABEL_44;
            }
          }
          while ( (_QWORD *)v20 != v34 );
LABEL_44:
          result = (__int64 *)v111;
          v16 = *v111;
        }
        while ( v23 );
        ++v114;
        if ( !v16 )
          goto LABEL_48;
      }
      result = (__int64 *)v92;
      v15 = &v14[v92];
LABEL_48:
      if ( v14 != v15 )
      {
LABEL_176:
        v85 = v14;
        while ( (unsigned __int64)*v85 <= 1 )
        {
          if ( ++v85 == v15 )
            goto LABEL_49;
        }
        if ( v85 != v15 )
        {
          v86 = *v85;
          do
          {
            v87 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 208LL);
            if ( v87 == sub_4D0440 )
            {
              v88 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
              if ( v88 == sub_4D0080 )
                v89 = (__int64)(a1 + 8);
              else
                v89 = v88((__int64)a1);
              v90 = sub_4C7190(v89, v86);
            }
            else
            {
              v90 = v87((__int64)a1, v86);
            }
            v91 = v90;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v90 + 24LL))(v90) )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 64LL))(v91);
            result = v85 + 1;
            if ( v85 + 1 == v15 )
              break;
            while ( 1 )
            {
              v86 = *result;
              v85 = result;
              if ( (unsigned __int64)*result > 1 )
                break;
              if ( v15 == ++result )
                goto LABEL_49;
            }
          }
          while ( result != v15 );
        }
      }
LABEL_49:
      if ( v14 )
        return (__int64 *)sub_186B220(v14);
    }
  }
  return result;
}

