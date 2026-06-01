void __fastcall sub_18EDD50(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, char a5, double a6)
{
  unsigned __int64 *v7; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rax
  char v25; // dl
  unsigned __int64 v26; // rax
  char v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned __int8 *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // r14
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbp
  unsigned __int8 *v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
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
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // r14
  void *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // [rsp+8h] [rbp-F0h]
  __int64 v83; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v84; // [rsp+20h] [rbp-D8h] BYREF
  int v85; // [rsp+28h] [rbp-D0h]
  _QWORD v86[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v88; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v89; // [rsp+58h] [rbp-A0h]
  char v90; // [rsp+A8h] [rbp-50h]
  unsigned int v91; // [rsp+B0h] [rbp-48h]
  char v92; // [rsp+B4h] [rbp-44h]

  v7 = (unsigned __int64 *)(a1 + 8);
  sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, a5 == 0 ? 5692 : 5240, 0);
  v10 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v90 )
  {
    v7 = *(unsigned __int64 **)(v10 + 8);
    sub_AE9DF0(&v88, (__int64)v7, 8u);
    v25 = v90;
  }
  else
  {
    if ( !v92 )
    {
      v12 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
      goto LABEL_4;
    }
    v22 = sub_168B9E0(v86);
    v23 = v87;
    if ( v87 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
    v84 = v23;
    v24 = sub_1587BC0(v22, (__int64 *)&v84, v18, v19, v20, v21);
    v7 = (unsigned __int64 *)v11;
    sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v91 + 8), v11, 8u);
    v25 = v90;
  }
  v26 = *a4 & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(_QWORD *)(v26 + 8);
  if ( v25 )
  {
    v7 = *(unsigned __int64 **)(v26 + 8);
    sub_AE9DF0(&v88, (__int64)v7, 8u);
    v27 = v90;
    goto LABEL_15;
  }
LABEL_4:
  if ( !v92 )
  {
    v13 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v7, a6);
    v14 = v13;
    v15 = HIDWORD(v13);
    goto LABEL_6;
  }
  v63 = sub_168B9E0(v86);
  v64 = v87;
  if ( v87 )
    v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
  v84 = v64;
  v65 = sub_1587BC0(v63, (__int64 *)&v84, v59, v60, v61, v62);
  v7 = (unsigned __int64 *)v12;
  sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v91 + 8), v12, 8u);
  v27 = v90;
