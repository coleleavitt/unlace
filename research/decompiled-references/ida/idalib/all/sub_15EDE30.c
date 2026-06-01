__int64 __fastcall sub_15EDE30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *i; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // r13
  unsigned __int64 *v16; // rbp
  unsigned __int64 v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  void *v26; // rdi
  void **v27; // rbx
  void **v28; // r15
  unsigned int v29; // r13d
  int v30; // r13d
  unsigned int v31; // edx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rbp
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 result; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  __int64 v43; // rsi
  bool v44; // zf
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *j; // rdx
  int v48; // edx
  char v49; // si
  _QWORD *v50; // rax
  unsigned __int64 v51; // rdx
  _QWORD *k; // rdx
  unsigned int v53; // eax
  unsigned int v54; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  char v58; // al
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rcx
  unsigned int v62; // ebx
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // rax
  unsigned __int64 v67; // rdx
  _QWORD *m; // rdx
  __int64 v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax

  *(_QWORD *)(a1 + 8) &= 0xFFEE0047uLL;
  v7 = *(_DWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 28) = 0;
  v8 = v7 >> 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 192) & 1) == 0 )
    {
      v9 = 4 * v8;
      goto LABEL_4;
    }
LABEL_82:
    v11 = (_QWORD *)(a1 + 200);
    v12 = 8;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(a1 + 196) )
    goto LABEL_10;
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
    goto LABEL_82;
LABEL_4:
  v10 = *(unsigned int *)(a1 + 208);
  if ( (unsigned int)v10 <= v9 || (unsigned int)v10 <= 0x40 )
  {
    v11 = *(_QWORD **)(a1 + 200);
    v12 = 2 * v10;
LABEL_7:
    for ( i = &v11[v12]; i != v11; v11 += 2 )
      *v11 = -4096;
    *(_QWORD *)(a1 + 192) &= 1uLL;
    goto LABEL_10;
  }
  if ( !v8 )
  {
    v43 = (unsigned int)v10;
LABEL_90:
    operator delete(*(_QWORD *)(a1 + 200), 16 * v43, 8);
    *(_BYTE *)(a1 + 192) |= 1u;
    goto LABEL_91;
  }
  v53 = v8 - 1;
  if ( !v53 )
  {
    v43 = *(unsigned int *)(a1 + 208);
    goto LABEL_90;
  }
  _BitScanReverse(&v53, v53);
  v54 = 1 << (33 - (v53 ^ 0x1F));
  if ( v54 - 5 <= 0x3A )
  {
    v54 = 64;
    operator delete(*(_QWORD *)(a1 + 200), 16LL * *(unsigned int *)(a1 + 208), 8);
    v57 = 1024;
    v58 = *(_BYTE *)(a1 + 192);
    goto LABEL_106;
  }
  if ( (_DWORD)v10 != v54 )
  {
    operator delete(*(_QWORD *)(a1 + 200), 16LL * *(unsigned int *)(a1 + 208), 8);
    v58 = *(_BYTE *)(a1 + 192) | 1;
    *(_BYTE *)(a1 + 192) = v58;
    if ( v54 <= 4 )
    {
LABEL_91:
      v44 = (*(_QWORD *)(a1 + 192) & 1LL) == 0;
      *(_QWORD *)(a1 + 192) &= 1uLL;
      if ( v44 )
      {
        v45 = *(_QWORD **)(a1 + 200);
        v46 = 2LL * *(unsigned int *)(a1 + 208);
      }
      else
      {
        v45 = (_QWORD *)(a1 + 200);
        v46 = 8;
      }
      for ( j = &v45[v46]; j != v45; v45 += 2 )
        *v45 = -4096;
      goto LABEL_10;
    }
    v57 = 16LL * v54;
LABEL_106:
    *(_BYTE *)(a1 + 192) = v58 & 0xFE;
    v59 = sub_22300B0(v57, 8, v55, v56, a5, a6);
    *(_DWORD *)(a1 + 208) = v54;
    *(_QWORD *)(a1 + 200) = v59;
    goto LABEL_91;
  }
  v44 = (*(_QWORD *)(a1 + 192) & 1LL) == 0;
  *(_QWORD *)(a1 + 192) &= 1uLL;
  if ( v44 )
  {
    v70 = *(_QWORD **)(a1 + 200);
    v71 = 2LL * (unsigned int)v10;
  }
  else
  {
    v70 = (_QWORD *)(a1 + 200);
    v71 = 8;
  }
  v72 = &v70[v71];
  do
  {
    *v70 = -4096;
    v70 += 2;
  }
  while ( v72 != v70 );
LABEL_10:
  v14 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 10) |= 2u;
  v15 = *(unsigned __int64 **)(a1 + 448);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(v14 + 196);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(v14 + 200);
  v16 = &v15[5 * *(unsigned int *)(a1 + 456)];
