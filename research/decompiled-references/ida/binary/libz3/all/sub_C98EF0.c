double __fastcall sub_C98EF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 i; // rsi
  __int64 v4; // rcx
  char v5; // dl
  unsigned int v6; // edx
  unsigned int *v7; // r12
  unsigned int v8; // ebx
  int v9; // eax
  int *v10; // rdx
  int v11; // esi
  int **v12; // rbx
  __int64 v13; // rax
  __int16 v14; // dx
  int **v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int *v19; // r13
  unsigned int v20; // r15d
  int v21; // eax
  int *v22; // rsi
  int v23; // edi
  __int16 v24; // ax
  _DWORD *v25; // rax
  double v26; // rbx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edi
  _DWORD *v31; // r11
  unsigned int v32; // edx
  unsigned int *v33; // r10
  unsigned int v34; // r15d
  __int64 v35; // rdx
  unsigned int **v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r15
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int **v46; // rdx
  __int64 v47; // r10
  __int64 v48; // r15
  unsigned __int64 v49; // rax
  int **v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // r15
  int **v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // edx
  unsigned int **v57; // rax
  int v58; // edx
  __int64 v59; // rsi
  __int64 v60; // r15
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int **v64; // rax
  double v65; // xmm1_8
  __int64 v66; // r15
  int **v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rbx
  unsigned int v73; // eax
  unsigned int v74; // eax
  int v75; // edx
  __int64 v76; // rsi
  __int64 v77; // rbx
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // [rsp+1Ch] [rbp-52Ch]
  unsigned int *v82; // [rsp+28h] [rbp-520h]
  unsigned int *v83; // [rsp+28h] [rbp-520h]
  __int64 v85; // [rsp+50h] [rbp-4F8h] BYREF
  char *v86; // [rsp+58h] [rbp-4F0h]
  __int64 v87; // [rsp+60h] [rbp-4E8h] BYREF
  char *v88; // [rsp+68h] [rbp-4E0h]
  __int64 v89; // [rsp+78h] [rbp-4D0h] BYREF
  void *ptr; // [rsp+80h] [rbp-4C8h]
  _BYTE *v91; // [rsp+90h] [rbp-4B8h]
  __int64 v92; // [rsp+98h] [rbp-4B0h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-4A8h]
  _BYTE *v94; // [rsp+B0h] [rbp-498h]
  __int64 v95; // [rsp+B8h] [rbp-490h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-488h]
  void *v97; // [rsp+D0h] [rbp-478h]
  __int64 v98; // [rsp+D8h] [rbp-470h]
  unsigned int *v99; // [rsp+E0h] [rbp-468h] BYREF
  int v100; // [rsp+E8h] [rbp-460h]
  __int64 v101; // [rsp+1E0h] [rbp-368h]
  _BYTE v102[600]; // [rsp+1E8h] [rbp-360h] BYREF
  __int64 v103; // [rsp+440h] [rbp-108h]
  __int64 v104; // [rsp+448h] [rbp-100h]
  __int64 v105; // [rsp+450h] [rbp-F8h]
  __int64 v106; // [rsp+458h] [rbp-F0h]
  __int64 v107; // [rsp+460h] [rbp-E8h]
  __int64 v108; // [rsp+468h] [rbp-E0h]
  __int64 v109; // [rsp+470h] [rbp-D8h]
  __int64 v110; // [rsp+478h] [rbp-D0h]
  __int64 v111; // [rsp+480h] [rbp-C8h]
  __int64 v112; // [rsp+488h] [rbp-C0h]
  __int64 v113; // [rsp+490h] [rbp-B8h]
  __int64 v114; // [rsp+498h] [rbp-B0h]
  __int64 v115; // [rsp+4A0h] [rbp-A8h]
  __int64 v116; // [rsp+4A8h] [rbp-A0h]
  __int64 v117; // [rsp+4B0h] [rbp-98h]
  __int64 v118; // [rsp+4B8h] [rbp-90h]
  char v119[8]; // [rsp+4C0h] [rbp-88h] BYREF
  _QWORD v120[2]; // [rsp+4C8h] [rbp-80h] BYREF
  __int64 v121; // [rsp+4D8h] [rbp-70h]
  char v122[16]; // [rsp+4E0h] [rbp-68h] BYREF
  unsigned int v123; // [rsp+4F0h] [rbp-58h]
  __int64 v124; // [rsp+4F8h] [rbp-50h]
  int v125; // [rsp+500h] [rbp-48h]

  v101 = *a2;
  sub_1839FF0(v102);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 1;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 1;
  v118 = 0;
  sub_1787100(v119, v101, v102, 0);
  sub_1632EE0(v120, v101, v119);
  sub_16669D0(v122, v101);
  v123 = 0;
  v2 = a2[9];
  v124 = 0;
  v125 = 0;
  v89 = 0;
  ptr = nullptr;
  if ( !v2 )
    goto LABEL_38;
  v80 = 0;
  for ( i = *a2; ; i = *a2 )
  {
    v4 = v2;
    v5 = *(_BYTE *)(v2 + 3) >> 6;
    if ( v5 )
    {
      if ( v5 == 1 )
        goto LABEL_35;
    }
    else
    {
      do
      {
        v4 = *(_QWORD *)(v4 + 16);
        v5 = *(_BYTE *)(v4 + 3) >> 6;
      }
      while ( !v5 );
      if ( v5 == 1 )
      {
LABEL_35:
        if ( v80 >= *(_DWORD *)(v4 + 4) + 1 )
          break;
        goto LABEL_8;
      }
    }
    v6 = v5 == 2 ? *(_DWORD *)(v4 + 4) - 1 : *(_DWORD *)(v4 + 4);
    if ( v80 >= v6 )
      break;
LABEL_8:
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v7 = *(unsigned int **)(i + 864);
      goto LABEL_10;
    }
    v56 = 17;
    while ( 1 )
    {
      if ( *(char *)(v2 + 3) < 0 )
      {
        if ( *(_BYTE *)(v2 + 3) >> 6 != 2 )
        {
          v57 = (unsigned int **)(*(_QWORD *)(v2 + 16) + 8LL * v80);
          goto LABEL_104;
        }
        goto LABEL_106;
      }
      if ( v80 == *(_DWORD *)(v2 + 4) )
        break;
LABEL_106:
      v2 = *(_QWORD *)(v2 + 16);
      if ( !--v56 )
      {
        sub_233F80((__int64 *)(i + 616), (_DWORD *)a2 + 18);
        v57 = (unsigned int **)(*(_QWORD *)(a2[9] + 16) + 8LL * v80);
        goto LABEL_104;
      }
    }
    v57 = (unsigned int **)(v2 + 8);
