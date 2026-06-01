void __fastcall sub_18EC000(__int64 a1, unsigned int a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  char v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int8 *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int8 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // r13
  void *v60; // rdi
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // r14
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int64 v70; // [rsp+10h] [rbp-D8h] BYREF
  int v71; // [rsp+18h] [rbp-D0h]
  _QWORD v72[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v74; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+48h] [rbp-A0h]
  char v76; // [rsp+98h] [rbp-50h]
  unsigned int v77; // [rsp+A0h] [rbp-48h]
  char v78; // [rsp+A4h] [rbp-44h]

  v5 = a1 + 8;
  sub_168B9F0(
    (__int64)v72,
    (__int64 *)(a1 + 8),
    a2,
    (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 ? 5570 : 5306,
    0);
  if ( v76 )
  {
    v37 = v74;
    if ( !v74 )
    {
      v54 = v75;
      v55 = *(_DWORD *)(v75 + 14976);
      if ( v55 )
      {
        v56 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v75 + 14976) = v56;
        v37 = *(unsigned __int8 **)(v54 + 8 * v56 + 14848);
        v57 = *((unsigned int *)v37 + 134);
        v58 = *((_QWORD *)v37 + 66);
        *v37 = 0;
        *((_DWORD *)v37 + 106) = 0;
        v59 = v58 + (v57 << 6);
        while ( v58 != v59 )
        {
          while ( 1 )
          {
            v59 -= 64;
            v60 = *(void **)(v59 + 24);
            if ( v60 == (void *)(v59 + 40) )
              break;
            operator delete(v60);
            if ( v58 == v59 )
              goto LABEL_36;
          }
        }
LABEL_36:
        *((_DWORD *)v37 + 134) = 0;
      }
      else
      {
        v37 = (unsigned __int8 *)operator new(0x3A0u);
        *v37 = 0;
        *((_QWORD *)v37 + 12) = v37 + 112;
        *((_QWORD *)v37 + 16) = v37 + 144;
        *((_QWORD *)v37 + 20) = v37 + 176;
        *((_QWORD *)v37 + 24) = v37 + 208;
        *((_QWORD *)v37 + 28) = v37 + 240;
        *((_QWORD *)v37 + 32) = v37 + 272;
        *((_QWORD *)v37 + 36) = v37 + 304;
        *((_QWORD *)v37 + 40) = v37 + 336;
        *((_QWORD *)v37 + 44) = v37 + 368;
        *((_QWORD *)v37 + 48) = v37 + 400;
        *((_QWORD *)v37 + 52) = v37 + 432;
        *((_QWORD *)v37 + 13) = 0;
        v37[112] = 0;
        *((_QWORD *)v37 + 17) = 0;
        v37[144] = 0;
        *((_QWORD *)v37 + 21) = 0;
        v37[176] = 0;
        *((_QWORD *)v37 + 25) = 0;
        v37[208] = 0;
        *((_QWORD *)v37 + 29) = 0;
        v37[240] = 0;
        *((_QWORD *)v37 + 33) = 0;
        v37[272] = 0;
        *((_QWORD *)v37 + 37) = 0;
        v37[304] = 0;
        *((_QWORD *)v37 + 41) = 0;
        v37[336] = 0;
        *((_QWORD *)v37 + 45) = 0;
        v37[368] = 0;
        *((_QWORD *)v37 + 49) = 0;
        v37[400] = 0;
        *((_QWORD *)v37 + 53) = 0x800000000LL;
        *((_QWORD *)v37 + 66) = v37 + 544;
        *((_QWORD *)v37 + 67) = 0x600000000LL;
      }
      v74 = v37;
    }
    v37[*v37 + 1] = 2;
    v7 = v74;
    v38 = *v74;
    v8 = (unsigned int)(v38 + 1);
    *v74 = v38 + 1;
    *(_QWORD *)&v7[8 * v38 + 16] = 0;
  }
  else if ( v78 )
  {
    v34 = sub_168B9E0(v72);
    v35 = v73;
    if ( v73 )
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
    v70 = v35;
    v36 = sub_1587BC0(v34, (__int64 *)&v70, v30, v31, v32, v33);
    v5 = 0;
    sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v77 + 8), 0, 2u);
  }
  v10 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5, (__int64)v7, v8, v9);
  v11 = v10;
  if ( v76 )
  {
    v5 = v10;
    sub_AE9DF0(&v74, v10, 8u);
    if ( v76 )
    {
LABEL_11:
      sub_AE9DF0(&v74, 0, 2u);
      v22 = v76;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v78 )
    {
LABEL_5:
      v12 = sub_EEC8C0(a3, v5, a4);
      v13 = v12;
      v14 = HIDWORD(v12);
      goto LABEL_6;
    }
    v19 = sub_168B9E0(v72);
    v20 = v73;
    if ( v73 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
    v70 = v20;
    v21 = sub_1587BC0(v19, (__int64 *)&v70, v15, v16, v17, v18);
    v5 = v11;
    sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v77 + 8), v11, 8u);
    if ( v76 )
      goto LABEL_11;
  }
  if ( !v78 )
    goto LABEL_5;
  v43 = sub_168B9E0(v72);
  v44 = v73;
  if ( v73 )
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
  v70 = v44;
  v45 = sub_1587BC0(v43, (__int64 *)&v70, v39, v40, v41, v42);
  sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v77 + 8), 0, 2u);
  v22 = v76;