LABEL_15:
  v28 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v7, a6);
  v14 = v28;
  v29 = HIDWORD(v28);
  LODWORD(v15) = HIDWORD(v28);
  if ( v27 )
  {
    v30 = v88;
    if ( v88 )
    {
      v31 = *((unsigned int *)v88 + 106);
      v32 = *((unsigned int *)v88 + 107);
      v33 = v31 + 1;
    }
    else
    {
      v66 = v89;
      v67 = *(_DWORD *)(v89 + 14976);
      if ( v67 )
      {
        v68 = (unsigned int)(v67 - 1);
        *(_DWORD *)(v89 + 14976) = v68;
        v30 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
        v69 = *((unsigned int *)v30 + 134);
        *v30 = 0;
        v70 = *((_QWORD *)v30 + 66);
        *((_DWORD *)v30 + 106) = 0;
        v71 = v70 + (v69 << 6);
        if ( v70 == v71 )
        {
          v33 = 1;
          v31 = 0;
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
              v82 = v70;
              operator delete(v72);
              v70 = v82;
              if ( v82 == v71 )
                goto LABEL_41;
            }
          }
          while ( v70 != v71 );
LABEL_41:
          v31 = *((unsigned int *)v30 + 106);
          v33 = v31 + 1;
        }
        *((_DWORD *)v30 + 134) = 0;
        v32 = *((unsigned int *)v30 + 107);
      }
      else
      {
        v81 = operator new(0x3A0u);
        v32 = 8;
        v33 = 1;
        v30 = (unsigned __int8 *)v81;
        *(_BYTE *)v81 = 0;
        *(_QWORD *)(v81 + 96) = v81 + 112;
        *(_QWORD *)(v81 + 128) = v81 + 144;
        *(_QWORD *)(v81 + 160) = v81 + 176;
        *(_QWORD *)(v81 + 192) = v81 + 208;
        *(_QWORD *)(v81 + 224) = v81 + 240;
        *(_QWORD *)(v81 + 256) = v81 + 272;
        *(_QWORD *)(v81 + 288) = v81 + 304;
        *(_QWORD *)(v81 + 320) = v81 + 336;
        *(_QWORD *)(v81 + 352) = v81 + 368;
        *(_QWORD *)(v81 + 384) = v81 + 400;
        *(_QWORD *)(v81 + 416) = v81 + 432;
        *(_QWORD *)(v81 + 104) = 0;
        *(_BYTE *)(v81 + 112) = 0;
        *(_QWORD *)(v81 + 136) = 0;
        *(_BYTE *)(v81 + 144) = 0;
        *(_QWORD *)(v81 + 168) = 0;
        *(_BYTE *)(v81 + 176) = 0;
        *(_QWORD *)(v81 + 200) = 0;
        *(_BYTE *)(v81 + 208) = 0;
        *(_QWORD *)(v81 + 232) = 0;
        *(_BYTE *)(v81 + 240) = 0;
        *(_QWORD *)(v81 + 264) = 0;
        *(_BYTE *)(v81 + 272) = 0;
        *(_QWORD *)(v81 + 296) = 0;
        *(_BYTE *)(v81 + 304) = 0;
        *(_QWORD *)(v81 + 328) = 0;
        *(_BYTE *)(v81 + 336) = 0;
        *(_QWORD *)(v81 + 360) = 0;
        *(_BYTE *)(v81 + 368) = 0;
        *(_QWORD *)(v81 + 392) = 0;
        *(_BYTE *)(v81 + 400) = 0;
        *(_QWORD *)(v81 + 424) = 0x800000000LL;
        *(_QWORD *)(v81 + 528) = v81 + 544;
        *(_QWORD *)(v81 + 536) = 0x600000000LL;
        v31 = 0;
      }
      v88 = v30;
    }
    v84 = __PAIR64__(v29, v14);
    LOBYTE(v85) = 1;
    if ( v33 > v32 )
    {
      v7 = (unsigned __int64 *)(v30 + 432);
      sub_2237220(v30 + 416, v30 + 432, v33, 12);
      v31 = *((unsigned int *)v30 + 106);
    }
    v34 = *((_QWORD *)v30 + 52) + 12 * v31;
    *(_QWORD *)v34 = v84;
    *(_DWORD *)(v34 + 8) = v85;
    v35 = v90;
    ++*((_DWORD *)v30 + 106);
    goto LABEL_21;
  }
LABEL_6:
  if ( !v92 )
  {
    v16 = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)v7, a6);
    v17 = v16;
    a4 = (_QWORD *)HIDWORD(v16);
    goto LABEL_8;
  }
  v53 = sub_168B9E0(v86);
  v56 = v87;
  if ( v87 )
    v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
  v83 = v56;
  v57 = sub_1587BC0(v53, &v83, v51, v52, v54, v55);
  v7 = &v84;
  v58 = *v57 + 32LL * v91;
  v84 = __PAIR64__(v15, v14);
  LOBYTE(v85) = 1;
  sub_AEC610((__int64 *)(v58 + 8), (__int64 *)&v84);
  v35 = v90;
