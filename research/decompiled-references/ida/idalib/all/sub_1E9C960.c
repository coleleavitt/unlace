__int64 __fastcall sub_1E9C960(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // r13d
  unsigned int v16; // edi
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // r14
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // r14
  void *v46; // rdi
  int v47; // r10d
  __int64 *v48; // rdx
  int v49; // eax
  bool v50; // zf
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *i; // rdx
  __int64 *v56; // r14
  __int64 v57; // r13
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // edx
  _QWORD *v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rdi
  _QWORD *v69; // r15
  _QWORD *v70; // r12
  unsigned __int64 v71; // rbp
  unsigned __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rbx
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  void **v78; // rbx
  void **v79; // r13
  int v80; // edi
  int v81; // edi
  int v82; // r9d
  __int64 *v83; // rsi
  unsigned int k; // eax
  __int64 v85; // rcx
  __int64 v86; // rdx
  int v87; // eax
  int v88; // eax
  int v89; // edi
  unsigned int v90; // r13d
  __int64 v91; // rcx
  __int64 v92; // rdx
  _QWORD *j; // rdx
  int v94; // r8d
  _QWORD *v95; // rdi
  unsigned int v96; // eax
  unsigned int v97; // r13d
  unsigned __int64 v98; // [rsp+8h] [rbp-120h]
  __int64 v99; // [rsp+10h] [rbp-118h]
  __int64 *v100; // [rsp+18h] [rbp-110h]
  __int64 v101; // [rsp+18h] [rbp-110h]
  __int64 v102; // [rsp+20h] [rbp-108h]
  __int64 *v103; // [rsp+20h] [rbp-108h]
  __int64 v104; // [rsp+20h] [rbp-108h]
  __int64 v105; // [rsp+28h] [rbp-100h]
  __int64 v106; // [rsp+30h] [rbp-F8h]
  __int64 v107; // [rsp+38h] [rbp-F0h]
  int v108; // [rsp+40h] [rbp-E8h]
  int v109; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v110; // [rsp+54h] [rbp-D4h]
  int v111; // [rsp+5Ch] [rbp-CCh]
  _QWORD v112[25]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = sub_16EC930(*a1, a2, 1u, a3);
  if ( !(_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    v112[0] = *(_QWORD *)(v5 + 8);
    if ( !sub_F58580(v112) )
    {
      v6 = *a1;
      v7 = sub_EEB7E0(v5, a2, a3);
      sub_168B9F0((__int64)v112, (__int64 *)(v6 + 8), v7, 0x1555u, 0);
      v109 = 1;
      v8 = sub_1587D10((__int64)v112, &v109);
      v9 = sub_EEC8C0(v5, (__int64)&v109, a3);
      v98 = HIDWORD(v9);
      if ( *(_BYTE *)(v8 + 120) )
      {
        v26 = *(_QWORD *)(v8 + 32);
        if ( v26 )
        {
          v27 = *(unsigned int *)(v26 + 424);
          v28 = *(unsigned int *)(v26 + 428);
          v29 = v27 + 1;
        }
        else
        {
          v31 = *(_QWORD *)(v8 + 40);
          v32 = *(_DWORD *)(v31 + 14976);
          if ( v32 )
          {
            v37 = (unsigned int)(v32 - 1);
            *(_DWORD *)(v31 + 14976) = v37;
            v26 = *(_QWORD *)(v31 + 8 * v37 + 14848);
            v38 = *(unsigned int *)(v26 + 536);
            v39 = *(_QWORD *)(v26 + 528);
            *(_BYTE *)v26 = 0;
            *(_DWORD *)(v26 + 424) = 0;
            v40 = v39 + (v38 << 6);
            while ( v39 != v40 )
            {
              while ( 1 )
              {
                v40 -= 64;
                v41 = *(void **)(v40 + 24);
                if ( v41 == (void *)(v40 + 40) )
                  break;
                operator delete(v41);
                if ( v39 == v40 )
                  goto LABEL_32;
              }
            }
LABEL_32:
            v27 = *(unsigned int *)(v26 + 424);
            v28 = *(unsigned int *)(v26 + 428);
            *(_DWORD *)(v26 + 536) = 0;
            v29 = v27 + 1;
          }
          else
          {
            v33 = operator new(0x3A0u);
            v28 = 8;
            v29 = 1;
            v26 = v33;
            *(_BYTE *)v33 = 0;
            *(_QWORD *)(v33 + 96) = v33 + 112;
            *(_QWORD *)(v33 + 128) = v33 + 144;
            *(_QWORD *)(v33 + 160) = v33 + 176;
            *(_QWORD *)(v33 + 192) = v33 + 208;
            *(_QWORD *)(v33 + 224) = v33 + 240;
            *(_QWORD *)(v33 + 256) = v33 + 272;
            *(_QWORD *)(v33 + 288) = v33 + 304;
            *(_QWORD *)(v33 + 320) = v33 + 336;
            *(_QWORD *)(v33 + 352) = v33 + 368;
            *(_QWORD *)(v33 + 384) = v33 + 400;
            *(_QWORD *)(v33 + 416) = v33 + 432;
            *(_QWORD *)(v33 + 104) = 0;
            *(_BYTE *)(v33 + 112) = 0;
            *(_QWORD *)(v33 + 136) = 0;
            *(_BYTE *)(v33 + 144) = 0;
            *(_QWORD *)(v33 + 168) = 0;
            *(_BYTE *)(v33 + 176) = 0;
            *(_QWORD *)(v33 + 200) = 0;
            *(_BYTE *)(v33 + 208) = 0;
            *(_QWORD *)(v33 + 232) = 0;
            *(_BYTE *)(v33 + 240) = 0;
            *(_QWORD *)(v33 + 264) = 0;
            *(_BYTE *)(v33 + 272) = 0;
            *(_QWORD *)(v33 + 296) = 0;
            *(_BYTE *)(v33 + 304) = 0;
            *(_QWORD *)(v33 + 328) = 0;
            *(_BYTE *)(v33 + 336) = 0;
            *(_QWORD *)(v33 + 360) = 0;
            *(_BYTE *)(v33 + 368) = 0;
            *(_QWORD *)(v33 + 392) = 0;
            *(_BYTE *)(v33 + 400) = 0;
            *(_QWORD *)(v33 + 424) = 0x800000000LL;
            *(_QWORD *)(v33 + 528) = v33 + 544;
            *(_QWORD *)(v33 + 536) = 0x600000000LL;
            v27 = 0;
          }
          *(_QWORD *)(v8 + 32) = v26;
        }
        v110 = v9;
        LOBYTE(v111) = 1;
        if ( v29 > v28 )
        {
          sub_2237220(v26 + 416, v26 + 432, v29, 12);
          v27 = *(unsigned int *)(v26 + 424);
        }
        v30 = *(_QWORD *)(v26 + 416) + 12 * v27;
        *(_QWORD *)v30 = v110;
        *(_DWORD *)(v30 + 8) = v111;
        ++*(_DWORD *)(v26 + 424);
        goto LABEL_6;
      }
      if ( !*(_BYTE *)(v8 + 132) )
      {
LABEL_6:
        v3 = 1;
        sub_15F7200(v112);
        return v3;
      }
      v10 = sub_168B9E0((_QWORD *)v8);
      v12 = *(_QWORD *)(v8 + 16);
      v99 = v10;
      if ( v12 )
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      v13 = *(_QWORD *)v99;
      v14 = *(unsigned int *)(v99 + 16);
      v100 = *(__int64 **)v99;
      if ( !(_DWORD)v14 )
        goto LABEL_45;
      v11 = (unsigned int)(v14 - 1);
      v15 = ((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4);
      v16 = v11 & v15;
      v17 = (__int64 *)(v13 + 32LL * ((unsigned int)v11 & v15));
      v18 = *v17;
      if ( v12 == *v17 )
      {
LABEL_11:
        v19 = v17[1];
LABEL_12:
        v20 = v19 + 32LL * *(unsigned int *)(v8 + 128);
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          v22 = *(unsigned int *)(v21 + 424);
          v23 = *(unsigned int *)(v21 + 428);
          v24 = v22 + 1;
        }
        else
        {
          v34 = *(_QWORD *)(v20 + 16);
          v35 = *(_DWORD *)(v34 + 14976);
          if ( v35 )
          {
            v42 = (unsigned int)(v35 - 1);
            *(_DWORD *)(v34 + 14976) = v42;
            v21 = *(_QWORD *)(v34 + 8 * v42 + 14848);
            v43 = *(unsigned int *)(v21 + 536);
            *(_BYTE *)v21 = 0;
            v44 = *(_QWORD *)(v21 + 528);
            *(_DWORD *)(v21 + 424) = 0;
            v45 = v44 + (v43 << 6);
            while ( v44 != v45 )
            {
              while ( 1 )
              {
                v45 -= 64;
                v46 = *(void **)(v45 + 24);
                if ( v46 == (void *)(v45 + 40) )
                  break;
                operator delete(v46);
                if ( v44 == v45 )
                  goto LABEL_37;
              }
            }
LABEL_37:
            v22 = *(unsigned int *)(v21 + 424);
            v23 = *(unsigned int *)(v21 + 428);
            *(_DWORD *)(v21 + 536) = 0;
            v24 = v22 + 1;
          }
          else
          {
            v36 = operator new(0x3A0u);
            v23 = 8;
            v24 = 1;
            v21 = v36;
            *(_BYTE *)v36 = 0;
            *(_QWORD *)(v36 + 96) = v36 + 112;
            *(_QWORD *)(v36 + 128) = v36 + 144;
            *(_QWORD *)(v36 + 160) = v36 + 176;
            *(_QWORD *)(v36 + 192) = v36 + 208;
            *(_QWORD *)(v36 + 224) = v36 + 240;
            *(_QWORD *)(v36 + 256) = v36 + 272;
            *(_QWORD *)(v36 + 288) = v36 + 304;
            *(_QWORD *)(v36 + 320) = v36 + 336;
            *(_QWORD *)(v36 + 352) = v36 + 368;
            *(_QWORD *)(v36 + 384) = v36 + 400;
            *(_QWORD *)(v36 + 416) = v36 + 432;
            *(_QWORD *)(v36 + 104) = 0;
            *(_BYTE *)(v36 + 112) = 0;
            *(_QWORD *)(v36 + 136) = 0;
            *(_BYTE *)(v36 + 144) = 0;
            *(_QWORD *)(v36 + 168) = 0;
            *(_BYTE *)(v36 + 176) = 0;
            *(_QWORD *)(v36 + 200) = 0;
            *(_BYTE *)(v36 + 208) = 0;
            *(_QWORD *)(v36 + 232) = 0;
            *(_BYTE *)(v36 + 240) = 0;
            *(_QWORD *)(v36 + 264) = 0;
            *(_BYTE *)(v36 + 272) = 0;
            *(_QWORD *)(v36 + 296) = 0;
            *(_BYTE *)(v36 + 304) = 0;
            *(_QWORD *)(v36 + 328) = 0;
            *(_BYTE *)(v36 + 336) = 0;
            *(_QWORD *)(v36 + 360) = 0;
            *(_BYTE *)(v36 + 368) = 0;
            *(_QWORD *)(v36 + 392) = 0;
            *(_BYTE *)(v36 + 400) = 0;
            *(_QWORD *)(v36 + 424) = 0x800000000LL;
            *(_QWORD *)(v36 + 528) = v36 + 544;
            *(_QWORD *)(v36 + 536) = 0x600000000LL;
            v22 = 0;
          }
          *(_QWORD *)(v20 + 8) = v21;
        }
        v110 = __PAIR64__(v98, v9);
        LOBYTE(v111) = 1;
        if ( v24 > v23 )
        {
          sub_2237220(v21 + 416, v21 + 432, v24, 12);
          v22 = *(unsigned int *)(v21 + 424);
        }
        v25 = *(_QWORD *)(v21 + 416) + 12 * v22;
        *(_QWORD *)v25 = v110;
        *(_DWORD *)(v25 + 8) = v111;
        ++*(_DWORD *)(v21 + 424);
        goto LABEL_6;
      }
      v47 = 1;
      v48 = nullptr;
      if ( v18 == -4096 )
        goto LABEL_39;
      while ( 1 )
      {
        if ( !v48 && v18 == -8192 )
          v48 = v17;
        v13 = (unsigned int)(v47 + 1);
        v16 = v11 & (v47 + v16);
        v17 = &v100[4 * v16];
        v18 = *v17;
        if ( v12 == *v17 )
          goto LABEL_11;
        if ( v18 == -4096 )
          break;
        ++v47;
      }
      if ( !v48 )
LABEL_39:
        v48 = v17;
      v49 = *(_DWORD *)(v99 + 8) + 1;
      if ( 4 * v49 < (unsigned int)(3 * v14) )
      {
        if ( (int)v14 - *(_DWORD *)(v99 + 12) - v49 > (unsigned int)v14 >> 3 )
        {
LABEL_42:
          v50 = *v48 == -4096;
          *(_DWORD *)(v99 + 8) = v49;
          if ( !v50 )
            --*(_DWORD *)(v99 + 12);
          *v48 = v12;
          v19 = 0;
          v48[1] = 0;
          v48[2] = 0;
          v48[3] = 0;
          goto LABEL_12;
        }
        v101 = v12;
        sub_1587800(v99, v14, (__int64)v48, v99, v12, v11);
        v87 = *(_DWORD *)(v99 + 16);
        if ( v87 )
        {
          v88 = v87 - 1;
          v12 = v101;
          v89 = 1;
          v90 = v88 & v15;
          v83 = nullptr;
          while ( 1 )
          {
            v48 = (__int64 *)(*(_QWORD *)v99 + 32LL * v90);
            v91 = *v48;
            if ( v101 == *v48 )
              break;
            if ( v91 == -4096 )
              goto LABEL_91;
            if ( v83 || v91 != -8192 )
              v48 = v83;
            v97 = v89 + v90;
            v83 = v48;
            ++v89;
            v90 = v88 & v97;
          }
LABEL_82:
          v49 = *(_DWORD *)(v99 + 8) + 1;
          goto LABEL_42;
        }
      }
      else
      {
LABEL_45:
        v102 = v12;
        v51 = (((((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v14 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v14 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v14 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v14 - 1) | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v14 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v14 - 1) >> 1);
        v52 = ((v51 >> 16) | v51) + 1;
        if ( (unsigned int)v52 < 0x40 )
          LODWORD(v52) = 64;
        *(_DWORD *)(v99 + 16) = v52;
        v53 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v52, 8, 64, v13, v12, v11);
        v12 = v102;
        *(_QWORD *)v99 = v53;
        if ( v100 )
        {
          v105 = 32 * v14;
          v103 = &v100[4 * v14];
          v54 = *(unsigned int *)(v99 + 16);
          *(_QWORD *)(v99 + 8) = 0;
          for ( i = &v53[4 * v54]; i != v53; v53 += 4 )
            *v53 = -4096;
          if ( v100 != v103 )
          {
            v106 = v8;
            v56 = v100;
            v107 = v12;
            v108 = v9;
            do
            {
              v57 = *v56;
              if ( *v56 != -4096 && v57 != -8192 )
              {
                v58 = *(_DWORD *)(v99 + 16);
                if ( !v58 )
                {
                  *(_QWORD *)&dword_0 = *v56;
                  BUG();
                }
                v59 = v58 - 1;
                v60 = v59 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
                v61 = (_QWORD *)(*(_QWORD *)v99 + 32LL * v60);
                v62 = *v61;
                if ( *v61 != v57 )
                {
                  v94 = 1;
                  v95 = nullptr;
                  if ( v62 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v62 == -8192 && !v95 )
                        v95 = v61;
                      v60 = v59 & (v94 + v60);
                      v61 = (_QWORD *)(*(_QWORD *)v99 + 32LL * v60);
                      v62 = *v61;
                      if ( v57 == *v61 )
                        break;
                      if ( v62 == -4096 )
                      {
                        if ( v95 )
                          v61 = v95;
                        break;
                      }
                      ++v94;
                    }
                  }
                }
                v63 = *v56;
                v61[1] = 0;
                v61[2] = 0;
                v61[3] = 0;
                *v61 = v63;
                v61[1] = v56[1];
                v64 = v56[2];
                v56[1] = 0;
                v65 = v61[2];
                v61[2] = v64;
                v66 = v56[3];
                v56[2] = v65;
                v67 = v61[3];
                v61[3] = v66;
                v68 = (_QWORD *)v56[1];
                v69 = (_QWORD *)v56[2];
                v56[3] = v67;
                ++*(_DWORD *)(v99 + 8);
                v70 = v68;
                if ( v69 != v68 )
                {
                  do
                  {
                    v71 = v70[1];
                    if ( v71 )
                    {
                      v72 = v70[2];
                      if ( v72 )
                      {
                        if ( v71 < v72 || v71 > v72 + 14848 )
                        {
                          v73 = *(_QWORD *)(v71 + 528);
                          v74 = v73 + ((unsigned __int64)*(unsigned int *)(v71 + 536) << 6);
                          while ( v73 != v74 )
                          {
                            while ( 1 )
                            {
                              v74 -= 64;
                              v75 = *(void **)(v74 + 24);
                              if ( v75 == (void *)(v74 + 40) )
                                break;
                              operator delete(v75);
                              if ( v73 == v74 )
                                goto LABEL_64;
                            }
                          }
LABEL_64:
                          v76 = *(void **)(v71 + 528);
                          if ( v76 != (void *)(v71 + 544) )
                            free(v76);
                          v77 = *(void **)(v71 + 416);
                          if ( v77 != (void *)(v71 + 432) )
                            free(v77);
                          v78 = (void **)(v71 + 384);
                          v79 = (void **)(v71 + 64);
                          do
                          {
                            while ( *v78 != v78 + 2 )
                            {
                              operator delete(*v78);
                              v78 -= 4;
                              if ( v79 == v78 )
                                goto LABEL_71;
                            }
                            v78 -= 4;
                          }
                          while ( v78 != v79 );
LABEL_71:
                          operator delete((void *)v71, 0x3A0u);
                        }
                        else
                        {
                          v86 = *(unsigned int *)(v72 + 14976);
                          *(_DWORD *)(v72 + 14976) = v86 + 1;
                          *(_QWORD *)(v72 + 8 * v86 + 14848) = v71;
                        }
                      }
                    }
                    v70 += 4;
                  }
                  while ( v69 != v70 );
                  v68 = (_QWORD *)v56[1];
                }
                if ( v68 )
                  operator delete(v68);
              }
              v56 += 4;
            }
            while ( v103 != v56 );
            v8 = v106;
            v12 = v107;
            LODWORD(v9) = v108;
          }
          v104 = v12;
          operator delete(v100, v105, 8);
          v12 = v104;
        }
        else
        {
          v92 = *(unsigned int *)(v99 + 16);
          *(_QWORD *)(v99 + 8) = 0;
          for ( j = &v53[4 * v92]; j != v53; v53 += 4 )
            *v53 = -4096;
        }
        v80 = *(_DWORD *)(v99 + 16);
        if ( v80 )
        {
          v81 = v80 - 1;
          v82 = 1;
          v83 = nullptr;
          for ( k = v81 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4)); ; k = v81 & v96 )
          {
            v48 = (__int64 *)(*(_QWORD *)v99 + 32LL * k);
            v85 = *v48;
            if ( v12 == *v48 )
              break;
            if ( v85 == -4096 )
            {
LABEL_91:
              v49 = *(_DWORD *)(v99 + 8) + 1;
              if ( v83 )
                v48 = v83;
              goto LABEL_42;
            }
            if ( v85 != -8192 || v83 )
              v48 = v83;
            v96 = v82 + k;
            v83 = v48;
            ++v82;
          }
          goto LABEL_82;
        }
      }
      ++*(_DWORD *)(v99 + 8);
      BUG();
    }
  }
  return v3;
}
