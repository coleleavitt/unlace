__int64 __fastcall sub_19B31F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, double a6)
{
  __int64 v8; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rsi
  char v23; // r15
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int8 *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r15
  __int64 v42; // rbp
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // r15
  void *v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  void *v62; // rdi
  __int64 v63; // [rsp+0h] [rbp-F8h]
  __int64 v64; // [rsp+0h] [rbp-F8h]
  __int64 v65; // [rsp+8h] [rbp-F0h]
  __int64 v66; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v67; // [rsp+20h] [rbp-D8h] BYREF
  int v68; // [rsp+28h] [rbp-D0h]
  __int64 v69; // [rsp+30h] [rbp-C8h] BYREF
  int v70; // [rsp+38h] [rbp-C0h]
  int v71; // [rsp+3Ch] [rbp-BCh]
  __int64 v72; // [rsp+40h] [rbp-B8h]
  char v73; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v74; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+58h] [rbp-A0h]
  __int64 v76; // [rsp+98h] [rbp-60h]
  int v77; // [rsp+A0h] [rbp-58h]
  char v78; // [rsp+A8h] [rbp-50h]
  __int64 v79; // [rsp+B0h] [rbp-48h]

  v8 = a3 + 8;
  sub_168B9F0((__int64)&v69, (__int64 *)(a3 + 8), a4, 0xC0Eu, 0);
  if ( v78 )
  {
    v22 = a5;
    sub_AE9DF0(&v74, a5, 8u);
    v23 = v78;
  }
  else
  {
    if ( !BYTE4(v79) )
    {
      v10 = sub_EEC8C0(*(_QWORD *)(a2 + 16), v8, a6);
      v11 = v10;
      v12 = HIDWORD(v10);
      goto LABEL_4;
    }
    v19 = sub_168B9E0(&v69);
    v20 = v72;
    if ( v72 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
    v67 = v20;
    v21 = sub_1587BC0(v19, (__int64 *)&v67, v15, v16, v17, v18);
    v22 = a5;
    sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * (unsigned int)v79 + 8), a5, 8u);
    v23 = v78;
  }
  v24 = sub_EEC8C0(*(_QWORD *)(a2 + 16), v22, a6);
  v11 = v24;
  v25 = HIDWORD(v24);
  LODWORD(v12) = HIDWORD(v24);
  if ( v23 )
  {
    v26 = v74;
    if ( v74 )
    {
      v27 = *((unsigned int *)v74 + 106);
      v28 = *((unsigned int *)v74 + 107);
      v29 = v27 + 1;
    }
    else
    {
      v47 = v75;
      v48 = *(_DWORD *)(v75 + 14976);
      if ( v48 )
      {
        v49 = (unsigned int)(v48 - 1);
        *(_DWORD *)(v75 + 14976) = v49;
        v26 = *(unsigned __int8 **)(v47 + 8 * v49 + 14848);
        v50 = *((unsigned int *)v26 + 134);
        *v26 = 0;
        v51 = *((_QWORD *)v26 + 66);
        *((_DWORD *)v26 + 106) = 0;
        v52 = v51 + (v50 << 6);
        if ( v51 == v52 )
        {
          v29 = 1;
          v27 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v52 -= 64;
              v53 = *(void **)(v52 + 24);
              if ( v53 == (void *)(v52 + 40) )
                break;
              v63 = v51;
              operator delete(v53);
              v51 = v63;
              if ( v63 == v52 )
                goto LABEL_30;
            }
          }
          while ( v51 != v52 );
LABEL_30:
          v27 = *((unsigned int *)v26 + 106);
          v29 = v27 + 1;
        }
        *((_DWORD *)v26 + 134) = 0;
        v28 = *((unsigned int *)v26 + 107);
      }
      else
      {
        v57 = operator new(0x3A0u);
        v28 = 8;
        v29 = 1;
        v26 = (unsigned __int8 *)v57;
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
        v27 = 0;
      }
      v74 = v26;
    }
    v67 = __PAIR64__(v25, v11);
    LOBYTE(v68) = 1;
    if ( v29 > v28 )
    {
      sub_2237220(v26 + 416, v26 + 432, v29, 12);
      v27 = *((unsigned int *)v26 + 106);
    }
    v30 = *((_QWORD *)v26 + 52) + 12 * v27;
    *(_QWORD *)v30 = v67;
    *(_DWORD *)(v30 + 8) = v68;
    v31 = v78;
    ++*((_DWORD *)v26 + 106);
    goto LABEL_16;
  }
