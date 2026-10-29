_BYTE *__fastcall sub_C077D0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // r12
  __int64 *v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // r14
  _BYTE *v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _BYTE *v13; // rax
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // r12
  int v18; // ecx
  int v19; // r10d
  __int64 v20; // r14
  __int64 v21; // rdx
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  unsigned int v27; // r15d
  _QWORD *v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rax
  int v31; // r8d
  unsigned int v32; // edx
  _QWORD *v33; // rdi
  __int64 v34; // rdx
  _QWORD *v35; // r9
  _QWORD *i; // rdx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  _BYTE *result; // rax
  __int64 *v41; // rbx
  unsigned __int64 v42; // r14
  __int64 v43; // rsi
  __int64 *v45; // rax
  int v46; // ecx
  unsigned int v47; // r10d
  __int64 *v48; // r8
  __int64 *v49; // r14
  __int64 v50; // rsi
  __int64 v51; // r11
  __int64 *v52; // r15
  int v53; // edi
  __int64 v54; // rax
  __int64 *v55; // r9
  __int64 *j; // rax
  __int64 v57; // rdx
  __int64 *v58; // rax
  __int64 *k; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r8
  int v63; // [rsp+4h] [rbp-124h]
  int v64; // [rsp+4h] [rbp-124h]
  _BYTE *v65; // [rsp+8h] [rbp-120h]
  __int64 v66; // [rsp+8h] [rbp-120h]
  int v67; // [rsp+8h] [rbp-120h]
  int v68; // [rsp+8h] [rbp-120h]
  unsigned int v69; // [rsp+8h] [rbp-120h]
  int v70; // [rsp+10h] [rbp-118h]
  int v71; // [rsp+10h] [rbp-118h]
  unsigned int v72; // [rsp+10h] [rbp-118h]
  int v73; // [rsp+10h] [rbp-118h]
  int v74; // [rsp+14h] [rbp-114h]
  unsigned int v75; // [rsp+14h] [rbp-114h]
  __int64 *v76; // [rsp+20h] [rbp-108h]
  __int64 v77; // [rsp+28h] [rbp-100h]
  __int64 v78; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD *v79; // [rsp+38h] [rbp-F0h]
  __int64 *v80; // [rsp+40h] [rbp-E8h] BYREF
  int v81; // [rsp+48h] [rbp-E0h]
  int v82; // [rsp+4Ch] [rbp-DCh]
  int v83; // [rsp+50h] [rbp-D8h]
  void *v84; // [rsp+60h] [rbp-C8h]
  __int64 v85; // [rsp+68h] [rbp-C0h]
  _BYTE v86[184]; // [rsp+70h] [rbp-B8h] BYREF

  v2 = (__int64 *)sub_186B270(0x40u);
  v3 = *(unsigned int *)(a1 + 56);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = v2;
  *(_OWORD *)v2 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  *((_OWORD *)v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  v7 = &v4[2 * v3];
  *((_OWORD *)v2 + 3) = 0;
  v84 = v86;
  v85 = 0x1000000000LL;
  if ( v4 == v7 )
    goto LABEL_100;
  while ( *v4 <= 1u )
  {
    v4 += 2;
    if ( v7 == v4 )
      goto LABEL_100;
  }
  if ( v7 == v4 )
    goto LABEL_100;
  v8 = v86;
  v9 = 16;
  LODWORD(v10) = 0;
  while ( 1 )
  {
    v11 = (unsigned int)v10;
    v10 = (unsigned int)(v10 + 1);
    *(_QWORD *)&v8[8 * v11] = v4[1];
    v12 = v4 + 2;
    LODWORD(v85) = v10;
    if ( v7 == v4 + 2 )
      break;
    while ( 1 )
    {
      v4 = v12;
      if ( *v12 > 1u )
        break;
      v12 += 2;
      if ( v7 == v12 )
        goto LABEL_24;
    }
    if ( v7 == v12 )
      break;
    if ( (unsigned int)v10 >= v9 )
    {
      v63 = 2 * v9;
      v13 = (_BYTE *)sub_186B270(16LL * v9);
      LODWORD(v10) = v85;
      v14 = (char *)v84;
      v8 = v13;
      v9 = v63;
      if ( (_DWORD)v85 )
      {
        if ( (unsigned int)(v85 - 1) <= 2 || v13 == (char *)v84 + 8 )
        {
          v61 = 0;
          v62 = 8LL * (unsigned int)v85;
          do
          {
            *(_QWORD *)&v8[v61] = *(_QWORD *)&v14[v61];
            v61 += 8;
          }
          while ( v61 != v62 );
        }
        else
        {
          v15 = 0;
          v16 = 16LL * ((unsigned int)v85 >> 1);
          do
          {
            *(__m128i *)&v8[v15] = _mm_loadu_si128((const __m128i *)&v14[v15]);
            v15 += 16;
          }
          while ( v16 != v15 );
          if ( (v10 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v10 & 0xFFFFFFFE)] = *(_QWORD *)&v14[8 * (v10 & 0xFFFFFFFE)];
        }
      }
      if ( v14 != v86 && v14 )
      {
        sub_186B220(v14);
        v9 = v63;
        LODWORD(v10) = v85;
      }
      v84 = v8;
      HIDWORD(v85) = v9;
    }
  }
LABEL_24:
  v65 = &v8[8 * v10];
  if ( v65 == v8 )
  {
LABEL_100:
    v64 = 0;
    v17 = nullptr;
    v18 = 0;
    v19 = 8;
  }
  else
  {
    v17 = nullptr;
    v18 = 0;
    v19 = 8;
    v64 = 0;
    do
    {
      v20 = *(_QWORD *)v8;
      v21 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
      if ( v21 )
      {
        v82 = v18;
        v78 = v6;
        v79 = v17;
        v80 = v5;
        v81 = v19;
        v83 = v64;
        v22 = sub_C06180(a1, &v78, v21, (__int64)&v80);
        v6 = v78;
        v5 = v80;
        v17 = v79;
        v74 = v81;
        v70 = v82;
        v64 = v83;
        sub_1349280(v20, v22, v23, v82, v24, v25);
        v19 = v74;
        v18 = v70;
      }
      v8 += 8;
    }
    while ( v65 != v8 );
  }
  v26 = *(_QWORD *)(a1 + 80);
  if ( v26 )
  {
    v27 = 0;
    do
    {
      if ( v27 >= *(_DWORD *)(v26 - 4) )
        break;
      v28 = *(_QWORD **)(a1 + 24);
      v29 = *(_QWORD *)(v26 + 8LL * v27);
      v30 = *(unsigned int *)(a1 + 32);
      v31 = *(_DWORD *)(v29 + 12);
      v32 = v30 - 1;
      v30 *= 24;
      v33 = (_QWORD *)((char *)v28 + v30);
      v34 = 24LL * (v31 & v32);
      v35 = &v28[(unsigned __int64)v34 / 8];
      if ( v34 != v30 )
      {
        for ( i = &v28[(unsigned __int64)v34 / 8]; v33 != i; i += 3 )
        {
          v37 = (_QWORD *)*i;
          if ( *i > 1u )
          {
            if ( *((_DWORD *)v37 + 3) == v31 && (_QWORD *)v29 == v37 )
            {
              v37 = i;
              goto LABEL_39;
            }
          }
          else if ( !v37 )
          {
            goto LABEL_39;
          }
        }
      }
      if ( v28 == v35 )
      {
LABEL_65:
        v37 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v37 = (_QWORD *)*v28;
            if ( *v28 > 1u )
              break;
            if ( !v37 )
              goto LABEL_39;
            v28 += 3;
            if ( v35 == v28 )
              goto LABEL_65;
          }
          if ( *((_DWORD *)v37 + 3) == v31 && (_QWORD *)v29 == v37 )
            break;
          v28 += 3;
          if ( v35 == v28 )
            goto LABEL_65;
        }
        v37 = v28;
      }
LABEL_39:
      v38 = v37[2];
      v82 = v18;
      v78 = v6;
      v79 = v17;
      v80 = v5;
      v81 = v19;
      v83 = v64;
      v66 = v38;
      v39 = sub_C06180(a1, &v78, v38, (__int64)&v80);
      v6 = v78;
      v5 = v80;
      v19 = v81;
      v18 = v82;
      v64 = v83;
      v17 = v79;
      if ( v66 != v39 )
      {
        v71 = v81;
        v67 = v82;
        sub_135F9B0(a1, v29, v39);
        v19 = v71;
        v18 = v67;
      }
      v26 = *(_QWORD *)(a1 + 80);
      ++v27;
    }
    while ( v26 );
  }
  if ( v18 != *(_DWORD *)(a1 + 132) )
  {
    v81 = v19;
    v72 = v19;
    v82 = v18;
    v68 = v18;
    v83 = v64;
    v80 = v5;
    sub_C05860(a1, (__int64 **)(a1 + 72), (__int64)&v80);
    sub_C05860(a1, (__int64 **)(a1 + 88), (__int64)&v80);
    v45 = *(__int64 **)(a1 + 120);
    v46 = v68;
    v47 = v72;
    v48 = &v45[*(unsigned int *)(a1 + 128)];
    if ( v45 != v48 )
    {
      v49 = *(__int64 **)(a1 + 120);
      while ( (unsigned __int64)*v49 <= 1 )
      {
        if ( v48 == ++v49 )
          goto LABEL_86;
      }
      if ( v48 != v49 )
      {
        v50 = *v49;
        v51 = 8LL * v72;
        v69 = v72 - 1;
        v52 = (__int64 *)((char *)v5 + v51);
        do
        {
          v53 = *(_DWORD *)(v50 + 12);
          v54 = 8LL * (v53 & v69);
          v55 = &v5[(unsigned __int64)v54 / 8];
          if ( v54 != v51 )
          {
            for ( j = &v5[(unsigned __int64)v54 / 8]; v52 != j; ++j )
            {
              v57 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *(_DWORD *)(v57 + 12) == v53 && v57 == v50 )
                  goto LABEL_80;
              }
              else if ( !v57 )
              {
                goto LABEL_79;
              }
            }
          }
          if ( v55 != v5 )
          {
            for ( k = v5; v55 != k; ++k )
            {
              v60 = *k;
              if ( (unsigned __int64)*k > 1 )
              {
                if ( *(_DWORD *)(v60 + 12) == v53 && v60 == v50 )
                  goto LABEL_80;
              }
              else if ( !v60 )
              {
                break;
              }
            }
          }
LABEL_79:
          v77 = v51;
          v76 = v48;
          v75 = v47;
          v73 = v46;
          sub_135EA20(a1, v50);
          v51 = v77;
          v48 = v76;
          v47 = v75;
          v46 = v73;
LABEL_80:
          v58 = v49 + 1;
          if ( v48 == v49 + 1 )
            break;
          while ( 1 )
          {
            v50 = *v58;
            v49 = v58;
            if ( (unsigned __int64)*v58 > 1 )
              break;
            if ( v48 == ++v58 )
              goto LABEL_85;
          }
        }
        while ( v48 != v58 );
LABEL_85:
        v45 = *(__int64 **)(a1 + 120);
      }
    }
LABEL_86:
    *(_DWORD *)(a1 + 132) = v46;
    *(_QWORD *)(a1 + 120) = v5;
    v5 = v45;
    *(_DWORD *)(a1 + 128) = v47;
    *(_DWORD *)(a1 + 136) = v64;
  }
  result = v86;
  if ( v84 != v86 && v84 )
    result = (_BYTE *)sub_186B220(v84);
  if ( v17 )
  {
    v41 = v17;
    v42 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
    if ( (unsigned __int64)v17 < v42 )
    {
      do
      {
        while ( 1 )
        {
          v43 = *v41;
          if ( *v41 )
          {
            if ( (*(_DWORD *)(v43 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v41 >= v42 )
            goto LABEL_53;
        }
        ++v41;
        sub_15D7BC0(v6, v43);
      }
      while ( (unsigned __int64)v41 < v42 );
    }
LABEL_53:
    result = (_BYTE *)sub_186B220(v17 - 1);
  }
  if ( v5 )
    return (_BYTE *)sub_186B220(v5);
  return result;
}