LABEL_104:
    v7 = *v57;
LABEL_10:
    v8 = *v7;
    if ( *v7 >= (unsigned int)v89 )
    {
      sub_186B510(&v89, v8 + 1, 0);
      v9 = 1 << v8;
      v10 = (int *)((char *)ptr + 4 * (v8 >> 5));
      v11 = *v10;
      goto LABEL_12;
    }
    v10 = (int *)((char *)ptr + 4 * (v8 >> 5));
    v11 = *v10;
    v9 = 1 << v8;
    if ( ((1 << v8) & *v10) == 0 )
    {
LABEL_12:
      v12 = (int **)&v99;
      *v10 = v11 | v9;
      v97 = &v99;
      v99 = v7;
      v100 = 0;
      v98 = 0x1000000001LL;
      LODWORD(v13) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *((_WORD *)v7 + 2);
          v15 = &v12[2 * (unsigned int)v13];
          if ( v14 == 1 )
            goto LABEL_46;
          if ( v14 == 2 )
            break;
          if ( v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 100);
          }
          v16 = v7[6];
          v17 = *((_DWORD *)v15 + 2);
          if ( v17 < v16 )
          {
            while ( 1 )
            {
              v18 = v17++;
              v19 = *(unsigned int **)&v7[2 * v18 + 8];
              *((_DWORD *)v15 + 2) = v17;
              v20 = *v19;
              if ( *v19 < (unsigned int)v89 )
              {
                v22 = (int *)((char *)ptr + 4 * (v20 >> 5));
                v23 = *v22;
                v21 = 1 << v20;
                if ( ((1 << v20) & *v22) != 0 )
                  goto LABEL_24;
              }
              else
              {
                sub_186B510(&v89, v20 + 1, 0);
                v21 = 1 << v20;
                v22 = (int *)((char *)ptr + 4 * (v20 >> 5));
                v23 = *v22;
              }
              *v22 = v23 | v21;
              v24 = *((_WORD *)v19 + 2);
              if ( v24 != 1 )
              {
                if ( v24 == 2 )
                {
                  v45 = (unsigned int)v98;
                  if ( (unsigned int)v98 >= HIDWORD(v98) )
                  {
                    v52 = (unsigned int)(2 * HIDWORD(v98));
                    v12 = (int **)sub_186B270(16 * v52);
                    v53 = (int **)v97;
                    v54 = 0;
                    v45 = (unsigned int)v98;
                    v55 = 16LL * (unsigned int)v98;
                    if ( (_DWORD)v98 )
                    {
                      do
                      {
                        *(__m128i *)&v12[v54 / 8] = _mm_loadu_si128((const __m128i *)&v53[v54 / 8]);
                        v54 += 16LL;
                      }
                      while ( v54 != v55 );
                    }
                    if ( v53 != (int **)&v99 && v53 )
                    {
                      sub_186B220(v53);
                      v45 = (unsigned int)v98;
                    }
                    v97 = v12;
                    HIDWORD(v98) = v52;
                  }
                  else
                  {
                    v12 = (int **)v97;
                  }
                  v46 = (unsigned int **)&v12[2 * v45];
                  *v46 = v19;
                  *((_DWORD *)v46 + 2) = 0;
                  v37 = (unsigned int)v98;
                  v38 = v98 + 1;
                  goto LABEL_61;
                }
                if ( v24 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 73);
                }
                if ( v19[6] )
                {
                  v63 = (unsigned int)v98;
                  if ( (unsigned int)v98 >= HIDWORD(v98) )
                  {
                    v66 = (unsigned int)(2 * HIDWORD(v98));
                    v12 = (int **)sub_186B270(16 * v66);
                    v67 = (int **)v97;
                    v68 = 0;
                    v63 = (unsigned int)v98;
                    v69 = 16LL * (unsigned int)v98;
                    if ( (_DWORD)v98 )
                    {
                      do
                      {
                        *(__m128i *)&v12[v68 / 8] = _mm_loadu_si128((const __m128i *)&v67[v68 / 8]);
                        v68 += 16LL;
                      }
                      while ( v68 != v69 );
                    }
                    if ( v67 != (int **)&v99 && v67 )
                    {
                      sub_186B220(v67);
                      v63 = (unsigned int)v98;
                    }
                    v97 = v12;
                    HIDWORD(v98) = v66;
                  }
                  else
                  {
                    v12 = (int **)v97;
                  }
                  v64 = (unsigned int **)&v12[2 * v63];
                  *((_DWORD *)v64 + 2) = 0;
                  v37 = (unsigned int)v98;
                  *v64 = v19;
                  v38 = v37 + 1;
                  goto LABEL_61;
                }
                v39 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL);
                if ( v39 )
                {
                  if ( *v39 != 5 )
                    goto LABEL_68;
                  v58 = v39[1];
                  if ( v58 == 2 || v58 == 4 || v58 == 5 || v58 == 3 )
                  {
                    v59 = *((_QWORD *)v19 + 4);
                    v60 = *((_QWORD *)v19 + 5);
                    v85 = 0;
                    v86 = v119;
                    v88 = v119;
                    v87 = 0;
                    v91 = v102;
                    v92 = 0;
                    v93 = 0;
                    v94 = v102;
                    v95 = 0;
                    v96 = 0;
                    sub_1633040(v120, v59, &v85);
                    sub_1633040(v120, v60, &v87);
                    v61 = sub_177C920(v85);
                    if ( v123 < v61 )
                      v123 = v61;
                    ++v125;
                    v124 += v61;
                    v62 = sub_177C920(v87);
                    if ( v123 < v62 )
                      v123 = v62;
                    ++v125;
                    v124 += v62;
                    sub_182EF00(v94, &v95);
                    sub_182EF00(v91, &v92);
                    if ( v87 )
                      sub_177F260(v88);
                    if ( v85 )
                      sub_177F260(v86);
                    if ( !*((_WORD *)v19 + 2) )
                    {
                      v39 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL);
                      if ( v39 )
                      {
LABEL_68:
                        if ( !*v39 && v39[1] == 2 )
                        {
                          v40 = *(_DWORD **)(sub_15D1F10(*((_QWORD *)v19 + 4)) + 24);
                          if ( v40 )
                          {
                            if ( *v40 == 5 )
                            {
                              v41 = *((_QWORD *)v19 + 4);
                              v42 = *((_QWORD *)v19 + 5);
                              v85 = 0;
                              v86 = v119;
                              v88 = v119;
                              v87 = 0;
                              v91 = v102;
                              v92 = 0;
                              v93 = 0;
                              v94 = v102;
                              v95 = 0;
                              v96 = 0;
                              sub_1633040(v120, v41, &v85);
                              sub_1633040(v120, v42, &v87);
                              v43 = sub_177C920(v85);
                              if ( v123 < v43 )
                                v123 = v43;
                              ++v125;
                              v124 += v43;
                              v44 = sub_177C920(v87);
                              if ( v123 < v44 )
                                v123 = v44;
                              ++v125;
                              v124 += v44;
                              sub_182EF00(v94, &v95);
                              sub_182EF00(v91, &v92);
                              if ( v87 )
                                sub_177F260(v88);
                              if ( v85 )
                                sub_177F260(v86);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v17 = *((_DWORD *)v15 + 2);
LABEL_24:
              if ( v17 >= v16 )
              {
                LODWORD(v13) = v98 - 1;
                break;
              }
            }
          }
          LODWORD(v98) = v13;
          if ( !*((_WORD *)v7 + 2) )
          {
            v25 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL);
            if ( v25 )
            {
              if ( *v25 != 5 )
                goto LABEL_139;
              v75 = v25[1];
              if ( v75 != 2 && v75 != 4 && v75 != 5 && v75 != 3 )
                goto LABEL_139;
              v76 = *((_QWORD *)v7 + 4);
              v77 = *((_QWORD *)v7 + 5);
              v85 = 0;
              v86 = v119;
              v88 = v119;
              v87 = 0;
              v91 = v102;
              v92 = 0;
              v93 = 0;
              v94 = v102;
              v95 = 0;
              v96 = 0;
              sub_1633040(v120, v76, &v85);
              sub_1633040(v120, v77, &v87);
              v78 = sub_177C920(v85);
              if ( v123 < v78 )
                v123 = v78;
              ++v125;
              v124 += v78;
              v79 = sub_177C920(v87);
              if ( v123 < v79 )
                v123 = v79;
              ++v125;
              v124 += v79;
              sub_182EF00(v94, &v95);
              sub_182EF00(v91, &v92);
              if ( v87 )
                sub_177F260(v88);
              if ( v85 )
                sub_177F260(v86);
              if ( !*((_WORD *)v7 + 2) )
              {
                v25 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL);
                if ( v25 )
                {
LABEL_139:
                  if ( !*v25 && v25[1] == 2 )
                  {
                    v70 = *(_DWORD **)(sub_15D1F10(*((_QWORD *)v7 + 4)) + 24);
                    if ( v70 )
                    {
                      if ( *v70 == 5 )
                      {
                        v71 = *((_QWORD *)v7 + 4);
                        v72 = *((_QWORD *)v7 + 5);
                        v85 = 0;
                        v86 = v119;
                        v88 = v119;
                        v87 = 0;
                        v91 = v102;
                        v92 = 0;
                        v93 = 0;
                        v94 = v102;
                        v95 = 0;
                        v96 = 0;
                        sub_1633040(v120, v71, &v85);
                        sub_1633040(v120, v72, &v87);
                        v73 = sub_177C920(v85);
                        if ( v123 < v73 )
                          v123 = v73;
                        ++v125;
                        v124 += v73;
                        v74 = sub_177C920(v87);
                        if ( v123 < v74 )
                          v123 = v74;
                        ++v125;
                        v124 += v74;
                        sub_182EF00(v94, &v95);
                        sub_182EF00(v91, &v92);
                        if ( v87 )
                          sub_177F260(v88);
                        if ( v85 )
                          sub_177F260(v86);
                      }
                    }
                  }
                }
              }
            }
            LODWORD(v13) = v98;
          }
          v12 = (int **)v97;
          if ( !(_DWORD)v13 )
          {
LABEL_47:
            if ( v12 != (int **)&v99 && v12 )
              sub_186B220(v12);
            goto LABEL_50;
          }
LABEL_32:
          v13 = (unsigned int)(v13 - 1);
          v7 = (unsigned int *)v12[2 * v13];
        }
        v28 = v7[18];
        v29 = *((_DWORD *)v15 + 2);
        v30 = v89;
        v31 = ptr;
        v32 = v28 + v7[19] + 1;
        if ( v29 >= v32 )
        {
LABEL_45:
          LODWORD(v13) = v98 - 1;
LABEL_46:
          LODWORD(v98) = v13;
          if ( !(_DWORD)v13 )
            goto LABEL_47;
          goto LABEL_32;
        }
        if ( !v29 )
        {
          v33 = *((unsigned int **)v7 + 3);
          goto LABEL_56;
        }
        while ( 1 )
        {
          v47 = v29 - 1;
          if ( v28 < v29 )
            v47 = (unsigned int)v47 - v28;
          v33 = *(unsigned int **)&v7[4 * v7[5] + 20 + 2 * v47];
LABEL_56:
          v34 = *v33;
          *((_DWORD *)v15 + 2) = ++v29;
          if ( v34 >= v30 )
            break;
          if ( (v31[v34 >> 5] & (1 << v34)) == 0 )
            goto LABEL_58;
          if ( v29 >= v32 )
            goto LABEL_45;
          v28 = v7[18];
        }
        v82 = v33;
        sub_186B510(&v89, v34 + 1, 0);
        v33 = v82;
LABEL_58:
        *((_DWORD *)ptr + (v34 >> 5)) |= 1 << v34;
        v35 = (unsigned int)v98;
        if ( (unsigned int)v98 >= HIDWORD(v98) )
        {
          v83 = v33;
          v48 = (unsigned int)(2 * HIDWORD(v98));
          v12 = (int **)sub_186B270(16 * v48);
          v49 = 0;
          v50 = (int **)v97;
          v33 = v83;
          v35 = (unsigned int)v98;
          v51 = 16LL * (unsigned int)v98;
          if ( (_DWORD)v98 )
          {
            do
            {
              *(__m128i *)&v12[v49 / 8] = _mm_loadu_si128((const __m128i *)&v50[v49 / 8]);
              v49 += 16LL;
            }
            while ( v49 != v51 );
          }
          if ( v50 != (int **)&v99 && v50 )
          {
            sub_186B220(v50);
            v35 = (unsigned int)v98;
            v33 = v83;
          }
          v97 = v12;
          HIDWORD(v98) = v48;
        }
        else
        {
          v12 = (int **)v97;
        }
        v36 = (unsigned int **)&v12[2 * v35];
        *v36 = v33;
        *((_DWORD *)v36 + 2) = 0;
        v37 = (unsigned int)v98;
        v38 = v98 + 1;
LABEL_61:
        LODWORD(v98) = v38;
        LODWORD(v13) = v38 - 1;
        v7 = (unsigned int *)v12[2 * v37];
      }
    }
LABEL_50:
    ++v80;
    v2 = a2[9];
    if ( !v2 )
      break;
  }
  if ( ptr )
    sub_186B220(ptr);
LABEL_38:
  if ( *(_BYTE *)(a1 + 12) )
  {
    v26 = 0.0;
    if ( v125 )
    {
      if ( v124 < 0 )
        v65 = (double)(int)(v124 & 1 | ((unsigned __int64)v124 >> 1))
            + (double)(int)(v124 & 1 | ((unsigned __int64)v124 >> 1));
      else
        v65 = (double)(int)v124;
      v26 = v65 / (double)v125;
    }
  }
  else
  {
    v26 = (double)(int)v123;
  }
  v120[0] = &off_1C62610;
  if ( v121 )
    sub_186B220((void *)(v121 - 8));
  sub_16329F0(v120);
  sub_177F420(v119);
  sub_184C8D0(v102);
  return v26;
}