LABEL_11:
  while ( v15 != v16 )
  {
    while ( 1 )
    {
      v16 -= 5;
      v17 = v16[4];
      if ( v17 )
      {
        if ( (v17 & 4) != 0 )
        {
          v18 = (void **)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          v19 = v18;
          if ( v18 )
          {
            v20 = (void **)*v18;
            if ( v20 != v19 + 2 )
              free(v20);
            operator delete(v19, 0x30u);
          }
        }
      }
      v21 = *v16;
      if ( !*v16 )
        break;
      v22 = v16[1];
      if ( !v22 )
        break;
      if ( v21 >= v22 && v21 <= v22 + 14848 )
      {
        v41 = *(unsigned int *)(v22 + 14976);
        *(_DWORD *)(v22 + 14976) = v41 + 1;
        *(_QWORD *)(v22 + 8 * v41 + 14848) = v21;
        goto LABEL_11;
      }
      v23 = *(_QWORD **)(v21 + 528);
      v24 = &v23[8 * (unsigned __int64)*(unsigned int *)(v21 + 536)];
      if ( v23 != v24 )
      {
        do
        {
          while ( 1 )
          {
            v24 -= 8;
            v25 = (_QWORD *)v24[3];
            if ( v25 == v24 + 5 )
              break;
            operator delete(v25);
            if ( v23 == v24 )
              goto LABEL_24;
          }
        }
        while ( v23 != v24 );
LABEL_24:
        v24 = *(_QWORD **)(v21 + 528);
      }
      if ( v24 != (_QWORD *)(v21 + 544) )
        free(v24);
      v26 = *(void **)(v21 + 416);
      if ( v26 != (void *)(v21 + 432) )
        free(v26);
      v27 = (void **)(v21 + 384);
      v28 = (void **)(v21 + 64);
      do
      {
        while ( *v27 != v27 + 2 )
        {
          operator delete(*v27);
          v27 -= 4;
          if ( v27 == v28 )
            goto LABEL_32;
        }
        v27 -= 4;
      }
      while ( v27 != v28 );
LABEL_32:
      operator delete((void *)v21, 0x3A0u);
      if ( v15 == v16 )
        goto LABEL_33;
    }
  }
LABEL_33:
  v29 = *(_DWORD *)(a1 + 760);
  *(_DWORD *)(a1 + 456) = 0;
  v30 = v29 >> 1;
  if ( v30 )
  {
    if ( (*(_BYTE *)(a1 + 760) & 1) == 0 )
    {
      v31 = 4 * v30;
      goto LABEL_36;
    }
LABEL_73:
    v32 = (_QWORD *)(a1 + 768);
    v34 = (_QWORD *)(a1 + 1280);
    goto LABEL_38;
  }
  if ( !*(_DWORD *)(a1 + 764) )
    goto LABEL_48;
  v31 = 0;
  if ( (*(_BYTE *)(a1 + 760) & 1) != 0 )
    goto LABEL_73;
