__int64 __fastcall sub_1EDC800(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r12
  bool v26; // zf
  __int64 v27; // rbp
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r10
  __int64 v33; // rdx
  int v34; // r8d
  _QWORD *v35; // rsi
  _QWORD *j; // rdx
  _QWORD *v37; // rax
  int k; // r9d
  __int64 v39; // r11
  unsigned int v40; // ecx
  _QWORD *v41; // rdx
  __int64 v42; // rdi
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __m128 *v52; // rsi
  __int64 v53; // rdi
  _BYTE *v54; // rdi
  int v55; // r8d
  unsigned __int64 *v56; // r10
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // r10
  __int64 v63; // rdx
  int v64; // r8d
  _QWORD *i; // rdx
  _QWORD *v66; // rax
  int v67; // r9d
  __int64 v68; // r11
  unsigned int v69; // ecx
  _QWORD *v70; // rdx
  __int64 v71; // rdi
  int v72; // ecx
  int v73; // edx
  int v74; // edx
  __int64 v75; // rdi
  int v76; // r10d
  unsigned __int64 *v77; // r9
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  char *v81; // r10
  char *v82; // rcx
  char *v83; // rbx
  __int64 v84; // rbp
  char *v85; // r12
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rsi
  char **v89; // rdi
  char *v90; // rdx
  char *v91; // rbp
  char *v92; // rbx
  char *v93; // rdi
  int v94; // eax
  __int64 v95; // r12
  __int64 v96; // r12
  int v97; // r10d
  unsigned __int64 *v98; // r9
  unsigned __int64 *v99; // r8
  bool v100; // [rsp+7h] [rbp-121h]
  unsigned __int64 v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+10h] [rbp-118h]
  unsigned int v104; // [rsp+20h] [rbp-108h]
  __int64 v105; // [rsp+20h] [rbp-108h]
  unsigned __int64 v106; // [rsp+20h] [rbp-108h]
  unsigned int v107; // [rsp+20h] [rbp-108h]
  __int64 v108; // [rsp+20h] [rbp-108h]
  unsigned int v109; // [rsp+30h] [rbp-F8h]
  int v110; // [rsp+34h] [rbp-F4h]
  char v111; // [rsp+38h] [rbp-F0h]
  _QWORD *v112; // [rsp+38h] [rbp-F0h]
  _QWORD *v113; // [rsp+38h] [rbp-F0h]
  int v114; // [rsp+40h] [rbp-E8h]
  int v115; // [rsp+40h] [rbp-E8h]
  int v116; // [rsp+40h] [rbp-E8h]
  __int64 v117; // [rsp+48h] [rbp-E0h]
  __int64 v118; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v119; // [rsp+50h] [rbp-D8h]
  int v120; // [rsp+58h] [rbp-D0h]
  __int64 v121; // [rsp+68h] [rbp-C0h]
  _QWORD v122[3]; // [rsp+78h] [rbp-B0h] BYREF
  char v123; // [rsp+90h] [rbp-98h] BYREF
  __m128 v124; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v125; // [rsp+C0h] [rbp-68h]
  _BYTE v126[96]; // [rsp+C8h] [rbp-60h] BYREF

  result = *(unsigned int *)(a1 + 8808);
  v110 = result;
  if ( !(_DWORD)result )
    return result;
  v9 = v6;
  v10 = 0;
  do
  {
    v11 = v10;
    v12 = v10 + 1;
    v10 += 2;
    v13 = sub_1EDB980((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 8800) + 8 * v11), v11, a4, a5, a6);
    v14 = *(_QWORD *)(a1 + 8800);
    v101 = v13;
    result = *(_QWORD *)(v14 + 8 * v12);
    v102 = result;
    if ( !result )
      continue;
    v15 = 0;
    v16 = v9;
    v109 = ((unsigned int)v101 >> 9) ^ ((unsigned int)v101 >> 4);
    while ( 1 )
    {
      v23 = v10 + 1;
      v24 = v10;
      v10 += 2;
      v25 = *(_QWORD **)a2;
      v26 = *(_QWORD *)(v14 + 8 * v23) == 0;
      v27 = *(_QWORD *)(v14 + 8 * v24);
      v28 = *(unsigned int *)(a2 + 16);
      v100 = !v26;
      if ( !(_DWORD)v28 )
        goto LABEL_11;
      v17 = (unsigned int)(v28 - 1);
      LODWORD(v18) = v17 & v109;
      v19 = &v25[2 * ((unsigned int)v17 & v109)];
      v20 = *v19;
      if ( v101 == *v19 )
      {
LABEL_6:
        sub_19A7660(&v124, v19, &v25[2 * v28], a2, 1);
        v21 = *(unsigned int *)(v124.m128_u64[0] + 8);
        goto LABEL_7;
      }
      v55 = 1;
      v56 = nullptr;
      if ( v20 != -4096 )
      {
        while ( 1 )
        {
          if ( v20 == -8192 && !v56 )
            v56 = v19;
          a6 = (unsigned int)(v55 + 1);
          v18 = (unsigned int)v17 & ((_DWORD)v18 + v55);
          v19 = &v25[2 * v18];
          v20 = *v19;
          if ( v101 == *v19 )
            goto LABEL_6;
          if ( v20 == -4096 )
            break;
          ++v55;
        }
        if ( v56 )
          v19 = v56;
      }
      v45 = *(_DWORD *)(a2 + 8) + 1;
      a5 = (unsigned int)(4 * v45);
      if ( (unsigned int)a5 < 3 * (int)v28 )
      {
        v57 = (unsigned int)v28 >> 3;
        if ( (int)v28 - *(_DWORD *)(a2 + 12) - v45 > (unsigned int)v57 )
        {
LABEL_42:
          v48 = *v19;
          goto LABEL_26;
        }
        v107 = *(_DWORD *)(a2 + 16);
        v58 = (((v17 >> 1) | v17) >> 2) | (v17 >> 1) | v17;
        v59 = (((v58 >> 4) | v58) >> 8) | (v58 >> 4) | v58;
        v60 = ((v59 >> 16) | v59) + 1;
        if ( (unsigned int)v60 < 0x40 )
          LODWORD(v60) = 64;
        *(_DWORD *)(a2 + 16) = v60;
        v61 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v60, 8, v28, 64, v57, a6);
        v62 = v61;
        *(_QWORD *)a2 = v61;
        if ( v25 )
        {
          v63 = *(unsigned int *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = 0;
          v64 = v63;
          v108 = 2LL * v107;
          for ( i = &v61[2 * v63]; i != v61; v61 += 2 )
            *v61 = -4096;
          v66 = v25;
          v67 = v64 - 1;
          do
          {
            v68 = *v66;
            if ( *v66 != -8192 && v68 != -4096 )
            {
              if ( !v64 )
              {
                *(_QWORD *)&dword_0 = *v66;
                BUG();
              }
              v69 = v67 & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
              v70 = &v62[2 * v69];
              v71 = *v70;
              if ( *v70 != v68 && v71 != -4096 )
              {
                v116 = 1;
                v113 = nullptr;
                while ( 1 )
                {
                  if ( v71 == -8192 )
                  {
                    if ( v113 )
                      v70 = v113;
                    v113 = v70;
                  }
                  v69 = v67 & (v116 + v69);
                  v70 = &v62[2 * v69];
                  v71 = *v70;
                  if ( v68 == *v70 )
                    break;
                  if ( v71 == -4096 )
                  {
                    if ( v113 )
                      v70 = v113;
                    break;
                  }
                  ++v116;
                }
              }
              v72 = *((_DWORD *)v66 + 2);
              ++*(_DWORD *)(a2 + 8);
              *v70 = v68;
              *((_DWORD *)v70 + 2) = v72;
            }
            v66 += 2;
          }
          while ( &v25[v108] != v66 );
          operator delete(v25, v108 * 8, 8);
          v25 = *(_QWORD **)a2;
          v73 = *(_DWORD *)(a2 + 16);
          v45 = *(_DWORD *)(a2 + 8) + 1;
        }
        else
        {
          v96 = *(unsigned int *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = 0;
          v73 = v96;
          v25 = &v61[2 * v96];
          if ( v61 != v25 )
          {
            do
            {
              *v61 = -4096;
              v61 += 2;
            }
            while ( v25 != v61 );
            v25 = v62;
          }
          v45 = 1;
        }
        if ( !v73 )
        {
LABEL_139:
          ++*(_DWORD *)(a2 + 8);
          BUG();
        }
        v74 = v73 - 1;
        LODWORD(v75) = v74 & v109;
        v19 = &v25[2 * (v74 & v109)];
        v48 = *v19;
        if ( v101 == *v19 )
          goto LABEL_26;
        v76 = 1;
        v77 = nullptr;
        if ( v48 != -4096 )
        {
          while ( 1 )
          {
            if ( v77 || v48 != -8192 )
              v19 = v77;
            v75 = v74 & (unsigned int)(v75 + v76);
            v99 = &v25[2 * v75];
            v48 = *v99;
            if ( v101 == *v99 )
              break;
            if ( v48 == -4096 )
            {
LABEL_117:
              if ( v19 )
                goto LABEL_42;
              v19 = v99;
              goto LABEL_59;
            }
            ++v76;
            v77 = v19;
            v19 = &v25[2 * v75];
          }
LABEL_124:
          v19 = v99;
LABEL_26:
          *(_DWORD *)(a2 + 8) = v45;
          if ( v48 != -4096 )
            --*(_DWORD *)(a2 + 12);
          goto LABEL_28;
        }
      }
      else
      {
LABEL_11:
        v104 = *(_DWORD *)(a2 + 16);
        v29 = (((((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v28 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v28 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v28 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v28 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1);
        v30 = ((v29 >> 16) | v29) + 1;
        if ( (unsigned int)v30 < 0x40 )
          LODWORD(v30) = 64;
        *(_DWORD *)(a2 + 16) = v30;
        v31 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v30, 8, v28, 64, a5, a6);
        v32 = v31;
        *(_QWORD *)a2 = v31;
        if ( v25 )
        {
          v33 = *(unsigned int *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = 0;
          v34 = v33;
          v105 = 2LL * v104;
          v35 = &v25[v105];
          for ( j = &v31[2 * v33]; j != v31; v31 += 2 )
            *v31 = -4096;
          v37 = v25;
          for ( k = v34 - 1; v35 != v37; v37 += 2 )
          {
            v39 = *v37;
            if ( *v37 != -8192 && v39 != -4096 )
            {
              if ( !v34 )
              {
                *(_QWORD *)&dword_0 = *v37;
                BUG();
              }
              v40 = k & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
              v41 = &v32[2 * v40];
              v42 = *v41;
              if ( *v41 != v39 && v42 != -4096 )
              {
                v115 = 1;
                v112 = nullptr;
                while ( 1 )
                {
                  if ( v42 == -8192 )
                  {
                    if ( v112 )
                      v41 = v112;
                    v112 = v41;
                  }
                  v40 = k & (v115 + v40);
                  v41 = &v32[2 * v40];
                  v42 = *v41;
                  if ( v39 == *v41 )
                    break;
                  if ( v42 == -4096 )
                  {
                    if ( v112 )
                      v41 = v112;
                    break;
                  }
                  ++v115;
                }
              }
              v43 = *((_DWORD *)v37 + 2);
              ++*(_DWORD *)(a2 + 8);
              *v41 = v39;
              *((_DWORD *)v41 + 2) = v43;
            }
          }
          operator delete(v25, v105 * 8, 8);
          v25 = *(_QWORD **)a2;
          v44 = *(_DWORD *)(a2 + 16);
          v45 = *(_DWORD *)(a2 + 8) + 1;
        }
        else
        {
          v95 = *(unsigned int *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = 0;
          v44 = v95;
          v25 = &v31[2 * v95];
          if ( v31 != v25 )
          {
            do
            {
              *v31 = -4096;
              v31 += 2;
            }
            while ( v25 != v31 );
            v25 = v32;
          }
          v45 = 1;
        }
        if ( !v44 )
          goto LABEL_139;
        v46 = v44 - 1;
        LODWORD(v47) = v46 & v109;
        v19 = &v25[2 * (v46 & v109)];
        v48 = *v19;
        if ( v101 == *v19 )
          goto LABEL_26;
        v97 = 1;
        v98 = nullptr;
        if ( v48 != -4096 )
        {
          while ( 1 )
          {
            if ( v48 != -8192 || v98 )
              v19 = v98;
            v47 = v46 & (unsigned int)(v47 + v97);
            v99 = &v25[2 * v47];
            v48 = *v99;
            if ( v101 == *v99 )
              goto LABEL_124;
            if ( v48 == -4096 )
              goto LABEL_117;
            ++v97;
            v98 = v19;
            v19 = &v25[2 * v47];
          }
        }
      }
LABEL_59:
      *(_DWORD *)(a2 + 8) = v45;
LABEL_28:
      *((_DWORD *)v19 + 2) = 0;
      v49 = *(unsigned int *)(a2 + 16);
      *v19 = v101;
      sub_19A7660(&v124, v19, &v25[2 * v49], a2, 1);
      v122[2] = 0x400000000LL;
      v106 = v124.m128_u64[0];
      v124.m128_u64[0] = v101;
      v124.m128_u64[1] = (unsigned __int64)v126;
      v50 = *(unsigned int *)(a2 + 32);
      v122[1] = &v123;
      v51 = *(unsigned int *)(a2 + 36);
      v125 = 0x400000000LL;
      if ( v50 + 1 > v51 )
      {
        v78 = *(_QWORD *)(a2 + 24);
        v111 = 0;
        v121 = -1;
        if ( v78 <= (unsigned __int64)&v124 && (unsigned __int64)&v124 < v78 + 56 * v50 )
        {
          v111 = 1;
          v121 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)((__int64)&v124 - v78) >> 3);
        }
        v79 = sub_2237400(a2 + 24, a2 + 40, v50 + 1, 56, v122);
        v80 = *(unsigned int *)(a2 + 32);
        v81 = *(char **)(a2 + 24);
        a5 = v79;
        v82 = &v81[56 * v80];
        if ( v81 != v82 )
        {
          v119 = v16;
          v83 = &v81[56 * v80];
          v120 = v27;
          v84 = v79;
          v85 = *(char **)(a2 + 24);
          v117 = v79;
          do
          {
            while ( 1 )
            {
              v86 = *(_QWORD *)v85;
              *(_DWORD *)(v84 + 16) = 0;
              *(_DWORD *)(v84 + 20) = 4;
              *(_QWORD *)v84 = v86;
              v87 = *((_DWORD *)v85 + 4);
              *(_QWORD *)(v84 + 8) = v84 + 24;
              if ( v87 )
                break;
              v85 += 56;
              v84 += 56;
              if ( v83 == v85 )
                goto LABEL_68;
            }
            v88 = (__int64)(v85 + 8);
            v89 = (char **)(v84 + 8);
            v85 += 56;
            v84 += 56;
            sub_19A76D0(v89, v88);
          }
          while ( v83 != v85 );
LABEL_68:
          v90 = *(char **)(a2 + 24);
          a5 = v117;
          v16 = v119;
          LODWORD(v27) = v120;
          v82 = &v90[56 * *(unsigned int *)(a2 + 32)];
          if ( v90 != v82 )
          {
            v91 = *(char **)(a2 + 24);
            v92 = &v90[56 * *(unsigned int *)(a2 + 32)];
            do
            {
              while ( 1 )
              {
                v92 -= 56;
                v93 = *((char **)v92 + 1);
                if ( v93 == v92 + 24 )
                  break;
                free(v93);
                if ( v92 == v91 )
                  goto LABEL_72;
              }
            }
            while ( v92 != v91 );
LABEL_72:
            v16 = v119;
            a5 = v117;
            LODWORD(v27) = v120;
            v82 = *(char **)(a2 + 24);
          }
        }
        v94 = v122[0];
        if ( (char *)(a2 + 40) != v82 )
        {
          v118 = a5;
          v114 = v122[0];
          free(v82);
          a5 = v118;
          v94 = v114;
        }
        *(_DWORD *)(a2 + 36) = v94;
        v52 = &v124;
        *(_QWORD *)(a2 + 24) = a5;
        v50 = *(unsigned int *)(a2 + 32);
        if ( v111 )
          v52 = (__m128 *)(a5 + 56 * v121);
      }
      else
      {
        a5 = *(_QWORD *)(a2 + 24);
        v52 = &v124;
      }
      v53 = a5 + 56 * v50;
      *(_QWORD *)v53 = v52->m128_u64[0];
      *(_QWORD *)(v53 + 8) = v53 + 24;
      *(_QWORD *)(v53 + 16) = 0x400000000LL;
      if ( v52[1].m128_i32[0] )
        sub_19A76D0((char **)(v53 + 8), (__int64)&v52->m128_i64[1]);
      v21 = *(unsigned int *)(a2 + 32);
      v54 = (_BYTE *)v124.m128_u64[1];
      a6 = (__int64)v126;
      *(_DWORD *)(a2 + 32) = v21 + 1;
      if ( v54 != v126 )
      {
        free(v54);
        v21 = (unsigned int)(*(_DWORD *)(a2 + 32) - 1);
      }
      *(_DWORD *)(v106 + 8) = v21;
LABEL_7:
      v22 = *(_QWORD *)(a2 + 24) + 56 * v21;
      a4 = *(unsigned int *)(v22 + 20);
      result = *(unsigned int *)(v22 + 16);
      v16 = (unsigned int)v27 | v16 & 0xFFFFFF0000000000LL | ((unsigned __int64)v100 << 32);
      if ( result + 1 > a4 )
        break;
      ++v15;
      *(_QWORD *)(*(_QWORD *)(v22 + 8) + 8 * result) = v16;
      ++*(_DWORD *)(v22 + 16);
      if ( v102 == v15 )
        goto LABEL_36;
LABEL_9:
      v14 = *(_QWORD *)(a1 + 8800);
    }
    ++v15;
    sub_2237220(v22 + 8, v22 + 24, result + 1, 8);
    result = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(result + 8LL * (unsigned int)(*(_DWORD *)(v22 + 16))++) = v16;
    if ( v102 != v15 )
      goto LABEL_9;
LABEL_36:
    v9 = v16;
  }
  while ( v110 != v10 );
  return result;
}
