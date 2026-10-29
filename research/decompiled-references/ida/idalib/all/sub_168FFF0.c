void __fastcall sub_168FFF0(__int64 a1, unsigned __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r14
  __int64 *v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 v11; // r13
  unsigned int v12; // r12d
  unsigned __int64 v13; // r13
  unsigned __int8 v14; // bp
  unsigned __int8 *v15; // r12
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r15
  unsigned __int8 *v26; // r14
  _BYTE *v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int8 *v34; // r14
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r15
  unsigned __int8 *v57; // r12
  _BYTE *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // r14
  void *v66; // rdi
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rdx
  __int64 v72; // r15
  void *v73; // rdi
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // r15
  void *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // rdx
  __int64 v89; // r14
  void *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  void *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  void *v100; // rdi
  __int64 v101; // [rsp+0h] [rbp-F8h]
  __int64 v102; // [rsp+0h] [rbp-F8h]
  __int64 v103; // [rsp+0h] [rbp-F8h]
  __int64 v104; // [rsp+0h] [rbp-F8h]
  __int64 v105; // [rsp+0h] [rbp-F8h]
  __int64 v106; // [rsp+8h] [rbp-F0h]
  __int64 v107; // [rsp+8h] [rbp-F0h]
  __int64 v108; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v109; // [rsp+20h] [rbp-D8h] BYREF
  int v110; // [rsp+28h] [rbp-D0h]
  _QWORD v111[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v113; // [rsp+50h] [rbp-A8h]
  __int64 v114; // [rsp+58h] [rbp-A0h]
  char v115; // [rsp+A8h] [rbp-50h]
  unsigned int v116; // [rsp+B0h] [rbp-48h]
  char v117; // [rsp+B4h] [rbp-44h]

  v4 = (__int64)a2;
  v5 = (__int64 *)(a1 + 8);
  if ( a3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    a2 = (unsigned __int64 *)(a1 + 8);
    sub_168B9F0((__int64)v111, v5, v6, 0x16E3u, 0);
    v10 = sub_F68450(v4, (__int64)v5, v7, v8, v9);
    if ( v115 )
    {
      v15 = v113;
      if ( !v113 )
      {
        v74 = v114;
        v75 = *(_DWORD *)(v114 + 14976);
        if ( v75 )
        {
          v81 = (unsigned int)(v75 - 1);
          *(_DWORD *)(v114 + 14976) = v81;
          v15 = *(unsigned __int8 **)(v74 + 8 * v81 + 14848);
          v82 = *((unsigned int *)v15 + 134);
          v83 = *((_QWORD *)v15 + 66);
          *v15 = 0;
          *((_DWORD *)v15 + 106) = 0;
          v84 = v83 + (v82 << 6);
          while ( v83 != v84 )
          {
            while ( 1 )
            {
              v84 -= 64;
              v85 = *(void **)(v84 + 24);
              if ( v85 == (void *)(v84 + 40) )
                break;
              v102 = v83;
              operator delete(v85);
              v83 = v102;
              if ( v102 == v84 )
                goto LABEL_63;
            }
          }
LABEL_63:
          *((_DWORD *)v15 + 134) = 0;
        }
        else
        {
          v15 = (unsigned __int8 *)operator new(0x3A0u);
          *v15 = 0;
          *((_QWORD *)v15 + 12) = v15 + 112;
          *((_QWORD *)v15 + 16) = v15 + 144;
          *((_QWORD *)v15 + 20) = v15 + 176;
          *((_QWORD *)v15 + 24) = v15 + 208;
          *((_QWORD *)v15 + 28) = v15 + 240;
          *((_QWORD *)v15 + 32) = v15 + 272;
          *((_QWORD *)v15 + 36) = v15 + 304;
          *((_QWORD *)v15 + 40) = v15 + 336;
          *((_QWORD *)v15 + 44) = v15 + 368;
          *((_QWORD *)v15 + 48) = v15 + 400;
          *((_QWORD *)v15 + 52) = v15 + 432;
          *((_QWORD *)v15 + 13) = 0;
          v15[112] = 0;
          *((_QWORD *)v15 + 17) = 0;
          v15[144] = 0;
          *((_QWORD *)v15 + 21) = 0;
          v15[176] = 0;
          *((_QWORD *)v15 + 25) = 0;
          v15[208] = 0;
          *((_QWORD *)v15 + 29) = 0;
          v15[240] = 0;
          *((_QWORD *)v15 + 33) = 0;
          v15[272] = 0;
          *((_QWORD *)v15 + 37) = 0;
          v15[304] = 0;
          *((_QWORD *)v15 + 41) = 0;
          v15[336] = 0;
          *((_QWORD *)v15 + 45) = 0;
          v15[368] = 0;
          *((_QWORD *)v15 + 49) = 0;
          v15[400] = 0;
          *((_QWORD *)v15 + 53) = 0x800000000LL;
          *((_QWORD *)v15 + 66) = v15 + 544;
          *((_QWORD *)v15 + 67) = 0x600000000LL;
        }
        v113 = v15;
      }
      v15[*v15 + 1] = 8;
      v16 = v113;
      v17 = *v113;
      *v113 = v17 + 1;
      *(_QWORD *)&v16[8 * v17 + 16] = v10;
    }
    else if ( v117 )
    {
      v53 = sub_168B9E0(v111);
      v54 = v112;
      if ( v112 )
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
      a2 = &v109;
      v109 = v54;
      v55 = sub_1587BC0(v53, (__int64 *)&v109, v49, v50, v51, v52);
      v56 = *v55 + 32LL * v116;
      v57 = *(unsigned __int8 **)(v56 + 8);
      if ( !v57 )
      {
        v79 = *(_QWORD *)(v56 + 16);
        v80 = *(_DWORD *)(v79 + 14976);
        if ( v80 )
        {
          v96 = (unsigned int)(v80 - 1);
          *(_DWORD *)(v79 + 14976) = v96;
          v57 = *(unsigned __int8 **)(v79 + 8 * v96 + 14848);
          v97 = *((unsigned int *)v57 + 134);
          v98 = *((_QWORD *)v57 + 66);
          *v57 = 0;
          *((_DWORD *)v57 + 106) = 0;
          v99 = v98 + (v97 << 6);
          while ( v98 != v99 )
          {
            while ( 1 )
            {
              v99 -= 64;
              v100 = *(void **)(v99 + 24);
              if ( v100 == (void *)(v99 + 40) )
                break;
              v107 = v99;
              v105 = v98;
              operator delete(v100);
              v98 = v105;
              v99 = v107;
              if ( v105 == v107 )
                goto LABEL_80;
            }
          }
LABEL_80:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v56 + 8) = v57;
      }
      v57[*v57 + 1] = 8;
      v58 = *(_BYTE **)(v56 + 8);
      v59 = (unsigned __int8)*v58;
      *v58 = v59 + 1;
      *(_QWORD *)&v58[8 * v59 + 16] = v10;
    }
    sub_15F7200(v111);
  }
  v11 = sub_EEC8C0(*(_QWORD *)(v4 + 56), (__int64)a2, a4);
  v12 = v11;
  sub_168B9F0((__int64)v111, v5, v11, 0x16E4u, 0);
  v13 = HIDWORD(v11);
  v14 = *(_BYTE *)(v4 + 19) & 1;
  if ( v115 )
  {
    v34 = v113;
    if ( !v113 )
    {
      v67 = v114;
      v68 = *(_DWORD *)(v114 + 14976);
      if ( v68 )
      {
        v69 = (unsigned int)(v68 - 1);
        *(_DWORD *)(v114 + 14976) = v69;
        v34 = *(unsigned __int8 **)(v67 + 8 * v69 + 14848);
        v70 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v71 = *((_QWORD *)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v72 = v71 + (v70 << 6);
        while ( v71 != v72 )
        {
          while ( 1 )
          {
            v72 -= 64;
            v73 = *(void **)(v72 + 24);
            if ( v73 == (void *)(v72 + 40) )
              break;
            v101 = v71;
            operator delete(v73);
            v71 = v101;
            if ( v101 == v72 )
              goto LABEL_43;
          }
        }
LABEL_43:
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
      }
      v113 = v34;
    }
    v34[*v34 + 1] = 2;
    v35 = v113;
    v36 = *v113;
    *v113 = v36 + 1;
    *(_QWORD *)&v35[8 * v36 + 16] = v14;
    if ( v115 )
      goto LABEL_14;
LABEL_21:
    if ( !v117 )
      goto LABEL_7;
    v39 = sub_168B9E0(v111);
    v42 = v112;
    if ( v112 )
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
    v108 = v42;
    v43 = sub_1587BC0(v39, &v108, v37, v38, v40, v41);
    v44 = *v43 + 32LL * v116;
    v29 = *(unsigned __int8 **)(v44 + 8);
    v45 = v44;
    if ( !v29 )
    {
      v46 = *(_QWORD *)(v44 + 16);
      v47 = *(_DWORD *)(v46 + 14976);
      if ( v47 )
      {
        v86 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v46 + 14976) = v86;
        v29 = *(unsigned __int8 **)(v46 + 8 * v86 + 14848);
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
              v103 = v88;
              operator delete(v90);
              v88 = v103;
              if ( v103 == v89 )
                goto LABEL_67;
            }
          }
          while ( v88 != v89 );
LABEL_67:
          v30 = *((unsigned int *)v29 + 106);
          v32 = v30 + 1;
        }
        *((_DWORD *)v29 + 134) = 0;
        v31 = *((unsigned int *)v29 + 107);
      }
      else
      {
        v48 = operator new(0x3A0u);
        v31 = 8;
        v32 = 1;
        v29 = (unsigned __int8 *)v48;
        *(_BYTE *)v48 = 0;
        *(_QWORD *)(v48 + 96) = v48 + 112;
        *(_QWORD *)(v48 + 128) = v48 + 144;
        *(_QWORD *)(v48 + 160) = v48 + 176;
        *(_QWORD *)(v48 + 192) = v48 + 208;
        *(_QWORD *)(v48 + 224) = v48 + 240;
        *(_QWORD *)(v48 + 256) = v48 + 272;
        *(_QWORD *)(v48 + 288) = v48 + 304;
        *(_QWORD *)(v48 + 320) = v48 + 336;
        *(_QWORD *)(v48 + 352) = v48 + 368;
        *(_QWORD *)(v48 + 384) = v48 + 400;
        *(_QWORD *)(v48 + 416) = v48 + 432;
        *(_QWORD *)(v48 + 104) = 0;
        *(_BYTE *)(v48 + 112) = 0;
        *(_QWORD *)(v48 + 136) = 0;
        *(_BYTE *)(v48 + 144) = 0;
        *(_QWORD *)(v48 + 168) = 0;
        *(_BYTE *)(v48 + 176) = 0;
        *(_QWORD *)(v48 + 200) = 0;
        *(_BYTE *)(v48 + 208) = 0;
        *(_QWORD *)(v48 + 232) = 0;
        *(_BYTE *)(v48 + 240) = 0;
        *(_QWORD *)(v48 + 264) = 0;
        *(_BYTE *)(v48 + 272) = 0;
        *(_QWORD *)(v48 + 296) = 0;
        *(_BYTE *)(v48 + 304) = 0;
        *(_QWORD *)(v48 + 328) = 0;
        *(_BYTE *)(v48 + 336) = 0;
        *(_QWORD *)(v48 + 360) = 0;
        *(_BYTE *)(v48 + 368) = 0;
        *(_QWORD *)(v48 + 392) = 0;
        *(_BYTE *)(v48 + 400) = 0;
        *(_QWORD *)(v48 + 424) = 0x800000000LL;
        *(_QWORD *)(v48 + 528) = v48 + 544;
        *(_QWORD *)(v48 + 536) = 0x600000000LL;
        v30 = 0;
      }
      *(_QWORD *)(v45 + 8) = v29;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( !v117 )
    goto LABEL_7;
  v22 = sub_168B9E0(v111);
  v23 = v112;
  if ( v112 )
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v112 + 32LL))(v112);
  v109 = v23;
  v24 = sub_1587BC0(v22, (__int64 *)&v109, v18, v19, v20, v21);
  v25 = *v24 + 32LL * v116;
  v26 = *(unsigned __int8 **)(v25 + 8);
  if ( !v26 )
  {
    v76 = *(_QWORD *)(v25 + 16);
    v77 = *(_DWORD *)(v76 + 14976);
    if ( v77 )
    {
      v91 = (unsigned int)(v77 - 1);
      *(_DWORD *)(v76 + 14976) = v91;
      v26 = *(unsigned __int8 **)(v76 + 8 * v91 + 14848);
      v92 = *((unsigned int *)v26 + 134);
      *v26 = 0;
      v93 = *((_QWORD *)v26 + 66);
      *((_DWORD *)v26 + 106) = 0;
      v94 = v93 + (v92 << 6);
      while ( v93 != v94 )
      {
        while ( 1 )
        {
          v94 -= 64;
          v95 = *(void **)(v94 + 24);
          if ( v95 == (void *)(v94 + 40) )
            break;
          v106 = v93;
          v104 = v94;
          operator delete(v95);
          v94 = v104;
          v93 = v106;
          if ( v106 == v104 )
            goto LABEL_75;
        }
      }
LABEL_75:
      *((_DWORD *)v26 + 134) = 0;
    }
    else
    {
      v26 = (unsigned __int8 *)operator new(0x3A0u);
      *v26 = 0;
      *((_QWORD *)v26 + 12) = v26 + 112;
      *((_QWORD *)v26 + 16) = v26 + 144;
      *((_QWORD *)v26 + 20) = v26 + 176;
      *((_QWORD *)v26 + 24) = v26 + 208;
      *((_QWORD *)v26 + 28) = v26 + 240;
      *((_QWORD *)v26 + 32) = v26 + 272;
      *((_QWORD *)v26 + 36) = v26 + 304;
      *((_QWORD *)v26 + 40) = v26 + 336;
      *((_QWORD *)v26 + 44) = v26 + 368;
      *((_QWORD *)v26 + 48) = v26 + 400;
      *((_QWORD *)v26 + 52) = v26 + 432;
      *((_QWORD *)v26 + 13) = 0;
      v26[112] = 0;
      *((_QWORD *)v26 + 17) = 0;
      v26[144] = 0;
      *((_QWORD *)v26 + 21) = 0;
      v26[176] = 0;
      *((_QWORD *)v26 + 25) = 0;
      v26[208] = 0;
      *((_QWORD *)v26 + 29) = 0;
      v26[240] = 0;
      *((_QWORD *)v26 + 33) = 0;
      v26[272] = 0;
      *((_QWORD *)v26 + 37) = 0;
      v26[304] = 0;
      *((_QWORD *)v26 + 41) = 0;
      v26[336] = 0;
      *((_QWORD *)v26 + 45) = 0;
      v26[368] = 0;
      *((_QWORD *)v26 + 49) = 0;
      v26[400] = 0;
      *((_QWORD *)v26 + 53) = 0x800000000LL;
      *((_QWORD *)v26 + 66) = v26 + 544;
      *((_QWORD *)v26 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v25 + 8) = v26;
  }
  v26[*v26 + 1] = 2;
  v27 = *(_BYTE **)(v25 + 8);
  v28 = (unsigned __int8)*v27;
  *v27 = v28 + 1;
  *(_QWORD *)&v27[8 * v28 + 16] = v14;
  if ( !v115 )
    goto LABEL_21;
LABEL_14:
  v29 = v113;
  if ( !v113 )
  {
    v60 = v114;
    v61 = *(_DWORD *)(v114 + 14976);
    if ( v61 )
    {
      v62 = (unsigned int)(v61 - 1);
      *(_DWORD *)(v114 + 14976) = v62;
      v29 = *(unsigned __int8 **)(v60 + 8 * v62 + 14848);
      v63 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v64 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v65 = v64 + (v63 << 6);
      if ( v64 == v65 )
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
            v65 -= 64;
            v66 = *(void **)(v65 + 24);
            if ( v66 == (void *)(v65 + 40) )
              break;
            operator delete(v66);
            if ( v64 == v65 )
              goto LABEL_36;
          }
        }
        while ( v64 != v65 );
LABEL_36:
        v30 = *((unsigned int *)v29 + 106);
        v32 = v30 + 1;
      }
      *((_DWORD *)v29 + 134) = 0;
      v31 = *((unsigned int *)v29 + 107);
    }
    else
    {
      v78 = operator new(0x3A0u);
      v31 = 8;
      v32 = 1;
      v29 = (unsigned __int8 *)v78;
      *(_BYTE *)v78 = 0;
      *(_QWORD *)(v78 + 96) = v78 + 112;
      *(_QWORD *)(v78 + 128) = v78 + 144;
      *(_QWORD *)(v78 + 160) = v78 + 176;
      *(_QWORD *)(v78 + 192) = v78 + 208;
      *(_QWORD *)(v78 + 224) = v78 + 240;
      *(_QWORD *)(v78 + 256) = v78 + 272;
      *(_QWORD *)(v78 + 288) = v78 + 304;
      *(_QWORD *)(v78 + 320) = v78 + 336;
      *(_QWORD *)(v78 + 352) = v78 + 368;
      *(_QWORD *)(v78 + 384) = v78 + 400;
      *(_QWORD *)(v78 + 416) = v78 + 432;
      *(_QWORD *)(v78 + 104) = 0;
      *(_BYTE *)(v78 + 112) = 0;
      *(_QWORD *)(v78 + 136) = 0;
      *(_BYTE *)(v78 + 144) = 0;
      *(_QWORD *)(v78 + 168) = 0;
      *(_BYTE *)(v78 + 176) = 0;
      *(_QWORD *)(v78 + 200) = 0;
      *(_BYTE *)(v78 + 208) = 0;
      *(_QWORD *)(v78 + 232) = 0;
      *(_BYTE *)(v78 + 240) = 0;
      *(_QWORD *)(v78 + 264) = 0;
      *(_BYTE *)(v78 + 272) = 0;
      *(_QWORD *)(v78 + 296) = 0;
      *(_BYTE *)(v78 + 304) = 0;
      *(_QWORD *)(v78 + 328) = 0;
      *(_BYTE *)(v78 + 336) = 0;
      *(_QWORD *)(v78 + 360) = 0;
      *(_BYTE *)(v78 + 368) = 0;
      *(_QWORD *)(v78 + 392) = 0;
      *(_BYTE *)(v78 + 400) = 0;
      *(_QWORD *)(v78 + 424) = 0x800000000LL;
      *(_QWORD *)(v78 + 528) = v78 + 544;
      *(_QWORD *)(v78 + 536) = 0x600000000LL;
      v30 = 0;
    }
    v113 = v29;
    goto LABEL_16;
  }
LABEL_15:
  v30 = *((unsigned int *)v29 + 106);
  v31 = *((unsigned int *)v29 + 107);
  v32 = v30 + 1;
LABEL_16:
  v109 = __PAIR64__(v13, v12);
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
LABEL_7:
  sub_15F7200(v111);
}
