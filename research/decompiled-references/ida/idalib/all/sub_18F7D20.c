void __fastcall sub_18F7D20(__int64 a1, int a2, unsigned __int64 a3, __m128i a4, double a5)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r12
  char *v12; // rax
  signed __int64 v13; // rdx
  void **v14; // rbp
  unsigned __int64 v15; // rax
  void **v16; // r12
  void **v17; // rbx
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbx
  void **v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  void *v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  void *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-108h]
  __int64 v63; // [rsp+0h] [rbp-108h]
  __int64 v64; // [rsp+8h] [rbp-100h]
  __int64 v65; // [rsp+8h] [rbp-100h]
  __int64 v66; // [rsp+8h] [rbp-100h]
  __int64 v67; // [rsp+10h] [rbp-F8h]
  __int64 v68; // [rsp+18h] [rbp-F0h]
  __int64 v69; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v70; // [rsp+34h] [rbp-D4h] BYREF
  int v71; // [rsp+3Ch] [rbp-CCh]
  void *v72; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v73; // [rsp+48h] [rbp-C0h]
  __int64 v74; // [rsp+50h] [rbp-B8h]
  __int64 v75; // [rsp+60h] [rbp-A8h]
  __int64 v76; // [rsp+68h] [rbp-A0h]
  char v77; // [rsp+B8h] [rbp-50h]
  unsigned int v78; // [rsp+C0h] [rbp-48h]
  char v79; // [rsp+C4h] [rbp-44h]

  v6 = a1 + 8;
  v7 = a1 + 8;
  sub_168B9F0((__int64)&v72, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 4), 0x1BA3u, 0);
  v10 = sub_EEC8C0(a3, a1 + 8, *(double *)a4.m128i_i64);
  if ( !v77 )
  {
    if ( !v79 )
      goto LABEL_3;
    v23 = sub_168B9E0(&v72);
    v27 = v74;
    if ( v74 )
    {
      v64 = v23;
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL))(v74);
      v23 = v64;
    }
    v69 = v27;
    v28 = sub_1587BC0(v23, &v69, v23, v24, v25, v26);
    v7 = (__int64)&v70;
    v29 = *v28 + 32LL * v78;
    v70 = v10;
    LOBYTE(v71) = 1;
    sub_AEC610((__int64 *)(v29 + 8), &v70);
    if ( v77 )
      goto LABEL_24;
