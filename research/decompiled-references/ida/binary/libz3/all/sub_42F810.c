_QWORD *__fastcall sub_42F810(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  _QWORD *result; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  int *v11; // rdi
  char *v12; // rsi
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int *v16; // rdi
  char *v17; // rsi
  char *v18; // rax
  __int64 v19; // rdx
  int *v20; // rbx
  __int64 v21; // r14
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rbp
  void *v26; // r15
  __int64 v27; // r12
  bool v28; // al
  int *v29; // rbp
  int v30; // eax
  void *v31; // r15
  int v32; // edx
  __int64 v33; // rax
  char v34; // cl
  char v35; // cl
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rax
  char v39; // cl
  char v40; // cl
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r14
  void *v43; // r15
  _QWORD *v44; // rbp
  int *v45; // r14
  char v46; // dl
  int *v47; // rbp
  void *v48; // rdi
  __int64 v49; // rax
  char v50; // dl
  __int64 v51; // rax
  unsigned int v52; // eax
  int v53; // eax
  int v54; // esi
  char v55; // r8
  __int64 v56; // rsi
  __int64 v57; // rax
  char v58; // r8
  char v59; // r8
  __int64 v60; // rsi
  __int64 v61; // rax
  char v62; // r8
  int *v63; // r15
  int v64; // eax
  __int64 v65; // rax
  char v66; // dl
  char v67; // si
  __int64 v68; // rax
  char v69; // dl
  char v70; // si
  unsigned int v71; // eax
  void *v72; // rbp
  __int64 v73; // [rsp+8h] [rbp-118h]
  __int64 v74; // [rsp+8h] [rbp-118h]
  int *v75; // [rsp+10h] [rbp-110h]
  __int64 v76; // [rsp+18h] [rbp-108h] BYREF
  char v77[16]; // [rsp+20h] [rbp-100h] BYREF
  __int64 v78; // [rsp+30h] [rbp-F0h]
  __int64 v79; // [rsp+38h] [rbp-E8h] BYREF
  char v80[16]; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v81; // [rsp+50h] [rbp-D0h]
  void *ptr; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+60h] [rbp-C0h]
  int v84; // [rsp+68h] [rbp-B8h] BYREF
  char v85; // [rsp+6Ch] [rbp-B4h]
  __int64 v86; // [rsp+70h] [rbp-B0h]

  v3 = a1 + 56;
  *(_QWORD *)(v3 - 48) = a2;
  *(_QWORD *)(v3 - 16) = 0;
  v5 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(v3 - 56) = &off_1C4E830;
  *(_QWORD *)(v3 - 40) = 0;
  *(_QWORD *)(v3 - 8) = v5;
  *(_OWORD *)(v3 - 32) = 0;
  result = (_QWORD *)sub_16669D0(v3, v5);
  v7 = *(_QWORD **)(a2 + 264);
  v8 = *(unsigned int *)(a2 + 272);
  *(_QWORD *)(a1 + 72) = 0;
  v9 = &v7[2 * v8];
  if ( v7 == v9 )
    return result;
  while ( *v7 <= 1u )
  {
    v7 += 2;
    if ( v9 == v7 )
      return result;
  }
  if ( v9 == v7 )
    return result;
  do
  {
    v10 = *(_QWORD *)(v7[1] + 264LL);
    v76 = *(_QWORD *)(a1 + 48);
    v73 = v10;
    sub_16669D0(v77, v76);
    v78 = a1 + 72;
    ptr = &v84;
    v83 = 0x1000000000LL;
    sub_430240(&v76, &ptr, v73);
    v11 = (int *)ptr;
    v12 = (char *)ptr + 8 * (unsigned int)v83;
    v13 = (char *)ptr;
    if ( ptr != v12 )
    {
      do
      {
        v14 = *(_QWORD *)v13;
        v13 += 8;
        *(_BYTE *)(v14 + 6) &= ~1u;
      }
      while ( v12 != v13 );
    }
    LODWORD(v83) = 0;
    if ( v11 != &v84 && v11 )
      sub_186B220(v11);
    v15 = *(_QWORD *)(v7[1] + 248LL);
    v79 = *(_QWORD *)(a1 + 48);
    v74 = v15;
    sub_16669D0(v80, v79);
    v81 = a1 + 72;
    ptr = &v84;
    v83 = 0x1000000000LL;
    sub_430240(&v79, &ptr, v74);
    v16 = (int *)ptr;
    v17 = (char *)ptr + 8 * (unsigned int)v83;
    v18 = (char *)ptr;
    if ( ptr != v17 )
    {
      do
      {
        v19 = *(_QWORD *)v18;
        v18 += 8;
        *(_BYTE *)(v19 + 6) &= ~1u;
      }
      while ( v18 != v17 );
    }
    LODWORD(v83) = 0;
    if ( v16 != &v84 && v16 )
      sub_186B220(v16);
    result = v7 + 2;
    if ( v9 == v7 + 2 )
      break;
    while ( 1 )
    {
      v7 = result;
      if ( *result > 1u )
        break;
      result += 2;
      if ( v9 == result )
        goto LABEL_21;
    }
  }
  while ( v9 != result );
