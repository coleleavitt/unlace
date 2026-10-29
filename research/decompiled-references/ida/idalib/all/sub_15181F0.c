void __fastcall sub_15181F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  void *v6; // rdi
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // r14d
  void *v10; // rax
  void *v11; // rax
  unsigned int v12; // r14d
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // esi
  int v20; // ecx
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r13
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  const void *v33; // rsi
  int v34; // eax
  const void *v35; // rsi
  int v36; // eax
  const void *v37; // rsi
  int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  __int64 v54; // rax
  size_t v55; // rdx
  size_t v56; // rdx
  size_t v57; // rdx
  int v58; // ecx
  __int64 v59; // rsi
  int v60; // ecx
  __int64 v61; // rsi
  int v62; // ecx
  __int64 v63; // rsi
  int v64; // ecx
  __int64 v65; // rsi

  v2 = *a1;
  v3 = *a1 + 368LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
    return;
  do
  {
    *(_DWORD *)(a2 + 8) = 0;
    v6 = (void *)(a2 + 16);
    *(_DWORD *)(a2 + 12) = 6;
    v7 = *(_DWORD *)(v2 + 8);
    *(_QWORD *)a2 = a2 + 16;
    if ( v7 && a2 != v2 )
    {
      v37 = (const void *)(v2 + 16);
      if ( *(_QWORD *)v2 == v2 + 16 )
      {
        v57 = 8LL * v7;
        if ( v7 <= 6uLL
          || (sub_2237220(a2, a2 + 16, v7, 8),
              v6 = *(void **)a2,
              v37 = *(const void **)v2,
              (v57 = 8LL * *(unsigned int *)(v2 + 8)) != 0) )
        {
          memcpy(v6, v37, v57);
        }
        *(_DWORD *)(a2 + 8) = v7;
        *(_DWORD *)(v2 + 8) = 0;
      }
      else
      {
        *(_QWORD *)a2 = *(_QWORD *)v2;
        *(_DWORD *)(a2 + 8) = v7;
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v2 + 12);
        *(_QWORD *)v2 = v37;
        *(_DWORD *)(v2 + 12) = 0;
        *(_DWORD *)(v2 + 8) = 0;
      }
    }
    v8 = *(_DWORD *)(v2 + 64);
    *(_DWORD *)(a2 + 80) = 0;
    *(_DWORD *)(a2 + 84) = 8;
    *(_DWORD *)(a2 + 64) = v8;
    v9 = *(_DWORD *)(v2 + 80);
    v10 = (void *)(a2 + 88);
    *(_QWORD *)(a2 + 72) = a2 + 88;
    if ( v9 && a2 + 72 != v2 + 72 )
    {
      v35 = *(const void **)(v2 + 72);
      if ( (const void *)(v2 + 88) == v35 )
      {
        v55 = 16LL * v9;
        if ( v9 <= 8uLL
          || (sub_2237220(a2 + 72, a2 + 88, v9, 16),
              v10 = *(void **)(a2 + 72),
              v35 = *(const void **)(v2 + 72),
              (v55 = 16LL * *(unsigned int *)(v2 + 80)) != 0) )
        {
          memcpy(v10, v35, v55);
        }
        *(_DWORD *)(a2 + 80) = v9;
        *(_DWORD *)(v2 + 80) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 80) = v9;
        v36 = *(_DWORD *)(v2 + 84);
        *(_QWORD *)(a2 + 72) = v35;
        *(_DWORD *)(a2 + 84) = v36;
        *(_QWORD *)(v2 + 72) = v2 + 88;
        *(_DWORD *)(v2 + 84) = 0;
        *(_DWORD *)(v2 + 80) = 0;
      }
    }
    *(_DWORD *)(a2 + 224) = 0;
    v11 = (void *)(a2 + 232);
    *(_DWORD *)(a2 + 228) = 8;
    v12 = *(_DWORD *)(v2 + 224);
    *(_QWORD *)(a2 + 216) = a2 + 232;
    if ( v12 && a2 + 216 != v2 + 216 )
    {
      v33 = *(const void **)(v2 + 216);
      if ( (const void *)(v2 + 232) == v33 )
      {
        v56 = 4LL * v12;
        if ( v12 <= 8uLL
          || (sub_2237220(a2 + 216, a2 + 232, v12, 4),
              v11 = *(void **)(a2 + 216),
              v33 = *(const void **)(v2 + 216),
              (v56 = 4LL * *(unsigned int *)(v2 + 224)) != 0) )
        {
          memcpy(v11, v33, v56);
        }
        *(_DWORD *)(a2 + 224) = v12;
        *(_DWORD *)(v2 + 224) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 224) = v12;
        v34 = *(_DWORD *)(v2 + 228);
        *(_QWORD *)(a2 + 216) = v33;
        *(_DWORD *)(a2 + 228) = v34;
        *(_QWORD *)(v2 + 216) = v2 + 232;
        *(_DWORD *)(v2 + 228) = 0;
        *(_DWORD *)(v2 + 224) = 0;
      }
    }
    v13 = (_DWORD *)(a2 + 272);
    *(_DWORD *)(a2 + 264) = 1;
    v14 = a2 + 264;
    v15 = v2 + 264;
    *(_DWORD *)(a2 + 268) = 0;
    if ( a2 + 272 == a2 + 368 )
    {
      v16 = 0;
    }
    else
    {
      do
      {
        *v13 = -1;
        v13 += 6;
      }
      while ( (_DWORD *)(a2 + 368) != v13 );
      v16 = *(_DWORD *)(a2 + 264) >> 1;
    }
    v17 = *(_DWORD *)(v2 + 264);
    *(_DWORD *)(v2 + 264) = v17 & 1 | (2 * v16);
    *(_DWORD *)(a2 + 264) = v17 & 0xFFFFFFFE | *(_DWORD *)(a2 + 264) & 1;
    v18 = *(_DWORD *)(a2 + 268);
    *(_DWORD *)(a2 + 268) = *(_DWORD *)(v2 + 268);
    *(_DWORD *)(v2 + 268) = v18;
    if ( (*(_BYTE *)(a2 + 264) & 1) == 0 )
    {
      v19 = *(_DWORD *)(a2 + 280);
      if ( (*(_BYTE *)(v2 + 264) & 1) == 0 )
      {
        v54 = *(_QWORD *)(a2 + 272);
        *(_QWORD *)(a2 + 272) = *(_QWORD *)(v2 + 272);
        *(_QWORD *)(v2 + 272) = v54;
        *(_DWORD *)(a2 + 280) = *(_DWORD *)(v2 + 280);
        *(_DWORD *)(v2 + 280) = v19;
        goto LABEL_20;
      }
      goto LABEL_11;
    }
    if ( (*(_BYTE *)(v2 + 264) & 1) == 0 )
    {
      v19 = *(_DWORD *)(v2 + 280);
      v14 = v2 + 264;
      v15 = a2 + 264;
LABEL_11:
      *(_BYTE *)v14 |= 1u;
      v20 = *(_DWORD *)(v15 + 8);
      v21 = *(_QWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 8) = v20;
      if ( (unsigned int)(v20 + 2) > 1 )
      {
        *(_DWORD *)(v14 + 24) = *(_DWORD *)(v15 + 24);
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(v15 + 16);
      }
      v22 = *(_DWORD *)(v15 + 32);
      *(_DWORD *)(v14 + 32) = v22;
      if ( (unsigned int)(v22 + 2) > 1 )
      {
        *(_DWORD *)(v14 + 48) = *(_DWORD *)(v15 + 48);
        *(_QWORD *)(v14 + 40) = *(_QWORD *)(v15 + 40);
      }
      v23 = *(_DWORD *)(v15 + 56);
      *(_DWORD *)(v14 + 56) = v23;
      if ( (unsigned int)(v23 + 2) > 1 )
      {
        *(_DWORD *)(v14 + 72) = *(_DWORD *)(v15 + 72);
        *(_QWORD *)(v14 + 64) = *(_QWORD *)(v15 + 64);
      }
      v24 = *(_DWORD *)(v15 + 80);
      *(_DWORD *)(v14 + 80) = v24;
      if ( (unsigned int)(v24 + 2) > 1 )
      {
        *(_DWORD *)(v14 + 96) = *(_DWORD *)(v15 + 96);
        *(_QWORD *)(v14 + 88) = *(_QWORD *)(v15 + 88);
      }
      *(_BYTE *)v15 &= ~1u;
      *(_QWORD *)(v15 + 8) = v21;
      *(_DWORD *)(v15 + 16) = v19;
      goto LABEL_20;
    }
    v38 = *(_DWORD *)(a2 + 272);
    v39 = *(_DWORD *)(v2 + 272);
    v40 = v38 + 2;
    if ( v39 == -1 || v39 == -2 )
    {
      *(_DWORD *)(a2 + 272) = v39;
      *(_DWORD *)(v2 + 272) = v38;
      if ( v40 > 1 )
      {
        *(_DWORD *)(v2 + 288) = *(_DWORD *)(a2 + 288);
        *(_QWORD *)(v2 + 280) = *(_QWORD *)(a2 + 280);
      }
    }
    else if ( v40 > 1 )
    {
      v58 = *(_DWORD *)(a2 + 288);
      *(_DWORD *)(a2 + 272) = v39;
      *(_DWORD *)(a2 + 288) = 0;
      v59 = *(_QWORD *)(a2 + 280);
      *(_QWORD *)(a2 + 280) = *(_QWORD *)(v2 + 280);
      *(_DWORD *)(a2 + 288) = *(_DWORD *)(v2 + 288);
      *(_DWORD *)(v2 + 272) = v38;
      *(_QWORD *)(v2 + 280) = v59;
      *(_DWORD *)(v2 + 288) = v58;
    }
    else
    {
      *(_DWORD *)(a2 + 272) = v39;
      v41 = *(_DWORD *)(v2 + 288);
      *(_DWORD *)(v2 + 272) = v38;
      *(_DWORD *)(a2 + 288) = v41;
      *(_QWORD *)(a2 + 280) = *(_QWORD *)(v2 + 280);
    }
    v42 = *(_DWORD *)(a2 + 296);
    v43 = *(_DWORD *)(v2 + 296);
    v44 = v42 + 2;
    if ( v43 == -1 || v43 == -2 )
    {
      *(_DWORD *)(a2 + 296) = v43;
      *(_DWORD *)(v2 + 296) = v42;
      if ( v44 > 1 )
      {
        *(_DWORD *)(v2 + 312) = *(_DWORD *)(a2 + 312);
        *(_QWORD *)(v2 + 304) = *(_QWORD *)(a2 + 304);
      }
    }
    else if ( v44 > 1 )
    {
      v64 = *(_DWORD *)(a2 + 312);
      *(_DWORD *)(a2 + 296) = v43;
      *(_DWORD *)(a2 + 312) = 0;
      v65 = *(_QWORD *)(a2 + 304);
      *(_QWORD *)(a2 + 304) = *(_QWORD *)(v2 + 304);
      *(_DWORD *)(a2 + 312) = *(_DWORD *)(v2 + 312);
      *(_DWORD *)(v2 + 296) = v42;
      *(_QWORD *)(v2 + 304) = v65;
      *(_DWORD *)(v2 + 312) = v64;
    }
    else
    {
      *(_DWORD *)(a2 + 296) = v43;
      v45 = *(_DWORD *)(v2 + 312);
      *(_DWORD *)(v2 + 296) = v42;
      *(_DWORD *)(a2 + 312) = v45;
      *(_QWORD *)(a2 + 304) = *(_QWORD *)(v2 + 304);
    }
    v46 = *(_DWORD *)(a2 + 320);
    v47 = *(_DWORD *)(v2 + 320);
    v48 = v46 + 2;
    if ( v47 == -1 || v47 == -2 )
    {
      *(_DWORD *)(a2 + 320) = v47;
      *(_DWORD *)(v2 + 320) = v46;
      if ( v48 > 1 )
      {
        *(_DWORD *)(v2 + 336) = *(_DWORD *)(a2 + 336);
        *(_QWORD *)(v2 + 328) = *(_QWORD *)(a2 + 328);
      }
    }
    else if ( v48 > 1 )
    {
      v62 = *(_DWORD *)(a2 + 336);
      *(_DWORD *)(a2 + 320) = v47;
      *(_DWORD *)(a2 + 336) = 0;
      v63 = *(_QWORD *)(a2 + 328);
      *(_QWORD *)(a2 + 328) = *(_QWORD *)(v2 + 328);
      *(_DWORD *)(a2 + 336) = *(_DWORD *)(v2 + 336);
      *(_DWORD *)(v2 + 320) = v46;
      *(_QWORD *)(v2 + 328) = v63;
      *(_DWORD *)(v2 + 336) = v62;
    }
    else
    {
      *(_DWORD *)(a2 + 320) = v47;
      v49 = *(_DWORD *)(v2 + 336);
      *(_DWORD *)(v2 + 320) = v46;
      *(_DWORD *)(a2 + 336) = v49;
      *(_QWORD *)(a2 + 328) = *(_QWORD *)(v2 + 328);
    }
    v50 = *(_DWORD *)(a2 + 344);
    v51 = *(_DWORD *)(v2 + 344);
    v52 = v50 + 2;
    if ( v51 == -1 || v51 == -2 )
    {
      *(_DWORD *)(a2 + 344) = v51;
      *(_DWORD *)(v2 + 344) = v50;
      if ( v52 > 1 )
      {
        *(_DWORD *)(v2 + 360) = *(_DWORD *)(a2 + 360);
        *(_QWORD *)(v2 + 352) = *(_QWORD *)(a2 + 352);
      }
    }
    else if ( v52 > 1 )
    {
      v60 = *(_DWORD *)(a2 + 360);
      *(_DWORD *)(a2 + 344) = v51;
      *(_DWORD *)(a2 + 360) = 0;
      v61 = *(_QWORD *)(a2 + 352);
      *(_QWORD *)(a2 + 352) = *(_QWORD *)(v2 + 352);
      *(_DWORD *)(a2 + 360) = *(_DWORD *)(v2 + 360);
      *(_DWORD *)(v2 + 344) = v50;
      *(_QWORD *)(v2 + 352) = v61;
      *(_DWORD *)(v2 + 360) = v60;
    }
    else
    {
      *(_DWORD *)(a2 + 344) = v51;
      v53 = *(_DWORD *)(v2 + 360);
      *(_DWORD *)(v2 + 344) = v50;
      *(_DWORD *)(a2 + 360) = v53;
      *(_QWORD *)(a2 + 352) = *(_QWORD *)(v2 + 352);
    }
