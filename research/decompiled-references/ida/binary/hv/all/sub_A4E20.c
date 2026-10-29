unsigned __int64 __fastcall sub_A4E20(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rax
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r12d
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  _WORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r15
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  _WORD *v24; // rcx
  _WORD *v25; // rsi
  unsigned __int8 v26; // r8
  char v27; // al
  __int64 v28; // rsi
  int v29; // eax
  __int64 *v30; // rax
  __int64 v31; // r9
  int v32; // r15d
  __int64 v33; // r14
  int v34; // ecx
  int v35; // r11d
  unsigned __int16 *v36; // rdi
  __int64 v37; // rax
  int v38; // esi
  int v39; // eax
  int v40; // r8d
  int *v41; // r10
  int v42; // r12d
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rsi
  unsigned __int16 *v46; // r11
  int v47; // eax
  int v48; // ebp
  __int64 v49; // rdx
  int v50; // esi
  __int64 v51; // r13
  __int64 v52; // r14
  __int16 v53; // ax
  __int64 i; // rdx
  __int64 v55; // r11
  int v56; // eax
  int v57; // r8d
  __int64 v58; // rdx
  unsigned __int16 *v59; // r10
  __int64 v60; // rdx
  char *v61; // rcx
  int v62; // eax
  int v63; // edx
  int v64; // esi
  _WORD *v65; // r8
  int v66; // eax
  unsigned int v67; // edx
  int v68; // edi
  char v69; // cl
  int v70; // ecx
  __int64 v72; // [rsp+8h] [rbp-80h]
  int v73; // [rsp+14h] [rbp-74h]
  __int64 v74; // [rsp+18h] [rbp-70h]
  __int16 v75; // [rsp+20h] [rbp-68h]
  char v76; // [rsp+22h] [rbp-66h] BYREF
  char v77; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v78; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)a2;
  v78 = __readfsqword(0x28u);
  v5 = *(__int64 **)(a2 + 16);
  v6 = *((_DWORD *)v5 + 5);
  v7 = *v5;
  *(_QWORD *)(a1 + 5300) = 0x23D00000000LL;
  if ( v6 <= 0 )
  {
    v13 = 0;
    v10 = -1;
    goto LABEL_8;
  }
  v8 = (unsigned int)(v6 - 1);
  v9 = 0;
  v10 = -1;
  while ( *(_WORD *)(v4 + 4 * v9) )
  {
    v11 = *(_DWORD *)(a1 + 5300);
    v10 = v9;
    *(_DWORD *)(a1 + 5300) = v11 + 1;
    *(_DWORD *)(a1 + 4LL * (v11 + 1) + 3008) = v9;
    v12 = v9 + 1;
    *(_BYTE *)(a1 + v9 + 5308) = 0;
    if ( v8 == v9 )
      goto LABEL_7;
LABEL_4:
    v9 = v12;
  }
  v12 = v9 + 1;
  *(_WORD *)(v4 + 4 * v9 + 2) = 0;
  if ( v8 != v9 )
    goto LABEL_4;
LABEL_7:
  while ( 1 )
  {
    v13 = *(_DWORD *)(a1 + 5300);
LABEL_8:
    if ( v13 > 1 )
      break;
    while ( 1 )
    {
      if ( v10 <= 1 )
      {
        v16 = ++v10;
        v15 = 4LL * v10;
        v14 = (_WORD *)(v4 + v15);
      }
      else
      {
        v14 = (_WORD *)v4;
        v15 = 0;
        v16 = 0;
      }
      v17 = v13 + 1;
      *(_DWORD *)(a1 + 5300) = v17;
      *(_DWORD *)(a1 + 4LL * v17 + 3008) = v16;
      *v14 = 1;
      *(_BYTE *)(a1 + v16 + 5308) = 0;
      --*(_QWORD *)(a1 + 5912);
      if ( !v7 )
        break;
      *(_QWORD *)(a1 + 5920) -= *(unsigned __int16 *)(v7 + v15 + 2);
      v13 = *(_DWORD *)(a1 + 5300);
      if ( v13 > 1 )
        goto LABEL_13;
    }
  }
