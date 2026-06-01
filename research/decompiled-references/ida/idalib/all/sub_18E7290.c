void __fastcall sub_18E7290(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r14
  bool v7; // al
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int *v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // r14d
  unsigned __int8 *v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int8 *v34; // rbx
  _BOOL8 v35; // r13
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned __int8 *v45; // r13
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r15
  void *v65; // rdi
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // r15
  void *v72; // rdi
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // r14
  void *v79; // rdi
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // r14
  __int64 v85; // r13
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  void *v92; // rdi
  __int64 v93; // [rsp+0h] [rbp-F8h]
  __int64 v94; // [rsp+0h] [rbp-F8h]
  __int64 v95; // [rsp+0h] [rbp-F8h]
  __int64 v96; // [rsp+8h] [rbp-F0h]
  __int64 v97; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v98; // [rsp+20h] [rbp-D8h] BYREF
  int v99; // [rsp+28h] [rbp-D0h]
  _QWORD v100[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v101; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v102; // [rsp+50h] [rbp-A8h]
  __int64 v103; // [rsp+58h] [rbp-A0h]
  char v104; // [rsp+A8h] [rbp-50h]
  unsigned int v105; // [rsp+B0h] [rbp-48h]
  char v106; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v100, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v6 = **(_QWORD **)(a1 + 24);
  if ( v104 )
  {
    v45 = v102;
    if ( !v102 )
    {
      v66 = v103;
      v67 = *(_DWORD *)(v103 + 14976);
      if ( v67 )
      {
        v68 = (unsigned int)(v67 - 1);
        *(_DWORD *)(v103 + 14976) = v68;
        v45 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
        v69 = *((unsigned int *)v45 + 134);
        *v45 = 0;
        v70 = *((_QWORD *)v45 + 66);
        *((_DWORD *)v45 + 106) = 0;
        v71 = v70 + (v69 << 6);
        while ( v70 != v71 )
        {
          while ( 1 )
          {
            v71 -= 64;
            v72 = *(void **)(v71 + 24);
            if ( v72 == (void *)(v71 + 40) )
              break;
            v94 = v70;
            operator delete(v72);
            v70 = v94;
            if ( v94 == v71 )
              goto LABEL_46;
          }
        }
LABEL_46:
        *((_DWORD *)v45 + 134) = 0;
      }
      else
      {
        v45 = (unsigned __int8 *)operator new(0x3A0u);
        *v45 = 0;
        *((_QWORD *)v45 + 12) = v45 + 112;
        *((_QWORD *)v45 + 16) = v45 + 144;
        *((_QWORD *)v45 + 20) = v45 + 176;
        *((_QWORD *)v45 + 24) = v45 + 208;
        *((_QWORD *)v45 + 28) = v45 + 240;
        *((_QWORD *)v45 + 32) = v45 + 272;
        *((_QWORD *)v45 + 36) = v45 + 304;
        *((_QWORD *)v45 + 40) = v45 + 336;
        *((_QWORD *)v45 + 44) = v45 + 368;
        *((_QWORD *)v45 + 48) = v45 + 400;
        *((_QWORD *)v45 + 52) = v45 + 432;
        *((_QWORD *)v45 + 13) = 0;
        v45[112] = 0;
        *((_QWORD *)v45 + 17) = 0;
        v45[144] = 0;
        *((_QWORD *)v45 + 21) = 0;
        v45[176] = 0;
        *((_QWORD *)v45 + 25) = 0;
        v45[208] = 0;
        *((_QWORD *)v45 + 29) = 0;
        v45[240] = 0;
        *((_QWORD *)v45 + 33) = 0;
        v45[272] = 0;
        *((_QWORD *)v45 + 37) = 0;
        v45[304] = 0;
        *((_QWORD *)v45 + 41) = 0;
        v45[336] = 0;
        *((_QWORD *)v45 + 45) = 0;
        v45[368] = 0;
        *((_QWORD *)v45 + 49) = 0;
        v45[400] = 0;
        *((_QWORD *)v45 + 53) = 0x800000000LL;
        *((_QWORD *)v45 + 66) = v45 + 544;
        *((_QWORD *)v45 + 67) = 0x600000000LL;
      }
      v102 = v45;
    }
    v45[*v45 + 1] = 1;
    v46 = v102;
    v47 = *v102;
    *v102 = v47 + 1;
    *(_QWORD *)&v46[8 * v47 + 16] = v6;
  }
  else
  {
    if ( !v106 )
      goto LABEL_3;
    v23 = sub_168B9E0(v100);
    v24 = v101;
    if ( v101 )
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 32LL))(v101);
    v98 = v24;
    v25 = sub_1587BC0(v23, (__int64 *)&v98, v19, v20, v21, v22);
    sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v105 + 8), v6, 1u);
  }
  v26 = *(unsigned int **)(a1 + 16);
  v27 = *v26;
  v28 = v26[1];
  if ( v104 )
  {
    v29 = v102;
    if ( !v102 )
    {
      v59 = v103;
      v60 = *(_DWORD *)(v103 + 14976);
      if ( v60 )
      {
        v61 = (unsigned int)(v60 - 1);
        *(_DWORD *)(v103 + 14976) = v61;
        v29 = *(unsigned __int8 **)(v59 + 8 * v61 + 14848);
        v62 = *((unsigned int *)v29 + 134);
        *v29 = 0;
        v63 = *((_QWORD *)v29 + 66);
        *((_DWORD *)v29 + 106) = 0;
        v64 = v63 + (v62 << 6);
        if ( v63 == v64 )
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
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              v93 = v63;
              operator delete(v65);
              v63 = v93;
              if ( v93 == v64 )
                goto LABEL_39;
            }
          }
          while ( v63 != v64 );
LABEL_39:
          v30 = *((unsigned int *)v29 + 106);
          v32 = v30 + 1;
        }
        *((_DWORD *)v29 + 134) = 0;
        v31 = *((unsigned int *)v29 + 107);
      }
      else
      {
        v87 = operator new(0x3A0u);
        v31 = 8;
        v32 = 1;
        v29 = (unsigned __int8 *)v87;
        *(_BYTE *)v87 = 0;
        *(_QWORD *)(v87 + 96) = v87 + 112;
        *(_QWORD *)(v87 + 128) = v87 + 144;
        *(_QWORD *)(v87 + 160) = v87 + 176;
        *(_QWORD *)(v87 + 192) = v87 + 208;
        *(_QWORD *)(v87 + 224) = v87 + 240;
        *(_QWORD *)(v87 + 256) = v87 + 272;
        *(_QWORD *)(v87 + 288) = v87 + 304;
        *(_QWORD *)(v87 + 320) = v87 + 336;
        *(_QWORD *)(v87 + 352) = v87 + 368;
        *(_QWORD *)(v87 + 384) = v87 + 400;
        *(_QWORD *)(v87 + 416) = v87 + 432;
        *(_QWORD *)(v87 + 104) = 0;
        *(_BYTE *)(v87 + 112) = 0;
        *(_QWORD *)(v87 + 136) = 0;
        *(_BYTE *)(v87 + 144) = 0;
        *(_QWORD *)(v87 + 168) = 0;
        *(_BYTE *)(v87 + 176) = 0;
        *(_QWORD *)(v87 + 200) = 0;
        *(_BYTE *)(v87 + 208) = 0;
        *(_QWORD *)(v87 + 232) = 0;
        *(_BYTE *)(v87 + 240) = 0;
        *(_QWORD *)(v87 + 264) = 0;
        *(_BYTE *)(v87 + 272) = 0;
        *(_QWORD *)(v87 + 296) = 0;
        *(_BYTE *)(v87 + 304) = 0;
        *(_QWORD *)(v87 + 328) = 0;
        *(_BYTE *)(v87 + 336) = 0;
        *(_QWORD *)(v87 + 360) = 0;
        *(_BYTE *)(v87 + 368) = 0;
        *(_QWORD *)(v87 + 392) = 0;
        *(_BYTE *)(v87 + 400) = 0;
        *(_QWORD *)(v87 + 424) = 0x800000000LL;
        *(_QWORD *)(v87 + 528) = v87 + 544;
        *(_QWORD *)(v87 + 536) = 0x600000000LL;
        v30 = 0;
      }
      v102 = v29;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v106 )
      goto LABEL_3;
    v50 = sub_168B9E0(v100);
    v53 = v101;
    if ( v101 )
      v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 32LL))(v101);
    v97 = v53;
    v54 = sub_1587BC0(v50, &v97, v48, v49, v51, v52);
    v55 = *v54 + 32LL * v105;
    v29 = *(unsigned __int8 **)(v55 + 8);
    if ( !v29 )
    {
      v56 = *(_QWORD *)(v55 + 16);
      v57 = *(_DWORD *)(v56 + 14976);
      if ( v57 )
      {
        v88 = (unsigned int)(v57 - 1);
        *(_DWORD *)(v56 + 14976) = v88;
        v29 = *(unsigned __int8 **)(v56 + 8 * v88 + 14848);
        v89 = *((unsigned int *)v29 + 134);
        *v29 = 0;
        v90 = *((_QWORD *)v29 + 66);
        *((_DWORD *)v29 + 106) = 0;
        v91 = v90 + (v89 << 6);
        if ( v90 == v91 )
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
              v91 -= 64;
              v92 = *(void **)(v91 + 24);
              if ( v92 == (void *)(v91 + 40) )
                break;
              v96 = v90;
              v95 = v91;
              operator delete(v92);
              v91 = v95;
              v90 = v96;
              if ( v96 == v95 )
                goto LABEL_72;
            }
          }
          while ( v90 != v91 );