LABEL_21:
  v20 = *(int **)(a1 + 72);
  if ( !v20 )
    return result;
  v21 = 8LL * (unsigned int)*(v20 - 1);
  v75 = &v20[v21];
  if ( v20 == &v20[v21] )
    return result;
  _BitScanReverse64(&v22, (v21 * 4) >> 5);
  sub_42D210((__int64)v20, (unsigned __int64)&v20[v21], 2LL * (int)v22);
  if ( (unsigned __int64)v21 > 128 )
  {
    v45 = v20 + 128;
    sub_42DE50(v20, v20 + 128);
    while ( 1 )
    {
      v46 = *((_BYTE *)v45 + 4);
      v47 = v45 - 8;
      v48 = qword_1C7F2C0;
      LODWORD(ptr) = *v45;
      BYTE4(ptr) = v46 & 3 | BYTE4(ptr) & 0xFC;
      v49 = *((_QWORD *)v45 + 1);
      *((_QWORD *)v45 + 1) = 0;
      v83 = v49;
      v50 = *((_BYTE *)v45 + 20);
      v84 = v45[4];
      v85 = v50 & 3 | v85 & 0xFC;
      v51 = *((_QWORD *)v45 + 3);
      *((_QWORD *)v45 + 3) = 0;
      v86 = v51;
      while ( 1 )
      {
        v63 = v47 + 8;
        if ( (v85 & 1) != 0 || v84 != 1 || (v47[5] & 1) != 0 || v47[4] != 1 )
        {
          LOBYTE(v52) = sub_1848D40(v48, &ptr, v47);
          v48 = qword_1C7F2C0;
          goto LABEL_59;
        }
        if ( (BYTE4(ptr) & 1) == 0 && (v47[1] & 1) == 0 )
          break;
        v71 = sub_182C7B0(v48, &ptr, v47);
        v48 = qword_1C7F2C0;
        v52 = v71 >> 31;
LABEL_59:
        if ( !(_BYTE)v52 )
          goto LABEL_68;
LABEL_60:
        v53 = v47[8];
        v54 = *v47;
        v47 -= 8;
        v55 = *((_BYTE *)v47 + 36);
        v47[16] = v54;
        v56 = *((_QWORD *)v47 + 5);
        v47[8] = v53;
        v57 = *((_QWORD *)v47 + 9);
        *((_QWORD *)v47 + 9) = v56;
        *((_QWORD *)v47 + 5) = v57;
        LOBYTE(v56) = *((_BYTE *)v63 + 4);
        *((_BYTE *)v63 + 4) = v55 & 2 | v56 & 0xFD;
        LOBYTE(v57) = v56 & 2 | v47[9] & 0xFD;
        *((_BYTE *)v47 + 36) = v57;
        v58 = *((_BYTE *)v63 + 4);
        *((_BYTE *)v63 + 4) = v57 & 1 | v58 & 0xFE;
        LODWORD(v56) = v47[12];
        LOBYTE(v57) = v58 & 1 | v47[9] & 0xFE;
        v59 = *((_BYTE *)v47 + 52);
        *((_BYTE *)v47 + 36) = v57;
        LODWORD(v57) = v47[20];
        v47[20] = v56;
        v60 = *((_QWORD *)v47 + 7);
        v47[12] = v57;
        v61 = *((_QWORD *)v47 + 11);
        *((_QWORD *)v47 + 11) = v60;
        *((_QWORD *)v47 + 7) = v61;
        LOBYTE(v60) = *((_BYTE *)v63 + 20);
        *((_BYTE *)v63 + 20) = v59 & 2 | v60 & 0xFD;
        LOBYTE(v61) = v60 & 2 | v47[13] & 0xFD;
        *((_BYTE *)v47 + 52) = v61;
        v62 = v63[5] & 1;
        *((_BYTE *)v63 + 20) = v61 & 1 | v63[5] & 0xFE;
        *((_BYTE *)v47 + 52) = v62 | v47[13] & 0xFE;
      }
      if ( (int)ptr < *v47 )
        goto LABEL_60;
LABEL_68:
      v64 = *v63;
      v45 += 8;
      *v63 = (int)ptr;
      LODWORD(ptr) = v64;
      v65 = *((_QWORD *)v47 + 5);
      *((_QWORD *)v47 + 5) = v83;
      v83 = v65;
      v66 = *((_BYTE *)v47 + 36);
      *((_BYTE *)v47 + 36) = BYTE4(ptr) & 2 | v66 & 0xFD;
      BYTE4(ptr) = v66 & 2 | BYTE4(ptr) & 0xFD;
      v67 = *((_BYTE *)v47 + 36);
      *((_BYTE *)v47 + 36) = BYTE4(ptr) & 1 | v67 & 0xFE;
      BYTE4(ptr) = v67 & 1 | BYTE4(ptr) & 0xFE;
      LODWORD(v65) = v47[12];
      v47[12] = v84;
      v84 = v65;
      v68 = *((_QWORD *)v47 + 7);
      *((_QWORD *)v47 + 7) = v86;
      v86 = v68;
      v69 = *((_BYTE *)v47 + 52);
      *((_BYTE *)v47 + 52) = v85 & 2 | v69 & 0xFD;
      v85 = v69 & 2 | v85 & 0xFD;
      v70 = v47[13] & 1;
      *((_BYTE *)v47 + 52) = v85 & 1 | v47[13] & 0xFE;
      v85 = v70 | v85 & 0xFE;
      sub_182CBA0(v48, &ptr);
      sub_182CBA0(v48, &v84);
      if ( v75 == v45 )
        goto LABEL_25;
    }
  }
  sub_42DE50(v20, v75);
