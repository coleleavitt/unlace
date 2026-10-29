void __fastcall sub_1AE3090(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __m128i *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 *v27; // rsi
  unsigned __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned __int64 v30; // rbp
  __int64 v31; // rcx
  __int64 *v32; // rax
  unsigned __int8 *v33; // rbp
  _BYTE *v34; // rdx
  __int64 v35; // rax
  char v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int8 *v39; // rbp
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // r12
  unsigned __int8 *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int8 *v67; // r13
  unsigned __int8 *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r13
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  int v78; // eax
  unsigned __int8 *v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // r15
  __int64 v92; // r12
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // r15
  __int64 v97; // r13
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r15
  __int64 v101; // rdx
  __int64 v102; // r15
  void *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // rdx
  __int64 v107; // r13
  void *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // rdx
  __int64 v112; // r15
  void *v113; // rdi
  __int64 v114; // [rsp+8h] [rbp-F0h]
  __int64 v115; // [rsp+8h] [rbp-F0h]
  __int64 v116; // [rsp+8h] [rbp-F0h]
  __int32 v117; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v118; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v119; // [rsp+20h] [rbp-D8h] BYREF
  int v120; // [rsp+28h] [rbp-D0h]
  _QWORD v121[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v122; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v123; // [rsp+50h] [rbp-A8h]
  __int64 v124; // [rsp+58h] [rbp-A0h]
  char v125; // [rsp+A8h] [rbp-50h]
  unsigned int v126; // [rsp+B0h] [rbp-48h]
  char v127; // [rsp+B4h] [rbp-44h]

  v8 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)sub_16211A0(*a1, a3, v8, &v117, 0xFFFFFFFFLL, 0) )
    return;
  if ( !v117 )
  {
    v27 = (unsigned __int64 *)a1;
    sub_168B9F0((__int64)v121, a1, a3[1].m128i_u32[2], 0xC52u, 0);
    if ( v125 )
    {
      v33 = v123;
      if ( !v123 )
      {
        v80 = v124;
        v81 = *(_DWORD *)(v124 + 14976);
        if ( v81 )
        {
          v89 = (unsigned int)(v81 - 1);
          *(_DWORD *)(v124 + 14976) = v89;
          v33 = *(unsigned __int8 **)(v80 + 8 * v89 + 14848);
          v90 = *((unsigned int *)v33 + 134);
          *v33 = 0;
          v91 = *((_QWORD *)v33 + 66);
          *((_DWORD *)v33 + 106) = 0;
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
                goto LABEL_75;
            }
          }
LABEL_75:
          *((_DWORD *)v33 + 134) = 0;
        }
        else
        {
          v33 = (unsigned __int8 *)operator new(0x3A0u);
          *v33 = 0;
          *((_QWORD *)v33 + 12) = v33 + 112;
          *((_QWORD *)v33 + 16) = v33 + 144;
          *((_QWORD *)v33 + 20) = v33 + 176;
          *((_QWORD *)v33 + 24) = v33 + 208;
          *((_QWORD *)v33 + 28) = v33 + 240;
          *((_QWORD *)v33 + 32) = v33 + 272;
          *((_QWORD *)v33 + 36) = v33 + 304;
          *((_QWORD *)v33 + 40) = v33 + 336;
          *((_QWORD *)v33 + 44) = v33 + 368;
          *((_QWORD *)v33 + 48) = v33 + 400;
          *((_QWORD *)v33 + 52) = v33 + 432;
          *((_QWORD *)v33 + 13) = 0;
          v33[112] = 0;
          *((_QWORD *)v33 + 17) = 0;
          v33[144] = 0;
          *((_QWORD *)v33 + 21) = 0;
          v33[176] = 0;
          *((_QWORD *)v33 + 25) = 0;
          v33[208] = 0;
          *((_QWORD *)v33 + 29) = 0;
          v33[240] = 0;
          *((_QWORD *)v33 + 33) = 0;
          v33[272] = 0;
          *((_QWORD *)v33 + 37) = 0;
          v33[304] = 0;
          *((_QWORD *)v33 + 41) = 0;
          v33[336] = 0;
          *((_QWORD *)v33 + 45) = 0;
          v33[368] = 0;
          *((_QWORD *)v33 + 49) = 0;
          v33[400] = 0;
          *((_QWORD *)v33 + 53) = 0x800000000LL;
          *((_QWORD *)v33 + 66) = v33 + 544;
          *((_QWORD *)v33 + 67) = 0x600000000LL;
        }
        v123 = v33;
      }
      v33[*v33 + 1] = 16;
      v34 = v123;
    }
    else
    {
      if ( !v127 )
      {
        v28 = sub_EEC8C0(v8, (__int64)a1, a4);
        v29 = v28;
        v30 = HIDWORD(v28);
        goto LABEL_16;
      }
      v46 = sub_168B9E0(v121);
      v49 = v122;
      if ( v122 )
        v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
      v27 = &v119;
      v119 = v49;
      v50 = sub_1587BC0(v46, (__int64 *)&v119, v44, v45, v47, v48);
      v51 = *v50 + 32LL * v126;
      v52 = *(unsigned __int8 **)(v51 + 8);
      if ( !v52 )
      {
        v87 = *(_QWORD *)(v51 + 16);
        v88 = *(_DWORD *)(v87 + 14976);
        if ( v88 )
        {
          v109 = (unsigned int)(v88 - 1);
          *(_DWORD *)(v87 + 14976) = v109;
          v52 = *(unsigned __int8 **)(v87 + 8 * v109 + 14848);
          v110 = *((unsigned int *)v52 + 134);
          *v52 = 0;
          v111 = *((_QWORD *)v52 + 66);
          *((_DWORD *)v52 + 106) = 0;
          v112 = v111 + (v110 << 6);
          while ( v111 != v112 )
          {
            while ( 1 )
            {
              v112 -= 64;
              v113 = *(void **)(v112 + 24);
              if ( v113 == (void *)(v112 + 40) )
                break;
              v116 = v111;
              operator delete(v113);
              v111 = v116;
              if ( v116 == v112 )
                goto LABEL_95;
            }
          }
LABEL_95:
          *((_DWORD *)v52 + 134) = 0;
        }
        else
        {
          v52 = (unsigned __int8 *)operator new(0x3A0u);
          *v52 = 0;
          *((_QWORD *)v52 + 12) = v52 + 112;
          *((_QWORD *)v52 + 16) = v52 + 144;
          *((_QWORD *)v52 + 20) = v52 + 176;
          *((_QWORD *)v52 + 24) = v52 + 208;
          *((_QWORD *)v52 + 28) = v52 + 240;
          *((_QWORD *)v52 + 32) = v52 + 272;
          *((_QWORD *)v52 + 36) = v52 + 304;
          *((_QWORD *)v52 + 40) = v52 + 336;
          *((_QWORD *)v52 + 44) = v52 + 368;
          *((_QWORD *)v52 + 48) = v52 + 400;
          *((_QWORD *)v52 + 52) = v52 + 432;
          *((_QWORD *)v52 + 13) = 0;
          v52[112] = 0;
          *((_QWORD *)v52 + 17) = 0;
          v52[144] = 0;
          *((_QWORD *)v52 + 21) = 0;
          v52[176] = 0;
          *((_QWORD *)v52 + 25) = 0;
          v52[208] = 0;
          *((_QWORD *)v52 + 29) = 0;
          v52[240] = 0;
          *((_QWORD *)v52 + 33) = 0;
          v52[272] = 0;
          *((_QWORD *)v52 + 37) = 0;
          v52[304] = 0;
          *((_QWORD *)v52 + 41) = 0;
          v52[336] = 0;
          *((_QWORD *)v52 + 45) = 0;
          v52[368] = 0;
          *((_QWORD *)v52 + 49) = 0;
          v52[400] = 0;
          *((_QWORD *)v52 + 53) = 0x800000000LL;
          *((_QWORD *)v52 + 66) = v52 + 544;
          *((_QWORD *)v52 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v51 + 8) = v52;
      }
      v52[*v52 + 1] = 16;
      v34 = *(_BYTE **)(v51 + 8);
    }
    v35 = (unsigned __int8)*v34;
    *v34 = v35 + 1;
    *(_QWORD *)&v34[8 * v35 + 16] = a3;
    v36 = v125;
    v37 = sub_EEC8C0(v8, (__int64)v27, a4);
    v29 = v37;
    v38 = HIDWORD(v37);
    LODWORD(v30) = HIDWORD(v37);
    if ( v36 )
    {
      v39 = v123;
      if ( v123 )
      {
        v40 = *((unsigned int *)v123 + 106);
        v41 = *((unsigned int *)v123 + 107);
        v42 = v40 + 1;
      }
      else
      {
        v77 = v124;
        v78 = *(_DWORD *)(v124 + 14976);
        if ( v78 )
        {
          v94 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v124 + 14976) = v94;
          v39 = *(unsigned __int8 **)(v77 + 8 * v94 + 14848);
          v95 = *((unsigned int *)v39 + 134);
          *v39 = 0;
          v96 = *((_QWORD *)v39 + 66);
          *((_DWORD *)v39 + 106) = 0;
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
                goto LABEL_80;
            }
          }
LABEL_80:
          v40 = *((unsigned int *)v39 + 106);
          v41 = *((unsigned int *)v39 + 107);
          *((_DWORD *)v39 + 134) = 0;
          v42 = v40 + 1;
        }
        else
        {
          v79 = (unsigned __int8 *)operator new(0x3A0u);
          v41 = 8;
          v42 = 1;
          v39 = v79;
          *v79 = 0;
          *((_QWORD *)v79 + 12) = v79 + 112;
          *((_QWORD *)v79 + 16) = v79 + 144;
          *((_QWORD *)v79 + 20) = v79 + 176;
          *((_QWORD *)v79 + 24) = v79 + 208;
          *((_QWORD *)v79 + 28) = v79 + 240;
          *((_QWORD *)v79 + 32) = v79 + 272;
          *((_QWORD *)v79 + 36) = v79 + 304;
          *((_QWORD *)v79 + 40) = v79 + 336;
          *((_QWORD *)v79 + 44) = v79 + 368;
          *((_QWORD *)v79 + 48) = v79 + 400;
          *((_QWORD *)v79 + 52) = v79 + 432;
          *((_QWORD *)v79 + 13) = 0;
          v79[112] = 0;
          *((_QWORD *)v79 + 17) = 0;
          v79[144] = 0;
          *((_QWORD *)v79 + 21) = 0;
          v79[176] = 0;
          *((_QWORD *)v79 + 25) = 0;
          v79[208] = 0;
          *((_QWORD *)v79 + 29) = 0;
          v79[240] = 0;
          *((_QWORD *)v79 + 33) = 0;
          v79[272] = 0;
          *((_QWORD *)v79 + 37) = 0;
          v79[304] = 0;
          *((_QWORD *)v79 + 41) = 0;
          v79[336] = 0;
          *((_QWORD *)v79 + 45) = 0;
          v79[368] = 0;
          *((_QWORD *)v79 + 49) = 0;
          v79[400] = 0;
          *((_QWORD *)v79 + 53) = 0x800000000LL;
          *((_QWORD *)v79 + 66) = v79 + 544;
          *((_QWORD *)v79 + 67) = 0x600000000LL;
          v40 = 0;
        }
        v123 = v39;
      }
      v119 = __PAIR64__(v38, v29);
      LOBYTE(v120) = 1;
      if ( v42 > v41 )
      {
        sub_2237220(v39 + 416, v39 + 432, v42, 12);
        v40 = *((unsigned int *)v39 + 106);
      }
      v43 = *((_QWORD *)v39 + 52) + 12 * v40;
      *(_QWORD *)v43 = v119;
      *(_DWORD *)(v43 + 8) = v120;
      ++*((_DWORD *)v39 + 106);
      goto LABEL_17;
    }