LABEL_36:
  v32 = *(_QWORD **)(a1 + 768);
  v33 = *(unsigned int *)(a1 + 776);
  v34 = &v32[8 * v33];
  if ( (unsigned int)v33 <= v31 || (unsigned int)v33 <= 0x40 )
  {
LABEL_38:
    if ( v32 == v34 )
    {
LABEL_47:
      *(_QWORD *)(a1 + 760) &= 1uLL;
      goto LABEL_48;
    }
    while ( 1 )
    {
      while ( !*v32 )
      {
        if ( v32[1] )
          goto LABEL_41;
        v32 += 8;
        if ( v32 == v34 )
          goto LABEL_47;
      }
      if ( *v32 != 4 || v32[1] )
      {
LABEL_41:
        v35 = (_QWORD *)v32[2];
        if ( v35 != v32 + 4 )
          free(v35);
      }
      *v32 = 0;
      v32 += 8;
      *(v32 - 7) = 0;
      if ( v32 == v34 )
        goto LABEL_47;
    }
  }
  do
  {
    if ( !*v32 || *v32 == 4 )
    {
      if ( v32[1] )
      {
        v42 = (_QWORD *)v32[2];
        if ( v42 != v32 + 4 )
LABEL_76:
          free(v42);
      }
    }
    else
    {
      v42 = (_QWORD *)v32[2];
      if ( v42 != v32 + 4 )
        goto LABEL_76;
    }
    v32 += 8;
  }
  while ( v32 != v34 );
  v48 = *(unsigned __int8 *)(a1 + 760);
  v49 = *(_BYTE *)(a1 + 760) & 1;
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      v30 = 2;
      if ( v49 )
        goto LABEL_98;
      goto LABEL_120;
    }
    _BitScanReverse(&v60, v30 - 1);
    v61 = 33 - (v60 ^ 0x1F);
    v62 = 1 << (33 - (v60 ^ 0x1F));
    if ( v62 - 9 > 0x36 )
    {
      if ( v49 )
      {
        if ( v62 <= 8 )
          goto LABEL_98;
      }
      else
      {
        v74 = *(unsigned int *)(a1 + 776);
        if ( v62 == (_DWORD)v74 )
          goto LABEL_98;
        operator delete(*(_QWORD *)(a1 + 768), v74 << 6, 8);
        v48 = *(unsigned __int8 *)(a1 + 760) | 1;
        *(_BYTE *)(a1 + 760) |= 1u;
        if ( v62 <= 8 )
          goto LABEL_112;
      }
    }
    else
    {
      if ( v49 )
      {
        v63 = 4096;
        v62 = 64;
LABEL_111:
        v64 = v48 & 0xFFFFFFFE;
        *(_BYTE *)(a1 + 760) = v64;
        v65 = sub_22300B0(v63, 8, v64, v61, a5, a6);
        *(_DWORD *)(a1 + 776) = v62;
        *(_QWORD *)(a1 + 768) = v65;
        goto LABEL_112;
      }
      v73 = *(unsigned int *)(a1 + 776);
      if ( (_DWORD)v73 == 64 )
        goto LABEL_98;
      v62 = 64;
      operator delete(*(_QWORD *)(a1 + 768), v73 << 6, 8);
      v48 = *(unsigned __int8 *)(a1 + 760);
    }
    v63 = (unsigned __int64)v62 << 6;
    goto LABEL_111;
  }
  if ( v49 )
  {
LABEL_98:
    v44 = (*(_QWORD *)(a1 + 760) & 1LL) == 0;
    *(_QWORD *)(a1 + 760) &= 1uLL;
    if ( v44 )
    {
      v50 = *(_QWORD **)(a1 + 768);
      v51 = (unsigned __int64)*(unsigned int *)(a1 + 776) << 6;
    }
    else
    {
      v50 = (_QWORD *)(a1 + 768);
      v51 = 512;
    }
    for ( k = (_QWORD *)((char *)v50 + v51); k != v50; *(v50 - 7) = 0 )
    {
      *v50 = 0;
      v50 += 8;
    }
    goto LABEL_48;
  }
LABEL_120:
  v69 = *(unsigned int *)(a1 + 776);
  if ( (_DWORD)v69 == v30 )
    goto LABEL_98;
  operator delete(*(_QWORD *)(a1 + 768), v69 << 6, 8);
  *(_BYTE *)(a1 + 760) |= 1u;
LABEL_112:
  v44 = (*(_QWORD *)(a1 + 760) & 1LL) == 0;
  *(_QWORD *)(a1 + 760) &= 1uLL;
  if ( v44 )
  {
    v66 = *(_QWORD **)(a1 + 768);
    v67 = (unsigned __int64)*(unsigned int *)(a1 + 776) << 6;
  }
  else
  {
    v66 = (_QWORD *)(a1 + 768);
    v67 = 512;
  }
  for ( m = (_QWORD *)((char *)v66 + v67); m != v66; *(v66 - 7) = 0 )
  {
    *v66 = 0;
    v66 += 8;
  }
LABEL_48:
  if ( *(_BYTE *)(a1 + 644) )
  {
LABEL_53:
    *(_QWORD *)(a1 + 636) = 0;
  }
  else
  {
    v36 = 4 * (*(_DWORD *)(a1 + 636) - *(_DWORD *)(a1 + 640));
    v37 = *(unsigned int *)(a1 + 632);
    if ( v36 < 0x20 )
      v36 = 32;
    if ( v36 >= (unsigned int)v37 )
    {
      memset(*(void **)(a1 + 624), -1, 8 * v37);
      goto LABEL_53;
    }
    sub_22364B0(a1 + 624);
  }
  if ( *(_BYTE *)(a1 + 428) )
  {
LABEL_59:
    *(_QWORD *)(a1 + 420) = 0;
  }
  else
  {
    v38 = 4 * (*(_DWORD *)(a1 + 420) - *(_DWORD *)(a1 + 424));
    v39 = *(unsigned int *)(a1 + 416);
    if ( v38 < 0x20 )
      v38 = 32;
    if ( (unsigned int)v39 <= v38 )
    {
      memset(*(void **)(a1 + 408), -1, 8 * v39);
      goto LABEL_59;
    }
    sub_22364B0(a1 + 408);
  }
  result = *(_QWORD *)(a1 + 440);
  if ( (result & 4) != 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    *(_DWORD *)(result + 8) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 440) = 0;
  }
  *(_DWORD *)(a1 + 720) = 0;
  return result;
}