LABEL_38:
    if ( v79 )
    {
      v43 = sub_168B9E0(&v72);
      v44 = v74;
      if ( v74 )
        v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL))(v74);
      v69 = v44;
      v45 = sub_1587BC0(v43, &v69, v39, v40, v41, v42);
      v7 = (__int64)&v70;
      v46 = *v45 + 32LL * v78;
      LODWORD(v70) = a2;
      HIDWORD(v70) = a2;
      LOBYTE(v71) = 1;
      sub_AEC610((__int64 *)(v46 + 8), &v70);
    }
    goto LABEL_3;
  }
  v35 = v75;
  if ( v75 )
  {
    v7 = *(unsigned int *)(v75 + 424);
    v36 = *(unsigned int *)(v75 + 428);
    v37 = v7 + 1;
  }
  else
  {
    v47 = v76;
    v48 = *(_DWORD *)(v76 + 14976);
    if ( v48 )
    {
      v49 = (unsigned int)(v48 - 1);
      *(_DWORD *)(v76 + 14976) = v49;
      v35 = *(_QWORD *)(v47 + 8 * v49 + 14848);
      v50 = *(unsigned int *)(v35 + 536);
      *(_BYTE *)v35 = 0;
      v51 = *(_QWORD *)(v35 + 528);
      *(_DWORD *)(v35 + 424) = 0;
      v52 = v51 + (v50 << 6);
      if ( v51 == v52 )
      {
        v37 = 1;
        v7 = 0;
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
            v68 = v52;
            v67 = v51;
            v65 = v35;
            operator delete(v53);
            v51 = v67;
            v52 = v68;
            v35 = v65;
            if ( v67 == v68 )
              goto LABEL_46;
          }
        }
        while ( v51 != v52 );
LABEL_46:
        v7 = *(unsigned int *)(v35 + 424);
        v37 = v7 + 1;
      }
      *(_DWORD *)(v35 + 536) = 0;
      v36 = *(unsigned int *)(v35 + 428);
    }
    else
    {
      v35 = operator new(0x3A0u);
      v36 = 8;
      v7 = 0;
      *(_BYTE *)v35 = 0;
      *(_QWORD *)(v35 + 96) = v35 + 112;
      *(_QWORD *)(v35 + 128) = v35 + 144;
      *(_QWORD *)(v35 + 160) = v35 + 176;
      *(_QWORD *)(v35 + 192) = v35 + 208;
      *(_QWORD *)(v35 + 224) = v35 + 240;
      *(_QWORD *)(v35 + 256) = v35 + 272;
      *(_QWORD *)(v35 + 288) = v35 + 304;
      *(_QWORD *)(v35 + 320) = v35 + 336;
      *(_QWORD *)(v35 + 352) = v35 + 368;
      *(_QWORD *)(v35 + 384) = v35 + 400;
      *(_QWORD *)(v35 + 416) = v35 + 432;
      *(_QWORD *)(v35 + 104) = 0;
      *(_BYTE *)(v35 + 112) = 0;
      *(_QWORD *)(v35 + 136) = 0;
      *(_BYTE *)(v35 + 144) = 0;
      *(_QWORD *)(v35 + 168) = 0;
      *(_BYTE *)(v35 + 176) = 0;
      *(_QWORD *)(v35 + 200) = 0;
      *(_BYTE *)(v35 + 208) = 0;
      *(_QWORD *)(v35 + 232) = 0;
      *(_BYTE *)(v35 + 240) = 0;
      *(_QWORD *)(v35 + 264) = 0;
      *(_BYTE *)(v35 + 272) = 0;
      *(_QWORD *)(v35 + 296) = 0;
      *(_BYTE *)(v35 + 304) = 0;
      *(_QWORD *)(v35 + 328) = 0;
      *(_BYTE *)(v35 + 336) = 0;
      *(_QWORD *)(v35 + 360) = 0;
      *(_BYTE *)(v35 + 368) = 0;
      *(_QWORD *)(v35 + 392) = 0;
      *(_BYTE *)(v35 + 400) = 0;
      *(_QWORD *)(v35 + 424) = 0x800000000LL;
      *(_QWORD *)(v35 + 536) = 0x600000000LL;
      *(_QWORD *)(v35 + 528) = v35 + 544;
      v37 = 1;
    }
    v75 = v35;
  }
  v70 = v10;
  LOBYTE(v71) = 1;
  if ( v37 > v36 )
  {
    v63 = v35;
    sub_2237220(v35 + 416, v35 + 432, v37, 12);
    v35 = v63;
    v7 = *(unsigned int *)(v63 + 424);
  }
  v38 = *(_QWORD *)(v35 + 416) + 12 * v7;
  *(_QWORD *)v38 = v70;
  *(_DWORD *)(v38 + 8) = v71;
  ++*(_DWORD *)(v35 + 424);
  if ( !v77 )
    goto LABEL_38;
LABEL_24:
  v30 = v75;
  if ( v75 )
  {
    v31 = *(unsigned int *)(v75 + 424);
    v32 = *(unsigned int *)(v75 + 428);
    v33 = v31 + 1;
  }
  else
  {
    v54 = v76;
    v55 = *(_DWORD *)(v76 + 14976);
    if ( v55 )
    {
      v56 = (unsigned int)(v55 - 1);
      *(_DWORD *)(v76 + 14976) = v56;
      v30 = *(_QWORD *)(v54 + 8 * v56 + 14848);
      v57 = *(unsigned int *)(v30 + 536);
      v58 = *(_QWORD *)(v30 + 528);
      *(_BYTE *)v30 = 0;
      *(_DWORD *)(v30 + 424) = 0;
      v59 = v58 + (v57 << 6);
      if ( v58 == v59 )
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
            v59 -= 64;
            v60 = *(void **)(v59 + 24);
            if ( v60 == (void *)(v59 + 40) )
              break;
            v66 = v59;
            v62 = v58;
            operator delete(v60);
            v58 = v62;
            v59 = v66;
            if ( v62 == v66 )
              goto LABEL_52;
          }
        }
        while ( v58 != v59 );
