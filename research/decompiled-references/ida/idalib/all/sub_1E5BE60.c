__int64 __fastcall sub_1E5BE60(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        __int16 a5,
        unsigned int a6,
        __m128i a7,
        _DWORD *a8,
        int a9)
{
  int v11; // r14d
  unsigned __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  _DWORD *v19; // r14
  __int64 v20; // r12
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  unsigned int v26; // r13d
  unsigned __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // r12
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  char v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // r12
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r14
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // r15
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // r15
  __int64 v92; // r14
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r14
  __int64 v96; // r15
  __int64 v97; // r14
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r15
  __int64 v101; // rdx
  __int64 v102; // r15
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r15
  __int64 v106; // rdx
  __int64 v107; // r15
  void *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  void *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r15
  __int64 v116; // rdx
  __int64 v117; // r15
  void *v118; // rdi
  __int64 v120; // [rsp+8h] [rbp-110h]
  __int64 v121; // [rsp+8h] [rbp-110h]
  __int64 v122; // [rsp+8h] [rbp-110h]
  __int64 v123; // [rsp+8h] [rbp-110h]
  __int64 v125; // [rsp+10h] [rbp-108h]
  __int64 v126; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v127; // [rsp+30h] [rbp-E8h]
  __int64 v128; // [rsp+38h] [rbp-E0h]
  __int64 v129; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v131; // [rsp+58h] [rbp-C0h]
  _QWORD v132[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v133; // [rsp+70h] [rbp-A8h]
  __int64 v134; // [rsp+78h] [rbp-A0h]
  char v135; // [rsp+C8h] [rbp-50h]
  unsigned int v136; // [rsp+D0h] [rbp-48h]
  char v137; // [rsp+D4h] [rbp-44h]

  sub_1E59FE0(a1, (__int64)a4, *(double *)a7.m128i_i64);
  sub_1E59FE0(a1, (__int64)a8, *(double *)a7.m128i_i64);
  if ( !a4 || !a8 )
  {
    if ( a4 && a8 )
      goto LABEL_4;
    v19 = a4;
    if ( !a4 )
      v19 = a8;
    if ( (*v19 & 0x4000) != 0 )
      goto LABEL_4;
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a6, 0x12ACu, 0);
    v20 = sub_EEC8C0((unsigned __int64)v19, a1 + 8, *(double *)a7.m128i_i64);
    if ( v135 )
    {
      v36 = v133;
      if ( !v133 )
      {
        v83 = v134;
        v84 = *(_DWORD *)(v134 + 14976);
        if ( v84 )
        {
          v89 = (unsigned int)(v84 - 1);
          *(_DWORD *)(v134 + 14976) = v89;
          v36 = *(_QWORD *)(v83 + 8 * v89 + 14848);
          v90 = *(unsigned int *)(v36 + 536);
          *(_BYTE *)v36 = 0;
          v91 = *(_QWORD *)(v36 + 528);
          *(_DWORD *)(v36 + 424) = 0;
          v92 = v91 + (v90 << 6);
          while ( v91 != v92 )
          {
            while ( 1 )
            {
              v92 -= 64;
              v93 = *(void **)(v92 + 24);
              if ( v93 == (void *)(v92 + 40) )
                break;
              operator delete(v93);
              if ( v91 == v92 )
                goto LABEL_73;
            }
          }
LABEL_73:
          v37 = *(unsigned int *)(v36 + 424);
          v40 = *(unsigned int *)(v36 + 428);
          *(_DWORD *)(v36 + 536) = 0;
          v39 = v37 + 1;
        }
        else
        {
          v85 = operator new(0x3A0u);
          v40 = 8;
          v39 = 1;
          v36 = v85;
          *(_BYTE *)v85 = 0;
          *(_QWORD *)(v85 + 96) = v85 + 112;
          *(_QWORD *)(v85 + 128) = v85 + 144;
          *(_QWORD *)(v85 + 160) = v85 + 176;
          *(_QWORD *)(v85 + 192) = v85 + 208;
          *(_QWORD *)(v85 + 224) = v85 + 240;
          *(_QWORD *)(v85 + 256) = v85 + 272;
          *(_QWORD *)(v85 + 288) = v85 + 304;
          *(_QWORD *)(v85 + 320) = v85 + 336;
          *(_QWORD *)(v85 + 352) = v85 + 368;
          *(_QWORD *)(v85 + 384) = v85 + 400;
          *(_QWORD *)(v85 + 416) = v85 + 432;
          *(_QWORD *)(v85 + 104) = 0;
          *(_BYTE *)(v85 + 112) = 0;
          *(_QWORD *)(v85 + 136) = 0;
          *(_BYTE *)(v85 + 144) = 0;
          *(_QWORD *)(v85 + 168) = 0;
          *(_BYTE *)(v85 + 176) = 0;
          *(_QWORD *)(v85 + 200) = 0;
          *(_BYTE *)(v85 + 208) = 0;
          *(_QWORD *)(v85 + 232) = 0;
          *(_BYTE *)(v85 + 240) = 0;
          *(_QWORD *)(v85 + 264) = 0;
          *(_BYTE *)(v85 + 272) = 0;
          *(_QWORD *)(v85 + 296) = 0;
          *(_BYTE *)(v85 + 304) = 0;
          *(_QWORD *)(v85 + 328) = 0;
          *(_BYTE *)(v85 + 336) = 0;
          *(_QWORD *)(v85 + 360) = 0;
          *(_BYTE *)(v85 + 368) = 0;
          *(_QWORD *)(v85 + 392) = 0;
          *(_BYTE *)(v85 + 400) = 0;
          *(_QWORD *)(v85 + 424) = 0x800000000LL;
          *(_QWORD *)(v85 + 528) = v85 + 544;
          *(_QWORD *)(v85 + 536) = 0x600000000LL;
          v37 = 0;
        }
        v133 = v36;
LABEL_33:
        v127 = v20;
        LOBYTE(v128) = 1;
        if ( v39 <= v40 )
          goto LABEL_34;
        goto LABEL_30;
      }
    }
    else
    {
      if ( !v137 )
        goto LABEL_15;
      v63 = sub_168B9E0(&ptr);
      v66 = v132[0];
      if ( v132[0] )
        v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v132[0] + 32LL))(v132[0]);
      v126 = v66;
      v67 = sub_1587BC0(v63, &v126, v61, v62, v64, v65);
      v68 = *v67 + 32LL * v136;
      v36 = *(_QWORD *)(v68 + 8);
      if ( !v36 )
      {
        v69 = *(_QWORD *)(v68 + 16);
        v70 = *(_DWORD *)(v69 + 14976);
        if ( v70 )
        {
          v104 = (unsigned int)(v70 - 1);
          *(_DWORD *)(v69 + 14976) = v104;
          v36 = *(_QWORD *)(v69 + 8 * v104 + 14848);
          v105 = *(unsigned int *)(v36 + 536);
          *(_BYTE *)v36 = 0;
          v106 = *(_QWORD *)(v36 + 528);
          *(_DWORD *)(v36 + 424) = 0;
          v107 = v106 + (v105 << 6);
          while ( v106 != v107 )
          {
            while ( 1 )
            {
              v107 -= 64;
              v108 = *(void **)(v107 + 24);
              if ( v108 == (void *)(v107 + 40) )
                break;
              v121 = v106;
              operator delete(v108);
              v106 = v121;
              if ( v121 == v107 )
                goto LABEL_88;
            }
          }
LABEL_88:
          v37 = *(unsigned int *)(v36 + 424);
          v40 = *(unsigned int *)(v36 + 428);
          *(_DWORD *)(v36 + 536) = 0;
          v39 = v37 + 1;
        }
        else
        {
          v71 = operator new(0x3A0u);
          v40 = 8;
          v39 = 1;
          v36 = v71;
          *(_BYTE *)v71 = 0;
          *(_QWORD *)(v71 + 96) = v71 + 112;
          *(_QWORD *)(v71 + 128) = v71 + 144;
          *(_QWORD *)(v71 + 160) = v71 + 176;
          *(_QWORD *)(v71 + 192) = v71 + 208;
          *(_QWORD *)(v71 + 224) = v71 + 240;
          *(_QWORD *)(v71 + 256) = v71 + 272;
          *(_QWORD *)(v71 + 288) = v71 + 304;
          *(_QWORD *)(v71 + 320) = v71 + 336;
          *(_QWORD *)(v71 + 352) = v71 + 368;
          *(_QWORD *)(v71 + 384) = v71 + 400;
          *(_QWORD *)(v71 + 416) = v71 + 432;
          *(_QWORD *)(v71 + 104) = 0;
          *(_BYTE *)(v71 + 112) = 0;
          *(_QWORD *)(v71 + 136) = 0;
          *(_BYTE *)(v71 + 144) = 0;
          *(_QWORD *)(v71 + 168) = 0;
          *(_BYTE *)(v71 + 176) = 0;
          *(_QWORD *)(v71 + 200) = 0;
          *(_BYTE *)(v71 + 208) = 0;
          *(_QWORD *)(v71 + 232) = 0;
          *(_BYTE *)(v71 + 240) = 0;
          *(_QWORD *)(v71 + 264) = 0;
          *(_BYTE *)(v71 + 272) = 0;
          *(_QWORD *)(v71 + 296) = 0;
          *(_BYTE *)(v71 + 304) = 0;
          *(_QWORD *)(v71 + 328) = 0;
          *(_BYTE *)(v71 + 336) = 0;
          *(_QWORD *)(v71 + 360) = 0;
          *(_BYTE *)(v71 + 368) = 0;
          *(_QWORD *)(v71 + 392) = 0;
          *(_BYTE *)(v71 + 400) = 0;
          *(_QWORD *)(v71 + 424) = 0x800000000LL;
          *(_QWORD *)(v71 + 528) = v71 + 544;
          *(_QWORD *)(v71 + 536) = 0x600000000LL;
          v37 = 0;
        }
        *(_QWORD *)(v68 + 8) = v36;
        goto LABEL_33;
      }
    }
    v37 = *(unsigned int *)(v36 + 424);
    v40 = *(unsigned int *)(v36 + 428);
    v39 = v37 + 1;
    goto LABEL_33;
  }
  if ( ((*a4 & 0x4000) != 0) == ((*a8 & 0x4000) != 0) )
  {
    v23 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a6, (*a4 & 0x4000) == 0 ? 4780 : 3832, 0);
    v24 = sub_EEC8C0((unsigned __int64)a4, a1 + 8, *(double *)a7.m128i_i64);
    if ( v135 )
    {
      v42 = v133;
      if ( !v133 )
      {
        v58 = v134;
        v59 = *(_DWORD *)(v134 + 14976);
        if ( v59 )
        {
          v99 = (unsigned int)(v59 - 1);
          *(_DWORD *)(v134 + 14976) = v99;
          v42 = *(_QWORD *)(v58 + 8 * v99 + 14848);
          v100 = *(unsigned int *)(v42 + 536);
          *(_BYTE *)v42 = 0;
          v101 = *(_QWORD *)(v42 + 528);
          *(_DWORD *)(v42 + 424) = 0;
          v102 = v101 + (v100 << 6);
          while ( v101 != v102 )
          {
            while ( 1 )
            {
              v102 -= 64;
              v103 = *(void **)(v102 + 24);
              if ( v103 == (void *)(v102 + 40) )
                break;
              v120 = v101;
              operator delete(v103);
              v101 = v120;
              if ( v120 == v102 )
                goto LABEL_83;
            }
          }
LABEL_83:
          v43 = *(unsigned int *)(v42 + 424);
          v44 = *(unsigned int *)(v42 + 428);
          *(_DWORD *)(v42 + 536) = 0;
          v45 = v43 + 1;
        }
        else
        {
          v60 = operator new(0x3A0u);
          v44 = 8;
          v45 = 1;
          v42 = v60;
          *(_BYTE *)v60 = 0;
          *(_QWORD *)(v60 + 96) = v60 + 112;
          *(_QWORD *)(v60 + 128) = v60 + 144;
          *(_QWORD *)(v60 + 160) = v60 + 176;
          *(_QWORD *)(v60 + 192) = v60 + 208;
          *(_QWORD *)(v60 + 224) = v60 + 240;
          *(_QWORD *)(v60 + 256) = v60 + 272;
          *(_QWORD *)(v60 + 288) = v60 + 304;
          *(_QWORD *)(v60 + 320) = v60 + 336;
          *(_QWORD *)(v60 + 352) = v60 + 368;
          *(_QWORD *)(v60 + 384) = v60 + 400;
          *(_QWORD *)(v60 + 416) = v60 + 432;
          *(_QWORD *)(v60 + 104) = 0;
          *(_BYTE *)(v60 + 112) = 0;
          *(_QWORD *)(v60 + 136) = 0;
          *(_BYTE *)(v60 + 144) = 0;
          *(_QWORD *)(v60 + 168) = 0;
          *(_BYTE *)(v60 + 176) = 0;
          *(_QWORD *)(v60 + 200) = 0;
          *(_BYTE *)(v60 + 208) = 0;
          *(_QWORD *)(v60 + 232) = 0;
          *(_BYTE *)(v60 + 240) = 0;
          *(_QWORD *)(v60 + 264) = 0;
          *(_BYTE *)(v60 + 272) = 0;
          *(_QWORD *)(v60 + 296) = 0;
          *(_BYTE *)(v60 + 304) = 0;
          *(_QWORD *)(v60 + 328) = 0;
          *(_BYTE *)(v60 + 336) = 0;
          *(_QWORD *)(v60 + 360) = 0;
          *(_BYTE *)(v60 + 368) = 0;
          *(_QWORD *)(v60 + 392) = 0;
          *(_BYTE *)(v60 + 400) = 0;
          *(_QWORD *)(v60 + 424) = 0x800000000LL;
          *(_QWORD *)(v60 + 528) = v60 + 544;
          *(_QWORD *)(v60 + 536) = 0x600000000LL;
          v43 = 0;
        }
        v133 = v42;
LABEL_37:
        v127 = v24;
        LOBYTE(v128) = 1;
        if ( v45 > v44 )
        {
          v23 = (__int64 *)(v42 + 432);
          sub_2237220(v42 + 416, v42 + 432, v45, 12);
          v43 = *(unsigned int *)(v42 + 424);
        }
        v46 = *(_QWORD *)(v42 + 416) + 12 * v43;
        *(_QWORD *)v46 = v127;
        *(_DWORD *)(v46 + 8) = v128;
        v47 = v135;
        ++*(_DWORD *)(v42 + 424);
        v48 = sub_EEC8C0((unsigned __int64)a8, (__int64)v23, *(double *)a7.m128i_i64);
        v26 = v48;
        v49 = HIDWORD(v48);
        LODWORD(v27) = HIDWORD(v48);
        if ( v47 )
        {
          v50 = v133;
          if ( v133 )
          {
            v51 = *(unsigned int *)(v133 + 424);
            v52 = *(unsigned int *)(v133 + 428);
            v53 = v51 + 1;
          }
          else
          {
            v55 = v134;
            v56 = *(_DWORD *)(v134 + 14976);
            if ( v56 )
            {
              v94 = (unsigned int)(v56 - 1);
              *(_DWORD *)(v134 + 14976) = v94;
              v50 = *(_QWORD *)(v55 + 8 * v94 + 14848);
              v95 = *(unsigned int *)(v50 + 536);
              v96 = *(_QWORD *)(v50 + 528);
              *(_BYTE *)v50 = 0;
              *(_DWORD *)(v50 + 424) = 0;
              v97 = v96 + (v95 << 6);
              while ( v96 != v97 )
              {
                while ( 1 )
                {
                  v97 -= 64;
                  v98 = *(void **)(v97 + 24);
                  if ( v98 == (void *)(v97 + 40) )
                    break;
                  operator delete(v98);
                  if ( v96 == v97 )
                    goto LABEL_78;
                }
              }
LABEL_78:
              v51 = *(unsigned int *)(v50 + 424);
              v52 = *(unsigned int *)(v50 + 428);
              *(_DWORD *)(v50 + 536) = 0;
              v53 = v51 + 1;
            }
            else
            {
              v57 = operator new(0x3A0u);
              v52 = 8;
              v53 = 1;
              v50 = v57;
              *(_BYTE *)v57 = 0;
              *(_QWORD *)(v57 + 96) = v57 + 112;
              *(_QWORD *)(v57 + 128) = v57 + 144;
              *(_QWORD *)(v57 + 160) = v57 + 176;
              *(_QWORD *)(v57 + 192) = v57 + 208;
              *(_QWORD *)(v57 + 224) = v57 + 240;
              *(_QWORD *)(v57 + 256) = v57 + 272;
              *(_QWORD *)(v57 + 288) = v57 + 304;
              *(_QWORD *)(v57 + 320) = v57 + 336;
              *(_QWORD *)(v57 + 352) = v57 + 368;
              *(_QWORD *)(v57 + 384) = v57 + 400;
              *(_QWORD *)(v57 + 416) = v57 + 432;
              *(_QWORD *)(v57 + 104) = 0;
              *(_BYTE *)(v57 + 112) = 0;
              *(_QWORD *)(v57 + 136) = 0;
              *(_BYTE *)(v57 + 144) = 0;
              *(_QWORD *)(v57 + 168) = 0;
              *(_BYTE *)(v57 + 176) = 0;
              *(_QWORD *)(v57 + 200) = 0;
              *(_BYTE *)(v57 + 208) = 0;
              *(_QWORD *)(v57 + 232) = 0;
              *(_BYTE *)(v57 + 240) = 0;
              *(_QWORD *)(v57 + 264) = 0;
              *(_BYTE *)(v57 + 272) = 0;
              *(_QWORD *)(v57 + 296) = 0;
              *(_BYTE *)(v57 + 304) = 0;
              *(_QWORD *)(v57 + 328) = 0;
              *(_BYTE *)(v57 + 336) = 0;
              *(_QWORD *)(v57 + 360) = 0;
              *(_BYTE *)(v57 + 368) = 0;
              *(_QWORD *)(v57 + 392) = 0;
              *(_BYTE *)(v57 + 400) = 0;
              *(_QWORD *)(v57 + 424) = 0x800000000LL;
              *(_QWORD *)(v57 + 528) = v57 + 544;
              *(_QWORD *)(v57 + 536) = 0x600000000LL;
              v51 = 0;
            }
            v133 = v50;
          }
          v127 = __PAIR64__(v49, v26);
          LOBYTE(v128) = 1;
          if ( v53 > v52 )
          {
            sub_2237220(v50 + 416, v50 + 432, v53, 12);
            v51 = *(unsigned int *)(v50 + 424);
          }
          v54 = *(_QWORD *)(v50 + 416) + 12 * v51;
          *(_QWORD *)v54 = v127;
          *(_DWORD *)(v54 + 8) = v128;
          ++*(_DWORD *)(v50 + 424);
          goto LABEL_15;
        }
LABEL_24:
        if ( v137 )
        {
          v30 = sub_168B9E0(&ptr);
          v33 = v132[0];
          if ( v132[0] )
            v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v132[0] + 32LL))(v132[0]);
          v126 = v33;
          v34 = sub_1587BC0(v30, &v126, v28, v29, v31, v32);
          v35 = *v34 + 32LL * v136;
          v36 = *(_QWORD *)(v35 + 8);
          if ( v36 )
          {
            v37 = *(unsigned int *)(v36 + 424);
            v38 = *(unsigned int *)(v36 + 428);
            v39 = v37 + 1;
          }
          else
          {
            v86 = *(_QWORD *)(v35 + 16);
            v87 = *(_DWORD *)(v86 + 14976);
            if ( v87 )
            {
              v114 = (unsigned int)(v87 - 1);
              *(_DWORD *)(v86 + 14976) = v114;
              v36 = *(_QWORD *)(v86 + 8 * v114 + 14848);
              v115 = *(unsigned int *)(v36 + 536);
              *(_BYTE *)v36 = 0;
              v116 = *(_QWORD *)(v36 + 528);
              *(_DWORD *)(v36 + 424) = 0;
              v117 = v116 + (v115 << 6);
              while ( v116 != v117 )
              {
                while ( 1 )
                {
                  v117 -= 64;
                  v118 = *(void **)(v117 + 24);
                  if ( v118 == (void *)(v117 + 40) )
                    break;
                  v123 = v116;
                  operator delete(v118);
                  v116 = v123;
                  if ( v123 == v117 )
                    goto LABEL_98;
                }
              }
LABEL_98:
              v37 = *(unsigned int *)(v36 + 424);
              v38 = *(unsigned int *)(v36 + 428);
              *(_DWORD *)(v36 + 536) = 0;
              v39 = v37 + 1;
            }
            else
            {
              v88 = operator new(0x3A0u);
              v38 = 8;
              v39 = 1;
              v36 = v88;
              *(_BYTE *)v88 = 0;
              *(_QWORD *)(v88 + 96) = v88 + 112;
              *(_QWORD *)(v88 + 128) = v88 + 144;
              *(_QWORD *)(v88 + 160) = v88 + 176;
              *(_QWORD *)(v88 + 192) = v88 + 208;
              *(_QWORD *)(v88 + 224) = v88 + 240;
              *(_QWORD *)(v88 + 256) = v88 + 272;
              *(_QWORD *)(v88 + 288) = v88 + 304;
              *(_QWORD *)(v88 + 320) = v88 + 336;
              *(_QWORD *)(v88 + 352) = v88 + 368;
              *(_QWORD *)(v88 + 384) = v88 + 400;
              *(_QWORD *)(v88 + 416) = v88 + 432;
              *(_QWORD *)(v88 + 104) = 0;
              *(_BYTE *)(v88 + 112) = 0;
              *(_QWORD *)(v88 + 136) = 0;
              *(_BYTE *)(v88 + 144) = 0;
              *(_QWORD *)(v88 + 168) = 0;
              *(_BYTE *)(v88 + 176) = 0;
              *(_QWORD *)(v88 + 200) = 0;
              *(_BYTE *)(v88 + 208) = 0;
              *(_QWORD *)(v88 + 232) = 0;
              *(_BYTE *)(v88 + 240) = 0;
              *(_QWORD *)(v88 + 264) = 0;
              *(_BYTE *)(v88 + 272) = 0;
              *(_QWORD *)(v88 + 296) = 0;
              *(_BYTE *)(v88 + 304) = 0;
              *(_QWORD *)(v88 + 328) = 0;
              *(_BYTE *)(v88 + 336) = 0;
              *(_QWORD *)(v88 + 360) = 0;
              *(_BYTE *)(v88 + 368) = 0;
              *(_QWORD *)(v88 + 392) = 0;
              *(_BYTE *)(v88 + 400) = 0;
              *(_QWORD *)(v88 + 424) = 0x800000000LL;
              *(_QWORD *)(v88 + 528) = v88 + 544;
              *(_QWORD *)(v88 + 536) = 0x600000000LL;
              v37 = 0;
            }
            *(_QWORD *)(v35 + 8) = v36;
          }
          v127 = __PAIR64__(v27, v26);
          LOBYTE(v128) = 1;
          if ( v39 <= v38 )
            goto LABEL_34;
LABEL_30:
          sub_2237220(v36 + 416, v36 + 432, v39, 12);
          v37 = *(unsigned int *)(v36 + 424);
LABEL_34:
          v41 = *(_QWORD *)(v36 + 416) + 12 * v37;
          *(_QWORD *)v41 = v127;
          *(_DWORD *)(v41 + 8) = v128;
          ++*(_DWORD *)(v36 + 424);
        }
