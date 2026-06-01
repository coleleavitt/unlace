__int64 __fastcall sub_16629D0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned int v7; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __int64 (*v17)(void); // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r15
  void *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // eax
  void **v37; // r12
  unsigned __int64 v38; // rax
  void **v39; // r13
  void **v40; // rbp
  void **v41; // rdi
  void **v42; // rdi
  void **v43; // rbp
  void **v44; // r13
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // r12
  void *v52; // rdi
  char v53; // al
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // r15
  unsigned int v58; // ecx
  unsigned int v59; // r12d
  __int64 v60; // [rsp+8h] [rbp-B0h]
  unsigned int v61; // [rsp+8h] [rbp-B0h]
  unsigned int v62; // [rsp+10h] [rbp-A8h]
  unsigned int v63; // [rsp+14h] [rbp-A4h]
  unsigned __int64 v65; // [rsp+20h] [rbp-98h]
  int v66; // [rsp+28h] [rbp-90h]
  char v67[8]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+38h] [rbp-80h]
  _QWORD *v69; // [rsp+40h] [rbp-78h]
  __int64 v70; // [rsp+48h] [rbp-70h]
  void *v71; // [rsp+50h] [rbp-68h]
  unsigned __int64 v72; // [rsp+58h] [rbp-60h]
  int v73; // [rsp+60h] [rbp-58h]
  char v74; // [rsp+68h] [rbp-50h]
  __int64 v75; // [rsp+70h] [rbp-48h]
  unsigned __int64 v76; // [rsp+78h] [rbp-40h]

  v7 = 0;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return v7;
  v7 = a5 & 3;
  if ( (a5 & 3) == 0 )
    return v7;
  v62 = a2;
  v12 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          (__int64)a4,
          a5,
          a6);
  v71 = nullptr;
  v69 = v12;
  v13 = *(_QWORD *)(a3 + 8);
  v14 = a5 & 3;
  v15 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = a1[31] + 2448LL;
  v73 = 0;
  v68 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  v70 = v13;
  v67[0] = v14 | v67[0] & 0xFC | 4;
  v72 = v16;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v53 = sub_B72F20(v15);
    v15 = v68;
    v75 = 0;
    v74 = v53 & 1 | v74 & 0xFC;
    if ( (v67[0] & 4) == 0 )
      goto LABEL_7;
  }
  else
  {
    v74 &= 0xFCu;
    v75 = 0;
  }
  v15 = sub_1654A20(v15);
LABEL_7:
  v76 = v15;
  v17 = *(__int64 (**)(void))(*(_QWORD *)v15 + 32LL);
  if ( (char *)v17 == (char *)sub_A01140 )
    v18 = sub_B70A60(v15);
  else
    v18 = v17();
  v76 = v18;
  v73 = 2941;
  v56 = sub_EEC8C0(a3, v14, a7);
  v57 = v72;
  v58 = v56;
  v59 = HIDWORD(v56);
  v19 = *(_DWORD *)(v72 + 14976);
  if ( v19 )
  {
    v20 = (unsigned int)(v19 - 1);
    *(_DWORD *)(v72 + 14976) = v20;
    v21 = *(_QWORD *)(v57 + 8 * v20 + 14848);
    v22 = *(unsigned int *)(v21 + 536);
    *(_BYTE *)v21 = 0;
    v23 = *(_QWORD *)(v21 + 528);
    *(_DWORD *)(v21 + 424) = 0;
    v24 = v23 + (v22 << 6);
    if ( v23 == v24 )
    {
      v27 = 1;
      v26 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          v63 = v58;
          v60 = v23;
          operator delete(v25);
          v23 = v60;
          v58 = v63;
          if ( v60 == v24 )
            goto LABEL_13;
        }
      }
      while ( v23 != v24 );
