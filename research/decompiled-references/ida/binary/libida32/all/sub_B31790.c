unsigned int *__fastcall sub_B31790(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r14d
  __int64 v9; // r12
  __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned int *v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned __int8 *v19; // r14
  _QWORD *v20; // rdx
  __int64 v21; // rax
  const char *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rbp
  int v25; // r15d
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  void *v31; // rdi
  void **v32; // r12
  unsigned __int64 v33; // rax
  void **v34; // r13
  void **v35; // rbp
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbp
  void **v39; // r13
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r15
  void *v47; // rdi
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r12
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // [rsp+8h] [rbp-A0h]
  __int64 v57; // [rsp+8h] [rbp-A0h]
  int v58; // [rsp+1Ch] [rbp-8Ch]
  void *v59; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v60; // [rsp+28h] [rbp-80h]
  __int64 v61; // [rsp+30h] [rbp-78h]
  void *v62; // [rsp+40h] [rbp-68h]
  _BYTE v63[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v64; // [rsp+60h] [rbp-48h]

  v7 = a2;
  v9 = (int)a5;
  v11 = *(__int64 **)a1;
  v12 = *v11;
  v11[10] += 48;
  v13 = (unsigned int *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v11[1] >= (unsigned __int64)(v13 + 12) && v12 )
  {
    *v11 = (__int64)(v13 + 12);
  }
  else
  {
    a2 = 48;
    v13 = (unsigned int *)sub_962430((__int64)v11, 48, 48, 4, a5, a6);
  }
  v14 = v13[3];
  v15 = v7 + 1;
  v13[1] = v7;
  v13[2] = a3;
  *v13 = v15;
  v16 = ((a4 & 0xFFFFF) << 8) | v14 & 0xF00000FF;
  *(_QWORD *)(v13 + 5) = 0;
  v13[3] = v16;
  *(_QWORD *)(v13 + 7) = 0;
  *((_BYTE *)v13 + 15) = (16 * (v9 & 1)) | HIBYTE(v16) & 0xEF;
  *(_QWORD *)(v13 + 3) = *(_QWORD *)(v13 + 3) & 0x1FFFFF00LL | 0xC;
  *(_QWORD *)(v13 + 9) = 0xFFFFFFFF00000000LL;
  v17 = *(_QWORD *)(a1 + 40);
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 48) & 1) == 0 )
    {
      sub_B169D0((__int64 *)v17, a2);
      v17 = *(_QWORD *)(a1 + 40);
    }
    if ( (*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      return v13;
    v15 = *v13;
  }
  sub_FA3370(&v59, *(_QWORD *)(a1 + 16), v15, 2646);
  v19 = (unsigned __int8 *)v59;
  if ( !v59 )
  {
    v41 = v60;
    v42 = *(_DWORD *)(v60 + 14976);
    if ( v42 )
    {
      v43 = (unsigned int)(v42 - 1);
      *(_DWORD *)(v60 + 14976) = v43;
      v19 = *(unsigned __int8 **)(v41 + 8 * v43 + 14848);
      v44 = *((unsigned int *)v19 + 134);
      *v19 = 0;
      v45 = *((_QWORD *)v19 + 66);
      *((_DWORD *)v19 + 106) = 0;
      v46 = v45 + (v44 << 6);
      while ( v45 != v46 )
      {
        while ( 1 )
        {
          v46 -= 64;
          v47 = *(void **)(v46 + 24);
          if ( v47 == (void *)(v46 + 40) )
            break;
          v56 = v45;
          operator delete(v47);
          v45 = v56;
          if ( v56 == v46 )
            goto LABEL_49;
        }
      }
LABEL_49:
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      v19 = (unsigned __int8 *)operator new(0x3A0u);
      *v19 = 0;
      *((_QWORD *)v19 + 12) = v19 + 112;
      *((_QWORD *)v19 + 16) = v19 + 144;
      *((_QWORD *)v19 + 20) = v19 + 176;
      *((_QWORD *)v19 + 24) = v19 + 208;
      *((_QWORD *)v19 + 28) = v19 + 240;
      *((_QWORD *)v19 + 32) = v19 + 272;
      *((_QWORD *)v19 + 36) = v19 + 304;
      *((_QWORD *)v19 + 40) = v19 + 336;
      *((_QWORD *)v19 + 44) = v19 + 368;
      *((_QWORD *)v19 + 48) = v19 + 400;
      *((_QWORD *)v19 + 52) = v19 + 432;
      *((_QWORD *)v19 + 13) = 0;
      v19[112] = 0;
      *((_QWORD *)v19 + 17) = 0;
      v19[144] = 0;
      *((_QWORD *)v19 + 21) = 0;
      v19[176] = 0;
      *((_QWORD *)v19 + 25) = 0;
      v19[208] = 0;
      *((_QWORD *)v19 + 29) = 0;
      v19[240] = 0;
      *((_QWORD *)v19 + 33) = 0;
      v19[272] = 0;
      *((_QWORD *)v19 + 37) = 0;
      v19[304] = 0;
      *((_QWORD *)v19 + 41) = 0;
      v19[336] = 0;
      *((_QWORD *)v19 + 45) = 0;
      v19[368] = 0;
      *((_QWORD *)v19 + 49) = 0;
      v19[400] = 0;
      *((_QWORD *)v19 + 53) = 0x800000000LL;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v59 = v19;
  }
  v19[*v19 + 1] = 2;
  v20 = v59;
  v21 = *(unsigned __int8 *)v59;
  *(_BYTE *)v59 = v21 + 1;
  v20[v21 + 2] = v9;
  v22 = (const char *)*sub_B1A550(*(_QWORD *)(a1 + 24), (v13[3] >> 8) & 0xFFFFF);
  v23 = 0;
  if ( v22 )
    v23 = strlen(v22);
  v24 = v59;
  v25 = v13[1] + 1;
  v26 = v23 + v25;
  if ( v59 )
  {
    v27 = *((unsigned int *)v59 + 106);
    v28 = *((unsigned int *)v59 + 107);
    v29 = v27 + 1;
  }
  else
  {
    v48 = v60;
    v49 = *(_DWORD *)(v60 + 14976);
    if ( v49 )
    {
      v50 = (unsigned int)(v49 - 1);
      *(_DWORD *)(v60 + 14976) = v50;
      v24 = *(_QWORD **)(v48 + 8 * v50 + 14848);
      v51 = *((unsigned int *)v24 + 134);
      *(_BYTE *)v24 = 0;
      v52 = v24[66];
      *((_DWORD *)v24 + 106) = 0;
      v53 = v52 + (v51 << 6);
      if ( v52 == v53 )
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
            v53 -= 64;
            v54 = *(void **)(v53 + 24);
            if ( v54 == (void *)(v53 + 40) )
              break;
            v57 = v52;
            operator delete(v54);
            v52 = v57;
            if ( v57 == v53 )
              goto LABEL_54;
          }
        }
        while ( v52 != v53 );
LABEL_54:
        v27 = *((unsigned int *)v24 + 106);
        v29 = v27 + 1;
      }
      *((_DWORD *)v24 + 134) = 0;
      v28 = *((unsigned int *)v24 + 107);
    }
    else
    {
      v55 = operator new(0x3A0u);
      v28 = 8;
      v29 = 1;
      v24 = (_QWORD *)v55;
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
      *(_QWORD *)(v55 + 528) = v55 + 544;
      *(_QWORD *)(v55 + 536) = 0x600000000LL;
      v27 = 0;
    }
    v59 = v24;
  }
  LOBYTE(v58) = 1;
  if ( v28 < v29 )
  {
    sub_22134E0(v24 + 52, v24 + 54, v29, 12);
    v27 = *((unsigned int *)v24 + 106);
  }
  v30 = v24[52] + 12 * v27;
  *(_QWORD *)v30 = __PAIR64__(v26, v25);
  *(_DWORD *)(v30 + 8) = v58;
  ++*((_DWORD *)v24 + 106);
  if ( (_BYTE)v64 )
  {
    sub_FA3A50(v61, &v59, HIBYTE(v64));
    v31 = v62;
    v61 = 0;
    v64 = 0;
    if ( v62 == v63 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v31 = v62;
  if ( v62 != v63 )
LABEL_19:
    operator delete(v31);
LABEL_20:
  v32 = (void **)v59;
  if ( v59 )
  {
    v33 = v60;
    if ( v60 )
    {
      if ( (unsigned __int64)v59 < v60 || (unsigned __int64)v59 > v60 + 14848 )
      {
        v34 = *((void ***)v59 + 66);
        v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v59 + 134)];
        if ( v34 != v35 )
        {
          do
          {
            while ( 1 )
            {
              v35 -= 8;
              v36 = (void **)v35[3];
              if ( v36 == v35 + 5 )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_26;
            }
          }
          while ( v34 != v35 );
LABEL_26:
          v35 = (void **)v32[66];
        }
        if ( v35 != v32 + 68 )
          free(v35);
        v37 = (void **)v32[52];
        v38 = v32 + 52;
        if ( v37 != v32 + 54 )
          free(v37);
        v39 = v32 + 12;
        do
        {
          while ( 1 )
          {
            v38 -= 4;
            if ( *v38 == v38 + 2 )
              break;
            operator delete(*v38);
            if ( v38 == v39 )
              goto LABEL_34;
          }
        }
        while ( v38 != v39 );
LABEL_34:
        operator delete(v32, 0x3A0u);
      }
      else
      {
        v40 = *(unsigned int *)(v60 + 14976);
        *(_DWORD *)(v60 + 14976) = v40 + 1;
        *(_QWORD *)(v33 + 8 * v40 + 14848) = v32;
      }
    }
  }
  return v13;
}