LABEL_15:
        v17 = 1;
        sub_15F7200(&ptr);
        return v17;
      }
    }
    else
    {
      if ( !v137 )
      {
        v25 = sub_EEC8C0((unsigned __int64)a8, (__int64)v23, *(double *)a7.m128i_i64);
        v26 = v25;
        v27 = HIDWORD(v25);
        goto LABEL_24;
      }
      v74 = sub_168B9E0(&ptr);
      v77 = v132[0];
      if ( v132[0] )
        v77 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v132[0] + 32LL))(v132[0]);
      v23 = &v126;
      v126 = v77;
      v78 = sub_1587BC0(v74, &v126, v72, v73, v75, v76);
      v79 = *v78 + 32LL * v136;
      v42 = *(_QWORD *)(v79 + 8);
      if ( !v42 )
      {
        v80 = *(_QWORD *)(v79 + 16);
        v81 = *(_DWORD *)(v80 + 14976);
        if ( v81 )
        {
          v109 = (unsigned int)(v81 - 1);
          *(_DWORD *)(v80 + 14976) = v109;
          v42 = *(_QWORD *)(v80 + 8 * v109 + 14848);
          v110 = *(unsigned int *)(v42 + 536);
          *(_BYTE *)v42 = 0;
          v111 = *(_QWORD *)(v42 + 528);
          *(_DWORD *)(v42 + 424) = 0;
          v112 = v111 + (v110 << 6);
          while ( v111 != v112 )
          {
            while ( 1 )
            {
              v112 -= 64;
              v113 = *(void **)(v112 + 24);
              if ( v113 == (void *)(v112 + 40) )
                break;
              v125 = v112;
              v122 = v111;
              operator delete(v113);
              v111 = v122;
              v112 = v125;
              if ( v122 == v125 )
                goto LABEL_93;
            }
          }
LABEL_93:
          v43 = *(unsigned int *)(v42 + 424);
          v44 = *(unsigned int *)(v42 + 428);
          *(_DWORD *)(v42 + 536) = 0;
          v45 = v43 + 1;
        }
        else
        {
          v82 = operator new(0x3A0u);
          v44 = 8;
          v45 = 1;
          v42 = v82;
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
          v43 = 0;
        }
        *(_QWORD *)(v79 + 8) = v42;
        goto LABEL_37;
      }
    }
    v43 = *(unsigned int *)(v42 + 424);
    v44 = *(unsigned int *)(v42 + 428);
    v45 = v43 + 1;
    goto LABEL_37;
  }
LABEL_4:
  v11 = sub_18C3160(a5);
  v12 = 0;
  ptr = v132;
  v131 = 0x1000000000LL;
  sub_18C3460(a1, a2, a6, v11, (__int64)&ptr);
  if ( (_DWORD)v131
    && (v21 = *(_QWORD *)(a1 + 248),
        v127 = (v21 + 16LL * (int)sub_BFAD70(v11) + 17592) | 6,
        LODWORD(v128) = a6,
        sub_B85890(&v129, v127),
        v22 = sub_1BD6F20(a1, 0, 0, 0, (__int64)&ptr, 1u, a7),
        v12 = v22 & 0xFFFFFFFFFFFFFFFELL,
        v22 == 1) )
  {
    v17 = 1;
    if ( ptr != v132 )
      free(ptr);
  }
  else
  {
    if ( ptr != v132 )
      free(ptr);
    v13 = *(_QWORD **)(a1 + 248);
    v14 = v13[2384];
    v15 = sub_EEE9A0(56, v13, 8u);
    v16 = v14;
    v17 = v15;
    sub_C95FE0(v15, v16, v12, a3, (__int64)a4, v11, a6, (__int64)a8, a9, 0);
  }
  return v17;
}