LABEL_12:
  v23 = sub_EEC8C0(a3, 0, a4);
  v13 = v23;
  v24 = HIDWORD(v23);
  LODWORD(v14) = HIDWORD(v23);
  if ( !v22 )
  {
LABEL_6:
    if ( v78 )
    {
      v48 = sub_168B9E0(v72);
      v51 = v73;
      if ( v73 )
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
      v69 = v51;
      v52 = sub_1587BC0(v48, &v69, v46, v47, v49, v50);
      v53 = *v52 + 32LL * v77;
      v70 = __PAIR64__(v14, v13);
      LOBYTE(v71) = 1;
      sub_AEC610((__int64 *)(v53 + 8), (__int64 *)&v70);
    }
    goto LABEL_7;
  }
  v25 = v74;
  if ( v74 )
  {
    v26 = *((unsigned int *)v74 + 106);
    v27 = *((unsigned int *)v74 + 107);
    v28 = v26 + 1;
  }
  else
  {
    v61 = v75;
    v62 = *(_DWORD *)(v75 + 14976);
    if ( v62 )
    {
      v63 = (unsigned int)(v62 - 1);
      *(_DWORD *)(v75 + 14976) = v63;
      v25 = *(unsigned __int8 **)(v61 + 8 * v63 + 14848);
      v64 = *((unsigned int *)v25 + 134);
      v65 = *((_QWORD *)v25 + 66);
      *v25 = 0;
      *((_DWORD *)v25 + 106) = 0;
      v66 = v65 + (v64 << 6);
      if ( v65 == v66 )
      {
        v28 = 1;
        v26 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v66 -= 64;
            v67 = *(void **)(v66 + 24);
            if ( v67 == (void *)(v66 + 40) )
              break;
            operator delete(v67);
            if ( v65 == v66 )
              goto LABEL_41;
          }
        }
        while ( v65 != v66 );
LABEL_41:
        v26 = *((unsigned int *)v25 + 106);
        v28 = v26 + 1;
      }
      *((_DWORD *)v25 + 134) = 0;
      v27 = *((unsigned int *)v25 + 107);
    }
    else
    {
      v68 = operator new(0x3A0u);
      v27 = 8;
      v28 = 1;
      v25 = (unsigned __int8 *)v68;
      *(_BYTE *)v68 = 0;
      *(_QWORD *)(v68 + 96) = v68 + 112;
      *(_QWORD *)(v68 + 128) = v68 + 144;
      *(_QWORD *)(v68 + 160) = v68 + 176;
      *(_QWORD *)(v68 + 192) = v68 + 208;
      *(_QWORD *)(v68 + 224) = v68 + 240;
      *(_QWORD *)(v68 + 256) = v68 + 272;
      *(_QWORD *)(v68 + 288) = v68 + 304;
      *(_QWORD *)(v68 + 320) = v68 + 336;
      *(_QWORD *)(v68 + 352) = v68 + 368;
      *(_QWORD *)(v68 + 384) = v68 + 400;
      *(_QWORD *)(v68 + 416) = v68 + 432;
      *(_QWORD *)(v68 + 104) = 0;
      *(_BYTE *)(v68 + 112) = 0;
      *(_QWORD *)(v68 + 136) = 0;
      *(_BYTE *)(v68 + 144) = 0;
      *(_QWORD *)(v68 + 168) = 0;
      *(_BYTE *)(v68 + 176) = 0;
      *(_QWORD *)(v68 + 200) = 0;
      *(_BYTE *)(v68 + 208) = 0;
      *(_QWORD *)(v68 + 232) = 0;
      *(_BYTE *)(v68 + 240) = 0;
      *(_QWORD *)(v68 + 264) = 0;
      *(_BYTE *)(v68 + 272) = 0;
      *(_QWORD *)(v68 + 296) = 0;
      *(_BYTE *)(v68 + 304) = 0;
      *(_QWORD *)(v68 + 328) = 0;
      *(_BYTE *)(v68 + 336) = 0;
      *(_QWORD *)(v68 + 360) = 0;
      *(_BYTE *)(v68 + 368) = 0;
      *(_QWORD *)(v68 + 392) = 0;
      *(_BYTE *)(v68 + 400) = 0;
      *(_QWORD *)(v68 + 424) = 0x800000000LL;
      *(_QWORD *)(v68 + 528) = v68 + 544;
      *(_QWORD *)(v68 + 536) = 0x600000000LL;
      v26 = 0;
    }
    v74 = v25;
  }
  v70 = __PAIR64__(v24, v13);
  LOBYTE(v71) = 1;
  if ( v28 > v27 )
  {
    sub_2237220(v25 + 416, v25 + 432, v28, 12);
    v26 = *((unsigned int *)v25 + 106);
  }
  v29 = *((_QWORD *)v25 + 52) + 12 * v26;
  *(_QWORD *)v29 = v70;
  *(_DWORD *)(v29 + 8) = v71;
  ++*((_DWORD *)v25 + 106);
LABEL_7:
  sub_15F7200(v72);
}
