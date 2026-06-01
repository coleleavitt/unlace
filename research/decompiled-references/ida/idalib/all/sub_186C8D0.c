void __fastcall sub_186C8D0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  bool v7; // dl
  int v8; // eax
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned int *v14; // r12
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // esi
  __int64 v31; // r8
  unsigned int v32; // edx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r13
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rbx
  void *v66; // rdi
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rbp
  unsigned __int64 v75; // r15
  __int64 v76; // rbx
  void *v77; // rdi
  __int64 v78; // rdx
  int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rbx
  unsigned int *v88; // r15
  unsigned __int64 v89; // r12
  __int64 v90; // rbp
  void *v91; // rdi
  int v92; // r11d
  __int64 *v93; // r14
  int v94; // ecx
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rbp
  int v101; // r15d
  __int64 v102; // rbx
  void *v103; // rdi
  unsigned __int64 v104; // rax
  __int64 v105; // [rsp+8h] [rbp-130h]
  __int64 v106; // [rsp+10h] [rbp-128h]
  __int64 v108; // [rsp+28h] [rbp-110h]
  __int64 v109; // [rsp+30h] [rbp-108h]
  unsigned __int64 v110; // [rsp+30h] [rbp-108h]
  int v111; // [rsp+30h] [rbp-108h]
  __int64 v112; // [rsp+30h] [rbp-108h]
  unsigned __int64 v113; // [rsp+30h] [rbp-108h]
  unsigned __int64 v114; // [rsp+30h] [rbp-108h]
  unsigned __int64 v115; // [rsp+30h] [rbp-108h]
  unsigned __int64 v116; // [rsp+30h] [rbp-108h]
  __int64 v117; // [rsp+30h] [rbp-108h]
  unsigned __int64 v118; // [rsp+38h] [rbp-100h]
  int v119; // [rsp+38h] [rbp-100h]
  __int64 v120; // [rsp+38h] [rbp-100h]
  __int64 v121; // [rsp+38h] [rbp-100h]
  __int64 v122; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v123; // [rsp+40h] [rbp-F8h]
  __int64 v124; // [rsp+48h] [rbp-F0h]
  __int64 v125; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v126; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v127; // [rsp+64h] [rbp-D4h]
  int v128; // [rsp+6Ch] [rbp-CCh]
  _QWORD v129[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v131; // [rsp+90h] [rbp-A8h]
  __int64 v132; // [rsp+98h] [rbp-A0h]
  char v133; // [rsp+E8h] [rbp-50h]
  unsigned int v134; // [rsp+F0h] [rbp-48h]
  char v135; // [rsp+F4h] [rbp-44h]

  v7 = 0;
  if ( (**(_BYTE **)a2 & 7) != 1 )
  {
    a5 = *(unsigned int *)(a2 + 96);
    v7 = ((1LL << a5) & 0x781) != 0;
  }
  v8 = *(_DWORD *)(a2 + 136);
  if ( v8 )
  {
    v10 = 0;
    v106 = 16 * (9LL * (unsigned int)(v8 - 1) + 9);
    while ( 1 )
    {
      v11 = v10 + *(_QWORD *)(a2 + 128);
      if ( *(_DWORD *)v11 != 3 )
      {
        if ( *(_DWORD *)v11 != 6 )
          goto LABEL_7;
        goto LABEL_8;
      }
      if ( !v7 )
      {
        v12 = *(_DWORD *)(v11 + 72);
        if ( v12 )
          break;
      }
LABEL_7:
      v7 = 0;
LABEL_8:
      v10 += 144;
      if ( v106 == v10 )
        return;
    }
    v13 = 0;
    v108 = v10;
    v105 = 32 * ((unsigned int)(v12 - 1) + 1LL);
    while ( 1 )
    {
      v18 = v13 + *(_QWORD *)(v11 + 96);
      v19 = *(_QWORD *)(v18 + 16);
      v20 = *(_BYTE *)(v19 + 97);
      v125 = v19;
      if ( (v20 & 6) == 2 )
        break;
      if ( sub_B74740(v19) )
      {
        sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v125 + 24), 0x12B3u, 0);
        v21 = sub_B74740(v125);
        v22 = sub_EEC8C0(v21, a1 + 8, a3);
        v23 = HIDWORD(v22);
        if ( v133 )
        {
          v45 = v131;
          if ( v131 )
          {
            v46 = *(unsigned int *)(v131 + 424);
            v47 = *(unsigned int *)(v131 + 428);
            v48 = v46 + 1;
          }
          else
          {
            v80 = v132;
            v81 = *(_DWORD *)(v132 + 14976);
            if ( v81 )
            {
              v96 = (unsigned int)(v81 - 1);
              *(_DWORD *)(v132 + 14976) = v96;
              v45 = *(_QWORD *)(v80 + 8 * v96 + 14848);
              v97 = *(unsigned int *)(v45 + 536);
              *(_BYTE *)v45 = 0;
              v98 = *(_QWORD *)(v45 + 528);
              *(_DWORD *)(v45 + 424) = 0;
              v99 = v98 + (v97 << 6);
              if ( v98 == v99 )
              {
                v48 = 1;
                v46 = 0;
              }
              else
              {
                v116 = HIDWORD(v22);
                v23 = v11;
                v100 = v98;
                v121 = a1;
                v101 = v22;
                v22 = v13;
                v102 = v99;
                do
                {
                  while ( 1 )
                  {
                    v102 -= 64;
                    v103 = *(void **)(v102 + 24);
                    if ( v103 == (void *)(v102 + 40) )
                      break;
                    operator delete(v103);
                    if ( v100 == v102 )
                      goto LABEL_100;
                  }
                }
                while ( v100 != v102 );
LABEL_100:
                v46 = *(unsigned int *)(v45 + 424);
                v11 = v23;
                v13 = v22;
                LODWORD(v23) = v116;
                LODWORD(v22) = v101;
                a1 = v121;
                v48 = v46 + 1;
              }
              *(_DWORD *)(v45 + 536) = 0;
              v47 = *(unsigned int *)(v45 + 428);
            }
            else
            {
              v82 = operator new(0x3A0u);
              v47 = 8;
              v48 = 1;
              v45 = v82;
              *(_BYTE *)v82 = 0;
              *(_QWORD *)(v82 + 96) = v82 + 112;
              *(_QWORD *)(v82 + 128) = v82 + 144;
              *(_QWORD *)(v82 + 160) = v82 + 176;
              *(_QWORD *)(v82 + 192) = v82 + 208;
              *(_QWORD *)(v82 + 224) = v82 + 240;
              *(_QWORD *)(v82 + 256) = v82 + 272;
              *(_QWORD *)(v82 + 288) = v82 + 304;
              *(_QWORD *)(v82 + 320) = v82 + 336;
              *(_QWORD *)(v82 + 352) = v82 + 368;
              *(_QWORD *)(v82 + 384) = v82 + 400;
              *(_QWORD *)(v82 + 416) = v82 + 432;
              *(_QWORD *)(v82 + 104) = 0;
              *(_BYTE *)(v82 + 112) = 0;
              *(_QWORD *)(v82 + 136) = 0;
              *(_BYTE *)(v82 + 144) = 0;
              *(_QWORD *)(v82 + 168) = 0;
              *(_BYTE *)(v82 + 176) = 0;
              *(_QWORD *)(v82 + 200) = 0;
              *(_BYTE *)(v82 + 208) = 0;
              *(_QWORD *)(v82 + 232) = 0;
              *(_BYTE *)(v82 + 240) = 0;
              *(_QWORD *)(v82 + 264) = 0;
              *(_BYTE *)(v82 + 272) = 0;
              *(_QWORD *)(v82 + 296) = 0;
              *(_BYTE *)(v82 + 304) = 0;
              *(_QWORD *)(v82 + 328) = 0;
              *(_BYTE *)(v82 + 336) = 0;
              *(_QWORD *)(v82 + 360) = 0;
              *(_BYTE *)(v82 + 368) = 0;
              *(_QWORD *)(v82 + 392) = 0;
              *(_BYTE *)(v82 + 400) = 0;
              *(_QWORD *)(v82 + 424) = 0x800000000LL;
              *(_QWORD *)(v82 + 528) = v82 + 544;
              *(_QWORD *)(v82 + 536) = 0x600000000LL;
              v46 = 0;
            }
            v131 = v45;
          }
          v127 = __PAIR64__(v23, v22);
          LOBYTE(v128) = 1;
          if ( v48 > v47 )
          {
LABEL_53:
            sub_2237220(v45 + 416, v45 + 432, v48, 12);
            v46 = *(unsigned int *)(v45 + 424);
          }
LABEL_47:
          v49 = *(_QWORD *)(v45 + 416) + 12 * v46;
          *(_QWORD *)v49 = v127;
          *(_DWORD *)(v49 + 8) = v128;
          ++*(_DWORD *)(v45 + 424);
          goto LABEL_25;
        }
        if ( v135 )
        {
          v54 = sub_168B9E0(v129);
          v55 = v130;
          if ( v130 )
            v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v130 + 32LL))(v130);
          v126 = v55;
          v56 = sub_1587BC0(v54, &v126, v50, v51, v52, v53);
          v57 = *v56 + 32LL * v134;
          v45 = *(_QWORD *)(v57 + 8);
          if ( v45 )
          {
            v46 = *(unsigned int *)(v45 + 424);
            v58 = *(unsigned int *)(v45 + 428);
            v48 = v46 + 1;
          }
          else
          {
            v67 = *(_QWORD *)(v57 + 16);
            v68 = *(_DWORD *)(v67 + 14976);
            if ( v68 )
            {
              v69 = (unsigned int)(v68 - 1);
              *(_DWORD *)(v67 + 14976) = v69;
              v45 = *(_QWORD *)(v67 + 8 * v69 + 14848);
              v70 = *(unsigned int *)(v45 + 536);
              *(_BYTE *)v45 = 0;
              v71 = *(_QWORD *)(v45 + 528);
              *(_DWORD *)(v45 + 424) = 0;
              v72 = v71 + (v70 << 6);
              if ( v71 == v72 )
              {
                v48 = 1;
                v46 = 0;
              }
              else
              {
                v111 = v22;
                v22 = v45;
                v73 = v57;
                v119 = v23;
                v23 = v11;
                v74 = v71;
                v122 = a1;
                v75 = v13;
                v76 = v72;
                do
                {
                  while ( 1 )
                  {
                    v76 -= 64;
                    v77 = *(void **)(v76 + 24);
                    if ( v77 == (void *)(v76 + 40) )
                      break;
                    operator delete(v77);
                    if ( v74 == v76 )
                      goto LABEL_68;
                  }
                }
                while ( v74 != v76 );
LABEL_68:
                v57 = v73;
                v45 = v22;
                v11 = v23;
                v13 = v75;
                v46 = *(unsigned int *)(v22 + 424);
                LODWORD(v22) = v111;
                LODWORD(v23) = v119;
                a1 = v122;
                v48 = v46 + 1;
              }
              *(_DWORD *)(v45 + 536) = 0;
              v58 = *(unsigned int *)(v45 + 428);
            }
            else
            {
              v117 = v57;
              v104 = operator new(0x3A0u);
              v58 = 8;
              v48 = 1;
              v45 = v104;
              *(_BYTE *)v104 = 0;
              *(_QWORD *)(v104 + 96) = v104 + 112;
              *(_QWORD *)(v104 + 128) = v104 + 144;
              *(_QWORD *)(v104 + 160) = v104 + 176;
              *(_QWORD *)(v104 + 192) = v104 + 208;
              *(_QWORD *)(v104 + 224) = v104 + 240;
              *(_QWORD *)(v104 + 256) = v104 + 272;
              *(_QWORD *)(v104 + 288) = v104 + 304;
              *(_QWORD *)(v104 + 320) = v104 + 336;
              *(_QWORD *)(v104 + 352) = v104 + 368;
              *(_QWORD *)(v104 + 384) = v104 + 400;
              *(_QWORD *)(v104 + 416) = v104 + 432;
              *(_QWORD *)(v104 + 104) = 0;
              *(_BYTE *)(v104 + 112) = 0;
              *(_QWORD *)(v104 + 136) = 0;
              *(_BYTE *)(v104 + 144) = 0;
              *(_QWORD *)(v104 + 168) = 0;
              *(_BYTE *)(v104 + 176) = 0;
              *(_QWORD *)(v104 + 200) = 0;
              *(_BYTE *)(v104 + 208) = 0;
              *(_QWORD *)(v104 + 232) = 0;
              *(_BYTE *)(v104 + 240) = 0;
              *(_QWORD *)(v104 + 264) = 0;
              *(_BYTE *)(v104 + 272) = 0;
              *(_QWORD *)(v104 + 296) = 0;
              *(_BYTE *)(v104 + 304) = 0;
              *(_QWORD *)(v104 + 328) = 0;
              *(_BYTE *)(v104 + 336) = 0;
              *(_QWORD *)(v104 + 360) = 0;
              *(_BYTE *)(v104 + 368) = 0;
              *(_QWORD *)(v104 + 392) = 0;
              *(_BYTE *)(v104 + 400) = 0;
              *(_QWORD *)(v104 + 424) = 0x800000000LL;
              v57 = v117;
              *(_QWORD *)(v104 + 528) = v104 + 544;
              *(_QWORD *)(v104 + 536) = 0x600000000LL;
              v46 = 0;
            }
            *(_QWORD *)(v57 + 8) = v45;
          }
          v127 = __PAIR64__(v23, v22);
          LOBYTE(v128) = 1;
          if ( v48 > v58 )
            goto LABEL_53;
          goto LABEL_47;
        }