LABEL_52:
        v31 = *(unsigned int *)(v30 + 424);
        v33 = v31 + 1;
      }
      *(_DWORD *)(v30 + 536) = 0;
      v32 = *(unsigned int *)(v30 + 428);
    }
    else
    {
      v61 = operator new(0x3A0u);
      v32 = 8;
      v33 = 1;
      v30 = v61;
      *(_BYTE *)v61 = 0;
      *(_QWORD *)(v61 + 96) = v61 + 112;
      *(_QWORD *)(v61 + 128) = v61 + 144;
      *(_QWORD *)(v61 + 160) = v61 + 176;
      *(_QWORD *)(v61 + 192) = v61 + 208;
      *(_QWORD *)(v61 + 224) = v61 + 240;
      *(_QWORD *)(v61 + 256) = v61 + 272;
      *(_QWORD *)(v61 + 288) = v61 + 304;
      *(_QWORD *)(v61 + 320) = v61 + 336;
      *(_QWORD *)(v61 + 352) = v61 + 368;
      *(_QWORD *)(v61 + 384) = v61 + 400;
      *(_QWORD *)(v61 + 416) = v61 + 432;
      *(_QWORD *)(v61 + 104) = 0;
      *(_BYTE *)(v61 + 112) = 0;
      *(_QWORD *)(v61 + 136) = 0;
      *(_BYTE *)(v61 + 144) = 0;
      *(_QWORD *)(v61 + 168) = 0;
      *(_BYTE *)(v61 + 176) = 0;
      *(_QWORD *)(v61 + 200) = 0;
      *(_BYTE *)(v61 + 208) = 0;
      *(_QWORD *)(v61 + 232) = 0;
      *(_BYTE *)(v61 + 240) = 0;
      *(_QWORD *)(v61 + 264) = 0;
      *(_BYTE *)(v61 + 272) = 0;
      *(_QWORD *)(v61 + 296) = 0;
      *(_BYTE *)(v61 + 304) = 0;
      *(_QWORD *)(v61 + 328) = 0;
      *(_BYTE *)(v61 + 336) = 0;
      *(_QWORD *)(v61 + 360) = 0;
      *(_BYTE *)(v61 + 368) = 0;
      *(_QWORD *)(v61 + 392) = 0;
      *(_BYTE *)(v61 + 400) = 0;
      *(_QWORD *)(v61 + 424) = 0x800000000LL;
      *(_QWORD *)(v61 + 528) = v61 + 544;
      *(_QWORD *)(v61 + 536) = 0x600000000LL;
      v31 = 0;
    }
    v75 = v30;
  }
  LODWORD(v70) = a2;
  HIDWORD(v70) = a2;
  LOBYTE(v71) = 1;
  if ( v33 > v32 )
  {
    v7 = v30 + 432;
    sub_2237220(v30 + 416, v30 + 432, v33, 12);
    v31 = *(unsigned int *)(v30 + 424);
  }
  v34 = *(_QWORD *)(v30 + 416) + 12 * v31;
  *(_QWORD *)v34 = v70;
  *(_DWORD *)(v34 + 8) = v71;
  ++*(_DWORD *)(v30 + 424);
LABEL_3:
  sub_15F7200(&v72);
  v11 = sub_EEC8C0(a3, v7, *(double *)a4.m128i_i64);
  sub_168B9B0((__int64)&v72, v6, 6275);
  v12 = sub_BFA720((*(_WORD *)(a3 + 2) >> 3) & 0x3F);
  sub_AEC220((unsigned __int8 **)&v72, v12, v13);
  sub_18F7970(a1, *(_DWORD *)(a3 + 4), (__int64)&v72, v11, a4, a5);
  v14 = (void **)v72;
  if ( v72 )
  {
    v15 = v73;
    if ( v73 )
    {
      if ( (unsigned __int64)v72 < v73 || (unsigned __int64)v72 > v73 + 14848 )
      {
        v16 = *((void ***)v72 + 66);
        v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v72 + 134)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 8;
              v18 = (void **)v17[3];
              if ( v18 == v17 + 5 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_9;
            }
          }
          while ( v16 != v17 );
LABEL_9:
          v17 = (void **)v14[66];
        }
        if ( v17 != v14 + 68 )
          free(v17);
        v19 = (void **)v14[52];
        if ( v19 != v14 + 54 )
          free(v19);
        v20 = v14 + 48;
        v21 = v14 + 8;
        do
        {
          while ( *v20 != v20 + 2 )
          {
            operator delete(*v20);
            v20 -= 4;
            if ( v21 == v20 )
            {
              operator delete(v14, 0x3A0u);
              return;
            }
          }
          v20 -= 4;
        }
        while ( v21 != v20 );
        operator delete(v14, 0x3A0u);
      }
      else
      {
        v22 = *(unsigned int *)(v73 + 14976);
        *(_DWORD *)(v73 + 14976) = v22 + 1;
        *(_QWORD *)(v15 + 8 * v22 + 14848) = v14;
      }
    }
  }
}
