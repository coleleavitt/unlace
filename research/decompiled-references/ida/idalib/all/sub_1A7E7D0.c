__int64 __fastcall sub_1A7E7D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // r13
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int64 v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rax
  int v20; // r15d
  unsigned int v21; // esi
  __int64 result; // rax
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  __int64 v42; // rsi
  _QWORD *i; // rsi
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // dl
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  _QWORD *v50; // r13
  char v51; // dl
  unsigned int v52; // eax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 *v55; // rdi
  __int64 v56; // rcx
  _DWORD *v57; // rax
  _DWORD *v58; // rdx
  __int64 v59; // r13
  int v60; // r14d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  __int64 v66; // rdx
  _QWORD *j; // rdx
  __int64 *v68; // rdi
  __int64 v69; // rcx
  _DWORD *v70; // rax
  _DWORD *v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  _QWORD *v74; // [rsp+8h] [rbp-50h]
  _BYTE v75[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v9 = *(_QWORD *)(a1 + 232);
  v10 = *(unsigned int *)(a1 + 10152);
  v11 = *(_QWORD *)(a1 + 10144);
  if ( *(char *)(v9 + 22) < 0 )
  {
    v31 = *(void **)(a1 + 11128);
    *(_QWORD *)(a1 + 11144) = 0;
    *(_OWORD *)(a1 + 11128) = 0;
    v32 = v11 + 48 * v10 - 48;
    *(_QWORD *)(a1 + 11128) = *(_QWORD *)(v32 + 16);
    v33 = *(_QWORD *)(v32 + 24);
    *(_QWORD *)(v32 + 16) = 0;
    v34 = *(_QWORD *)(a1 + 11136);
    *(_QWORD *)(a1 + 11136) = v33;
    v35 = *(_QWORD *)(v32 + 32);
    *(_QWORD *)(v32 + 24) = v34;
    v36 = *(_QWORD *)(a1 + 11144);
    *(_QWORD *)(a1 + 11144) = v35;
    *(_QWORD *)(v32 + 32) = v36;
    if ( v31 )
      operator delete(v31);
    v37 = *(_QWORD *)(v32 + 16);
    if ( v37 != *(_QWORD *)(v32 + 24) )
      *(_QWORD *)(v32 + 24) = v37;
    ++*(_DWORD *)(v32 + 40);
    v38 = *(_DWORD *)(a1 + 12576);
    ++*(_DWORD *)(a1 + 11152);
    if ( v38 )
    {
      v39 = 4 * v38;
      a5 = 64;
      v40 = *(unsigned int *)(a1 + 12584);
      v41 = *(_QWORD **)(a1 + 12568);
      if ( (unsigned int)(4 * v38) < 0x40 )
        v39 = 64;
      if ( v39 >= (unsigned int)v40 )
      {
        v42 = 2 * v40;
LABEL_46:
        for ( i = &v41[v42]; i != v41; v41 += 2 )
          *v41 = -4096;
        *(_QWORD *)(a1 + 12576) = 0;
        goto LABEL_49;
      }
      v52 = v38 - 1;
      if ( v52 )
      {
        _BitScanReverse(&v52, v52);
        v9 = 33 - (v52 ^ 0x1F);
        v53 = (unsigned int)(1 << (33 - (v52 ^ 0x1F)));
        if ( (int)v53 < 64 )
          v53 = 64;
        if ( (_DWORD)v53 == (_DWORD)v40 )
        {
          *(_QWORD *)(a1 + 12576) = 0;
          v54 = &v41[2 * v53];
          do
          {
            *v41 = -4096;
            v41 += 2;
          }
          while ( v54 != v41 );
          goto LABEL_49;
        }
        v72 = (4 * (int)v53 / 3u + 1) | ((unsigned __int64)(4 * (int)v53 / 3u + 1) >> 1);
        v73 = ((v72 | (v72 >> 2)) >> 4) | v72 | (v72 >> 2) | ((((v72 | (v72 >> 2)) >> 4) | v72 | (v72 >> 2)) >> 8);
        v60 = (v73 | (v73 >> 16)) + 1;
        v59 = 16 * ((v73 | (v73 >> 16)) + 1);
      }
      else
      {
        v59 = 2048;
        v60 = 128;
      }
      operator delete(v41, 16 * v40, 8);
      *(_DWORD *)(a1 + 12584) = v60;
      v65 = (_QWORD *)sub_22300B0(v59, 8, v61, v62, v63, v64);
      v66 = *(unsigned int *)(a1 + 12584);
      *(_QWORD *)(a1 + 12576) = 0;
      v9 = -4096;
      *(_QWORD *)(a1 + 12568) = v65;
      for ( j = &v65[2 * v66]; j != v65; v65 += 2 )
        *v65 = -4096;
      goto LABEL_49;
    }
    if ( *(_DWORD *)(a1 + 12580) )
    {
      v41 = *(_QWORD **)(a1 + 12568);
      v46 = *(unsigned int *)(a1 + 12584);
      v42 = 2 * v46;
      if ( (unsigned int)v46 <= 0x40 )
        goto LABEL_46;
      operator delete(v41, v42 * 8, 8);
      *(_QWORD *)(a1 + 12568) = 0;
      *(_QWORD *)(a1 + 12576) = 0;
      *(_DWORD *)(a1 + 12584) = 0;
    }
LABEL_49:
    LODWORD(v10) = *(_DWORD *)(a1 + 10152);
    v11 = *(_QWORD *)(a1 + 10144);
  }
  v12 = (unsigned int)(v10 - 1);
  *(_DWORD *)(a1 + 10152) = v12;
  v13 = *(void **)(v11 + 48 * v12 + 16);
  if ( v13 )
    operator delete(v13);
  v14 = *(_QWORD *)(a1 + 272);
  v15 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFF) >= *(_DWORD *)(v14 + 476) && v15 < *(_DWORD *)(v14 + 480) )
  {
    v17 = *(unsigned int *)(v14 + 472);
    v75[0] = 0;
    v18 = v17 + 1;
    if ( (unsigned int)(v17 + 1) <= 1 )
      goto LABEL_17;
  }
  else
  {
    v16 = sub_101D590(*(_QWORD *)(a1 + 272), v15);
    v14 = *(_QWORD *)(a1 + 272);
    v75[0] = 0;
    v17 = v16;
    v18 = v16 + 1;
    if ( v16 + 1 <= 1 )
      goto LABEL_17;
  }
  if ( (int)v17 >= 0 )
  {
    v19 = *(_QWORD *)(v14 + 184) + 24LL * (unsigned int)v17;
    goto LABEL_9;
  }
  v44 = (unsigned int)(-2 - v17);
  v45 = *(_QWORD *)(*(_QWORD *)(v14 + 320) + 8LL * ((unsigned int)(-2 - v17) >> 6));
  if ( _bittest64(&v45, v44) )
  {
    a6 = (_QWORD *)(*(_QWORD *)(v14 + 272) + 8 * ((unsigned __int64)(int)v44 >> 5));
    if ( *a6 )
    {
      a5 = (-2 - (_BYTE)v17) & 0x1F;
      v19 = *a6 + 24 * a5;
      goto LABEL_9;
    }
    v55 = (__int64 *)(*(_QWORD *)(v14 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v56 = *v55;
    v55[10] += 768;
    v57 = (_DWORD *)((v56 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v55[1] >= (unsigned __int64)(v57 + 192) && v56 )
    {
      *v55 = (__int64)(v57 + 192);
    }
    else
    {
      v74 = a6;
      v57 = (_DWORD *)sub_986170((__int64)v55, 768, 768, 3, v44, (__int64)a6);
      a6 = v74;
      LOBYTE(v44) = -2 - v17;
    }
    *a6 = v57;
    v58 = v57 + 192;
    do
    {
      *v57 = 0;
      v57 += 6;
      *((_OWORD *)v57 - 1) = 0;
      *((_QWORD *)v57 - 1) = 0;
    }
    while ( v57 != v58 );
    a5 = v44 & 0x1F;
    v47 = v75[0];
    v9 = 3LL * (unsigned int)a5;
    v19 = *a6 + 24LL * (unsigned int)a5;
  }
  else
  {
    v19 = sub_101F930(v14, v44, v75);
    v47 = v75[0];
  }
  if ( !v47 )
  {
LABEL_9:
    if ( v19 && *(char *)(v19 + 3) >= 0 )
    {
      v20 = *(_DWORD *)v19;
      if ( (unsigned int)sub_101FBC0(v14, v17) + (v20 & 0x7FFFFFFF) != a2 )
      {
LABEL_12:
        v21 = a2;
        goto LABEL_13;
      }
    }
    else if ( a2 )
    {
      goto LABEL_12;
    }
    v75[0] = 0;
    v23 = *(_QWORD **)(a1 + 272);
    goto LABEL_32;
  }
LABEL_17:
  if ( a2 )
    goto LABEL_12;
  v23 = *(_QWORD **)(a1 + 272);
  v75[0] = 0;
  if ( v18 <= 1 )
    goto LABEL_19;
LABEL_32:
  if ( (int)v17 >= 0 )
  {
    v30 = v23[23] + 24 * v17;
LABEL_34:
    if ( v30 && *(char *)(v30 + 3) >= 0 )
    {
      v21 = *(_DWORD *)(v30 + 8);
      goto LABEL_13;
    }
LABEL_19:
    v21 = 0;
    goto LABEL_13;
  }
  v48 = (unsigned int)(-2 - v17);
  v49 = *(_QWORD *)(v23[40] + 8LL * ((unsigned int)(-2 - v17) >> 6));
  if ( _bittest64(&v49, v48) )
  {
    v50 = (_QWORD *)(v23[34] + 8 * ((unsigned __int64)(int)v48 >> 5));
    if ( *v50 )
    {
      v30 = *v50 + 24LL * ((-2 - (_BYTE)v17) & 0x1F);
      goto LABEL_34;
    }
    v68 = (__int64 *)(v23[36] & 0xFFFFFFFFFFFFFFF8LL);
    v69 = *v68;
    v68[10] += 768;
    v70 = (_DWORD *)((v69 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v68[1] >= (unsigned __int64)(v70 + 192) && v69 )
      *v68 = (__int64)(v70 + 192);
    else
      v70 = (_DWORD *)sub_986170((__int64)v68, 768, 768, 3, a5, (__int64)a6);
    *v50 = v70;
    v71 = v70 + 192;
    do
    {
      *v70 = 0;
      v70 += 6;
      *((_OWORD *)v70 - 1) = 0;
      *((_QWORD *)v70 - 1) = 0;
    }
    while ( v70 != v71 );
    v51 = v75[0];
    v9 = 3LL * ((-2 - (_BYTE)v17) & 0x1F);
    v30 = *v50 + 24LL * ((-2 - (_BYTE)v17) & 0x1F);
  }
  else
  {
    v30 = sub_101F930((__int64)v23, v48, v75);
    v51 = v75[0];
  }
  if ( !v51 )
    goto LABEL_34;
  v21 = 0;
LABEL_13:
  sub_1A7E4C0(a1, v21, a3, v9, a5, (__int64)a6);
  result = *(_QWORD *)(a1 + 232);
  if ( *(_BYTE *)(result + 201) >> 5 || *(char *)(result + 22) < 0 )
  {
    v24 = *(_QWORD *)(a1 + 544);
    if ( v24 )
    {
      while ( 1 )
      {
        v25 = sub_B8C1B0(v24);
        v26 = *(unsigned int *)(a1 + 10152);
        if ( !(_DWORD)v26 )
          break;
        v27 = 48 * v26;
        *(_QWORD *)(v25 - 8) = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + v27 - 40);
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 10144) + v27 - 40) )
          goto LABEL_27;
LABEL_23:
        result = sub_B8C1B0(v24);
        v28 = *(_QWORD *)(result + 16);
        if ( (v28 & 4) != 0 )
        {
          v24 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          if ( !v24 )
            return result;
        }
        else
        {
          v24 = v28 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v24 )
            return result;
        }
      }
      *(_QWORD *)(v25 - 8) = 0;
LABEL_27:
      v29 = sub_B8C1B0(v24);
      *(_QWORD *)(v29 + 8) &= 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_23;
    }
  }
  return result;
}
