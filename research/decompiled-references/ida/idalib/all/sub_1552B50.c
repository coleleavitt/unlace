__int64 __fastcall sub_1552B50(__int64 a1, __int64 a2, _DWORD *a3, double a4, __m128 a5)
{
  int *v5; // r14
  __int64 *v7; // r12
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v11; // r15
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  void **v14; // r15
  __int64 v15; // rax
  __int64 v16; // r13
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned __int8 *v19; // r14
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 *v25; // r15
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  void **v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r12
  void **v31; // r13
  _QWORD *v32; // rax
  void **v33; // r14
  void **v34; // r12
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // r12
  void **v38; // r14
  __int64 v39; // rdi
  __int64 *v41; // rdi
  int v42; // r13d
  void **v43; // r12
  _QWORD *v44; // rax
  void **v45; // r15
  void **v46; // r13
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // r15
  void **v50; // r13
  __int64 *v51; // r9
  __int64 v52; // r13
  __int64 *v53; // rax
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r13
  void **v57; // rcx
  _BYTE *v58; // rax
  __int64 *v59; // rsi
  signed __int64 v60; // r15
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 *v65; // rdx
  __int64 *v66; // r15
  __int64 *v67; // rdi
  __int64 v68; // rdx
  _QWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  char *v74; // r13
  int v75; // edx
  __int64 *v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 *v80; // r15
  __int64 *v81; // r13
  __int64 *v82; // rdi
  __int64 v83; // r13
  int v84; // eax
  __int64 *v85; // rdi
  __int64 *v86; // [rsp+0h] [rbp-158h]
  __int64 v87; // [rsp+8h] [rbp-150h]
  _DWORD *v88; // [rsp+10h] [rbp-148h]
  __int64 *v89; // [rsp+18h] [rbp-140h]
  __int64 *v90; // [rsp+20h] [rbp-138h]
  __int64 *v91; // [rsp+28h] [rbp-130h]
  int v92; // [rsp+30h] [rbp-128h] BYREF
  __int64 v93; // [rsp+38h] [rbp-120h]
  __int64 v94; // [rsp+48h] [rbp-110h]
  __int128 v95; // [rsp+50h] [rbp-108h] BYREF
  void *v96[2]; // [rsp+60h] [rbp-F8h]
  __int128 v97; // [rsp+70h] [rbp-E8h]
  void *v98; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+88h] [rbp-D0h]
  void *v100; // [rsp+98h] [rbp-C0h]
  void *v101; // [rsp+A0h] [rbp-B8h]
  char v102; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v103[16]; // [rsp+B0h] [rbp-A8h] BYREF
  __int16 v104; // [rsp+C0h] [rbp-98h]
  void *v105; // [rsp+D0h] [rbp-88h] BYREF
  void *v106; // [rsp+D8h] [rbp-80h]
  __int64 v107; // [rsp+E0h] [rbp-78h]
  __int64 v108; // [rsp+E8h] [rbp-70h] BYREF
  void *v109; // [rsp+F0h] [rbp-68h]
  __int64 v110; // [rsp+F8h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+100h] [rbp-58h] BYREF
  _WORD v112[36]; // [rsp+110h] [rbp-48h] BYREF

  v5 = (int *)(a1 + 16);
  v87 = a2;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v88 = a3;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 127 )
  {
    v41 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v41, v5);
    v42 = *(_DWORD *)(a1 + 40);
    sub_1564820(&v105, a1, *(unsigned int *)(a1 + 16), 1577);
    *(_QWORD *)((char *)&v99 + 4) = 0;
    BYTE12(v99) = 0;
    v100 = &v102;
    v101 = nullptr;
    v102 = 0;
    v103[8] = 0;
    LODWORD(v98) = v42;
    HIDWORD(v98) = v42;
    LOBYTE(v99) = 1;
    if ( !v42 )
      goto LABEL_92;
    v51 = (__int64 *)v105;
    if ( v105 )
    {
      v52 = *((unsigned int *)v105 + 134);
      v53 = *((__int64 **)v105 + 66);
      v54 = *((unsigned int *)v105 + 135);
      v55 = v52 + 1;
      v56 = (unsigned __int64)&v53[8 * v52];
    }
    else
    {
      v69 = v106;
      v70 = *((_DWORD *)v106 + 3744);
      if ( v70 )
      {
        v78 = (unsigned int)(v70 - 1);
        *((_DWORD *)v106 + 3744) = v78;
        v51 = (__int64 *)v69[v78 + 1856];
        v79 = *((unsigned int *)v51 + 134);
        *(_BYTE *)v51 = 0;
        v80 = (__int64 *)v51[66];
        *((_DWORD *)v51 + 106) = 0;
        v81 = &v80[8 * v79];
        if ( v80 != v81 )
        {
          do
          {
            while ( 1 )
            {
              v81 -= 8;
              v82 = (__int64 *)v81[3];
              if ( v82 == v81 + 5 )
                break;
              v86 = v51;
              operator delete(v82);
              v51 = v86;
              if ( v80 == v81 )
                goto LABEL_168;
            }
          }
          while ( v80 != v81 );
LABEL_168:
          v80 = (__int64 *)v51[66];
        }
        *((_DWORD *)v51 + 134) = 0;
        v54 = *((unsigned int *)v51 + 135);
        v53 = v80;
      }
      else
      {
        v54 = 6;
        v51 = (__int64 *)operator new(0x3A0u);
        *(_BYTE *)v51 = 0;
        v51[12] = (__int64)(v51 + 14);
        v51[16] = (__int64)(v51 + 18);
        v51[20] = (__int64)(v51 + 22);
        v51[24] = (__int64)(v51 + 26);
        v51[28] = (__int64)(v51 + 30);
        v51[32] = (__int64)(v51 + 34);
        v51[36] = (__int64)(v51 + 38);
        v51[40] = (__int64)(v51 + 42);
        v51[44] = (__int64)(v51 + 46);
        v51[48] = (__int64)(v51 + 50);
        v51[52] = (__int64)(v51 + 54);
        v51[13] = 0;
        *((_BYTE *)v51 + 112) = 0;
        v51[17] = 0;
        *((_BYTE *)v51 + 144) = 0;
        v51[21] = 0;
        *((_BYTE *)v51 + 176) = 0;
        v51[25] = 0;
        *((_BYTE *)v51 + 208) = 0;
        v51[29] = 0;
        *((_BYTE *)v51 + 240) = 0;
        v51[33] = 0;
        *((_BYTE *)v51 + 272) = 0;
        v51[37] = 0;
        *((_BYTE *)v51 + 304) = 0;
        v51[41] = 0;
        *((_BYTE *)v51 + 336) = 0;
        v51[45] = 0;
        *((_BYTE *)v51 + 368) = 0;
        v51[49] = 0;
        *((_BYTE *)v51 + 400) = 0;
        v51[53] = 0x800000000LL;
        v53 = v51 + 68;
        v51[66] = (__int64)(v51 + 68);
        v51[67] = 0x600000000LL;
      }
      v105 = v51;
      v56 = (unsigned __int64)v53;
      v55 = 1;
    }
    v57 = &v98;
    if ( v55 > v54 )
    {
      if ( v53 > (__int64 *)&v98 || v56 <= (unsigned __int64)&v98 )
      {
        v90 = v51;
        v89 = v51 + 68;
        v86 = v51 + 66;
        v83 = sub_2237400(v51 + 66, v51 + 68, v55, 64, &v95);
        sub_9EF810(v86, v83);
        v51 = v90;
        v84 = v95;
        v85 = (__int64 *)v90[66];
        if ( v85 != v89 )
        {
          v89 = (__int64 *)v95;
          v86 = v90;
          free(v85);
          v51 = v90;
          v84 = (int)v89;
        }
        v90[66] = v83;
        *((_DWORD *)v51 + 135) = v84;
        v57 = &v98;
        v56 = ((unsigned __int64)*((unsigned int *)v51 + 134) << 6) + v83;
      }
      else
      {
        v91 = v51;
        v90 = v51 + 68;
        v74 = (char *)((char *)&v98 - (char *)v53);
        v89 = v51 + 66;
        v86 = (__int64 *)sub_2237400(v51 + 66, v51 + 68, v55, 64, &v95);
        sub_9EF810(v89, (__int64)v86);
        v51 = v91;
        v75 = v95;
        v76 = v86;
        v77 = (__int64 *)v91[66];
        if ( v77 == v90 )
        {
          v91[66] = (__int64)v86;
          *((_DWORD *)v51 + 135) = v75;
        }
        else
        {
          v90 = (__int64 *)v95;
          v89 = v86;
          v86 = v91;
          free(v77);
          v51 = v91;
          v76 = v89;
          v91[66] = (__int64)v89;
          *((_DWORD *)v86 + 135) = (_DWORD)v90;
        }
        v57 = (void **)&v74[(_QWORD)v76];
        v56 = (unsigned __int64)&v76[8 * (unsigned __int64)*((unsigned int *)v51 + 134)];
      }
    }
    *(_QWORD *)v56 = *v57;
    *(_DWORD *)(v56 + 8) = *((_DWORD *)v57 + 2);
    *(_QWORD *)(v56 + 12) = *(void **)((char *)v57 + 12);
    *(_DWORD *)(v56 + 20) = *((_DWORD *)v57 + 5);
    v58 = (_BYTE *)(v56 + 40);
    *(_QWORD *)(v56 + 24) = v56 + 40;
    v59 = (__int64 *)v57[3];
    v60 = (signed __int64)v57[4];
    if ( (__int64 *)((char *)v59 + v60) && !v59 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v60 > 0xF )
    {
      if ( v60 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v90 = (__int64 *)v57;
      v89 = v59;
      v86 = v51;
      v58 = (_BYTE *)operator new(v60 + 1);
      *(_QWORD *)(v56 + 40) = v60;
      v51 = v86;
      v59 = v89;
      v57 = (void **)v90;
      *(_QWORD *)(v56 + 24) = v58;
    }
    else
    {
      if ( v60 == 1 )
      {
        *(_BYTE *)(v56 + 40) = *(_BYTE *)v59;
        goto LABEL_120;
      }
      if ( !v60 )
      {
LABEL_120:
        *(_QWORD *)(v56 + 32) = v60;
        v58[v60] = 0;
        *(_BYTE *)(v56 + 56) = *((_BYTE *)v57 + 56);
        ++*((_DWORD *)v51 + 134);
        if ( v100 != &v102 )
          operator delete(v100);
LABEL_92:
        if ( LOBYTE(v112[0]) )
        {
          sub_FC7790(v107, (__int64 *)&v105, SHIBYTE(v112[0]));
          v107 = 0;
          v112[0] = 0;
        }
        if ( v109 != ptr )
          operator delete(v109);
        v43 = (void **)v105;
        if ( v105 )
        {
          v44 = v106;
          if ( v106 )
          {
            if ( v105 >= v106 && v105 <= (char *)v106 + 14848 )
            {
              v73 = *((unsigned int *)v106 + 3744);
              *((_DWORD *)v106 + 3744) = v73 + 1;
              v44[v73 + 1856] = v43;
            }
            else
            {
              v45 = *((void ***)v105 + 66);
              v46 = &v45[8 * (unsigned __int64)*((unsigned int *)v105 + 134)];
              if ( v45 != v46 )
              {
                do
                {
                  while ( 1 )
                  {
                    v46 -= 8;
                    v47 = (void **)v46[3];
                    if ( v47 == v46 + 5 )
                      break;
                    operator delete(v47);
                    if ( v45 == v46 )
                      goto LABEL_103;
                  }
                }
                while ( v45 != v46 );
LABEL_103:
                v46 = (void **)v43[66];
              }
              if ( v46 != v43 + 68 )
                free(v46);
              v48 = (void **)v43[52];
              if ( v48 != v43 + 54 )
                free(v48);
              v49 = v43 + 48;
              v50 = v43 + 8;
              do
              {
                while ( *v49 != v49 + 2 )
                {
                  operator delete(*v49);
                  v49 -= 4;
                  if ( v50 == v49 )
                    goto LABEL_111;
                }
                v49 -= 4;
              }
              while ( v50 != v49 );
LABEL_111:
              operator delete(v43, 0x3A0u);
            }
          }
        }
        goto LABEL_2;
      }
    }
    v89 = (__int64 *)v57;
    v86 = v51;
    memcpy(v58, v59, v60);
    v58 = *(_BYTE **)(v56 + 24);
    v57 = (void **)v89;
    v51 = v86;
    goto LABEL_120;
  }