LABEL_72:
          v30 = *((unsigned int *)v29 + 106);
          v32 = v30 + 1;
        }
        *((_DWORD *)v29 + 134) = 0;
        v31 = *((unsigned int *)v29 + 107);
      }
      else
      {
        v58 = operator new(0x3A0u);
        v31 = 8;
        v32 = 1;
        v29 = (unsigned __int8 *)v58;
        *(_BYTE *)v58 = 0;
        *(_QWORD *)(v58 + 96) = v58 + 112;
        *(_QWORD *)(v58 + 128) = v58 + 144;
        *(_QWORD *)(v58 + 160) = v58 + 176;
        *(_QWORD *)(v58 + 192) = v58 + 208;
        *(_QWORD *)(v58 + 224) = v58 + 240;
        *(_QWORD *)(v58 + 256) = v58 + 272;
        *(_QWORD *)(v58 + 288) = v58 + 304;
        *(_QWORD *)(v58 + 320) = v58 + 336;
        *(_QWORD *)(v58 + 352) = v58 + 368;
        *(_QWORD *)(v58 + 384) = v58 + 400;
        *(_QWORD *)(v58 + 416) = v58 + 432;
        *(_QWORD *)(v58 + 104) = 0;
        *(_BYTE *)(v58 + 112) = 0;
        *(_QWORD *)(v58 + 136) = 0;
        *(_BYTE *)(v58 + 144) = 0;
        *(_QWORD *)(v58 + 168) = 0;
        *(_BYTE *)(v58 + 176) = 0;
        *(_QWORD *)(v58 + 200) = 0;
        *(_BYTE *)(v58 + 208) = 0;
        *(_QWORD *)(v58 + 232) = 0;
        *(_BYTE *)(v58 + 240) = 0;
        *(_QWORD *)(v58 + 264) = 0;
        *(_BYTE *)(v58 + 272) = 0;
        *(_QWORD *)(v58 + 296) = 0;
        *(_BYTE *)(v58 + 304) = 0;
        *(_QWORD *)(v58 + 328) = 0;
        *(_BYTE *)(v58 + 336) = 0;
        *(_QWORD *)(v58 + 360) = 0;
        *(_BYTE *)(v58 + 368) = 0;
        *(_QWORD *)(v58 + 392) = 0;
        *(_BYTE *)(v58 + 400) = 0;
        *(_QWORD *)(v58 + 424) = 0x800000000LL;
        *(_QWORD *)(v58 + 528) = v58 + 544;
        *(_QWORD *)(v58 + 536) = 0x600000000LL;
        v30 = 0;
      }
      *(_QWORD *)(v55 + 8) = v29;
      goto LABEL_17;
    }
  }
  v30 = *((unsigned int *)v29 + 106);
  v31 = *((unsigned int *)v29 + 107);
  v32 = v30 + 1;
