__int64 __fastcall sub_969AA0(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  unsigned int *v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v10; // r14d
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  _DWORD *v13; // rdx
  void *v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  _DWORD *v17; // r9
  _DWORD *v18; // rdi
  _DWORD *v19; // rax
  int v20; // ecx
  _QWORD *v21; // rax
  unsigned int v22; // ecx
  _DWORD *v23; // rdx
  void *v24; // r8
  __int64 v25; // r10
  _DWORD *v26; // r9
  __int64 v27; // rcx
  _DWORD *v28; // rdi
  _DWORD *v29; // rax
  int v30; // ecx
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 v33; // rdi
  int v34; // ebx
  _QWORD *v35; // rax
  void *v36; // rdi
  _DWORD *v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  _DWORD *v40; // r9
  _DWORD *v41; // rsi
  _DWORD *i; // rax
  int v43; // ecx
  _QWORD *v44; // rax
  void *v45; // rdi
  unsigned int v46; // ecx
  __int64 v47; // r9
  _DWORD *v48; // rax
  __int64 v49; // rdx
  _DWORD *v50; // rsi
  _DWORD *v51; // rcx
  _DWORD *v52; // rbp
  int v53; // edx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r12
  int v57; // esi
  int v58; // r13d
  _DWORD *v59; // rbp
  unsigned int v60; // eax
  __int64 v61; // r9
  __int64 v62; // r12
  __int64 v63; // rax
  _DWORD *v64; // rdi
  _DWORD *v65; // rax
  _DWORD *v66; // r9
  int v67; // edx
  __int64 v68; // rax
  int v69; // eax
  _QWORD *v70; // rax
  int v71; // r10d
  _QWORD *v72; // rdx
  _DWORD *v73; // r14
  _DWORD *v74; // r11
  __int64 v75; // rdx
  _DWORD *v76; // rsi
  _DWORD *v77; // rdx
  __int64 v78; // rsi
  int v79; // eax
  int v80; // edx
  _QWORD *v81; // rax
  unsigned int v82; // ebx
  void *v83; // rdi
  _DWORD *v84; // rdx
  __int64 v85; // r10
  __int64 v86; // rax
  _DWORD *v87; // r9
  _DWORD *v88; // rsi
  _DWORD *v89; // rax
  int v90; // ecx
  _QWORD *v91; // rax
  void *v92; // rdi
  _DWORD *v93; // rdx
  __int64 v94; // r9
  _DWORD *v95; // rsi
  __int64 v96; // rax
  _DWORD *v97; // rcx
  _DWORD *v98; // rbp
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rbp
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  _DWORD *v106; // [rsp+0h] [rbp-88h]
  unsigned int v107; // [rsp+0h] [rbp-88h]
  _DWORD *v109; // [rsp+10h] [rbp-78h]
  __int64 v110; // [rsp+10h] [rbp-78h]
  size_t v111; // [rsp+18h] [rbp-70h]
  unsigned int v112; // [rsp+18h] [rbp-70h]
  size_t v113; // [rsp+20h] [rbp-68h]
  __int64 v114; // [rsp+28h] [rbp-60h]
  int v115; // [rsp+28h] [rbp-60h]
  _QWORD v116[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * (a2 >> 1));
  result = v4 & 7;
  if ( (v4 & 7) != 1 )
  {
    if ( (_DWORD)result != 3 )
    {
      if ( (v4 & 7) != 0 )
        return result;
      if ( v4 <= 7 )
        return result;
      v6 = (unsigned int *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      v7 = *v6;
      v8 = v6 + 2;
      result = 4 * v7;
      v106 = (_DWORD *)((char *)v8 + result);
      if ( !result )
        return result;
      while ( 1 )
      {
        v10 = *v8 >> 1;
        if ( a2 >> 1 == v10 )
          goto LABEL_30;
        v11 = (_QWORD *)sub_186B270(0x60u);
        v12 = *(_DWORD *)(a1 + 10456);
        v13 = *(_DWORD **)(a1 + 10448);
        *v11 = 0;
        v14 = v11;
        *(_QWORD *)((char *)v11 + 12) = 0;
        v11[3] = 0;
        *(_QWORD *)((char *)v11 + 36) = 0;
        v11[6] = 0;
        *(_QWORD *)((char *)v11 + 60) = 0;
        v11[9] = 0;
        *(_QWORD *)((char *)v11 + 84) = 0;
        v15 = 40LL * (v10 & (v12 - 1));
        v16 = 40LL * v12;
        v17 = &v13[(unsigned __int64)v15 / 4];
        v18 = &v13[(unsigned __int64)v16 / 4];
        if ( v15 == v16 )
        {
LABEL_154:
          if ( v13 == v17 )
          {
LABEL_162:
            ++v8;
            result = sub_186B220(v14);
            if ( v106 == v8 )
              return result;
            continue;
          }
          while ( 2 )
          {
            while ( 1 )
            {
              v102 = v13[1];
              if ( v102 != 2 )
                break;
              if ( v10 != *v13 )
                goto LABEL_157;
              if ( v10 == v13[2] )
                goto LABEL_14;
              v13 += 10;
              if ( v17 == v13 )
                goto LABEL_162;
            }
            if ( !v102 )
              goto LABEL_162;
LABEL_157:
            v13 += 10;
            if ( v17 == v13 )
              goto LABEL_162;
            continue;
          }
        }
        v19 = &v13[(unsigned __int64)v15 / 4];
        while ( 1 )
        {
          v20 = v19[1];
          if ( v20 != 2 )
          {
            if ( !v20 )
              goto LABEL_162;
            goto LABEL_10;
          }
          if ( v10 == *v19 && v10 == v19[2] )
            break;
LABEL_10:
          v19 += 10;
          if ( v18 == v19 )
            goto LABEL_154;
        }
LABEL_14:
        sub_186B220(v14);
        v21 = (_QWORD *)sub_186B270(0x60u);
        v22 = *(_DWORD *)(a1 + 10456);
        v23 = *(_DWORD **)(a1 + 10448);
        *v21 = 0;
        v24 = v21;
        *(_QWORD *)((char *)v21 + 12) = 0;
        v21[3] = 0;
        *(_QWORD *)((char *)v21 + 36) = 0;
        v21[6] = 0;
        *(_QWORD *)((char *)v21 + 60) = 0;
        v21[9] = 0;
        *(_QWORD *)((char *)v21 + 84) = 0;
        v25 = 40LL * (v10 & (v22 - 1));
        v26 = &v23[(unsigned __int64)v25 / 4];
        v27 = 40LL * v22;
        v28 = &v23[(unsigned __int64)v27 / 4];
        v29 = &v23[(unsigned __int64)v25 / 4];
        if ( v25 != v27 )
        {
          do
          {
            v30 = v29[1];
            if ( v30 == 2 )
            {
              if ( v10 == *v29 && v10 == v29[2] )
                goto LABEL_21;
            }
            else if ( !v30 )
            {
              goto LABEL_164;
            }
            v29 += 10;
          }
          while ( v28 != v29 );
        }
        if ( v23 == v26 )
        {
LABEL_164:
          v29 = nullptr;
          goto LABEL_21;
        }
        while ( 2 )
        {
          v103 = v23[1];
          if ( v103 != 2 )
          {
            if ( !v103 )
              goto LABEL_164;
LABEL_168:
            v23 += 10;
            if ( v26 == v23 )
              goto LABEL_164;
            continue;
          }
          break;
        }
        if ( v10 != *v23 || v10 != v23[2] )
          goto LABEL_168;
        v29 = v23;
LABEL_21:
        v109 = v29;
        sub_186B220(v24);
        result = (__int64)v109;
        if ( a3 != v109 + 4 )
        {
          v31 = *((_QWORD *)v109 + 2);
          result = 3LL * (unsigned int)v109[6];
          v32 = v31 + 12LL * (unsigned int)v109[6];
          if ( v31 != v32 )
          {
            while ( *(_DWORD *)(v31 + 4) != 2 )
            {
              v31 += 12;
              if ( v32 == v31 )
                goto LABEL_30;
            }
            while ( v32 != v31 )
            {
              LODWORD(v116[0]) = *(_DWORD *)(v31 + 8);
              sub_9765A0(a3, v116);
              result = v31 + 12;
              if ( v32 == v31 + 12 )
                break;
              while ( 1 )
              {
                v31 = result;
                if ( *(_DWORD *)(result + 4) == 2 )
                  break;
                result += 12;
                if ( v32 == result )
                  goto LABEL_30;
              }
            }
          }
        }
LABEL_30:
        if ( v106 == ++v8 )
          return result;
      }
    }
    v33 = *(_QWORD *)(a1 + 9000);
    v116[0] = 0;
    sub_986050(v33, v4 & 0xFFFFFFFFFFFFFFF8LL, v116);
    result = v116[0];
    v107 = 0;
    if ( !v116[0] )
      return result;
LABEL_33:
    while ( 2 )
    {
      if ( v107 >= *(_DWORD *)(result - 4) )
        return sub_186B220((void *)(result - 8));
      v34 = *(_DWORD *)(result + 4LL * v107) >> 1;
      v35 = (_QWORD *)sub_186B270(0x60u);
      *v35 = 0;
      v36 = v35;
      *(_QWORD *)((char *)v35 + 12) = 0;
      v35[3] = 0;
      *(_QWORD *)((char *)v35 + 36) = 0;
      v35[6] = 0;
      *(_QWORD *)((char *)v35 + 60) = 0;
      v35[9] = 0;
      *(_QWORD *)((char *)v35 + 84) = 0;
      v37 = *(_DWORD **)(a1 + 10448);
      v38 = 40LL * (v34 & (unsigned int)(*(_DWORD *)(a1 + 10456) - 1));
      v39 = 40LL * *(unsigned int *)(a1 + 10456);
      v40 = &v37[(unsigned __int64)v38 / 4];
      v41 = &v37[(unsigned __int64)v39 / 4];
      if ( v38 != v39 )
      {
        for ( i = &v37[(unsigned __int64)v38 / 4]; v41 != i; i += 10 )
        {
          v43 = i[1];
          if ( v43 == 2 )
          {
            if ( v34 == *i && v34 == i[2] )
            {
LABEL_41:
              sub_186B220(v36);
              v44 = (_QWORD *)sub_186B270(0x60u);
              *v44 = 0;
              v45 = v44;
              *(_QWORD *)((char *)v44 + 12) = 0;
              v46 = *(_DWORD *)(a1 + 10456);
              v44[3] = 0;
              *(_QWORD *)((char *)v44 + 36) = 0;
              v44[6] = 0;
              *(_QWORD *)((char *)v44 + 60) = 0;
              v44[9] = 0;
              *(_QWORD *)((char *)v44 + 84) = 0;
              v47 = 40LL * (v34 & (v46 - 1));
              v48 = *(_DWORD **)(a1 + 10448);
              v49 = 40LL * v46;
              v50 = &v48[(unsigned __int64)v47 / 4];
              v51 = &v48[(unsigned __int64)v49 / 4];
              v52 = &v48[(unsigned __int64)v47 / 4];
              if ( v47 != v49 )
              {
                do
                {
                  v53 = v52[1];
                  if ( v53 == 2 )
                  {
                    if ( v34 == *v52 && v34 == v52[2] )
                      goto LABEL_48;
                  }
                  else if ( !v53 )
                  {
                    goto LABEL_117;
                  }
                  v52 += 10;
                }
                while ( v51 != v52 );
              }
              for ( ; v50 != v48; v48 += 10 )
              {
                v80 = v48[1];
                if ( v80 == 2 )
                {
                  if ( v34 == *v48 && v34 == v48[2] )
                  {
                    v52 = v48;
                    goto LABEL_48;
                  }
                }
                else if ( !v80 )
                {
                  break;
                }
              }
LABEL_117:
              v52 = nullptr;
LABEL_48:
              sub_186B220(v45);
              if ( a3 == v52 + 4 )
                goto LABEL_65;
              v54 = *((_QWORD *)v52 + 2);
              v55 = v54 + 12LL * (unsigned int)v52[6];
              if ( v54 == v55 )
                goto LABEL_65;
              while ( *(_DWORD *)(v54 + 4) != 2 )
              {
                v54 += 12;
                if ( v55 == v54 )
                  goto LABEL_65;
              }
LABEL_53:
              if ( v55 == v54 )
                goto LABEL_65;
              v56 = (unsigned int)a3[2];
              v57 = a3[4];
              v58 = *(_DWORD *)(v54 + 8);
              if ( 3 * (int)v56 < (unsigned int)(4 * (v57 + a3[3])) )
              {
                v114 = v55;
                v111 = 12LL * (unsigned int)(2 * v56);
                v70 = (_QWORD *)sub_186B270(v111);
                v71 = 2 * v56;
                v59 = v70;
                v61 = v111;
                v55 = v114;
                if ( 2 * (_DWORD)v56 )
                {
                  v72 = &v70[3 * (v56 & 0x7FFFFFFF)];
                  do
                  {
                    *v70 = 0;
                    v70 += 3;
                    *(_QWORD *)((char *)v70 - 12) = 0;
                  }
                  while ( v72 != v70 );
                }
                v73 = *(_DWORD **)a3;
                v60 = v71 - 1;
                v62 = (__int64)&v59[v111 / 4];
                v74 = (_DWORD *)(*(_QWORD *)a3 + 12LL * (unsigned int)a3[2]);
                if ( *(_DWORD **)a3 != v74 )
                {
                  do
                  {
                    while ( v73[1] != 2 )
                    {
                      v73 += 3;
                      if ( v74 == v73 )
                        goto LABEL_95;
                    }
                    v75 = 12LL * (*v73 & v60);
                    v76 = &v59[(unsigned __int64)v75 / 4];
                    if ( v111 == v75 )
                    {
LABEL_100:
                      if ( v59 == v76 )
                      {
LABEL_118:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v77 = v59;
                      while ( v77[1] )
                      {
                        v77 += 3;
                        if ( v76 == v77 )
                          goto LABEL_118;
                      }
                    }
                    else
                    {
                      v77 = &v59[(unsigned __int64)v75 / 4];
                      while ( v77[1] )
                      {
                        v77 += 3;
                        if ( (_DWORD *)v62 == v77 )
                          goto LABEL_100;
                      }
                    }
                    v78 = *(_QWORD *)v73;
                    v73 += 3;
                    *(_QWORD *)v77 = v78;
                    v77[2] = *(v73 - 1);
                  }
                  while ( v74 != v73 );
LABEL_95:
                  v74 = *(_DWORD **)a3;
                }
                if ( v74 )
                {
                  v115 = v71;
                  v113 = v111;
                  v112 = v71 - 1;
                  v110 = v55;
                  sub_186B220(v74);
                  v71 = v115;
                  v61 = v113;
                  v60 = v112;
                  v55 = v110;
                }
                *(_QWORD *)a3 = v59;
                v57 = 0;
                a3[2] = v71;
                a3[4] = 0;
              }
              else
              {
                v59 = *(_DWORD **)a3;
                v60 = v56 - 1;
                v61 = 12 * v56;
                v62 = *(_QWORD *)a3 + 12 * v56;
              }
              v63 = 12LL * (v58 & v60);
              v64 = &v59[(unsigned __int64)v63 / 4];
              if ( v63 == v61 )
              {
                v66 = nullptr;
                while ( 1 )
                {
LABEL_70:
                  if ( v64 == v59 )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  v69 = v59[1];
                  if ( v69 == 2 )
                  {
                    if ( v58 == *v59 && v58 == v59[2] )
                    {
                      v59[2] = v58;
                      v59[1] = 2;
                      goto LABEL_78;
                    }
                  }
                  else
                  {
                    if ( !v69 )
                    {
                      if ( !v66 )
                      {
                        v66 = v59;
                        goto LABEL_77;
                      }
LABEL_76:
                      a3[4] = v57 - 1;
LABEL_77:
                      v66[2] = v58;
                      v66[1] = 2;
                      *v66 = v58;
                      ++a3[3];
LABEL_78:
                      v68 = v54 + 12;
                      if ( v55 == v54 + 12 )
                        goto LABEL_65;
LABEL_81:
                      while ( 1 )
                      {
                        v54 = v68;
                        if ( *(_DWORD *)(v68 + 4) == 2 )
                          goto LABEL_53;
                        v68 += 12;
                        if ( v55 == v68 )
                          goto LABEL_65;
                      }
                    }
                    v66 = v59;
                  }
                  v59 += 3;
                }
              }
              v65 = &v59[(unsigned __int64)v63 / 4];
              v66 = nullptr;
              while ( 2 )
              {
                v67 = v65[1];
                if ( v67 == 2 )
                {
                  if ( v58 == *v65 && v58 == v65[2] )
                  {
                    v65[2] = v58;
                    v65[1] = 2;
                    v68 = v54 + 12;
                    if ( v55 != v54 + 12 )
                      goto LABEL_81;
LABEL_65:
                    result = v116[0];
                    ++v107;
                    if ( !v116[0] )
                      return result;
                    goto LABEL_33;
                  }
                }
                else
                {
                  if ( !v67 )
                  {
                    if ( !v66 )
                    {
                      v66 = v65;
                      goto LABEL_77;
                    }
                    goto LABEL_76;
                  }
                  v66 = v65;
                }
                v65 += 3;
                if ( v65 == (_DWORD *)v62 )
                  goto LABEL_70;
                continue;
              }
            }
          }
          else if ( !v43 )
          {
            goto LABEL_115;
          }
        }
      }
      if ( v37 == v40 )
      {
LABEL_115:
        sub_186B220(v36);
        result = v116[0];
        ++v107;
        if ( !v116[0] )
          return result;
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v79 = v37[1];
      if ( v79 != 2 )
        break;
      if ( v34 == *v37 )
      {
        if ( v34 == v37[2] )
          goto LABEL_41;
        v37 += 10;
        if ( v40 == v37 )
          goto LABEL_115;
      }
      else
      {
LABEL_110:
        v37 += 10;
        if ( v40 == v37 )
          goto LABEL_115;
      }
    }
    if ( !v79 )
      goto LABEL_115;
    goto LABEL_110;
  }
  v81 = (_QWORD *)sub_186B270(0x60u);
  v82 = (unsigned int)(v4 >> 3) >> 1;
  *v81 = 0;
  v83 = v81;
  *(_QWORD *)((char *)v81 + 12) = 0;
  v81[3] = 0;
  *(_QWORD *)((char *)v81 + 36) = 0;
  v81[6] = 0;
  *(_QWORD *)((char *)v81 + 60) = 0;
  v81[9] = 0;
  *(_QWORD *)((char *)v81 + 84) = 0;
  v84 = *(_DWORD **)(a1 + 10448);
  v85 = 40LL * (v82 & (*(_DWORD *)(a1 + 10456) - 1));
  v86 = 40LL * *(unsigned int *)(a1 + 10456);
  v87 = &v84[(unsigned __int64)v85 / 4];
  v88 = &v84[(unsigned __int64)v86 / 4];
  if ( v85 == v86 )
  {
LABEL_173:
    while ( v87 != v84 )
    {
      v104 = v84[1];
      if ( v104 == 2 )
      {
        if ( v82 == *v84 && v82 == v84[2] )
          goto LABEL_135;
      }
      else if ( !v104 )
      {
        return sub_186B220(v83);
      }
      v84 += 10;
    }
    return sub_186B220(v83);
  }
  v89 = &v84[(unsigned __int64)v85 / 4];
  while ( 1 )
  {
    v90 = v89[1];
    if ( v90 != 2 )
    {
      if ( !v90 )
        return sub_186B220(v83);
      goto LABEL_131;
    }
    if ( v82 == *v89 && v82 == v89[2] )
      break;
LABEL_131:
    v89 += 10;
    if ( v88 == v89 )
      goto LABEL_173;
  }
LABEL_135:
  sub_186B220(v83);
  v91 = (_QWORD *)sub_186B270(0x60u);
  *v91 = 0;
  v92 = v91;
  *(_QWORD *)((char *)v91 + 12) = 0;
  v91[3] = 0;
  *(_QWORD *)((char *)v91 + 36) = 0;
  v91[6] = 0;
  *(_QWORD *)((char *)v91 + 60) = 0;
  v91[9] = 0;
  *(_QWORD *)((char *)v91 + 84) = 0;
  v93 = *(_DWORD **)(a1 + 10448);
  v94 = 40LL * (v82 & (*(_DWORD *)(a1 + 10456) - 1));
  v95 = &v93[(unsigned __int64)v94 / 4];
  v96 = 40LL * *(unsigned int *)(a1 + 10456);
  v97 = &v93[(unsigned __int64)v96 / 4];
  v98 = &v93[(unsigned __int64)v94 / 4];
  if ( v94 != v96 )
  {
    do
    {
      v99 = v98[1];
      if ( v99 == 2 )
      {
        if ( v82 == *v98 && v82 == v98[2] )
          goto LABEL_142;
      }
      else if ( !v99 )
      {
        goto LABEL_183;
      }
      v98 += 10;
    }
    while ( v97 != v98 );
  }
  if ( v93 == v95 )
  {
LABEL_183:
    v98 = nullptr;
    goto LABEL_142;
  }
  while ( 2 )
  {
    v105 = v93[1];
    if ( v105 != 2 )
    {
      if ( !v105 )
        goto LABEL_183;
LABEL_188:
      v93 += 10;
      if ( v95 == v93 )
        goto LABEL_183;
      continue;
    }
    break;
  }
  if ( v82 != *v93 || v82 != v93[2] )
    goto LABEL_188;
  v98 = v93;
LABEL_142:
  sub_186B220(v92);
  result = (__int64)(v98 + 4);
  if ( a3 != v98 + 4 )
  {
    v100 = *((_QWORD *)v98 + 2);
    result = 3LL * (unsigned int)v98[6];
    v101 = v100 + 12LL * (unsigned int)v98[6];
    if ( v100 != v101 )
    {
      while ( *(_DWORD *)(v100 + 4) != 2 )
      {
        v100 += 12;
        if ( v101 == v100 )
          return result;
      }
      if ( v101 != v100 )
      {
        do
        {
          LODWORD(v116[0]) = *(_DWORD *)(v100 + 8);
          sub_9765A0(a3, v116);
          result = v100 + 12;
          if ( v101 == v100 + 12 )
            break;
          while ( 1 )
          {
            v100 = result;
            if ( *(_DWORD *)(result + 4) == 2 )
              break;
            result += 12;
            if ( v101 == result )
              return result;
          }
        }
        while ( v101 != result );
      }
    }
  }
  return result;
}