LABEL_13:
      v26 = *(unsigned int *)(v21 + 424);
      v27 = v26 + 1;
    }
    *(_DWORD *)(v21 + 536) = 0;
    v28 = *(unsigned int *)(v21 + 428);
  }
  else
  {
    v61 = v58;
    v55 = operator new(0x3A0u);
    v28 = 8;
    v27 = 1;
    v21 = v55;
    *(_BYTE *)v55 = 0;
    *(_QWORD *)(v55 + 96) = v55 + 112;
    *(_QWORD *)(v55 + 128) = v55 + 144;
    *(_QWORD *)(v55 + 160) = v55 + 176;
    *(_QWORD *)(v55 + 192) = v55 + 208;
    *(_QWORD *)(v55 + 224) = v55 + 240;
    *(_QWORD *)(v55 + 256) = v55 + 272;
    *(_QWORD *)(v55 + 288) = v55 + 304;
    *(_QWORD *)(v55 + 320) = v55 + 336;
    *(_QWORD *)(v55 + 352) = v55 + 368;
    *(_QWORD *)(v55 + 384) = v55 + 400;
    *(_QWORD *)(v55 + 416) = v55 + 432;
    *(_QWORD *)(v55 + 104) = 0;
    *(_BYTE *)(v55 + 112) = 0;
    *(_QWORD *)(v55 + 136) = 0;
    *(_BYTE *)(v55 + 144) = 0;
    *(_QWORD *)(v55 + 168) = 0;
    *(_BYTE *)(v55 + 176) = 0;
    *(_QWORD *)(v55 + 200) = 0;
    *(_BYTE *)(v55 + 208) = 0;
    *(_QWORD *)(v55 + 232) = 0;
    *(_BYTE *)(v55 + 240) = 0;
    *(_QWORD *)(v55 + 264) = 0;
    *(_BYTE *)(v55 + 272) = 0;
    *(_QWORD *)(v55 + 296) = 0;
    *(_BYTE *)(v55 + 304) = 0;
    *(_QWORD *)(v55 + 328) = 0;
    *(_BYTE *)(v55 + 336) = 0;
    *(_QWORD *)(v55 + 360) = 0;
    *(_BYTE *)(v55 + 368) = 0;
    *(_QWORD *)(v55 + 392) = 0;
    *(_BYTE *)(v55 + 400) = 0;
    *(_QWORD *)(v55 + 424) = 0x800000000LL;
    v58 = v61;
    *(_QWORD *)(v55 + 528) = v55 + 544;
    *(_QWORD *)(v55 + 536) = 0x600000000LL;
    v26 = 0;
  }
  v71 = (void *)v21;
  v65 = __PAIR64__(v59, v58);
  LOBYTE(v66) = 1;
  if ( v27 > v28 )
  {
    sub_2237220(v21 + 416, v21 + 432, v27, 12);
    v26 = *(unsigned int *)(v21 + 424);
  }
  v29 = *(_QWORD *)(v21 + 416) + 12 * v26;
  *(_QWORD *)v29 = v65;
  *(_DWORD *)(v29 + 8) = v66;
  ++*(_DWORD *)(v21 + 424);
  v30 = v71;
  v31 = *a4;
  if ( v71 )
  {
    v32 = *((unsigned int *)v71 + 106);
    v33 = *((unsigned int *)v71 + 107);
    v34 = v32 + 1;
  }
  else
  {
    v46 = v72;
    v47 = *(_DWORD *)(v72 + 14976);
    if ( v47 )
    {
      v48 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v72 + 14976) = v48;
      v30 = *(_QWORD **)(v46 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v30 + 134);
      *(_BYTE *)v30 = 0;
      v50 = v30[66];
      *((_DWORD *)v30 + 106) = 0;
      v51 = v50 + (v49 << 6);
      if ( v50 == v51 )
      {
        v34 = 1;
        v32 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v51 -= 64;
            v52 = *(void **)(v51 + 24);
            if ( v52 == (void *)(v51 + 40) )
              break;
            operator delete(v52);
            if ( v50 == v51 )
              goto LABEL_47;
          }
        }
        while ( v50 != v51 );