LABEL_20:
    v2 += 368;
    a2 += 368;
  }
  while ( v3 != v2 );
  v25 = *a1;
  v26 = *a1 + 368LL * *((unsigned int *)a1 + 2);
  while ( v25 != v26 )
  {
    while ( 1 )
    {
      v26 -= 368;
      if ( (*(_BYTE *)(v26 + 264) & 1) != 0 )
      {
        v28 = v26 + 272;
        v29 = v26 + 368;
        goto LABEL_27;
      }
      v27 = *(unsigned int *)(v26 + 280);
      if ( !(_DWORD)v27 )
        goto LABEL_41;
      v28 = *(_QWORD *)(v26 + 272);
      v29 = v28 + 24 * v27;
      do
      {
LABEL_27:
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v28 + 2) > 1 && *(_DWORD *)(v28 + 16) > 0x40u )
          {
            v30 = *(void **)(v28 + 8);
            if ( v30 )
              break;
          }
          v28 += 24;
          if ( v29 == v28 )
            goto LABEL_31;
        }
        operator delete[](v30);
        v28 += 24;
      }
      while ( v29 != v28 );
LABEL_31:
      if ( (*(_BYTE *)(v26 + 264) & 1) == 0 )
LABEL_41:
        operator delete(*(_QWORD *)(v26 + 272), 24LL * *(unsigned int *)(v26 + 280), 8);
      v31 = *(void **)(v26 + 216);
      if ( v31 != (void *)(v26 + 232) )
        free(v31);
      v32 = *(void **)(v26 + 72);
      if ( v32 != (void *)(v26 + 88) )
        free(v32);
      if ( *(_QWORD *)v26 == v26 + 16 )
        break;
      free(*(void **)v26);
      if ( v25 == v26 )
        return;
    }
  }
}
