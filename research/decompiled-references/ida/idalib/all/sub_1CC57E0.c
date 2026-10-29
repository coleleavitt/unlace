void __fastcall sub_1CC57E0(__int64 a1, unsigned int *a2, unsigned int *a3, int a4, unsigned int a5)
{
  unsigned int v6; // ecx
  __int64 *v8; // rbp
  bool v9; // r15
  bool v10; // r14
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21; // al
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  unsigned __int8 *v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r13
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbp
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rsi
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdx
  void *v75; // rdi
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // r15
  __int64 v81; // r13
  void *v82; // rdi
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r15
  __int64 v88; // rdx
  __int64 v89; // r15
  void *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rdx
  void *v95; // rdi
  __int64 v96; // [rsp+0h] [rbp-108h]
  __int64 v97; // [rsp+0h] [rbp-108h]
  unsigned __int8 *v98; // [rsp+0h] [rbp-108h]
  __int64 v99; // [rsp+0h] [rbp-108h]
  unsigned __int8 *v100; // [rsp+0h] [rbp-108h]
  unsigned __int8 *v101; // [rsp+0h] [rbp-108h]
  __int64 v102; // [rsp+0h] [rbp-108h]
  __int64 v103; // [rsp+0h] [rbp-108h]
  unsigned __int8 *v104; // [rsp+8h] [rbp-100h]
  __int64 v105; // [rsp+10h] [rbp-F8h]
  __int64 v106; // [rsp+10h] [rbp-F8h]
  __int64 v107; // [rsp+18h] [rbp-F0h]
  __int64 v108; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v109; // [rsp+30h] [rbp-D8h] BYREF
  int v110; // [rsp+38h] [rbp-D0h]
  _QWORD v111[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v113; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v114; // [rsp+68h] [rbp-A0h]
  char v115; // [rsp+B8h] [rbp-50h]
  unsigned int v116; // [rsp+C0h] [rbp-48h]
  char v117; // [rsp+C4h] [rbp-44h]

  v6 = 5144;
  v8 = (__int64 *)(a1 + 8);
  if ( a5 )
  {
    sub_168B9F0((__int64)v111, (__int64 *)(a1 + 8), a5, 0x13F8u, 0);
    sub_15F7200(v111);
    v6 = 6403;
  }
  sub_168B9F0((__int64)v111, v8, a2[2], v6, 0);
  v9 = (a3[5] & 0x1FFFFFFF) < (a2[5] & 0x1FFFFFFF);
  v10 = a4 != 0;
  if ( v115 )
  {
    sub_AE9DF0(&v113, v9, 2u);
    if ( v115 )
    {
LABEL_15:
      sub_AE9DF0(&v113, v10, 2u);
      v21 = v115;
      goto LABEL_16;
    }
  }
  else
  {
    if ( !v117 )
    {
LABEL_5:
      v11 = a2[4];
      v12 = a2[2];
      goto LABEL_6;
    }
    v15 = sub_168B9E0(v111);
    v19 = v112;
    if ( v112 )
    {
      v96 = v15;
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
      v15 = v96;
    }
    v109 = v19;
    v20 = sub_1587BC0(v15, (__int64 *)&v109, v15, v16, v17, v18);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v116 + 8), v9, 2u);
    if ( v115 )
      goto LABEL_15;
  }
  if ( !v117 )
    goto LABEL_5;
  v38 = sub_168B9E0(v111);
  v39 = v112;
  if ( v112 )
    v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
  v109 = v39;
  v40 = sub_1587BC0(v38, (__int64 *)&v109, v34, v35, v36, v37);
  sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v116 + 8), v10, 2u);
  v21 = v115;