LABEL_17:
  v98 = __PAIR64__(v28, v27);
  LOBYTE(v99) = 1;
  if ( v32 > v31 )
  {
    sub_2237220(v29 + 416, v29 + 432, v32, 12);
    v30 = *((unsigned int *)v29 + 106);
  }
  v33 = *((_QWORD *)v29 + 52) + 12 * v30;
  *(_QWORD *)v33 = v98;
  *(_DWORD *)(v33 + 8) = v99;
  ++*((_DWORD *)v29 + 106);
LABEL_3:
  v7 = sub_F582C0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = v7;
  if ( !v104 )
  {
    if ( !v106 )
      goto LABEL_5;
    v13 = sub_168B9E0(v100);
    v14 = v101;
    if ( v101 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 32LL))(v101);
    v98 = v14;
    v15 = sub_1587BC0(v13, (__int64 *)&v98, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v105 + 8), v8, 2u);
    if ( v104 )
      goto LABEL_9;
LABEL_22:
    if ( v106 )
    {
      v40 = sub_168B9E0(v100);
      v43 = v101;
      if ( v101 )
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 32LL))(v101);
      v98 = v43;
      v44 = sub_1587BC0(v40, (__int64 *)&v98, v38, v39, v41, v42);
      sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v105 + 8), a4, 8u);
    }
    goto LABEL_5;
  }
  v34 = v102;
  v35 = v7;
  if ( !v102 )
  {
    v73 = v103;
    v74 = *(_DWORD *)(v103 + 14976);
    if ( v74 )
    {
      v75 = (unsigned int)(v74 - 1);
      *(_DWORD *)(v103 + 14976) = v75;
      v34 = *(unsigned __int8 **)(v73 + 8 * v75 + 14848);
      v76 = *((unsigned int *)v34 + 134);
      *v34 = 0;
      v77 = *((_QWORD *)v34 + 66);
      *((_DWORD *)v34 + 106) = 0;
      v78 = v77 + (v76 << 6);
      while ( v77 != v78 )
      {
        while ( 1 )
        {
          v78 -= 64;
          v79 = *(void **)(v78 + 24);
          if ( v79 == (void *)(v78 + 40) )
            break;
          operator delete(v79);
          if ( v77 == v78 )
            goto LABEL_52;
        }
      }
LABEL_52:
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
    v102 = v34;
  }
  v34[*v34 + 1] = 2;
  v36 = v102;
  v37 = *v102;
  *v102 = v37 + 1;
  *(_QWORD *)&v36[8 * v37 + 16] = v35;
  if ( !v104 )
    goto LABEL_22;
LABEL_9:
  v16 = v102;
  if ( !v102 )
  {
    v80 = v103;
    v81 = *(_DWORD *)(v103 + 14976);
    if ( v81 )
    {
      v82 = (unsigned int)(v81 - 1);
      *(_DWORD *)(v103 + 14976) = v82;
      v16 = *(unsigned __int8 **)(v80 + 8 * v82 + 14848);
      v83 = *((unsigned int *)v16 + 134);
      *v16 = 0;
      v84 = *((_QWORD *)v16 + 66);
      *((_DWORD *)v16 + 106) = 0;
      v85 = v84 + (v83 << 6);
      while ( v84 != v85 )
      {
        while ( 1 )
        {
          v85 -= 64;
          v86 = *(void **)(v85 + 24);
          if ( v86 == (void *)(v85 + 40) )
            break;
          operator delete(v86);
          if ( v84 == v85 )
            goto LABEL_58;
        }
      }
LABEL_58:
      *((_DWORD *)v16 + 134) = 0;
    }
    else
    {
      v16 = (unsigned __int8 *)operator new(0x3A0u);
      *v16 = 0;
      *((_QWORD *)v16 + 12) = v16 + 112;
      *((_QWORD *)v16 + 16) = v16 + 144;
      *((_QWORD *)v16 + 20) = v16 + 176;
      *((_QWORD *)v16 + 24) = v16 + 208;
      *((_QWORD *)v16 + 28) = v16 + 240;
      *((_QWORD *)v16 + 32) = v16 + 272;
      *((_QWORD *)v16 + 36) = v16 + 304;
      *((_QWORD *)v16 + 40) = v16 + 336;
      *((_QWORD *)v16 + 44) = v16 + 368;
      *((_QWORD *)v16 + 48) = v16 + 400;
      *((_QWORD *)v16 + 52) = v16 + 432;
      *((_QWORD *)v16 + 13) = 0;
      v16[112] = 0;
      *((_QWORD *)v16 + 17) = 0;
      v16[144] = 0;
      *((_QWORD *)v16 + 21) = 0;
      v16[176] = 0;
      *((_QWORD *)v16 + 25) = 0;
      v16[208] = 0;
      *((_QWORD *)v16 + 29) = 0;
      v16[240] = 0;
      *((_QWORD *)v16 + 33) = 0;
      v16[272] = 0;
      *((_QWORD *)v16 + 37) = 0;
      v16[304] = 0;
      *((_QWORD *)v16 + 41) = 0;
      v16[336] = 0;
      *((_QWORD *)v16 + 45) = 0;
      v16[368] = 0;
      *((_QWORD *)v16 + 49) = 0;
      v16[400] = 0;
      *((_QWORD *)v16 + 53) = 0x800000000LL;
      *((_QWORD *)v16 + 66) = v16 + 544;
      *((_QWORD *)v16 + 67) = 0x600000000LL;
    }
    v102 = v16;
  }
  v16[*v16 + 1] = 8;
  v17 = v102;
  v18 = *v102;
  *v102 = v18 + 1;
  *(_QWORD *)&v17[8 * v18 + 16] = a4;
LABEL_5:
  sub_15F7200(v100);
}