LABEL_2:
  sub_14A1D90(a1);
  v95 = 0;
  *(_OWORD *)v96 = 0;
  v97 = 0;
  if ( (unsigned __int8)sub_14D0170(
                          (const __m128i *)a1,
                          (__int64)&v95,
                          0,
                          0,
                          0,
                          nullptr,
                          (__m128i)0LL,
                          0,
                          nullptr,
                          1u,
                          0,
                          0) )
    goto LABEL_88;
  if ( !(_DWORD)v95 || !DWORD1(v95) )
  {
    if ( !*((_QWORD *)&v95 + 1) )
      goto LABEL_26;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)&v95 + 1) )
  {
LABEL_88:
    LOWORD(v105) = 63;
    v39 = a1;
    v29 = 0;
    sub_15680D0(v39, &v105, 1, 0);
    goto LABEL_89;
  }
LABEL_6:
  sub_1564820(&v105, a1, (unsigned int)v95, 1576);
  if ( LOBYTE(v112[0]) )
  {
    sub_FC7790(v107, (__int64 *)&v105, SHIBYTE(v112[0]));
    v107 = 0;
    v112[0] = 0;
  }
  if ( v109 != ptr )
    operator delete(v109);
  v7 = (__int64 *)v105;
  if ( v105 )
  {
    v8 = v106;
    if ( v106 )
    {
      if ( v105 >= v106 && v105 <= (char *)v106 + 14848 )
      {
        v68 = *((unsigned int *)v106 + 3744);
        *((_DWORD *)v106 + 3744) = v68 + 1;
        v8[v68 + 1856] = v7;
      }
      else
      {
        v9 = *((__int64 **)v105 + 66);
        v10 = (unsigned __int64)*((unsigned int *)v105 + 134) << 6;
        v11 = (__int64 *)((char *)v9 + v10);
        if ( v9 != (__int64 *)((char *)v9 + v10) )
        {
          do
          {
            while ( 1 )
            {
              v11 -= 8;
              v12 = (__int64 *)v11[3];
              if ( v12 == v11 + 5 )
                break;
              v86 = v9;
              operator delete(v12);
              v9 = v86;
              if ( v86 == v11 )
                goto LABEL_17;
            }
          }
          while ( v9 != v11 );
LABEL_17:
          v11 = (__int64 *)v7[66];
        }
        if ( v11 != v7 + 68 )
          free(v11);
        v13 = (__int64 *)v7[52];
        if ( v13 != v7 + 54 )
          free(v13);
        v14 = (void **)(v7 + 48);
        v86 = v7 + 8;
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 -= 4;
            if ( v14 == (void **)v86 )
              goto LABEL_25;
          }
          v14 -= 4;
        }
        while ( v86 != (__int64 *)v14 );
LABEL_25:
        operator delete(v7, 0x3A0u);
      }
    }
  }