LABEL_25:
        v13 += 32LL;
        sub_15F7200(v129);
        sub_B74780(v125, 0);
        if ( v105 == v13 )
        {
LABEL_26:
          v10 = v108;
          goto LABEL_7;
        }
      }
      else
      {
LABEL_20:
        v13 += 32LL;
        if ( v105 == v13 )
          goto LABEL_26;
      }
    }
    v14 = *(unsigned int **)(v18 + 24);
    *(_QWORD *)(v18 + 24) = 0;
    v15 = v14[2];
    if ( v15 > 1 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 24 * v15 - 24);
      v17 = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
      goto LABEL_15;
    }
    v30 = *(_DWORD *)(a1 + 4208);
    if ( v30 )
    {
      a7 = v30 - 1;
      v31 = *(_QWORD *)(a1 + 4192);
      v32 = a7 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v33 = (__int64 *)(v31 + 16LL * v32);
      v34 = *v33;
      if ( v19 == *v33 )
      {
LABEL_35:
        v17 = *((_DWORD *)v33 + 2);
LABEL_36:
        v16 = v17;
LABEL_15:
        sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x12B3u, 0);
        if ( v133 )
        {
          v24 = v131;
          if ( v131 )
          {
            v25 = *(unsigned int *)(v131 + 424);
            v26 = *(unsigned int *)(v131 + 428);
            v27 = v25 + 1;
          }
          else
          {
            v59 = v132;
            v60 = *(_DWORD *)(v132 + 14976);
            if ( v60 )
            {
              v61 = (unsigned int)(v60 - 1);
              *(_DWORD *)(v132 + 14976) = v61;
              v24 = *(_QWORD *)(v59 + 8 * v61 + 14848);
              v62 = *(unsigned int *)(v24 + 536);
              *(_BYTE *)v24 = 0;
              v63 = *(_QWORD *)(v24 + 528);
              *(_DWORD *)(v24 + 424) = 0;
              v64 = v63 + (v62 << 6);
              if ( v63 == v64 )
              {
                v27 = 1;
                v25 = 0;
              }
              else
              {
                v118 = v13;
                v65 = v64;
                do
                {
                  while ( 1 )
                  {
                    v65 -= 64;
                    v66 = *(void **)(v65 + 24);
                    if ( v66 == (void *)(v65 + 40) )
                      break;
                    v110 = v24;
                    operator delete(v66);
                    v24 = v110;
                    if ( v63 == v65 )
                      goto LABEL_59;
                  }
                }
                while ( v63 != v65 );
LABEL_59:
                v25 = *(unsigned int *)(v24 + 424);
                v13 = v118;
                v27 = v25 + 1;
              }
              *(_DWORD *)(v24 + 536) = 0;
              v26 = *(unsigned int *)(v24 + 428);
            }
            else
            {
              v24 = operator new(0x3A0u);
              v25 = 0;
              *(_BYTE *)v24 = 0;
              *(_QWORD *)(v24 + 96) = v24 + 112;
              *(_QWORD *)(v24 + 128) = v24 + 144;
              *(_QWORD *)(v24 + 160) = v24 + 176;
              *(_QWORD *)(v24 + 192) = v24 + 208;
              *(_QWORD *)(v24 + 224) = v24 + 240;
              *(_QWORD *)(v24 + 256) = v24 + 272;
              *(_QWORD *)(v24 + 288) = v24 + 304;
              *(_QWORD *)(v24 + 320) = v24 + 336;
              *(_QWORD *)(v24 + 352) = v24 + 368;
              *(_QWORD *)(v24 + 384) = v24 + 400;
              *(_QWORD *)(v24 + 416) = v24 + 432;
              *(_QWORD *)(v24 + 104) = 0;
              *(_BYTE *)(v24 + 112) = 0;
              *(_QWORD *)(v24 + 136) = 0;
              *(_BYTE *)(v24 + 144) = 0;
              *(_QWORD *)(v24 + 168) = 0;
              *(_BYTE *)(v24 + 176) = 0;
              *(_QWORD *)(v24 + 200) = 0;
              *(_BYTE *)(v24 + 208) = 0;
              *(_QWORD *)(v24 + 232) = 0;
              *(_BYTE *)(v24 + 240) = 0;
              *(_QWORD *)(v24 + 264) = 0;
              *(_BYTE *)(v24 + 272) = 0;
              *(_QWORD *)(v24 + 296) = 0;
              *(_BYTE *)(v24 + 304) = 0;
              *(_QWORD *)(v24 + 328) = 0;
              *(_BYTE *)(v24 + 336) = 0;
              *(_QWORD *)(v24 + 360) = 0;
              *(_BYTE *)(v24 + 368) = 0;
              *(_QWORD *)(v24 + 392) = 0;
              *(_BYTE *)(v24 + 400) = 0;
              *(_QWORD *)(v24 + 424) = 0x800000000LL;
              *(_QWORD *)(v24 + 528) = v24 + 544;
              v27 = 1;
              *(_QWORD *)(v24 + 536) = 0x600000000LL;
              v26 = 8;
            }
            v131 = v24;
          }
          v127 = __PAIR64__(v16, v17);
          LOBYTE(v128) = 1;
          if ( v27 > v26 )
          {
            v113 = v24;
            sub_2237220(v24 + 416, v24 + 432, v27, 12);
            v24 = v113;
            v25 = *(unsigned int *)(v113 + 424);
          }
          v28 = 3 * v25;
        }
        else
        {
          if ( !v135 )
          {
LABEL_17:
            sub_15F7200(v129);
            if ( *(unsigned int **)v14 != v14 + 4 )
              free(*(void **)v14);
            operator delete(v14, 0x70u);
            goto LABEL_20;
          }
          v35 = sub_168B9E0(v129);
          v39 = v130;
          if ( v130 )
          {
            v109 = v35;
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v130 + 32LL))(v130);
            v35 = v109;
          }
          v126 = v39;
          v40 = sub_1587BC0(v35, &v126, v35, v36, v37, v38);
          v41 = *v40 + 32LL * v134;
          v24 = *(_QWORD *)(v41 + 8);
          if ( v24 )
          {
            v42 = *(unsigned int *)(v24 + 424);
            v43 = *(unsigned int *)(v24 + 428);
            v44 = v42 + 1;
          }
          else
          {
            v78 = *(_QWORD *)(v41 + 16);
            v79 = *(_DWORD *)(v78 + 14976);
            if ( v79 )
            {
              v83 = (unsigned int)(v79 - 1);
              *(_DWORD *)(v78 + 14976) = v83;
              v24 = *(_QWORD *)(v78 + 8 * v83 + 14848);
              v84 = *(unsigned int *)(v24 + 536);
              *(_BYTE *)v24 = 0;
              v85 = *(_QWORD *)(v24 + 528);
              *(_DWORD *)(v24 + 424) = 0;
              v86 = v85 + (v84 << 6);
              if ( v85 == v86 )
              {
                v44 = 1;
                v42 = 0;
              }
              else
              {
                v123 = v13;
                v87 = v86;
                v124 = a1;
                v88 = v14;
                v89 = v11;
                v90 = v85;
                do
                {
                  while ( 1 )
                  {
                    v87 -= 64;
                    v91 = *(void **)(v87 + 24);
                    if ( v91 == (void *)(v87 + 40) )
                      break;
                    v120 = v41;
                    v115 = v24;
                    operator delete(v91);
                    v24 = v115;
                    v41 = v120;
                    if ( v90 == v87 )
                      goto LABEL_83;
                  }
                }
                while ( v90 != v87 );
LABEL_83:
                v42 = *(unsigned int *)(v24 + 424);
                v11 = v89;
                v13 = v123;
                v14 = v88;
                a1 = v124;
                v44 = v42 + 1;
              }
              *(_DWORD *)(v24 + 536) = 0;
              v43 = *(unsigned int *)(v24 + 428);
            }
            else
            {
              v112 = v41;
              v24 = operator new(0x3A0u);
              v43 = 8;
              *(_BYTE *)v24 = 0;
              *(_QWORD *)(v24 + 96) = v24 + 112;
              *(_QWORD *)(v24 + 128) = v24 + 144;
              *(_QWORD *)(v24 + 160) = v24 + 176;
              *(_QWORD *)(v24 + 192) = v24 + 208;
              *(_QWORD *)(v24 + 224) = v24 + 240;
              *(_QWORD *)(v24 + 256) = v24 + 272;
              *(_QWORD *)(v24 + 288) = v24 + 304;
              *(_QWORD *)(v24 + 320) = v24 + 336;
              *(_QWORD *)(v24 + 352) = v24 + 368;
              *(_QWORD *)(v24 + 384) = v24 + 400;
              *(_QWORD *)(v24 + 416) = v24 + 432;
              *(_QWORD *)(v24 + 104) = 0;
              *(_BYTE *)(v24 + 112) = 0;
              *(_QWORD *)(v24 + 136) = 0;
              *(_BYTE *)(v24 + 144) = 0;
              *(_QWORD *)(v24 + 168) = 0;
              *(_BYTE *)(v24 + 176) = 0;
              *(_QWORD *)(v24 + 200) = 0;
              *(_BYTE *)(v24 + 208) = 0;
              *(_QWORD *)(v24 + 232) = 0;
              *(_BYTE *)(v24 + 240) = 0;
              *(_QWORD *)(v24 + 264) = 0;
              *(_BYTE *)(v24 + 272) = 0;
              *(_QWORD *)(v24 + 296) = 0;
              *(_BYTE *)(v24 + 304) = 0;
              *(_QWORD *)(v24 + 328) = 0;
              *(_BYTE *)(v24 + 336) = 0;
              *(_QWORD *)(v24 + 360) = 0;
              *(_BYTE *)(v24 + 368) = 0;
              *(_QWORD *)(v24 + 392) = 0;
              *(_BYTE *)(v24 + 400) = 0;
              *(_QWORD *)(v24 + 424) = 0x800000000LL;
              v41 = v112;
              *(_QWORD *)(v24 + 528) = v24 + 544;
              v44 = 1;
              *(_QWORD *)(v24 + 536) = 0x600000000LL;
              v42 = 0;
            }
            *(_QWORD *)(v41 + 8) = v24;
          }
          v127 = __PAIR64__(v16, v17);
          LOBYTE(v128) = 1;
          if ( v44 > v43 )
          {
            v114 = v24;
            sub_2237220(v24 + 416, v24 + 432, v44, 12);
            v24 = v114;
            v42 = *(unsigned int *)(v114 + 424);
          }
          v28 = 3 * v42;
        }
        v29 = *(_QWORD *)(v24 + 416) + 4 * v28;
        *(_QWORD *)v29 = v127;
        *(_DWORD *)(v29 + 8) = v128;
        ++*(_DWORD *)(v24 + 424);
        goto LABEL_17;
      }
      v92 = 1;
      v93 = nullptr;
      if ( v34 != -4096 )
      {
        while ( 1 )
        {
          if ( !v93 && v34 == -8192 )
            v93 = v33;
          v32 = a7 & (v92 + v32);
          v33 = (__int64 *)(v31 + 16LL * v32);
          v34 = *v33;
          if ( v19 == *v33 )
            goto LABEL_35;
          if ( v34 == -4096 )
          {
            if ( v93 )
              v33 = v93;
            break;
          }
          ++v92;
        }
      }
      v94 = *(_DWORD *)(a1 + 4200);
      v129[0] = v33;
      v18 = (unsigned int)(v94 + 1);
      a5 = 3 * v30;
      a6 = (unsigned int)(4 * v18);
      if ( (unsigned int)a6 < (unsigned int)a5 )
      {
        a5 = v30 - *(_DWORD *)(a1 + 4204) - (unsigned int)v18;
        a6 = v30 >> 3;
        if ( (unsigned int)a5 > (unsigned int)a6 )
        {
LABEL_90:
          v95 = *v33 == -4096;
          *(_DWORD *)(a1 + 4200) = v18;
          if ( !v95 )
            --*(_DWORD *)(a1 + 4204);
          *v33 = v19;
          v17 = 0;
          v19 = v125;
          *((_DWORD *)v33 + 2) = 0;
          goto LABEL_36;
        }
LABEL_95:
        sub_1847A80((__int64 *)(a1 + 4192), v30, v18, a5, a6, a7);
        sub_183FA40((__int64 *)(a1 + 4192), &v125, v129);
        v19 = v125;
        LODWORD(v18) = *(_DWORD *)(a1 + 4200) + 1;
        v33 = (__int64 *)v129[0];
        goto LABEL_90;
      }
    }
    else
    {
      v129[0] = 0;
    }
    v30 *= 2;
    goto LABEL_95;
  }
}