LABEL_47:
        v32 = *((unsigned int *)v30 + 106);
        v34 = v32 + 1;
      }
      *((_DWORD *)v30 + 134) = 0;
      v33 = *((unsigned int *)v30 + 107);
    }
    else
    {
      v54 = (_BYTE *)operator new(0x3A0u);
      v33 = 8;
      v34 = 1;
      v30 = v54;
      *v54 = 0;
      *((_QWORD *)v54 + 12) = v54 + 112;
      *((_QWORD *)v54 + 16) = v54 + 144;
      *((_QWORD *)v54 + 20) = v54 + 176;
      *((_QWORD *)v54 + 24) = v54 + 208;
      *((_QWORD *)v54 + 28) = v54 + 240;
      *((_QWORD *)v54 + 32) = v54 + 272;
      *((_QWORD *)v54 + 36) = v54 + 304;
      *((_QWORD *)v54 + 40) = v54 + 336;
      *((_QWORD *)v54 + 44) = v54 + 368;
      *((_QWORD *)v54 + 48) = v54 + 400;
      *((_QWORD *)v54 + 52) = v54 + 432;
      *((_QWORD *)v54 + 13) = 0;
      v54[112] = 0;
      *((_QWORD *)v54 + 17) = 0;
      v54[144] = 0;
      *((_QWORD *)v54 + 21) = 0;
      v54[176] = 0;
      *((_QWORD *)v54 + 25) = 0;
      v54[208] = 0;
      *((_QWORD *)v54 + 29) = 0;
      v54[240] = 0;
      *((_QWORD *)v54 + 33) = 0;
      v54[272] = 0;
      *((_QWORD *)v54 + 37) = 0;
      v54[304] = 0;
      *((_QWORD *)v54 + 41) = 0;
      v54[336] = 0;
      *((_QWORD *)v54 + 45) = 0;
      v54[368] = 0;
      *((_QWORD *)v54 + 49) = 0;
      v54[400] = 0;
      *((_QWORD *)v54 + 53) = 0x800000000LL;
      *((_QWORD *)v54 + 66) = v54 + 544;
      *((_QWORD *)v54 + 67) = 0x600000000LL;
      v32 = 0;
    }
    v71 = v30;
  }
  LOBYTE(v66) = 1;
  if ( v34 > v33 )
  {
    sub_2237220(v30 + 52, v30 + 54, v34, 12);
    v32 = *((unsigned int *)v30 + 106);
  }
  v35 = v30[52] + 12 * v32;
  *(_QWORD *)v35 = v31;
  *(_DWORD *)(v35 + 8) = v66;
  ++*((_DWORD *)v30 + 106);
  v36 = sub_165D180(a1, v62, (__int64)v67);
  v37 = (void **)v71;
  v7 = v36;
  if ( v71 )
  {
    v38 = v72;
    if ( v72 )
    {
      if ( (unsigned __int64)v71 < v72 || (unsigned __int64)v71 > v72 + 14848 )
      {
        v39 = *((void ***)v71 + 66);
        v40 = &v39[8 * (unsigned __int64)*((unsigned int *)v71 + 134)];
        if ( v39 != v40 )
        {
          do
          {
            while ( 1 )
            {
              v40 -= 8;
              v41 = (void **)v40[3];
              if ( v41 == v40 + 5 )
                break;
              operator delete(v41);
              if ( v39 == v40 )
                goto LABEL_27;
            }
          }
          while ( v39 != v40 );
LABEL_27:
          v40 = (void **)v37[66];
        }
        if ( v40 != v37 + 68 )
          free(v40);
        v42 = (void **)v37[52];
        if ( v42 != v37 + 54 )
          free(v42);
        v43 = v37 + 48;
        v44 = v37 + 8;
        do
        {
          while ( *v43 != v43 + 2 )
          {
            operator delete(*v43);
            v43 -= 4;
            if ( v44 == v43 )
              goto LABEL_35;
          }
          v43 -= 4;
        }
        while ( v43 != v44 );
LABEL_35:
        operator delete(v37, 0x3A0u);
      }
      else
      {
        v45 = *(unsigned int *)(v72 + 14976);
        *(_DWORD *)(v72 + 14976) = v45 + 1;
        *(_QWORD *)(v38 + 8 * v45 + 14848) = v37;
      }
    }
  }
  return v7;
}