LABEL_25:
  result = *(_QWORD **)(a1 + 72);
  if ( !result )
    return result;
  v23 = 4LL * *((unsigned int *)result - 1);
  v24 = (__int64)&result[v23];
  if ( result == &result[v23] )
    return result;
  v25 = (__int64)(result + 4);
  if ( v23 == 4 )
    goto LABEL_52;
  while ( 1 )
  {
    v26 = qword_1C7F2C0;
    v27 = v25 - 32;
    if ( (*(_BYTE *)(v25 - 28) & 1) != 0 || (*(_BYTE *)(v25 + 4) & 1) != 0 )
      break;
    if ( *(_DWORD *)(v25 - 32) == *(_DWORD *)v25 )
      goto LABEL_34;
LABEL_30:
    v25 += 32;
    if ( v25 == v24 )
      goto LABEL_77;
  }
  if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v25 - 32, v25) )
    goto LABEL_30;
LABEL_34:
  if ( (*(_BYTE *)(v27 + 20) & 1) != 0 || (*(_BYTE *)(v25 + 20) & 1) != 0 )
    v28 = (unsigned int)sub_182C7B0(v26, v25 - 16, v25 + 16) == 0;
  else
    v28 = *(_DWORD *)(v25 - 16) == *(_DWORD *)(v25 + 16);
  if ( !v28 )
    goto LABEL_30;
  if ( v27 != v24 )
  {
    v29 = (int *)(v27 + 64);
    if ( v27 + 64 == v24 )
    {
LABEL_51:
      result = *(_QWORD **)(a1 + 72);
      v25 = v27 + 32;
      if ( result )
        goto LABEL_52;
      v41 = -v25 >> 5;
LABEL_75:
      v72 = qword_1C7F2C0;
      v42 = 1;
      sub_182CBA0(qword_1C7F2C0, 0x1FFFFFFFE0LL);
      sub_182CBA0(v72, 0x1FFFFFFFF0LL);
      result = *(_QWORD **)(a1 + 72);
      --*((_DWORD *)result - 1);
      if ( v41 <= 1 )
        return result;
      do
      {
LABEL_54:
        v43 = qword_1C7F2C0;
        ++v42;
        v44 = &result[4 * (unsigned int)(*((_DWORD *)result - 1) - 1)];
        sub_182CBA0(qword_1C7F2C0, v44);
        sub_182CBA0(v43, v44 + 2);
        result = *(_QWORD **)(a1 + 72);
        --*((_DWORD *)result - 1);
      }
      while ( v42 < v41 );
      return result;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        v31 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v27 + 4) & 1) != 0 || (v29[1] & 1) != 0 )
        {
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v27, v29) )
            goto LABEL_49;
          goto LABEL_42;
        }
        v30 = *v29;
        if ( *(_DWORD *)v27 == *v29 )
        {
LABEL_42:
          if ( (*(_BYTE *)(v27 + 20) & 1) != 0 || (v29[5] & 1) != 0 )
          {
            if ( !(unsigned int)sub_182C7B0(v31, v27 + 16, v29 + 4) )
            {
LABEL_45:
              v29 += 8;
              if ( v29 == (int *)v24 )
                goto LABEL_51;
              continue;
            }
          }
          else if ( *(_DWORD *)(v27 + 16) == v29[4] )
          {
            goto LABEL_45;
          }
LABEL_49:
          v30 = *v29;
        }
        break;
      }
      v32 = *(_DWORD *)(v27 + 32);
      *(_DWORD *)(v27 + 32) = v30;
      v29 += 8;
      v27 += 32;
      v33 = *(_QWORD *)(v27 + 8);
      *(v29 - 8) = v32;
      *(_QWORD *)(v27 + 8) = *((_QWORD *)v29 - 3);
      v34 = *((_BYTE *)v29 - 28);
      *((_QWORD *)v29 - 3) = v33;
      LOBYTE(v32) = *(_BYTE *)(v27 + 4);
      *(_BYTE *)(v27 + 4) = v34 & 2 | v32 & 0xFD;
      LOBYTE(v33) = v32 & 2 | *(_BYTE *)(v29 - 7) & 0xFD;
      *((_BYTE *)v29 - 28) = v33;
      v35 = *(_BYTE *)(v27 + 4);
      *(_BYTE *)(v27 + 4) = v33 & 1 | v35 & 0xFE;
      v36 = *(v29 - 4);
      *((_BYTE *)v29 - 28) = v35 & 1 | *(_BYTE *)(v29 - 7) & 0xFE;
      LODWORD(v33) = *(_DWORD *)(v27 + 16);
      *(_DWORD *)(v27 + 16) = v36;
      v37 = *((_QWORD *)v29 - 1);
      *(v29 - 4) = v33;
      v38 = *(_QWORD *)(v27 + 24);
      *(_QWORD *)(v27 + 24) = v37;
      v39 = *((_BYTE *)v29 - 12);
      *((_QWORD *)v29 - 1) = v38;
      LOBYTE(v37) = *(_BYTE *)(v27 + 20);
      *(_BYTE *)(v27 + 20) = v39 & 2 | v37 & 0xFD;
      LOBYTE(v38) = v37 & 2 | *(_BYTE *)(v29 - 3) & 0xFD;
      *((_BYTE *)v29 - 12) = v38;
      v40 = *(_BYTE *)(v27 + 20) & 1;
      *(_BYTE *)(v27 + 20) = v38 & 1 | *(_BYTE *)(v27 + 20) & 0xFE;
      *((_BYTE *)v29 - 12) = v40 | *(_BYTE *)(v29 - 3) & 0xFE;
      if ( v29 == (int *)v24 )
        goto LABEL_51;
      continue;
    }
  }
LABEL_77:
  result = *(_QWORD **)(a1 + 72);
  if ( !result )
  {
    v41 = -v24 >> 5;
    goto LABEL_75;
  }
  v25 = v24;
LABEL_52:
  v41 = ((__int64)&result[4 * *((unsigned int *)result - 1)] - v25) >> 5;
  if ( (_QWORD *)v25 != &result[4 * *((unsigned int *)result - 1)] )
  {
    v42 = 0;
    goto LABEL_54;
  }
  return result;
}