LABEL_26:
  v92 = 0;
  v93 = 0;
  v94 = 0;
  if ( (unsigned __int8)sub_14D1670(
                          (const __m128i *)a1,
                          (__int64)&v95,
                          0,
                          0,
                          0,
                          0,
                          (__m128i)0LL,
                          a5,
                          0,
                          0,
                          nullptr,
                          (__int64)&v92) )
    goto LABEL_88;
  if ( v92 )
  {
    sub_1564820(&v105, a1, (unsigned int)v94, 1576);
    if ( LOBYTE(v112[0]) )
    {
      sub_FC7790(v107, (__int64 *)&v105, SHIBYTE(v112[0]));
      v107 = 0;
      v112[0] = 0;
    }
    if ( v109 != ptr )
      operator delete(v109);
    v31 = (void **)v105;
    if ( v105 )
    {
      v32 = v106;
      if ( v106 )
      {
        if ( v105 >= v106 && v105 <= (char *)v106 + 14848 )
        {
          v72 = *((unsigned int *)v106 + 3744);
          *((_DWORD *)v106 + 3744) = v72 + 1;
          v32[v72 + 1856] = v31;
        }
        else
        {
          v33 = *((void ***)v105 + 66);
          v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v105 + 134)];
          if ( v33 != v34 )
          {
            do
            {
              while ( 1 )
              {
                v34 -= 8;
                v35 = (void **)v34[3];
                if ( v35 == v34 + 5 )
                  break;
                operator delete(v35);
                if ( v33 == v34 )
                  goto LABEL_79;
              }
            }
            while ( v33 != v34 );
LABEL_79:
            v34 = (void **)v31[66];
          }
          if ( v34 != v31 + 68 )
            free(v34);
          v36 = (void **)v31[52];
          if ( v36 != v31 + 54 )
            free(v36);
          v37 = v31 + 48;
          v38 = v31 + 8;
          do
          {
            while ( *v37 != v37 + 2 )
            {
              operator delete(*v37);
              v37 -= 4;
              if ( v38 == v37 )
                goto LABEL_87;
            }
            v37 -= 4;
          }
          while ( v38 != v37 );
LABEL_87:
          operator delete(v31, 0x3A0u);
        }
      }
    }
    goto LABEL_88;
  }
  v15 = sub_1CB57E0(
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          **(_QWORD **)(v87 + 8),
          *(unsigned int *)(*(_QWORD *)(v87 + 8) + 8LL),
          v93,
          (unsigned int)v94);
  v105 = nullptr;
  v16 = v15;
  v110 = a1 + 504;
  v106 = &v108;
  v107 = 0x200000000LL;
  ptr[1] = (void *)0x200000000LL;
  v17 = *(_WORD *)(a1 + 32);
  ptr[0] = v112;
  if ( v17 == 189 || v17 == 320 || (unsigned __int16)(v17 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_1485110(a1, 5, (__int64)&v105, 0);
  v18 = *(unsigned int *)(a1 + 16);
  if ( *(_WORD *)(a1 + 32) != 64 )
  {
    sub_1564820(&v98, a1, v18, 14);
    v19 = (unsigned __int8 *)v98;
    if ( !v98 )
    {
      v61 = v99;
      v62 = *(_DWORD *)(v99 + 14976);
      if ( v62 )
      {
        v63 = (unsigned int)(v62 - 1);
        *(_DWORD *)(v99 + 14976) = v63;
        v19 = *(unsigned __int8 **)(v61 + 8 * v63 + 14848);
        v64 = *((unsigned int *)v19 + 134);
        *v19 = 0;
        v65 = *((__int64 **)v19 + 66);
        *((_DWORD *)v19 + 106) = 0;
        v66 = &v65[8 * v64];
        while ( v65 != v66 )
        {
          while ( 1 )
          {
            v66 -= 8;
            v67 = (__int64 *)v66[3];
            if ( v67 == v66 + 5 )
              break;
            v86 = v65;
            operator delete(v67);
            v65 = v86;
            if ( v86 == v66 )
              goto LABEL_137;
          }
        }
LABEL_137:
        *((_DWORD *)v19 + 134) = 0;
      }
      else
      {
        v19 = (unsigned __int8 *)operator new(0x3A0u);
        *v19 = 0;
        *((_QWORD *)v19 + 12) = v19 + 112;
        *((_QWORD *)v19 + 16) = v19 + 144;
        *((_QWORD *)v19 + 20) = v19 + 176;
        *((_QWORD *)v19 + 24) = v19 + 208;
        *((_QWORD *)v19 + 28) = v19 + 240;
        *((_QWORD *)v19 + 32) = v19 + 272;
        *((_QWORD *)v19 + 36) = v19 + 304;
        *((_QWORD *)v19 + 40) = v19 + 336;
        *((_QWORD *)v19 + 44) = v19 + 368;
        *((_QWORD *)v19 + 48) = v19 + 400;
        *((_QWORD *)v19 + 52) = v19 + 432;
        *((_QWORD *)v19 + 13) = 0;
        v19[112] = 0;
        *((_QWORD *)v19 + 17) = 0;
        v19[144] = 0;
        *((_QWORD *)v19 + 21) = 0;
        v19[176] = 0;
        *((_QWORD *)v19 + 25) = 0;
        v19[208] = 0;
        *((_QWORD *)v19 + 29) = 0;
        v19[240] = 0;
        *((_QWORD *)v19 + 33) = 0;
        v19[272] = 0;
        *((_QWORD *)v19 + 37) = 0;
        v19[304] = 0;
        *((_QWORD *)v19 + 41) = 0;
        v19[336] = 0;
        *((_QWORD *)v19 + 45) = 0;
        v19[368] = 0;
        *((_QWORD *)v19 + 49) = 0;
        v19[400] = 0;
        *((_QWORD *)v19 + 53) = 0x800000000LL;
        *((_QWORD *)v19 + 66) = v19 + 544;
        *((_QWORD *)v19 + 67) = 0x600000000LL;
      }
      v98 = v19;
    }
    v19[*v19 + 1] = 4;
    v20 = v98;
    v21 = *(unsigned __int8 *)v98;
    *(_BYTE *)v98 = v21 + 1;
    v20[v21 + 2] = 64;
    if ( (_BYTE)v104 )
    {
      sub_FC7790(*((__int64 *)&v99 + 1), (__int64 *)&v98, SHIBYTE(v104));
      *((_QWORD *)&v99 + 1) = 0;
      v104 = 0;
    }
    if ( v101 != v103 )
      operator delete(v101);
    v22 = (__int64 *)v98;
    if ( v98 )
    {
      v23 = v99;
      if ( (_QWORD)v99 )
      {
        if ( (unsigned __int64)v98 >= (unsigned __int64)v99 && (unsigned __int64)v98 <= (__int64)v99 + 14848 )
        {
          v71 = *(unsigned int *)(v99 + 14976);
          *(_DWORD *)(v99 + 14976) = v71 + 1;
          *(_QWORD *)(v23 + 8 * v71 + 14848) = v22;
        }
        else
        {
          v24 = *((__int64 **)v98 + 66);
          v25 = &v24[8 * (unsigned __int64)*((unsigned int *)v98 + 134)];
          if ( v24 != v25 )
          {
            do
            {
              while ( 1 )
              {
                v25 -= 8;
                v26 = (__int64 *)v25[3];
                if ( v26 == v25 + 5 )
                  break;
                v86 = v24;
                operator delete(v26);
                v24 = v86;
                if ( v86 == v25 )
                  goto LABEL_45;
              }
            }
            while ( v24 != v25 );
LABEL_45:
            v25 = (__int64 *)v22[66];
          }
          if ( v25 != v22 + 68 )
            free(v25);
          v27 = (__int64 *)v22[52];
          if ( v27 != v22 + 54 )
            free(v27);
          v28 = (void **)(v22 + 48);
          v86 = v22 + 8;
          do
          {
            while ( *v28 != v28 + 2 )
            {
              operator delete(*v28);
              v28 -= 4;
              if ( v86 == (__int64 *)v28 )
                goto LABEL_53;
            }
            v28 -= 4;
          }
          while ( v28 != (void **)v86 );
LABEL_53:
          operator delete(v22, 0x3A0u);
        }
      }
    }
    LOWORD(v98) = 63;
    goto LABEL_55;
  }
  *(_DWORD *)(a1 + 40) = v18;
  sub_14634E0(*(__int64 **)(a1 + 8), v5);
  v30 = sub_14C4A10((const __m128i *)a1, (__m128i)0LL);
  if ( v30 == 1 )
  {
    LOWORD(v98) = 63;
LABEL_55:
    sub_15680D0(a1, &v98, 1, 0);
    if ( v16 )
      sub_B88650(v16, 1);
    goto LABEL_57;
  }
  *v88 = *(_DWORD *)(a1 + 16);
  sub_156A150(a1, 1648, &byte_22F0C30, 0);
  if ( !v16 )
  {
LABEL_57:
    v29 = 0;
    goto LABEL_58;
  }
  v29 = sub_1CBADD0(
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          v16,
          v30 & 0xFFFFFFFFFFFFFFFELL,
          &v105);
LABEL_58:
  sub_15DCED0(v110, &v110);
  if ( ptr[0] != v112 )
    free(ptr[0]);
  if ( v106 == &v108 )
  {
LABEL_89:
    if ( !HIDWORD(v96[1]) )
      return v29;
    goto LABEL_62;
  }
  free(v106);
  if ( HIDWORD(v96[1]) )
LABEL_62:
    free(v96[0]);
  return v29;
}
