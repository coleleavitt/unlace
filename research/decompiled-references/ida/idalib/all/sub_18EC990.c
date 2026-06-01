void __fastcall sub_18EC990(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4, double a5)
{
  unsigned __int64 *v6; // rsi
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  char v23; // al
  char v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int8 *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int8 *v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int8 *v40; // r13
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  __int64 v64; // rax
  _QWORD *v65; // rax
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
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // r15
  void *v79; // rdi
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // r14
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // [rsp+8h] [rbp-F0h]
  __int64 v90; // [rsp+8h] [rbp-F0h]
  __int64 v91; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v92; // [rsp+20h] [rbp-D8h] BYREF
  int v93; // [rsp+28h] [rbp-D0h]
  _QWORD v94[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v96; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+58h] [rbp-A0h]
  char v98; // [rsp+A8h] [rbp-50h]
  unsigned int v99; // [rsp+B0h] [rbp-48h]
  char v100; // [rsp+B4h] [rbp-44h]

  v6 = (unsigned __int64 *)(a1 + 8);
  sub_168B9F0((__int64)v94, (__int64 *)(a1 + 8), a2, 0x14C0u, 0);
  v9 = *(_QWORD *)(a3 + 8);
  if ( v98 )
  {
    v40 = v96;
    if ( !v96 )
    {
      v73 = v97;
      v74 = *(_DWORD *)(v97 + 14976);
      if ( v74 )
      {
        v75 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v97 + 14976) = v75;
        v40 = *(unsigned __int8 **)(v73 + 8 * v75 + 14848);
        v76 = *((unsigned int *)v40 + 134);
        *v40 = 0;
        v77 = *((_QWORD *)v40 + 66);
        *((_DWORD *)v40 + 106) = 0;
        v78 = v77 + (v76 << 6);
        while ( v77 != v78 )
        {
          while ( 1 )
          {
            v78 -= 64;
            v79 = *(void **)(v78 + 24);
            if ( v79 == (void *)(v78 + 40) )
              break;
            v90 = v77;
            operator delete(v79);
            v77 = v90;
            if ( v90 == v78 )
              goto LABEL_49;
          }
        }
LABEL_49:
        *((_DWORD *)v40 + 134) = 0;
      }
      else
      {
        v40 = (unsigned __int8 *)operator new(0x3A0u);
        *v40 = 0;
        *((_QWORD *)v40 + 12) = v40 + 112;
        *((_QWORD *)v40 + 16) = v40 + 144;
        *((_QWORD *)v40 + 20) = v40 + 176;
        *((_QWORD *)v40 + 24) = v40 + 208;
        *((_QWORD *)v40 + 28) = v40 + 240;
        *((_QWORD *)v40 + 32) = v40 + 272;
        *((_QWORD *)v40 + 36) = v40 + 304;
        *((_QWORD *)v40 + 40) = v40 + 336;
        *((_QWORD *)v40 + 44) = v40 + 368;
        *((_QWORD *)v40 + 48) = v40 + 400;
        *((_QWORD *)v40 + 52) = v40 + 432;
        *((_QWORD *)v40 + 13) = 0;
        v40[112] = 0;
        *((_QWORD *)v40 + 17) = 0;
        v40[144] = 0;
        *((_QWORD *)v40 + 21) = 0;
        v40[176] = 0;
        *((_QWORD *)v40 + 25) = 0;
        v40[208] = 0;
        *((_QWORD *)v40 + 29) = 0;
        v40[240] = 0;
        *((_QWORD *)v40 + 33) = 0;
        v40[272] = 0;
        *((_QWORD *)v40 + 37) = 0;
        v40[304] = 0;
        *((_QWORD *)v40 + 41) = 0;
        v40[336] = 0;
        *((_QWORD *)v40 + 45) = 0;
        v40[368] = 0;
        *((_QWORD *)v40 + 49) = 0;
        v40[400] = 0;
        *((_QWORD *)v40 + 53) = 0x800000000LL;
        *((_QWORD *)v40 + 66) = v40 + 544;
        *((_QWORD *)v40 + 67) = 0x600000000LL;
      }
      v96 = v40;
    }
    v40[*v40 + 1] = 8;
    v41 = v96;
    v42 = *v96;
    *v96 = v42 + 1;
    *(_QWORD *)&v41[8 * v42 + 16] = v9;
    v23 = v98;
  }
  else
  {
    if ( !v100 )
    {
      v10 = *(_QWORD *)(a4 + 8);
      goto LABEL_4;
    }
    v20 = sub_168B9E0(v94);
    v21 = v95;
    if ( v95 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
    v92 = v21;
    v22 = sub_1587BC0(v20, (__int64 *)&v92, v16, v17, v18, v19);
    v6 = (unsigned __int64 *)v9;
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v99 + 8), v9, 8u);
    v23 = v98;
  }
  v10 = *(_QWORD *)(a4 + 8);
  if ( v23 )
  {
    v6 = *(unsigned __int64 **)(a4 + 8);
    sub_AE9DF0(&v96, (__int64)v6, 8u);
    v24 = v98;
    goto LABEL_15;
  }
LABEL_4:
  if ( !v100 )
  {
    v11 = sub_EEC8C0(a3, (__int64)v6, a5);
    v12 = v11;
    v13 = HIDWORD(v11);
    goto LABEL_6;
  }
  v63 = sub_168B9E0(v94);
  v64 = v95;
  if ( v95 )
    v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
  v92 = v64;
  v65 = sub_1587BC0(v63, (__int64 *)&v92, v59, v60, v61, v62);
  v6 = (unsigned __int64 *)v10;
  sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v99 + 8), v10, 8u);
  v24 = v98;