LABEL_16:
  v11 = a2[4];
  v12 = a2[2];
  if ( v21 )
  {
    v22 = v113;
    if ( v113 )
    {
      v23 = *((unsigned int *)v113 + 106);
      v24 = *((unsigned int *)v113 + 107);
      v25 = v23 + 1;
    }
    else
    {
      v69 = v114;
      v70 = *(_DWORD *)(v114 + 14976);
      if ( v70 )
      {
        v71 = (unsigned int)(v70 - 1);
        *(_DWORD *)(v114 + 14976) = v71;
        v22 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
        v72 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v73 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v74 = v73 + (v72 << 6);
        if ( v73 == v74 )
        {
          v25 = 1;
          v23 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v74 -= 64;
              v75 = *(void **)(v74 + 24);
              if ( v75 == (void *)(v74 + 40) )
                break;
              v105 = v74;
              v98 = v22;
              operator delete(v75);
              v74 = v105;
              v22 = v98;
              if ( v73 == v105 )
                goto LABEL_55;
            }
          }
          while ( v73 != v74 );
LABEL_55:
          v23 = *((unsigned int *)v22 + 106);
          v25 = v23 + 1;
        }
        *((_DWORD *)v22 + 134) = 0;
        v24 = *((unsigned int *)v22 + 107);
      }
      else
      {
        v22 = (unsigned __int8 *)operator new(0x3A0u);
        v24 = 8;
        *v22 = 0;
        *((_QWORD *)v22 + 12) = v22 + 112;
        *((_QWORD *)v22 + 16) = v22 + 144;
        *((_QWORD *)v22 + 20) = v22 + 176;
        *((_QWORD *)v22 + 24) = v22 + 208;
        *((_QWORD *)v22 + 28) = v22 + 240;
        *((_QWORD *)v22 + 32) = v22 + 272;
        *((_QWORD *)v22 + 36) = v22 + 304;
        *((_QWORD *)v22 + 40) = v22 + 336;
        *((_QWORD *)v22 + 44) = v22 + 368;
        *((_QWORD *)v22 + 48) = v22 + 400;
        *((_QWORD *)v22 + 52) = v22 + 432;
        *((_QWORD *)v22 + 13) = 0;
        v22[112] = 0;
        *((_QWORD *)v22 + 17) = 0;
        v22[144] = 0;
        *((_QWORD *)v22 + 21) = 0;
        v22[176] = 0;
        *((_QWORD *)v22 + 25) = 0;
        v22[208] = 0;
        *((_QWORD *)v22 + 29) = 0;
        v22[240] = 0;
        *((_QWORD *)v22 + 33) = 0;
        v22[272] = 0;
        *((_QWORD *)v22 + 37) = 0;
        v22[304] = 0;
        *((_QWORD *)v22 + 41) = 0;
        v22[336] = 0;
        *((_QWORD *)v22 + 45) = 0;
        v22[368] = 0;
        *((_QWORD *)v22 + 49) = 0;
        v22[400] = 0;
        *((_QWORD *)v22 + 53) = 0x800000000LL;
        *((_QWORD *)v22 + 66) = v22 + 544;
        v25 = 1;
        *((_QWORD *)v22 + 67) = 0x600000000LL;
        v23 = 0;
      }
      v113 = v22;
    }
    v109 = __PAIR64__(v11, v12);
    LOBYTE(v110) = 1;
    if ( v25 > v24 )
    {
      v100 = v22;
      sub_2237220(v22 + 416, v22 + 432, v25, 12);
      v22 = v100;
      v23 = *((unsigned int *)v100 + 106);
    }
    v26 = 3 * v23;
    goto LABEL_22;
  }