LABEL_16:
    if ( v127 )
    {
      v55 = sub_168B9E0(v121);
      v58 = v122;
      if ( v122 )
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
      v118 = v58;
      v59 = sub_1587BC0(v55, &v118, v53, v54, v56, v57);
      v60 = *v59 + 32LL * v126;
      v61 = *(_QWORD *)(v60 + 8);
      v62 = v60;
      if ( v61 )
      {
        v63 = *(unsigned int *)(v61 + 424);
        v64 = *(unsigned int *)(v61 + 428);
        v65 = v63 + 1;
      }
      else
      {
        v82 = *(_QWORD *)(v60 + 16);
        v83 = *(_DWORD *)(v82 + 14976);
        if ( v83 )
        {
          v104 = (unsigned int)(v83 - 1);
          *(_DWORD *)(v82 + 14976) = v104;
          v61 = *(_QWORD *)(v82 + 8 * v104 + 14848);
          v105 = *(unsigned int *)(v61 + 536);
          *(_BYTE *)v61 = 0;
          v106 = *(_QWORD *)(v61 + 528);
          *(_DWORD *)(v61 + 424) = 0;
          v107 = v106 + (v105 << 6);
          while ( v106 != v107 )
          {
            while ( 1 )
            {
              v107 -= 64;
              v108 = *(void **)(v107 + 24);
              if ( v108 == (void *)(v107 + 40) )
                break;
              v115 = v106;
              operator delete(v108);
              v106 = v115;
              if ( v115 == v107 )
                goto LABEL_90;
            }
          }
LABEL_90:
          v63 = *(unsigned int *)(v61 + 424);
          v64 = *(unsigned int *)(v61 + 428);
          *(_DWORD *)(v61 + 536) = 0;
          v65 = v63 + 1;
        }
        else
        {
          v84 = operator new(0x3A0u);
          v64 = 8;
          v65 = 1;
          v61 = v84;
          *(_BYTE *)v84 = 0;
          *(_QWORD *)(v84 + 96) = v84 + 112;
          *(_QWORD *)(v84 + 128) = v84 + 144;
          *(_QWORD *)(v84 + 160) = v84 + 176;
          *(_QWORD *)(v84 + 192) = v84 + 208;
          *(_QWORD *)(v84 + 224) = v84 + 240;
          *(_QWORD *)(v84 + 256) = v84 + 272;
          *(_QWORD *)(v84 + 288) = v84 + 304;
          *(_QWORD *)(v84 + 320) = v84 + 336;
          *(_QWORD *)(v84 + 352) = v84 + 368;
          *(_QWORD *)(v84 + 384) = v84 + 400;
          *(_QWORD *)(v84 + 416) = v84 + 432;
          *(_QWORD *)(v84 + 104) = 0;
          *(_BYTE *)(v84 + 112) = 0;
          *(_QWORD *)(v84 + 136) = 0;
          *(_BYTE *)(v84 + 144) = 0;
          *(_QWORD *)(v84 + 168) = 0;
          *(_BYTE *)(v84 + 176) = 0;
          *(_QWORD *)(v84 + 200) = 0;
          *(_BYTE *)(v84 + 208) = 0;
          *(_QWORD *)(v84 + 232) = 0;
          *(_BYTE *)(v84 + 240) = 0;
          *(_QWORD *)(v84 + 264) = 0;
          *(_BYTE *)(v84 + 272) = 0;
          *(_QWORD *)(v84 + 296) = 0;
          *(_BYTE *)(v84 + 304) = 0;
          *(_QWORD *)(v84 + 328) = 0;
          *(_BYTE *)(v84 + 336) = 0;
          *(_QWORD *)(v84 + 360) = 0;
          *(_BYTE *)(v84 + 368) = 0;
          *(_QWORD *)(v84 + 392) = 0;
          *(_BYTE *)(v84 + 400) = 0;
          *(_QWORD *)(v84 + 424) = 0x800000000LL;
          *(_QWORD *)(v84 + 528) = v84 + 544;
          *(_QWORD *)(v84 + 536) = 0x600000000LL;
          v63 = 0;
        }
        *(_QWORD *)(v62 + 8) = v61;
      }
      v119 = __PAIR64__(v30, v29);
      LOBYTE(v120) = 1;
      if ( v65 > v64 )
      {
        sub_2237220(v61 + 416, v61 + 432, v65, 12);
        v63 = *(unsigned int *)(v61 + 424);
      }
      v66 = *(_QWORD *)(v61 + 416) + 12 * v63;
      *(_QWORD *)v66 = v119;
      *(_DWORD *)(v66 + 8) = v120;
      ++*(_DWORD *)(v61 + 424);
    }