LABEL_21:
  v36 = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)v7, a6);
  v17 = v36;
  v37 = HIDWORD(v36);
  LODWORD(a4) = HIDWORD(v36);
  if ( !v35 )
  {
LABEL_8:
    if ( v92 )
    {
      v45 = sub_168B9E0(v86);
      v48 = v87;
      if ( v87 )
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
      v83 = v48;
      v49 = sub_1587BC0(v45, &v83, v43, v44, v46, v47);
      v50 = *v49 + 32LL * v91;
      v84 = __PAIR64__((unsigned int)a4, v17);
      LOBYTE(v85) = 1;
      sub_AEC610((__int64 *)(v50 + 8), (__int64 *)&v84);
    }
    goto LABEL_9;
  }
  v38 = v88;
  if ( v88 )
  {
    v39 = *((unsigned int *)v88 + 106);
    v40 = *((unsigned int *)v88 + 107);
    v41 = v39 + 1;
  }
  else
  {
    v73 = v89;
    v74 = *(_DWORD *)(v89 + 14976);
    if ( v74 )
    {
      v75 = (unsigned int)(v74 - 1);
      *(_DWORD *)(v89 + 14976) = v75;
      v38 = *(unsigned __int8 **)(v73 + 8 * v75 + 14848);
      v76 = *((unsigned int *)v38 + 134);
      v77 = *((_QWORD *)v38 + 66);
      *v38 = 0;
      *((_DWORD *)v38 + 106) = 0;
      v78 = v77 + (v76 << 6);
      if ( v77 == v78 )
      {
        v41 = 1;
        v39 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v78 -= 64;
            v79 = *(void **)(v78 + 24);
            if ( v79 == (void *)(v78 + 40) )
              break;
            operator delete(v79);
            if ( v77 == v78 )
              goto LABEL_47;
          }
        }
        while ( v77 != v78 );
LABEL_47:
        v39 = *((unsigned int *)v38 + 106);
        v41 = v39 + 1;
      }
      *((_DWORD *)v38 + 134) = 0;
      v40 = *((unsigned int *)v38 + 107);
    }
    else
    {
      v80 = operator new(0x3A0u);
      v40 = 8;
      v41 = 1;
      v38 = (unsigned __int8 *)v80;
      *(_BYTE *)v80 = 0;
      *(_QWORD *)(v80 + 96) = v80 + 112;
      *(_QWORD *)(v80 + 128) = v80 + 144;
      *(_QWORD *)(v80 + 160) = v80 + 176;
      *(_QWORD *)(v80 + 192) = v80 + 208;
      *(_QWORD *)(v80 + 224) = v80 + 240;
      *(_QWORD *)(v80 + 256) = v80 + 272;
      *(_QWORD *)(v80 + 288) = v80 + 304;
      *(_QWORD *)(v80 + 320) = v80 + 336;
      *(_QWORD *)(v80 + 352) = v80 + 368;
      *(_QWORD *)(v80 + 384) = v80 + 400;
      *(_QWORD *)(v80 + 416) = v80 + 432;
      *(_QWORD *)(v80 + 104) = 0;
      *(_BYTE *)(v80 + 112) = 0;
      *(_QWORD *)(v80 + 136) = 0;
      *(_BYTE *)(v80 + 144) = 0;
      *(_QWORD *)(v80 + 168) = 0;
      *(_BYTE *)(v80 + 176) = 0;
      *(_QWORD *)(v80 + 200) = 0;
      *(_BYTE *)(v80 + 208) = 0;
      *(_QWORD *)(v80 + 232) = 0;
      *(_BYTE *)(v80 + 240) = 0;
      *(_QWORD *)(v80 + 264) = 0;
      *(_BYTE *)(v80 + 272) = 0;
      *(_QWORD *)(v80 + 296) = 0;
      *(_BYTE *)(v80 + 304) = 0;
      *(_QWORD *)(v80 + 328) = 0;
      *(_BYTE *)(v80 + 336) = 0;
      *(_QWORD *)(v80 + 360) = 0;
      *(_BYTE *)(v80 + 368) = 0;
      *(_QWORD *)(v80 + 392) = 0;
      *(_BYTE *)(v80 + 400) = 0;
      *(_QWORD *)(v80 + 424) = 0x800000000LL;
      *(_QWORD *)(v80 + 528) = v80 + 544;
      *(_QWORD *)(v80 + 536) = 0x600000000LL;
      v39 = 0;
    }
    v88 = v38;
  }
  v84 = __PAIR64__(v37, v17);
  LOBYTE(v85) = 1;
  if ( v41 > v40 )
  {
    sub_2237220(v38 + 416, v38 + 432, v41, 12);
    v39 = *((unsigned int *)v38 + 106);
  }
  v42 = *((_QWORD *)v38 + 52) + 12 * v39;
  *(_QWORD *)v42 = v84;
  *(_DWORD *)(v42 + 8) = v85;
  ++*((_DWORD *)v38 + 106);
LABEL_9:
  sub_15F7200(v86);
}