LABEL_6:
  if ( !v117 )
    goto LABEL_7;
  v59 = sub_168B9E0(v111);
  v63 = v112;
  if ( v112 )
  {
    v97 = v59;
    v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
    v59 = v97;
  }
  v108 = v63;
  v64 = sub_1587BC0(v59, &v108, v59, v60, v61, v62);
  v65 = *v64 + 32LL * v116;
  v22 = *(unsigned __int8 **)(v65 + 8);
  if ( v22 )
  {
    v66 = *((unsigned int *)v22 + 106);
    v67 = *((unsigned int *)v22 + 107);
    v68 = v66 + 1;
  }
  else
  {
    v83 = *(_QWORD *)(v65 + 16);
    v84 = *(_DWORD *)(v83 + 14976);
    if ( v84 )
    {
      v91 = (unsigned int)(v84 - 1);
      *(_DWORD *)(v83 + 14976) = v91;
      v22 = *(unsigned __int8 **)(v83 + 8 * v91 + 14848);
      v92 = *((unsigned int *)v22 + 134);
      *v22 = 0;
      v93 = *((_QWORD *)v22 + 66);
      *((_DWORD *)v22 + 106) = 0;
      v94 = v93 + (v92 << 6);
      if ( v93 == v94 )
      {
        v68 = 1;
        v66 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v94 -= 64;
            v95 = *(void **)(v94 + 24);
            if ( v95 == (void *)(v94 + 40) )
              break;
            v107 = v94;
            v106 = v93;
            v104 = v22;
            v103 = v65;
            operator delete(v95);
            v93 = v106;
            v94 = v107;
            v65 = v103;
            v22 = v104;
            if ( v106 == v107 )
              goto LABEL_84;
          }
        }
        while ( v93 != v94 );
LABEL_84:
        v66 = *((unsigned int *)v22 + 106);
        v68 = v66 + 1;
      }
      *((_DWORD *)v22 + 134) = 0;
      v67 = *((unsigned int *)v22 + 107);
    }
    else
    {
      v99 = v65;
      v22 = (unsigned __int8 *)operator new(0x3A0u);
      v67 = 8;
      v66 = 0;
      *v22 = 0;
      *((_QWORD *)v22 + 12) = v22 + 112;
      *((_QWORD *)v22 + 16) = v22 + 144;
      *((_QWORD *)v22 + 20) = v22 + 176;
      *((_QWORD *)v22 + 24) = v22 + 208;
      *((_QWORD *)v22 + 28) = v22 + 240;
      *((_QWORD *)v22 + 32) = v22 + 272;
      *((_QWORD *)v22 + 36) = v22 + 304;
      *((_QWORD *)v22 + 40) = v22 + 336;
      *((_QWORD *)v22 + 44) = v22 + 368;
      *((_QWORD *)v22 + 48) = v22 + 400;
      *((_QWORD *)v22 + 52) = v22 + 432;
      *((_QWORD *)v22 + 13) = 0;
      v22[112] = 0;
      *((_QWORD *)v22 + 17) = 0;
      v22[144] = 0;
      *((_QWORD *)v22 + 21) = 0;
      v22[176] = 0;
      *((_QWORD *)v22 + 25) = 0;
      v22[208] = 0;
      *((_QWORD *)v22 + 29) = 0;
      v22[240] = 0;
      *((_QWORD *)v22 + 33) = 0;
      v22[272] = 0;
      *((_QWORD *)v22 + 37) = 0;
      v22[304] = 0;
      *((_QWORD *)v22 + 41) = 0;
      v22[336] = 0;
      *((_QWORD *)v22 + 45) = 0;
      v22[368] = 0;
      *((_QWORD *)v22 + 49) = 0;
      v22[400] = 0;
      *((_QWORD *)v22 + 53) = 0x800000000LL;
      *((_QWORD *)v22 + 67) = 0x600000000LL;
      v65 = v99;
      *((_QWORD *)v22 + 66) = v22 + 544;
      v68 = 1;
    }
    *(_QWORD *)(v65 + 8) = v22;
  }
  v109 = __PAIR64__(v11, v12);
  LOBYTE(v110) = 1;
  if ( v68 > v67 )
  {
    v101 = v22;
    sub_2237220(v22 + 416, v22 + 432, v68, 12);
    v22 = v101;
    v66 = *((unsigned int *)v101 + 106);
  }
  v26 = 3 * v66;
LABEL_22:
  v27 = *((_QWORD *)v22 + 52) + 4 * v26;
  *(_QWORD *)v27 = v109;
  *(_DWORD *)(v27 + 8) = v110;
  ++*((_DWORD *)v22 + 106);
LABEL_7:
  sub_15F7200(v111);
  sub_168B9F0((__int64)v111, v8, a3[2], 0x1908u, 0);
  if ( v115 )
  {
    sub_AE9DF0(&v113, v10, 2u);
    v28 = v115;
  }
  else
  {
    if ( !v117 )
    {
      v13 = a3[4];
      v14 = a3[2];
      goto LABEL_10;
    }
    v54 = sub_168B9E0(v111);
    v57 = v112;
    if ( v112 )
      v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
    v109 = v57;
    v58 = sub_1587BC0(v54, (__int64 *)&v109, v52, v53, v55, v56);
    sub_AE9DF0((unsigned __int8 **)(*v58 + 32LL * v116 + 8), v10, 2u);
    v28 = v115;
  }
  v13 = a3[4];
  v14 = a3[2];
  if ( v28 )
  {
    v29 = v113;
    if ( !v113 )
    {
      v76 = v114;
      v77 = *(_DWORD *)(v114 + 14976);
      if ( v77 )
      {
        v78 = (unsigned int)(v77 - 1);
        *(_DWORD *)(v114 + 14976) = v78;
        v29 = *(unsigned __int8 **)(v76 + 8 * v78 + 14848);
        v79 = *((unsigned int *)v29 + 134);
        *v29 = 0;
        v80 = *((_QWORD *)v29 + 66);
        *((_DWORD *)v29 + 106) = 0;
        v81 = v80 + (v79 << 6);
        if ( v80 == v81 )
        {
          v32 = 1;
          v30 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v81 -= 64;
              v82 = *(void **)(v81 + 24);
              if ( v82 == (void *)(v81 + 40) )
                break;
              operator delete(v82);
              if ( v80 == v81 )
                goto LABEL_61;
            }
          }
          while ( v80 != v81 );
LABEL_61:
          v30 = *((unsigned int *)v29 + 106);
          v32 = v30 + 1;
        }
        *((_DWORD *)v29 + 134) = 0;
        v31 = *((unsigned int *)v29 + 107);
      }
      else
      {
        v85 = operator new(0x3A0u);
        v31 = 8;
        v32 = 1;
        v29 = (unsigned __int8 *)v85;
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
        v30 = 0;
      }
      v113 = v29;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