LABEL_13:
  *(_DWORD *)(a2 + 8) = v10;
  v18 = *(int *)(a1 + 5300);
  v19 = *(_DWORD *)(a1 + 5300) / 2;
  if ( (int)v18 > 1 )
  {
    do
      sub_A4D40(a1, v4, v19--);
    while ( v19 );
    v18 = *(int *)(a1 + 5300);
  }
  while ( 1 )
  {
    v20 = *(int *)(a1 + 3012);
    *(_DWORD *)(a1 + 5300) = v18 - 1;
    *(_DWORD *)(a1 + 3012) = *(_DWORD *)(a1 + 4 * v18 + 3008);
    sub_A4D40(a1, v4, 1);
    v21 = *(_DWORD *)(a1 + 5304);
    v22 = *(_DWORD *)(a1 + 3012);
    v23 = v21 - 1;
    v21 -= 2;
    *(_DWORD *)(a1 + 4LL * v23 + 3008) = v20;
    v24 = (_WORD *)(v4 + 4 * v20);
    *(_DWORD *)(a1 + 5304) = v21;
    *(_DWORD *)(a1 + 4LL * v21 + 3008) = v22;
    v25 = (_WORD *)(v4 + 4LL * v22);
    *(_WORD *)(v4 + 4LL * v6) = *v24 + *v25;
    LOBYTE(v22) = *(_BYTE *)(a1 + v22 + 5308);
    v26 = *(_BYTE *)(a1 + v20 + 5308);
    v27 = v22 + 1;
    if ( v26 >= (unsigned __int8)v22 )
      v27 = v26 + 1;
    *(_BYTE *)(a1 + v6 + 5308) = v27;
    v25[1] = v6;
    v24[1] = v6;
    *(_DWORD *)(a1 + 3012) = v6;
    sub_A4D40(a1, v4, 1);
    v18 = *(int *)(a1 + 5300);
    if ( (int)v18 <= 1 )
      break;
    ++v6;
  }
  v28 = *(int *)(a1 + 3012);
  v29 = *(_DWORD *)(a1 + 5304) - 1;
  *(_DWORD *)(a1 + 5304) = v29;
  *(_DWORD *)(a1 + 4LL * v29 + 3008) = v28;
  v30 = *(__int64 **)(a2 + 16);
  v31 = *(_QWORD *)a2;
  v32 = *(_DWORD *)(a2 + 8);
  v33 = *v30;
  v34 = *((_DWORD *)v30 + 6);
  v72 = v30[1];
  v35 = *((_DWORD *)v30 + 4);
  v36 = (unsigned __int16 *)(a1 + 2976);
  v37 = a1 + 2976;
  do
  {
    v37 += 2;
    *(_WORD *)(v37 - 2) = 0;
  }
  while ( a1 + 3008 != v37 );
  *(_WORD *)(v31 + 4 * v28 + 2) = 0;
  v38 = *(_DWORD *)(a1 + 5304);
  v39 = v38 + 1;
  if ( v38 + 1 <= 572 )
  {
    v74 = v4;
    v40 = 0;
    v41 = (int *)(a1 + 4LL * v39 + 3008);
    v73 = v10;
    v42 = v35;
    v43 = a1 + 4 * ((unsigned int)(571 - v38) + (__int64)v39) + 3012;
    do
    {
      v44 = *v41;
      v45 = 4 * v44;
      v46 = (unsigned __int16 *)(v31 + 4 * v44);
      v47 = *(unsigned __int16 *)(v31 + 4LL * v46[1] + 2) + 1;
      if ( v34 < v47 )
      {
        ++v40;
        v47 = v34;
      }
      v46[1] = v47;
      if ( v32 >= (int)v44 )
      {
        ++*(_WORD *)(a1 + 2LL * v47 + 2976);
        v48 = 0;
        if ( v42 <= (int)v44 )
        {
          v48 = *(_DWORD *)(v72 + 4LL * ((int)v44 - v42));
          v47 += v48;
        }
        v49 = *v46;
        *(_QWORD *)(a1 + 5912) += v49 * (unsigned int)v47;
        if ( v33 )
          *(_QWORD *)(a1 + 5920) += (v48 + (unsigned int)*(unsigned __int16 *)(v33 + v45 + 2)) * v49;
      }
      ++v41;
    }
    while ( (int *)v43 != v41 );
    v10 = v73;
    v4 = v74;
    if ( v40 )
    {
      v50 = v34 - 1;
      v51 = v34;
      v52 = a1 + 2LL * v34;
      do
      {
        v53 = *(_WORD *)(a1 + 2 * (v50 + 1488LL));
        if ( v53 )
        {
          i = v34;
          v55 = v34 - 1;
        }
        else
        {
          for ( i = v50; ; i = (int)i - 1 )
          {
            v55 = (int)i - 1;
            v53 = *(_WORD *)(a1 + 2 * v55 + 2976);
            if ( v53 )
              break;
          }
        }
        v40 -= 2;
        *(_WORD *)(a1 + 2 * v55 + 2976) = v53 - 1;
        *(_WORD *)(a1 + 2 * i + 2976) += 2;
        LOWORD(v56) = *(_WORD *)(v52 + 2976) - 1;
        *(_WORD *)(v52 + 2976) = v56;
      }
      while ( v40 > 0 );
      v10 = v73;
      if ( v34 )
      {
        v57 = 573;
        while ( 1 )
        {
          v56 = (unsigned __int16)v56;
          if ( (_WORD)v56 )
          {
            do
            {
              do
                v58 = *(int *)(a1 + 4LL * --v57 + 3008);
              while ( v32 < (int)v58 );
              v59 = (unsigned __int16 *)(v31 + 4 * v58);
              v60 = v59[1];
              if ( (_DWORD)v60 != v34 )
              {
                *(_QWORD *)(a1 + 5912) += *v59 * (v51 - v60);
                v59[1] = v34;
              }
              --v56;
            }
            while ( v56 );
          }
          v34 = v50;
          if ( !v50 )
            break;
          v51 = v50--;
          LOWORD(v56) = *(_WORD *)(a1 + 2 * v51 + 2976);
        }
      }
    }
  }
  v61 = &v76;
  v62 = 0;
  do
  {
    v63 = *v36;
    v61 += 2;
    ++v36;
    v62 = 2 * (v63 + v62);
    *((_WORD *)v61 - 1) = v62;
  }
  while ( &v77 != v61 );
  v64 = 0;
  if ( v10 != -1 )
  {
    do
    {
      while ( 1 )
      {
        v65 = (_WORD *)(v4 + 4LL * v64);
        v66 = (unsigned __int16)v65[1];
        if ( v65[1] )
          break;
        if ( v10 < ++v64 )
          return __readfsqword(0x28u) ^ v78;
      }
      v67 = (unsigned __int16)*(&v75 + (unsigned __int16)v65[1]);
      *(&v75 + (unsigned __int16)v65[1]) = v67 + 1;
      v68 = 0;
      do
      {
        v69 = v67;
        v67 >>= 1;
        v70 = v68 | v69 & 1;
        v68 = 2 * v70;
        --v66;
      }
      while ( v66 );
      ++v64;
      *v65 = v70;
    }
    while ( v10 >= v64 );
  }
  return __readfsqword(0x28u) ^ v78;
}