LABEL_17:
    sub_15F7200(v121);
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = sub_B8C3D0(a2, (__int64)a3, v9, v10, v11, v12);
    v14 = (_QWORD *)*v13;
    v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( (unsigned __int64)v14 < v15 )
    {
      v16 = v14;
      while ( *(_WORD *)(*v16 + 36LL) != 320 )
      {
        if ( (_QWORD *)v15 == ++v16 )
          goto LABEL_8;
      }
      if ( (_QWORD *)v15 == v16 )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( v14 != (_QWORD *)v15 )
    {
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 320 )
      {
        v15 += 8LL;
        if ( v14 == (_QWORD *)v15 )
          goto LABEL_8;
      }
LABEL_22:
      v31 = *v14;
      if ( *(_WORD *)(*v14 + 36LL) != 320 )
      {
        v32 = v14 + 1;
        do
          v31 = *v32++;
        while ( *(_WORD *)(v31 + 36) != 320 );
      }
      if ( v117 != *(_DWORD *)(v31 + 40) )
      {
        sub_168B9F0((__int64)v121, a1, a3[1].m128i_u32[2], 0x1ACBu, 0);
        if ( v125 )
        {
          v67 = v123;
          if ( !v123 )
          {
            v85 = v124;
            v86 = *(_DWORD *)(v124 + 14976);
            if ( v86 )
            {
              v99 = (unsigned int)(v86 - 1);
              *(_DWORD *)(v124 + 14976) = v99;
              v67 = *(unsigned __int8 **)(v85 + 8 * v99 + 14848);
              v100 = *((unsigned int *)v67 + 134);
              *v67 = 0;
              v101 = *((_QWORD *)v67 + 66);
              *((_DWORD *)v67 + 106) = 0;
              v102 = v101 + (v100 << 6);
              while ( v101 != v102 )
              {
                while ( 1 )
                {
                  v102 -= 64;
                  v103 = *(void **)(v102 + 24);
                  if ( v103 == (void *)(v102 + 40) )
                    break;
                  v114 = v101;
                  operator delete(v103);
                  v101 = v114;
                  if ( v114 == v102 )
                    goto LABEL_85;
                }
              }
LABEL_85:
              *((_DWORD *)v67 + 134) = 0;
            }
            else
            {
              v67 = (unsigned __int8 *)operator new(0x3A0u);
              *v67 = 0;
              *((_QWORD *)v67 + 12) = v67 + 112;
              *((_QWORD *)v67 + 16) = v67 + 144;
              *((_QWORD *)v67 + 20) = v67 + 176;
              *((_QWORD *)v67 + 24) = v67 + 208;
              *((_QWORD *)v67 + 28) = v67 + 240;
              *((_QWORD *)v67 + 32) = v67 + 272;
              *((_QWORD *)v67 + 36) = v67 + 304;
              *((_QWORD *)v67 + 40) = v67 + 336;
              *((_QWORD *)v67 + 44) = v67 + 368;
              *((_QWORD *)v67 + 48) = v67 + 400;
              *((_QWORD *)v67 + 52) = v67 + 432;
              *((_QWORD *)v67 + 13) = 0;
              v67[112] = 0;
              *((_QWORD *)v67 + 17) = 0;
              v67[144] = 0;
              *((_QWORD *)v67 + 21) = 0;
              v67[176] = 0;
              *((_QWORD *)v67 + 25) = 0;
              v67[208] = 0;
              *((_QWORD *)v67 + 29) = 0;
              v67[240] = 0;
              *((_QWORD *)v67 + 33) = 0;
              v67[272] = 0;
              *((_QWORD *)v67 + 37) = 0;
              v67[304] = 0;
              *((_QWORD *)v67 + 41) = 0;
              v67[336] = 0;
              *((_QWORD *)v67 + 45) = 0;
              v67[368] = 0;
              *((_QWORD *)v67 + 49) = 0;
              v67[400] = 0;
              *((_QWORD *)v67 + 53) = 0x800000000LL;
              *((_QWORD *)v67 + 66) = v67 + 544;
              *((_QWORD *)v67 + 67) = 0x600000000LL;
            }
            v123 = v67;
          }
          v67[*v67 + 1] = 16;
          v68 = v123;
          v69 = *v123;
          *v123 = v69 + 1;
          *(_QWORD *)&v68[8 * v69 + 16] = a3;
        }
        else if ( v127 )
        {
          v74 = sub_168B9E0(v121);
          v75 = v122;
          if ( v122 )
            v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
          v119 = v75;
          v76 = sub_1587BC0(v74, (__int64 *)&v119, v70, v71, v72, v73);
          sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v126 + 8), (__int64)a3, 0x10u);
        }
        sub_15F7200(v121);
      }
    }
  }
LABEL_8:
  v17 = sub_168B6C0((__int64)a1);
  v18 = (_QWORD *)sub_168B6C0((__int64)a1);
  v21 = v18[294];
  v18[304] += 48LL;
  v22 = (__m128i *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v18[295] >= (unsigned __int64)&v22[3] && v21 )
    v18[294] = v22 + 3;
  else
    v22 = (__m128i *)sub_986170((__int64)(v18 + 294), 48, 48, 3, v19, v20);
  sub_B16860(v22, v17, a3, v117);
  sub_B8CC60(a2, (__int64)v22, v23, v24, v25, v26);
}