LABEL_15:
  v25 = sub_EEC8C0(a3, (__int64)v6, a5);
  v12 = v25;
  v26 = HIDWORD(v25);
  LODWORD(v13) = HIDWORD(v25);
  if ( v24 )
  {
    v27 = v96;
    if ( v96 )
    {
      v28 = *((unsigned int *)v96 + 106);
      v29 = *((unsigned int *)v96 + 107);
      v30 = v28 + 1;
    }
    else
    {
      v66 = v97;
      v67 = *(_DWORD *)(v97 + 14976);
      if ( v67 )
      {
        v68 = (unsigned int)(v67 - 1);
        *(_DWORD *)(v97 + 14976) = v68;
        v27 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
        v69 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v70 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v71 = v70 + (v69 << 6);
        if ( v70 == v71 )
        {
          v30 = 1;
          v28 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v71 -= 64;
              v72 = *(void **)(v71 + 24);
              if ( v72 == (void *)(v71 + 40) )
                break;
              v89 = v70;
              operator delete(v72);
              v70 = v89;
              if ( v89 == v71 )
                goto LABEL_42;
            }
          }
          while ( v70 != v71 );
LABEL_42:
          v28 = *((unsigned int *)v27 + 106);
          v30 = v28 + 1;
        }
        *((_DWORD *)v27 + 134) = 0;
        v29 = *((unsigned int *)v27 + 107);
      }
      else
      {
        v88 = operator new(0x3A0u);
        v29 = 8;
        v30 = 1;
        v27 = (unsigned __int8 *)v88;
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
        v28 = 0;
      }
      v96 = v27;
    }
    v92 = __PAIR64__(v26, v12);
    LOBYTE(v93) = 1;
    if ( v30 > v29 )
    {
      v6 = (unsigned __int64 *)(v27 + 432);
      sub_2237220(v27 + 416, v27 + 432, v30, 12);
      v28 = *((unsigned int *)v27 + 106);
    }
    v31 = *((_QWORD *)v27 + 52) + 12 * v28;
    *(_QWORD *)v31 = v92;
    *(_DWORD *)(v31 + 8) = v93;
    v32 = v98;
    ++*((_DWORD *)v27 + 106);
    goto LABEL_21;
  }
LABEL_6:
  if ( !v100 )
  {
    v14 = sub_EEC8C0(a4, (__int64)v6, a5);
    v15 = v14;
    a4 = HIDWORD(v14);
    goto LABEL_8;
  }
  v53 = sub_168B9E0(v94);
  v56 = v95;
  if ( v95 )
    v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
  v91 = v56;
  v57 = sub_1587BC0(v53, &v91, v51, v52, v54, v55);
  v6 = &v92;
  v58 = *v57 + 32LL * v99;
  v92 = __PAIR64__(v13, v12);
  LOBYTE(v93) = 1;
  sub_AEC610((__int64 *)(v58 + 8), (__int64 *)&v92);
  v32 = v98;
LABEL_21:
  v33 = sub_EEC8C0(a4, (__int64)v6, a5);
  v15 = v33;
  v34 = HIDWORD(v33);
  LODWORD(a4) = HIDWORD(v33);
  if ( !v32 )
  {
LABEL_8:
    if ( v100 )
    {
      v45 = sub_168B9E0(v94);
      v48 = v95;
      if ( v95 )
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
      v91 = v48;
      v49 = sub_1587BC0(v45, &v91, v43, v44, v46, v47);
      v50 = *v49 + 32LL * v99;
      v92 = __PAIR64__(a4, v15);
      LOBYTE(v93) = 1;
      sub_AEC610((__int64 *)(v50 + 8), (__int64 *)&v92);
    }
    goto LABEL_9;
  }
  v35 = v96;
  if ( v96 )
  {
    v36 = *((unsigned int *)v96 + 106);
    v37 = *((unsigned int *)v96 + 107);
    v38 = v36 + 1;
  }
  else
  {
    v80 = v97;
    v81 = *(_DWORD *)(v97 + 14976);
    if ( v81 )
    {
      v82 = (unsigned int)(v81 - 1);
      *(_DWORD *)(v97 + 14976) = v82;
      v35 = *(unsigned __int8 **)(v80 + 8 * v82 + 14848);
      v83 = *((unsigned int *)v35 + 134);
      v84 = *((_QWORD *)v35 + 66);
      *v35 = 0;
      *((_DWORD *)v35 + 106) = 0;
      v85 = v84 + (v83 << 6);
      if ( v84 == v85 )
      {
        v38 = 1;
        v36 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v85 -= 64;
            v86 = *(void **)(v85 + 24);
            if ( v86 == (void *)(v85 + 40) )
              break;
            operator delete(v86);
            if ( v84 == v85 )
              goto LABEL_54;
          }
        }
        while ( v84 != v85 );
LABEL_54:
        v36 = *((unsigned int *)v35 + 106);
        v38 = v36 + 1;
      }
      *((_DWORD *)v35 + 134) = 0;
      v37 = *((unsigned int *)v35 + 107);
    }
    else
    {
      v87 = operator new(0x3A0u);
      v37 = 8;
      v38 = 1;
      v35 = (unsigned __int8 *)v87;
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
      v36 = 0;
    }
    v96 = v35;
  }
  v92 = __PAIR64__(v34, v15);
  LOBYTE(v93) = 1;
  if ( v38 > v37 )
  {
    sub_2237220(v35 + 416, v35 + 432, v38, 12);
    v36 = *((unsigned int *)v35 + 106);
  }
  v39 = *((_QWORD *)v35 + 52) + 12 * v36;
  *(_QWORD *)v39 = v92;
  *(_DWORD *)(v39 + 8) = v93;
  ++*((_DWORD *)v35 + 106);
LABEL_9:
  sub_15F7200(v94);
}
