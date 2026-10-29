unsigned __int64 __fastcall sub_1B23EA0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        double a7)
{
  unsigned __int64 *v8; // rbx
  __m128 *v9; // r13
  unsigned __int64 *v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // r15
  char v16; // dl
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // cf
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r11
  __int64 v50; // rdi
  unsigned int v51; // ecx
  unsigned __int64 *v52; // rsi
  unsigned __int64 v53; // r8
  _BYTE *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rbp
  _QWORD *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r13
  unsigned __int64 *v67; // r14
  __int64 v68; // rbx
  unsigned __int64 v69; // r12
  __int64 v70; // rbp
  void *v71; // rdi
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r14
  unsigned __int64 v80; // r12
  __int64 v81; // rbp
  void *v82; // rdi
  int v83; // esi
  int v84; // eax
  bool v85; // zf
  int v86; // r10d
  unsigned __int64 *v87; // r15
  unsigned __int64 v88; // [rsp+8h] [rbp-1B0h]
  __int64 v89; // [rsp+8h] [rbp-1B0h]
  __int64 v90; // [rsp+8h] [rbp-1B0h]
  __int64 v91; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 *v92; // [rsp+10h] [rbp-1A8h]
  __int64 v93; // [rsp+38h] [rbp-180h]
  __m128 *v94; // [rsp+38h] [rbp-180h]
  int v95; // [rsp+38h] [rbp-180h]
  unsigned __int64 *v99; // [rsp+58h] [rbp-160h]
  __int64 *v100; // [rsp+60h] [rbp-158h]
  unsigned __int64 *v101; // [rsp+60h] [rbp-158h]
  __int64 *v102; // [rsp+68h] [rbp-150h]
  unsigned int v103; // [rsp+74h] [rbp-144h] BYREF
  unsigned __int64 v104; // [rsp+78h] [rbp-140h] BYREF
  __int64 v105; // [rsp+80h] [rbp-138h] BYREF
  __int64 v106; // [rsp+88h] [rbp-130h] BYREF
  unsigned __int64 v107; // [rsp+90h] [rbp-128h] BYREF
  char v108; // [rsp+98h] [rbp-120h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-110h]
  _BYTE v111[64]; // [rsp+B0h] [rbp-108h] BYREF
  _QWORD v112[2]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+100h] [rbp-B8h]
  __int64 v114; // [rsp+110h] [rbp-A8h]
  __int64 v115; // [rsp+118h] [rbp-A0h]
  char v116; // [rsp+168h] [rbp-50h]
  unsigned int v117; // [rsp+170h] [rbp-48h]
  char v118; // [rsp+174h] [rbp-44h]

  v92 = &a2[a3];
  ptr = v111;
  v110 = 0x800000000LL;
  if ( a2 == v92 )
    return 0;
  v8 = a2;
  v9 = (__m128 *)v112;
  v10 = &v107;
  do
  {
    v13 = *v8;
    v103 = 0;
    v14 = *a1;
    v104 = v13;
    v106 = 0;
    v15 = sub_1B06DD0(v14, &v104, &v103, &v106, (__int64)&byte_22F0C30, 0, a7);
    if ( v16 )
    {
      v27 = (unsigned int)v110;
      v28 = (unsigned int)v110 + 1LL;
      if ( v28 > HIDWORD(v110) )
      {
        sub_2237220(&ptr, v111, v28, 8);
        v27 = (unsigned int)v110;
      }
      *((_QWORD *)ptr + v27) = v13;
      LODWORD(v110) = v110 + 1;
    }
    if ( v15 )
    {
      v17 = a1[1];
      v18 = *(unsigned int *)(v17 + 344);
      if ( (_DWORD)v18 )
      {
        v19 = *(_QWORD *)(v17 + 336) + 6776 * v18 - 6776;
        if ( *(_QWORD *)(v19 + 6768) == *(_QWORD *)(v17 + 328) )
        {
          v39 = *(unsigned int *)(v19 + 8);
          v40 = *(unsigned int *)(v17 + 27504);
          if ( (unsigned int)v39 > (unsigned int)v40 )
          {
            v42 = v39 == v40;
            v41 = v39 - v40;
            if ( !v42 && v41 != 1 )
            {
              v43 = *(_QWORD *)v19 + 1688 * (v41 - 2);
              if ( v43 )
              {
                if ( *(_DWORD *)(v43 + 976) != 103 )
                {
                  sub_1AFB290((__int64)v9, v17, v15, 1);
                  if ( *(_QWORD *)((char *)v112 + 4) == 0x100000055LL )
                  {
                    v89 = sub_1AE6050(a1[1]);
                    if ( v89 )
                    {
                      v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
                      v107 = v44;
                      v48 = *(unsigned int *)(v89 + 1296);
                      v49 = v89 + 1280;
                      if ( (_DWORD)v48 )
                      {
                        v47 = (unsigned int)(v48 - 1);
                        v50 = *(_QWORD *)(v89 + 1280);
                        v51 = v47 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
                        v52 = (unsigned __int64 *)(v50 + 8LL * v51);
                        v53 = *v52;
                        if ( v44 == *v52 )
                        {
LABEL_38:
                          sub_1AFEC60(v9, v52, (_QWORD *)(v50 + 8 * v48), v49, 1);
                          goto LABEL_5;
                        }
                        v86 = 1;
                        v87 = nullptr;
                        if ( v53 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v87 && v53 == -8192 )
                              v87 = v52;
                            v51 = v47 & (v86 + v51);
                            v52 = (unsigned __int64 *)(v50 + 8LL * v51);
                            v53 = *v52;
                            if ( v44 == *v52 )
                              goto LABEL_38;
                            if ( v53 == -4096 )
                            {
                              if ( v87 )
                                v52 = v87;
                              break;
                            }
                            ++v86;
                          }
                        }
                        v45 = (unsigned int)(3 * v48);
                        v112[0] = v52;
                        v84 = *(_DWORD *)(v89 + 1288) + 1;
                        v46 = (unsigned int)(4 * v84);
                        if ( (unsigned int)v46 < (unsigned int)v45 )
                        {
                          v46 = (unsigned int)v48 >> 3;
                          v45 = (unsigned int)(v48 - *(_DWORD *)(v89 + 1292) - v84);
                          if ( (unsigned int)v45 > (unsigned int)v46 )
                            goto LABEL_70;
                          v83 = v48;
LABEL_69:
                          sub_1B054E0(v89 + 1280, v83, v48, v45, v46, v47);
                          sub_1AF9300((__int64 *)(v89 + 1280), (__int64 *)v10, v9);
                          v49 = v89 + 1280;
                          v52 = (unsigned __int64 *)v112[0];
                          v50 = *(_QWORD *)(v89 + 1280);
                          v48 = *(unsigned int *)(v89 + 1296);
                          v84 = *(_DWORD *)(v89 + 1288) + 1;
LABEL_70:
                          v85 = *v52 == -4096;
                          *(_DWORD *)(v89 + 1288) = v84;
                          if ( !v85 )
                            --*(_DWORD *)(v89 + 1292);
                          *v52 = v107;
                          goto LABEL_38;
                        }
                      }
                      else
                      {
                        v112[0] = 0;
                      }
                      v83 = 2 * v48;
                      goto LABEL_69;
                    }
LABEL_5:
                    v11 = (unsigned int)v110;
                    v12 = (unsigned int)v110 + 1LL;
                    if ( v12 > HIDWORD(v110) )
                    {
                      sub_2237220(&ptr, v111, v12, 8);
                      v11 = (unsigned int)v110;
                    }
                    *((_QWORD *)ptr + v11) = v13;
                    LODWORD(v110) = v110 + 1;
                    goto LABEL_8;
                  }
                }
              }
            }
          }
        }
      }
      sub_168B9F0((__int64)v9, a1, v103, 0x1199u, 0);
      v20 = sub_EEC8C0(v13, (__int64)a1, a7);
      v88 = HIDWORD(v20);
      if ( v116 )
      {
        v21 = v114;
        if ( v114 )
        {
          v22 = *(unsigned int *)(v114 + 424);
          v23 = *(unsigned int *)(v114 + 428);
          v24 = v22 + 1;
        }
        else
        {
          v60 = v115;
          v61 = *(_DWORD *)(v115 + 14976);
          if ( v61 )
          {
            v62 = (unsigned int)(v61 - 1);
            *(_DWORD *)(v115 + 14976) = v62;
            v21 = *(_QWORD *)(v60 + 8 * v62 + 14848);
            v63 = *(unsigned int *)(v21 + 536);
            *(_BYTE *)v21 = 0;
            v64 = *(_QWORD *)(v21 + 528);
            *(_DWORD *)(v21 + 424) = 0;
            v65 = v64 + (v63 << 6);
            if ( v64 == v65 )
            {
              v24 = 1;
              v22 = 0;
            }
            else
            {
              v94 = v9;
              v66 = v21;
              v99 = v10;
              v67 = v8;
              v68 = v65;
              v100 = a1;
              v69 = v13;
              v70 = v64;
              do
              {
                while ( 1 )
                {
                  v68 -= 64;
                  v71 = *(void **)(v68 + 24);
                  if ( v71 == (void *)(v68 + 40) )
                    break;
                  operator delete(v71);
                  if ( v70 == v68 )
                    goto LABEL_49;
                }
              }
              while ( v70 != v68 );
LABEL_49:
              v21 = v66;
              v13 = v69;
              v8 = v67;
              v9 = v94;
              v22 = *(unsigned int *)(v21 + 424);
              v10 = v99;
              a1 = v100;
              v24 = v22 + 1;
            }
            *(_DWORD *)(v21 + 536) = 0;
            v23 = *(unsigned int *)(v21 + 428);
          }
          else
          {
            v21 = operator new(0x3A0u);
            v23 = 8;
            v22 = 0;
            *(_BYTE *)v21 = 0;
            *(_QWORD *)(v21 + 96) = v21 + 112;
            *(_QWORD *)(v21 + 128) = v21 + 144;
            *(_QWORD *)(v21 + 160) = v21 + 176;
            *(_QWORD *)(v21 + 192) = v21 + 208;
            *(_QWORD *)(v21 + 224) = v21 + 240;
            *(_QWORD *)(v21 + 256) = v21 + 272;
            *(_QWORD *)(v21 + 288) = v21 + 304;
            *(_QWORD *)(v21 + 320) = v21 + 336;
            *(_QWORD *)(v21 + 352) = v21 + 368;
            *(_QWORD *)(v21 + 384) = v21 + 400;
            *(_QWORD *)(v21 + 416) = v21 + 432;
            *(_QWORD *)(v21 + 104) = 0;
            *(_BYTE *)(v21 + 112) = 0;
            *(_QWORD *)(v21 + 136) = 0;
            *(_BYTE *)(v21 + 144) = 0;
            *(_QWORD *)(v21 + 168) = 0;
            *(_BYTE *)(v21 + 176) = 0;
            *(_QWORD *)(v21 + 200) = 0;
            *(_BYTE *)(v21 + 208) = 0;
            *(_QWORD *)(v21 + 232) = 0;
            *(_BYTE *)(v21 + 240) = 0;
            *(_QWORD *)(v21 + 264) = 0;
            *(_BYTE *)(v21 + 272) = 0;
            *(_QWORD *)(v21 + 296) = 0;
            *(_BYTE *)(v21 + 304) = 0;
            *(_QWORD *)(v21 + 328) = 0;
            *(_BYTE *)(v21 + 336) = 0;
            *(_QWORD *)(v21 + 360) = 0;
            *(_BYTE *)(v21 + 368) = 0;
            *(_QWORD *)(v21 + 392) = 0;
            *(_BYTE *)(v21 + 400) = 0;
            *(_QWORD *)(v21 + 528) = v21 + 544;
            v24 = 1;
            *(_QWORD *)(v21 + 424) = 0x800000000LL;
            *(_QWORD *)(v21 + 536) = 0x600000000LL;
          }
          v114 = v21;
        }
        v107 = v20;
        v108 = 1;
        if ( v24 > v23 )
        {
          v90 = v21;
          sub_2237220(v21 + 416, v21 + 432, v24, 12);
          v21 = v90;
          v22 = *(unsigned int *)(v90 + 424);
        }
        v25 = 3 * v22;
      }
      else
      {
        if ( !v118 )
        {
LABEL_4:
          sub_15F7200(v9);
          goto LABEL_5;
        }
        v29 = sub_168B9E0(v9);
        v33 = v113;
        if ( v113 )
        {
          v93 = v29;
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
          v29 = v93;
        }
        v105 = v33;
        v34 = sub_1587BC0(v29, &v105, v29, v30, v31, v32);
        v35 = *v34 + 32LL * v117;
        v21 = *(_QWORD *)(v35 + 8);
        if ( v21 )
        {
          v36 = *(unsigned int *)(v21 + 424);
          v37 = *(unsigned int *)(v21 + 428);
          v38 = v36 + 1;
        }
        else
        {
          v72 = *(_QWORD *)(v35 + 16);
          v73 = *(_DWORD *)(v72 + 14976);
          if ( v73 )
          {
            v74 = (unsigned int)(v73 - 1);
            *(_DWORD *)(v72 + 14976) = v74;
            v21 = *(_QWORD *)(v72 + 8 * v74 + 14848);
            v75 = *(unsigned int *)(v21 + 536);
            *(_BYTE *)v21 = 0;
            v76 = *(_QWORD *)(v21 + 528);
            *(_DWORD *)(v21 + 424) = 0;
            v77 = v76 + (v75 << 6);
            if ( v76 == v77 )
            {
              v38 = 1;
              v36 = 0;
            }
            else
            {
              v95 = v20;
              v20 = (unsigned __int64)v8;
              v78 = v77;
              v101 = v10;
              v79 = v21;
              v102 = a1;
              v80 = v13;
              v81 = v76;
              do
              {
                while ( 1 )
                {
                  v78 -= 64;
                  v82 = *(void **)(v78 + 24);
                  if ( v82 == (void *)(v78 + 40) )
                    break;
                  operator delete(v82);
                  if ( v81 == v78 )
                    goto LABEL_56;
                }
              }
              while ( v81 != v78 );
LABEL_56:
              v21 = v79;
              v13 = v80;
              v8 = (unsigned __int64 *)v20;
              v36 = *(unsigned int *)(v79 + 424);
              LODWORD(v20) = v95;
              v10 = v101;
              a1 = v102;
              v38 = v36 + 1;
            }
            *(_DWORD *)(v21 + 536) = 0;
            v37 = *(unsigned int *)(v21 + 428);
          }
          else
          {
            v21 = operator new(0x3A0u);
            v37 = 8;
            *(_BYTE *)v21 = 0;
            *(_QWORD *)(v21 + 96) = v21 + 112;
            *(_QWORD *)(v21 + 128) = v21 + 144;
            *(_QWORD *)(v21 + 160) = v21 + 176;
            *(_QWORD *)(v21 + 192) = v21 + 208;
            *(_QWORD *)(v21 + 224) = v21 + 240;
            *(_QWORD *)(v21 + 256) = v21 + 272;
            *(_QWORD *)(v21 + 288) = v21 + 304;
            *(_QWORD *)(v21 + 320) = v21 + 336;
            *(_QWORD *)(v21 + 352) = v21 + 368;
            *(_QWORD *)(v21 + 384) = v21 + 400;
            *(_QWORD *)(v21 + 416) = v21 + 432;
            *(_QWORD *)(v21 + 104) = 0;
            *(_BYTE *)(v21 + 112) = 0;
            *(_QWORD *)(v21 + 136) = 0;
            *(_BYTE *)(v21 + 144) = 0;
            *(_QWORD *)(v21 + 168) = 0;
            *(_BYTE *)(v21 + 176) = 0;
            *(_QWORD *)(v21 + 200) = 0;
            *(_BYTE *)(v21 + 208) = 0;
            *(_QWORD *)(v21 + 232) = 0;
            *(_BYTE *)(v21 + 240) = 0;
            *(_QWORD *)(v21 + 264) = 0;
            *(_BYTE *)(v21 + 272) = 0;
            *(_QWORD *)(v21 + 296) = 0;
            *(_BYTE *)(v21 + 304) = 0;
            *(_QWORD *)(v21 + 328) = 0;
            *(_BYTE *)(v21 + 336) = 0;
            *(_QWORD *)(v21 + 360) = 0;
            *(_BYTE *)(v21 + 368) = 0;
            *(_QWORD *)(v21 + 392) = 0;
            *(_BYTE *)(v21 + 400) = 0;
            *(_QWORD *)(v21 + 528) = v21 + 544;
            v38 = 1;
            *(_QWORD *)(v21 + 424) = 0x800000000LL;
            *(_QWORD *)(v21 + 536) = 0x600000000LL;
            v36 = 0;
          }
          *(_QWORD *)(v35 + 8) = v21;
        }
        v107 = __PAIR64__(v88, v20);
        v108 = 1;
        if ( v38 > v37 )
        {
          v91 = v21;
          sub_2237220(v21 + 416, v21 + 432, v38, 12);
          v21 = v91;
          v36 = *(unsigned int *)(v91 + 424);
        }
        v25 = 3 * v36;
      }
      v26 = *(_QWORD *)(v21 + 416) + 4 * v25;
      *(_QWORD *)v26 = *v10;
      *(_DWORD *)(v26 + 8) = *((_DWORD *)v10 + 2);
      ++*(_DWORD *)(v21 + 424);
      goto LABEL_4;
    }
LABEL_8:
    ++v8;
  }
  while ( v92 != v8 );
  v54 = ptr;
  v55 = 0;
  if ( (_DWORD)v110 )
  {
    v56 = (unsigned int)v110;
    v57 = (_QWORD *)sub_168B6C0((__int64)a1);
    v58 = sub_EC0800(v57, a4, a5, a6, (__int64)v54, v56);
    v54 = ptr;
    v55 = v58;
  }
  if ( v54 != v111 )
    free(v54);
  return v55;
}