LABEL_4:
  if ( !BYTE4(v79) )
  {
    v13 = v69;
    *(_BYTE *)(a1 + 120) = 0;
    *(_QWORD *)a1 = v13;
    *(_DWORD *)(a1 + 8) = v70;
    *(_DWORD *)(a1 + 12) = v71;
    *(_QWORD *)(a1 + 16) = v72;
    *(_BYTE *)(a1 + 24) = v73;
    goto LABEL_6;
  }
  v36 = sub_168B9E0(&v69);
  v39 = v72;
  if ( v72 )
    v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 32LL))(v72);
  v66 = v39;
  v40 = sub_1587BC0(v36, &v66, v34, v35, v37, v38);
  v41 = *v40 + 32LL * (unsigned int)v79;
  v42 = *(_QWORD *)(v41 + 8);
  if ( v42 )
  {
    v43 = *(unsigned int *)(v42 + 424);
    v44 = *(unsigned int *)(v42 + 428);
    v45 = v43 + 1;
  }
  else
  {
    v54 = *(_QWORD *)(v41 + 16);
    v55 = *(_DWORD *)(v54 + 14976);
    if ( v55 )
    {
      v58 = (unsigned int)(v55 - 1);
      *(_DWORD *)(v54 + 14976) = v58;
      v42 = *(_QWORD *)(v54 + 8 * v58 + 14848);
      v59 = *(unsigned int *)(v42 + 536);
      *(_BYTE *)v42 = 0;
      v60 = *(_QWORD *)(v42 + 528);
      *(_DWORD *)(v42 + 424) = 0;
      v61 = v60 + (v59 << 6);
      if ( v60 == v61 )
      {
        v45 = 1;
        v43 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v61 -= 64;
            v62 = *(void **)(v61 + 24);
            if ( v62 == (void *)(v61 + 40) )
              break;
            v65 = v60;
            v64 = v61;
            operator delete(v62);
            v61 = v64;
            v60 = v65;
            if ( v65 == v64 )
              goto LABEL_42;
          }
        }
        while ( v60 != v61 );
LABEL_42:
        v43 = *(unsigned int *)(v42 + 424);
        v45 = v43 + 1;
      }
      *(_DWORD *)(v42 + 536) = 0;
      v44 = *(unsigned int *)(v42 + 428);
    }
    else
    {
      v56 = operator new(0x3A0u);
      v44 = 8;
      v45 = 1;
      v42 = v56;
      *(_BYTE *)v56 = 0;
      *(_QWORD *)(v56 + 96) = v56 + 112;
      *(_QWORD *)(v56 + 128) = v56 + 144;
      *(_QWORD *)(v56 + 160) = v56 + 176;
      *(_QWORD *)(v56 + 192) = v56 + 208;
      *(_QWORD *)(v56 + 224) = v56 + 240;
      *(_QWORD *)(v56 + 256) = v56 + 272;
      *(_QWORD *)(v56 + 288) = v56 + 304;
      *(_QWORD *)(v56 + 320) = v56 + 336;
      *(_QWORD *)(v56 + 352) = v56 + 368;
      *(_QWORD *)(v56 + 384) = v56 + 400;
      *(_QWORD *)(v56 + 416) = v56 + 432;
      *(_QWORD *)(v56 + 104) = 0;
      *(_BYTE *)(v56 + 112) = 0;
      *(_QWORD *)(v56 + 136) = 0;
      *(_BYTE *)(v56 + 144) = 0;
      *(_QWORD *)(v56 + 168) = 0;
      *(_BYTE *)(v56 + 176) = 0;
      *(_QWORD *)(v56 + 200) = 0;
      *(_BYTE *)(v56 + 208) = 0;
      *(_QWORD *)(v56 + 232) = 0;
      *(_BYTE *)(v56 + 240) = 0;
      *(_QWORD *)(v56 + 264) = 0;
      *(_BYTE *)(v56 + 272) = 0;
      *(_QWORD *)(v56 + 296) = 0;
      *(_BYTE *)(v56 + 304) = 0;
      *(_QWORD *)(v56 + 328) = 0;
      *(_BYTE *)(v56 + 336) = 0;
      *(_QWORD *)(v56 + 360) = 0;
      *(_BYTE *)(v56 + 368) = 0;
      *(_QWORD *)(v56 + 392) = 0;
      *(_BYTE *)(v56 + 400) = 0;
      *(_QWORD *)(v56 + 424) = 0x800000000LL;
      *(_QWORD *)(v56 + 528) = v56 + 544;
      *(_QWORD *)(v56 + 536) = 0x600000000LL;
      v43 = 0;
    }
    *(_QWORD *)(v41 + 8) = v42;
  }
  v67 = __PAIR64__(v12, v11);
  LOBYTE(v68) = 1;
  if ( v45 > v44 )
  {
    sub_2237220(v42 + 416, v42 + 432, v45, 12);
    v43 = *(unsigned int *)(v42 + 424);
  }
  v46 = *(_QWORD *)(v42 + 416) + 12 * v43;
  *(_QWORD *)v46 = v67;
  *(_DWORD *)(v46 + 8) = v68;
  v31 = v78;
  ++*(_DWORD *)(v42 + 424);
LABEL_16:
  v32 = v69;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v32;
  *(_DWORD *)(a1 + 8) = v70;
  *(_DWORD *)(a1 + 12) = v71;
  *(_QWORD *)(a1 + 16) = v72;
  *(_BYTE *)(a1 + 24) = v73;
  if ( v31 )
  {
    sub_FC70F0(a1 + 32, (__int64)&v74);
    v33 = v76;
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v33;
    *(_DWORD *)(a1 + 112) = v77;
  }
LABEL_6:
  *(_QWORD *)(a1 + 128) = v79;
  sub_15F7200(&v69);
  return a1;
}
