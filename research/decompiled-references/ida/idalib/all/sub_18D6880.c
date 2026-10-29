__int64 __fastcall sub_18D6880(__int64 a1, const __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v6; // r14
  __int64 v7; // r12
  __int64 *v8; // rbp
  char *v9; // rax
  __int64 *v10; // rbx
  bool v11; // sf
  __int64 v12; // r13
  int *v13; // r12
  int v14; // eax
  int *v15; // r15
  __int64 i; // rax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // r15
  unsigned int v19; // r13d
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r13d
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 *v29; // rax
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE *v35; // r12
  unsigned __int64 v36; // r11
  __int64 v37; // r14
  __int64 v38; // rax
  void *v39; // rdi
  __int64 v40; // rdi
  unsigned int v41; // r12d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // al
  char v47; // r13
  unsigned __int64 v48; // rax
  __m128i v49; // xmm3
  int v50; // eax
  __int64 j; // r14
  unsigned int v52; // eax
  unsigned __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // r9
  _BYTE *v56; // rax
  char v57; // cl
  unsigned int v58; // ecx
  __int64 *v59; // rsi
  int *v60; // r11
  unsigned int v61; // r14d
  int *v62; // r13
  int v63; // ebx
  int v64; // eax
  int v65; // edx
  unsigned __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdx
  unsigned int v74; // edx
  _BYTE *v75; // r14
  unsigned int v76; // edx
  unsigned __int64 v77; // r12
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rax
  void *v82; // rdi
  int v83; // r15d
  __int64 v84; // rdx
  __int64 *v85; // r15
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rbp
  unsigned __int64 v91; // rbx
  void *v92; // rdi
  __int64 v93; // r15
  void *v94; // rdi
  int v95; // edx
  void *v96; // [rsp+0h] [rbp-5D8h]
  void **p_ptr; // [rsp+8h] [rbp-5D0h]
  __int64 v98; // [rsp+10h] [rbp-5C8h] BYREF
  _BYTE *v99; // [rsp+18h] [rbp-5C0h]
  unsigned __int64 *v100; // [rsp+20h] [rbp-5B8h]
  __m128i *v101; // [rsp+28h] [rbp-5B0h]
  __int64 *v102; // [rsp+30h] [rbp-5A8h]
  __int64 *v103; // [rsp+38h] [rbp-5A0h]
  unsigned __int64 v104; // [rsp+40h] [rbp-598h]
  __int64 *v105; // [rsp+48h] [rbp-590h]
  void **v106; // [rsp+50h] [rbp-588h]
  void *v107; // [rsp+58h] [rbp-580h]
  __int64 *v108; // [rsp+60h] [rbp-578h]
  void *v109; // [rsp+68h] [rbp-570h]
  _QWORD v110[2]; // [rsp+70h] [rbp-568h] BYREF
  void *v111; // [rsp+80h] [rbp-558h] BYREF
  unsigned int v112; // [rsp+88h] [rbp-550h]
  char v113; // [rsp+8Ch] [rbp-54Ch]
  __int64 *v114; // [rsp+90h] [rbp-548h] BYREF
  unsigned int v115; // [rsp+98h] [rbp-540h]
  __int64 v116; // [rsp+A0h] [rbp-538h] BYREF
  __m128i v117; // [rsp+B0h] [rbp-528h] BYREF
  __int64 v118; // [rsp+C0h] [rbp-518h]
  __m128i v119; // [rsp+D0h] [rbp-508h] BYREF
  __int64 v120; // [rsp+E0h] [rbp-4F8h]
  void *ptr; // [rsp+F0h] [rbp-4E8h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-4E0h]
  _DWORD v123[4]; // [rsp+100h] [rbp-4D8h] BYREF
  void *v124[2]; // [rsp+110h] [rbp-4C8h] BYREF
  __int64 v125; // [rsp+120h] [rbp-4B8h]
  unsigned __int64 v126; // [rsp+128h] [rbp-4B0h]
  unsigned __int64 v127; // [rsp+130h] [rbp-4A8h] BYREF
  unsigned __int64 v128; // [rsp+138h] [rbp-4A0h]
  _BYTE v129[20]; // [rsp+1E0h] [rbp-3F8h] BYREF
  char v130; // [rsp+1F4h] [rbp-3E4h]
  void *v131; // [rsp+1F8h] [rbp-3E0h]
  __int64 v132; // [rsp+200h] [rbp-3D8h]
  _BYTE v133[232]; // [rsp+208h] [rbp-3D0h] BYREF
  __int64 v134; // [rsp+2F0h] [rbp-2E8h]
  _QWORD v135[5]; // [rsp+300h] [rbp-2D8h] BYREF
  unsigned int v136; // [rsp+328h] [rbp-2B0h]
  __int16 v137; // [rsp+32Ch] [rbp-2ACh]
  void *v138; // [rsp+330h] [rbp-2A8h]
  __int64 v139; // [rsp+548h] [rbp-90h]
  void *v140; // [rsp+550h] [rbp-88h]
  size_t v141; // [rsp+558h] [rbp-80h]
  unsigned int v142; // [rsp+588h] [rbp-50h]
  unsigned int v143; // [rsp+58Ch] [rbp-4Ch]
  char v144; // [rsp+594h] [rbp-44h]
  unsigned __int8 v145; // [rsp+595h] [rbp-43h]

  v6 = (int *)a2;
  v7 = a3;
  v8 = (__int64 *)a1;
  v9 = *(char **)(a1 + 232);
  v98 = a4;
  v10 = v135;
  v11 = *v9 < 0;
  v96 = nullptr;
  if ( v11 )
  {
    sub_18D5BA0((__int64)v135, a1, a2, a3, a5, a6);
    v6 = (int *)v135[0];
    v96 = (void *)v135[0];
    v7 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v135[1] - v135[0]) >> 3);
  }
  v12 = 1;
  sub_13EE5A0((__int64)v135, v6, v7, *(_QWORD **)(a1 + 240), 0);
  if ( !v144 )
  {
    p_ptr = &ptr;
    v122 = 0x400000000LL;
    v13 = &v6[6 * v7];
    ptr = v123;
    if ( v6 != v13 )
    {
      v14 = *v6;
      v15 = v6 + 6;
      LODWORD(v122) = 1;
      v123[0] = v14;
      for ( i = 1; v13 != v15; LODWORD(v122) = v122 + 1 )
      {
        if ( i + 1 <= (unsigned __int64)HIDWORD(v122) )
        {
          *((_DWORD *)ptr + i) = *v15;
        }
        else
        {
          LODWORD(v99) = *v15;
          sub_2237220(p_ptr, v123, i + 1, 4);
          *((_DWORD *)ptr + (unsigned int)v122) = (_DWORD)v99;
        }
        v15 += 6;
        i = (unsigned int)(v122 + 1);
      }
    }
    v17 = *(_QWORD **)(a1 + 248);
    v18 = v17[2331];
    if ( v137 == 15 )
    {
      v18 = v17[2333];
      v19 = 1;
      goto LABEL_18;
    }
    if ( v137 != 17 )
    {
      if ( v137 == 18 )
      {
        v18 = v17[2336];
        v19 = 3;
      }
      else if ( v137 == 19 )
      {
        v18 = v17[2337];
        v19 = 4;
      }
      else
      {
        v19 = 0;
        if ( v145 )
          v18 = v17[2344];
      }
LABEL_18:
      v20 = sub_A71230((__int64)v17, v18, ((int)v139 - (int)v138) / v136);
      v21 = sub_C09810(
              (_QWORD *)v8[31],
              v138,
              (unsigned int)(v139 - (_DWORD)v138),
              v19,
              v145,
              v20,
              (__int64)ptr,
              (unsigned int)v122);
      v12 = v21;
      if ( !v141 )
        goto LABEL_19;
      v23 = sub_6F3470(*(_QWORD *)(v8[31] + 17504), v140, v141);
      v24 = v8[29];
      v99 = (_BYTE *)v23;
      v25 = *((_DWORD *)ptr + v142);
      v26 = sub_13D1C70(v25, v143, v8[34], v24) + v25;
      if ( !v98 )
      {
        v76 = v26;
        v12 = 1;
        sub_168B9F0((__int64)v129, v8 + 1, v76, 0x1Du, 0);
        sub_15F7200(v129);
LABEL_19:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        goto LABEL_21;
      }
      v27 = sub_A63CE0((_QWORD *)v8[31]);
      v28 = v8[31];
      v101 = (__m128i *)v27;
      v29 = (__int64 *)sub_B87830(v28 + 17536, (__int64)v99);
      v115 = v26;
      v103 = (__int64 *)&v114;
      v114 = v29;
      v102 = v29;
      sub_B85890(&v116, (__int64)v29);
      *(_QWORD *)v129 = v26;
      v30 = (_QWORD *)v8[31];
      v99 = v129;
      v116 = v26;
      v110[0] = sub_A72210(v30, v20);
      v110[1] = v101;
      v100 = &v127;
      sub_18BBF60((__int64)&v127, (__int64)v8, (__int64)v102, v26, 0);
      v31 = sub_1A5BB50((_DWORD)v8, v98, (unsigned int)&v127, (unsigned int)v110, 2, 0, 1, 1, 1, v21);
      if ( v31 == 2 )
      {
        v77 = ((int)v139 - (int)v138) / v136;
        LODWORD(v124[1]) = sub_AAC1F0(v8[31], (__int64)v101, ((int)v139 - (int)v138) % v136, v33, v34);
        if ( LODWORD(v124[1]) > 0x40 )
          sub_2205470(v124, v77, 0);
        else
          v124[0] = (void *)v77;
        v78 = sub_C0C5D0((_QWORD *)v8[31], (__int64)v124, (__int64)v101, *(_DWORD *)ptr);
        v101 = (__m128i *)v21;
        v98 = v78;
        *(__m128 *)v129 = _mm_loadh_ps((const double *)&v98);
        v12 = sub_1C03D10(
                (_DWORD)v8,
                (_DWORD)v100,
                (_DWORD)v103,
                (_DWORD)v99,
                2,
                *((_DWORD *)ptr + (unsigned int)v122 - 1),
                0);
        if ( LODWORD(v124[1]) > 0x40 && v124[0] )
          operator delete[](v124[0]);
        goto LABEL_35;
      }
      if ( v31 > 2 )
      {
        if ( v31 == 4 )
        {
          *(_QWORD *)&v129[8] = 0x800000000LL;
          v35 = v99 + 16;
          v36 = v21 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v124[1] = (void *)v21;
          v37 = (__int64)v99;
          *(_QWORD *)v129 = v99 + 16;
          v134 = 0;
          v124[0] = (void *)((unsigned __int64)v124[0] & 0xFFFFFFFE00000000LL | 8);
          v126 = v36;
          sub_17429A0((__int64)v99, (const __m128i *)v124);
          v38 = sub_1C03D10(
                  (_DWORD)v8,
                  (_DWORD)v100,
                  (_DWORD)v103,
                  0,
                  0,
                  *((_DWORD *)ptr + (unsigned int)v122 - 1),
                  v37);
          v39 = *(void **)v129;
          v12 = v38;
          if ( *(_BYTE **)v129 == v35 )
          {
LABEL_35:
            sub_169D230((__int64)v100);
            goto LABEL_19;
          }
LABEL_34:
          free(v39);
          goto LABEL_35;
        }
        if ( v31 == 5 )
        {
          v40 = v8[31];
          v134 = 0;
          *(_QWORD *)v129 = v99 + 16;
          *(_QWORD *)&v129[8] = 0x800000000LL;
          v41 = sub_AAC1F0(v40, v18, v32, v33, v34);
          v46 = sub_F65360(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL), v18, v42, v43, v44, v45);
          v112 = v41;
          v47 = v46;
          if ( v41 > 0x40 )
            sub_2205470(&v111, 0, 0);
          else
            v111 = nullptr;
          v113 = v47;
          sub_F1D250((__int64)&v117, v18, 0, 0);
          v48 = (unsigned __int64)sub_A81910((_QWORD *)v8[31], v18, 0);
          v49 = _mm_load_si128(&v117);
          v125 = v118;
          v126 = v48 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(__m128i *)v124 = v49;
          sub_17429A0((__int64)v99, (const __m128i *)v124);
          v50 = *(_DWORD *)(v21 + 16);
          v98 = (unsigned int)(v50 - 1);
          v101 = &v119;
          if ( v50 )
          {
            v102 = v10;
            v10 = (__int64 *)v21;
            for ( j = 0; ; ++j )
            {
              v31 = (*((_WORD *)v10 + 1) >> 6) & 7;
              if ( ((*((_WORD *)v10 + 1) >> 6) & 7) == 2 )
              {
                v52 = *((unsigned __int16 *)v10 + 2 * *((unsigned int *)v10 + 1) + j + 10);
              }
              else if ( (_BYTE)v31 == 4 )
              {
                v52 = *((_DWORD *)v10 + j + *((unsigned int *)v10 + 1) + 5);
              }
              else
              {
                if ( (_BYTE)v31 != 1 )
                  goto LABEL_49;
                v52 = *((unsigned __int8 *)v10 + 4 * *((unsigned int *)v10 + 1) + j + 20);
              }
              v53 = v52;
              v54 = v112;
              if ( v112 > 0x40 )
              {
                *(_QWORD *)v111 = v53;
                memset((char *)v111 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v54 + 63) >> 6) + 0x1FFFFFFF));
              }
              else
              {
                v111 = (void *)v53;
                sub_CF8100((unsigned __int64 *)&v111);
              }
              sub_F1F190((__int64)v101, (_QWORD *)v8[31], (void ***)&v111, v18, 0, v55);
              *(__m128i *)v124 = _mm_load_si128(&v119);
              v126 = 0;
              v125 = v120;
              sub_17429A0((__int64)v99, (const __m128i *)v124);
              if ( j == v98 )
                break;
            }
            v10 = v102;
          }
          v12 = sub_1C03D10(
                  (_DWORD)v8,
                  (_DWORD)v100,
                  (_DWORD)v103,
                  0,
                  0,
                  *((_DWORD *)ptr + (unsigned int)v122 - 1),
                  (__int64)v99);
          if ( v112 > 0x40 && v111 )
            operator delete[](v111);
          v39 = *(void **)v129;
          if ( *(_BYTE **)v129 == v99 + 16 )
            goto LABEL_35;
          goto LABEL_34;
        }
      }