LABEL_10:
  if ( !v117 )
    goto LABEL_11;
  v43 = sub_168B9E0(v111);
  v46 = v112;
  if ( v112 )
    v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
  v108 = v46;
  v47 = sub_1587BC0(v43, &v108, v41, v42, v44, v45);
  v48 = *v47 + 32LL * v116;
  v29 = *(unsigned __int8 **)(v48 + 8);
  if ( !v29 )
  {
    v49 = *(_QWORD *)(v48 + 16);
    v50 = *(_DWORD *)(v49 + 14976);
    if ( v50 )
    {
      v86 = (unsigned int)(v50 - 1);
      *(_DWORD *)(v49 + 14976) = v86;
      v29 = *(unsigned __int8 **)(v49 + 8 * v86 + 14848);
      v87 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v88 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v89 = v88 + (v87 << 6);
      if ( v88 == v89 )
      {
        v32 = 1;
        v30 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v89 -= 64;
            v90 = *(void **)(v89 + 24);
            if ( v90 == (void *)(v89 + 40) )
              break;
            v102 = v88;
            operator delete(v90);
            v88 = v102;
            if ( v102 == v89 )
              goto LABEL_77;
          }
        }
        while ( v88 != v89 );
LABEL_77:
        v30 = *((unsigned int *)v29 + 106);
        v32 = v30 + 1;
      }
      *((_DWORD *)v29 + 134) = 0;
      v31 = *((unsigned int *)v29 + 107);
    }
    else
    {
      v51 = operator new(0x3A0u);
      v31 = 8;
      v32 = 1;
      v29 = (unsigned __int8 *)v51;
      *(_BYTE *)v51 = 0;
      *(_QWORD *)(v51 + 96) = v51 + 112;
      *(_QWORD *)(v51 + 128) = v51 + 144;
      *(_QWORD *)(v51 + 160) = v51 + 176;
      *(_QWORD *)(v51 + 192) = v51 + 208;
      *(_QWORD *)(v51 + 224) = v51 + 240;
      *(_QWORD *)(v51 + 256) = v51 + 272;
      *(_QWORD *)(v51 + 288) = v51 + 304;
      *(_QWORD *)(v51 + 320) = v51 + 336;
      *(_QWORD *)(v51 + 352) = v51 + 368;
      *(_QWORD *)(v51 + 384) = v51 + 400;
      *(_QWORD *)(v51 + 416) = v51 + 432;
      *(_QWORD *)(v51 + 104) = 0;
      *(_BYTE *)(v51 + 112) = 0;
      *(_QWORD *)(v51 + 136) = 0;
      *(_BYTE *)(v51 + 144) = 0;
      *(_QWORD *)(v51 + 168) = 0;
      *(_BYTE *)(v51 + 176) = 0;
      *(_QWORD *)(v51 + 200) = 0;
      *(_BYTE *)(v51 + 208) = 0;
      *(_QWORD *)(v51 + 232) = 0;
      *(_BYTE *)(v51 + 240) = 0;
      *(_QWORD *)(v51 + 264) = 0;
      *(_BYTE *)(v51 + 272) = 0;
      *(_QWORD *)(v51 + 296) = 0;
      *(_BYTE *)(v51 + 304) = 0;
      *(_QWORD *)(v51 + 328) = 0;
      *(_BYTE *)(v51 + 336) = 0;
      *(_QWORD *)(v51 + 360) = 0;
      *(_BYTE *)(v51 + 368) = 0;
      *(_QWORD *)(v51 + 392) = 0;
      *(_BYTE *)(v51 + 400) = 0;
      *(_QWORD *)(v51 + 424) = 0x800000000LL;
      *(_QWORD *)(v51 + 528) = v51 + 544;
      *(_QWORD *)(v51 + 536) = 0x600000000LL;
      v30 = 0;
    }
    *(_QWORD *)(v48 + 8) = v29;
    goto LABEL_27;
  }
LABEL_26:
  v30 = *((unsigned int *)v29 + 106);
  v31 = *((unsigned int *)v29 + 107);
  v32 = v30 + 1;
LABEL_27:
  v109 = __PAIR64__(v13, v14);
  LOBYTE(v110) = 1;
  if ( v32 > v31 )
  {
    sub_2237220(v29 + 416, v29 + 432, v32, 12);
    v30 = *((unsigned int *)v29 + 106);
  }
  v33 = *((_QWORD *)v29 + 52) + 12 * v30;
  *(_QWORD *)v33 = v109;
  *(_DWORD *)(v33 + 8) = v110;
  ++*((_DWORD *)v29 + 106);
LABEL_11:
  sub_15F7200(v111);
}