LABEL_49:
      while ( v31 )
        ;
      v12 = 1;
      goto LABEL_35;
    }
    v56 = (_BYTE *)v8[29];
    v57 = v56[1] & 8;
    if ( (v56[3] & 0x20) != 0 )
    {
      v18 = v17[2335];
      v19 = 2;
      if ( v57 || (*v56 & 8) != 0 )
        goto LABEL_18;
      goto LABEL_57;
    }
    if ( (*v56 & 8) != 0 )
    {
      v18 = v17[2344];
      if ( !v57 )
        goto LABEL_83;
    }
    else if ( !v57 )
    {
LABEL_57:
      v58 = 6644;
      v102 = v8 + 1;
      v59 = v8 + 1;
LABEL_58:
      v99 = v129;
      sub_168B9F0((__int64)v129, v59, *(_DWORD *)ptr, v58, 0);
      sub_15F7200(v129);
      v100 = &v127;
      sub_168B9B0((__int64)&v127, (__int64)v102, 5868);
      if ( v6 == v13 )
      {
        v74 = 0;
      }
      else
      {
        v60 = v6;
        v104 = v18;
        v61 = 0;
        v101 = (__m128i *)v133;
        v62 = v60;
        v106 = v124;
        v105 = v135;
        do
        {
          if ( *((_WORD *)v62 + 8) == 17 )
          {
            v63 = *v62;
            if ( !v61 )
              v61 = *v62;
            v64 = sub_13D1C70(*v62, 2u, v8[34], v8[29]);
            v65 = *v62;
            *(_QWORD *)&v129[12] = 0;
            v130 = 0;
            v132 = 0;
            v131 = v101;
            v133[0] = 0;
            v133[16] = 0;
            *(_DWORD *)v129 = v65;
            *(_DWORD *)&v129[4] = v63 + v64;
            v129[8] = 0;
            if ( v63 + v64 )
            {
              if ( v65 )
              {
                v66 = v127;
                if ( v127 )
                {
                  v67 = *(unsigned int *)(v127 + 536);
                  v68 = *(_QWORD *)(v127 + 528);
                  v69 = *(unsigned int *)(v127 + 540);
                  v70 = v67 + 1;
                  v71 = v68 + (v67 << 6);
                }
                else
                {
                  v79 = v128;
                  v80 = *(_DWORD *)(v128 + 14976);
                  if ( v80 )
                  {
                    v86 = (unsigned int)(v80 - 1);
                    *(_DWORD *)(v128 + 14976) = v86;
                    v66 = *(_QWORD *)(v79 + 8 * v86 + 14848);
                    v87 = *(unsigned int *)(v66 + 536);
                    *(_BYTE *)v66 = 0;
                    v88 = *(_QWORD *)(v66 + 528);
                    *(_DWORD *)(v66 + 424) = 0;
                    v89 = v88 + (v87 << 6);
                    if ( v88 != v89 )
                    {
                      v103 = v8;
                      v90 = v66;
                      v91 = v89;
                      do
                      {
                        while ( 1 )
                        {
                          v91 -= 64LL;
                          v92 = *(void **)(v91 + 24);
                          if ( v92 == (void *)(v91 + 40) )
                            break;
                          operator delete(v92);
                          if ( v88 == v91 )
                            goto LABEL_111;
                        }
                      }
                      while ( v88 != v91 );
LABEL_111:
                      v66 = v90;
                      v8 = v103;
                      v88 = *(_QWORD *)(v66 + 528);
                    }
                    *(_DWORD *)(v66 + 536) = 0;
                    v69 = *(unsigned int *)(v66 + 540);
                    v68 = v88;
                  }
                  else
                  {
                    v69 = 6;
                    v66 = operator new(0x3A0u);
                    *(_BYTE *)v66 = 0;
                    *(_QWORD *)(v66 + 96) = v66 + 112;
                    v68 = v66 + 544;
                    *(_QWORD *)(v66 + 128) = v66 + 144;
                    *(_QWORD *)(v66 + 160) = v66 + 176;
                    *(_QWORD *)(v66 + 192) = v66 + 208;
                    *(_QWORD *)(v66 + 224) = v66 + 240;
                    *(_QWORD *)(v66 + 256) = v66 + 272;
                    *(_QWORD *)(v66 + 288) = v66 + 304;
                    *(_QWORD *)(v66 + 320) = v66 + 336;
                    *(_QWORD *)(v66 + 352) = v66 + 368;
                    *(_QWORD *)(v66 + 384) = v66 + 400;
                    *(_QWORD *)(v66 + 416) = v66 + 432;
                    *(_QWORD *)(v66 + 104) = 0;
                    *(_BYTE *)(v66 + 112) = 0;
                    *(_QWORD *)(v66 + 136) = 0;
                    *(_BYTE *)(v66 + 144) = 0;
                    *(_QWORD *)(v66 + 168) = 0;
                    *(_BYTE *)(v66 + 176) = 0;
                    *(_QWORD *)(v66 + 200) = 0;
                    *(_BYTE *)(v66 + 208) = 0;
                    *(_QWORD *)(v66 + 232) = 0;
                    *(_BYTE *)(v66 + 240) = 0;
                    *(_QWORD *)(v66 + 264) = 0;
                    *(_BYTE *)(v66 + 272) = 0;
                    *(_QWORD *)(v66 + 296) = 0;
                    *(_BYTE *)(v66 + 304) = 0;
                    *(_QWORD *)(v66 + 328) = 0;
                    *(_BYTE *)(v66 + 336) = 0;
                    *(_QWORD *)(v66 + 360) = 0;
                    *(_BYTE *)(v66 + 368) = 0;
                    *(_QWORD *)(v66 + 392) = 0;
                    *(_BYTE *)(v66 + 400) = 0;
                    *(_QWORD *)(v66 + 424) = 0x800000000LL;
                    *(_QWORD *)(v66 + 528) = v66 + 544;
                    *(_QWORD *)(v66 + 536) = 0x600000000LL;
                  }
                  v127 = v66;
                  v71 = v68;
                  v70 = 1;
                }
                v72 = (__int64)v99;
                if ( v70 > v69 )
                {
                  if ( v68 > (unsigned __int64)v99 || v71 <= (unsigned __int64)v99 )
                  {
                    v107 = (void *)(v66 + 544);
                    v103 = (__int64 *)(v66 + 528);
                    v93 = sub_2237400(v66 + 528, v66 + 544, v70, 64, v106);
                    sub_9EF810(v103, v93);
                    v94 = *(void **)(v66 + 528);
                    v95 = (int)v124[0];
                    if ( v94 == v107 )
                    {
                      *(_QWORD *)(v66 + 528) = v93;
                    }
                    else
                    {
                      v103 = (__int64 *)v124[0];
                      free(v94);
                      *(_QWORD *)(v66 + 528) = v93;
                      v95 = (int)v103;
                    }
                    *(_DWORD *)(v66 + 540) = v95;
                    v71 = v93 + ((unsigned __int64)*(unsigned int *)(v66 + 536) << 6);
                    v72 = (__int64)v99;
                  }
                  else
                  {
                    v103 = (__int64 *)&v99[-v68];
                    v109 = (void *)(v66 + 544);
                    v108 = (__int64 *)(v66 + 528);
                    v107 = (void *)sub_2237400(v66 + 528, v66 + 544, v70, 64, v106);
                    sub_9EF810(v108, (__int64)v107);
                    v81 = (__int64)v107;
                    v82 = *(void **)(v66 + 528);
                    v83 = (int)v124[0];
                    if ( v82 != v109 )
                    {
                      free(v82);
                      v81 = (__int64)v107;
                    }
                    v84 = *(unsigned int *)(v66 + 536);
                    *(_DWORD *)(v66 + 540) = v83;
                    v85 = v103;
                    *(_QWORD *)(v66 + 528) = v81;
                    v72 = (__int64)v85 + v81;
                    v71 = (v84 << 6) + v81;
                  }
                }
                v73 = *(_QWORD *)v72;
                v103 = (__int64 *)v71;
                *(_QWORD *)v71 = v73;
                *(_DWORD *)(v71 + 8) = *(_DWORD *)(v72 + 8);
                *(_QWORD *)(v71 + 12) = *(_QWORD *)(v72 + 12);
                *(_DWORD *)(v71 + 20) = *(_DWORD *)(v72 + 20);
                *(_QWORD *)(v71 + 24) = v71 + 40;
                sub_18BD160((_QWORD *)(v71 + 24), *(_BYTE **)(v72 + 24), *(_QWORD *)(v72 + 24) + *(_QWORD *)(v72 + 32));
                *((_BYTE *)v103 + 56) = *(_BYTE *)(v72 + 56);
                ++*(_DWORD *)(v66 + 536);
                if ( v131 != v101 )
                  operator delete(v131);
              }
            }
          }
          v62 += 6;
        }
        while ( v13 != v62 );
        v18 = v104;
        v10 = v105;
        v74 = v61;
      }
      v75 = v99;
      sub_168CDE0((__int64)v99, v102, v74, (__int64)v100, 0);
      sub_15F7200(v75);
      if ( v127 && v128 )
        sub_1580C40(v128, v127);
      v17 = (_QWORD *)v8[31];
      goto LABEL_83;
    }
    if ( (char)v56[1] >= 0 )
    {
      v58 = 6755;
      v102 = v8 + 1;
      v59 = v8 + 1;
      goto LABEL_58;
    }
LABEL_83:
    v19 = 2;
    goto LABEL_18;
  }
LABEL_21:
  if ( v140 != v10 + 77 )
    free(v140);
  if ( v138 != v10 + 9 )
    free(v138);
  if ( v96 )
    operator delete(v96);
  return v12;
}
