__int64 __fastcall sub_9E89C0(__int64 a1, __int64 a2, int *a3)
{
  void *v5; // r15
  int v6; // eax
  int v7; // edx
  int v8; // r13d
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // r15d
  int v12; // edx
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // r15
  int v21; // eax
  bool v22; // al
  unsigned __int8 v23; // dl
  int v24; // eax
  __int64 v25; // rax
  char v26; // di
  __int64 v27; // rax
  char v28; // di
  void *v29; // rbx
  int v31; // eax
  __int64 v32; // rax
  char v33; // di
  __int64 v34; // rax
  char v35; // di
  int v36; // eax
  bool v37; // al
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // r15
  __int64 v42; // rax
  char *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  int v47; // edx
  int v48; // esi
  __int64 v49; // rsi
  __int64 v50; // rdx
  char v51; // di
  char v52; // di
  __int64 v53; // rsi
  __int64 v54; // rdx
  char v55; // di
  char v56; // di
  char *v57; // r15
  void *v58; // r14
  _DWORD *v59; // rsi
  size_t v60; // [rsp+8h] [rbp-90h]
  char *v61; // [rsp+8h] [rbp-90h]
  int v62; // [rsp+10h] [rbp-88h]
  __int64 v63; // [rsp+10h] [rbp-88h]
  int v64; // [rsp+10h] [rbp-88h]
  int v65; // [rsp+18h] [rbp-80h]
  __int64 v66; // [rsp+18h] [rbp-80h]
  __int64 v67; // [rsp+30h] [rbp-68h] BYREF
  __int64 v68; // [rsp+38h] [rbp-60h]
  __int64 v69; // [rsp+40h] [rbp-58h] BYREF
  __int64 v70; // [rsp+48h] [rbp-50h]
  unsigned __int8 v71; // [rsp+50h] [rbp-48h]
  int v72; // [rsp+58h] [rbp-40h]

  v67 = 0;
  v68 = 0;
  v5 = qword_1C7F2C0;
  v69 = 1;
  v70 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v67, a2);
  else
    LODWORD(v67) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v5, &v69, a2 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    BYTE4(v69) &= ~1u;
    LODWORD(v69) = v6;
  }
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(unsigned __int8 *)(a2 + 32);
  v9 = 2 * v7;
  v72 = *a3;
  v10 = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24);
  v71 = v8;
  v62 = 2 * v7;
  if ( 3 * v7 < (unsigned int)(4 * v10) )
  {
    v38 = v9;
    v60 = 56LL * v9;
    v39 = sub_186B270(v60);
    v66 = v39;
    if ( (_DWORD)v38 )
    {
      v40 = v39 + 56 * v38;
      do
      {
        *(_OWORD *)(v39 + 24) = 0;
        v39 += 56;
        *(_OWORD *)(v39 - 48) = 0;
        *(_QWORD *)(v39 - 56) = 0;
        *(_BYTE *)(v39 - 44) = 0;
        *(_DWORD *)(v39 - 32) = 1;
        *(_BYTE *)(v39 - 28) = 0;
        *(_BYTE *)(v39 - 16) = 0;
      }
      while ( v40 != v39 );
    }
    v41 = *(char **)(a1 + 8);
    v42 = *(unsigned int *)(a1 + 16);
    v43 = &v41[56 * v42];
    if ( v41 != v43 )
    {
      do
      {
        while ( *((_DWORD *)v41 + 1) != 2 )
        {
          v41 += 56;
          if ( v43 == v41 )
            goto LABEL_42;
        }
        v44 = 56LL * (*(_DWORD *)v41 & (unsigned int)(v62 - 1));
        v45 = v66 + v44;
        if ( v60 == v44 )
        {
LABEL_52:
          v46 = v66;
          if ( v66 == v45 )
          {
LABEL_58:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          while ( *(_DWORD *)(v46 + 4) )
          {
            v46 += 56;
            if ( v45 == v46 )
              goto LABEL_58;
          }
        }
        else
        {
          v46 = v66 + v44;
          while ( *(_DWORD *)(v46 + 4) )
          {
            v46 += 56;
            if ( v66 + v60 == v46 )
              goto LABEL_52;
          }
        }
        *(_DWORD *)v46 = *(_DWORD *)v41;
        v47 = *(_DWORD *)(v46 + 8);
        v41 += 56;
        v48 = *((_DWORD *)v41 - 12);
        *(_DWORD *)(v46 + 4) = 2;
        *(_DWORD *)(v46 + 8) = v48;
        v49 = *((_QWORD *)v41 - 5);
        *((_DWORD *)v41 - 12) = v47;
        v50 = *(_QWORD *)(v46 + 16);
        *(_QWORD *)(v46 + 16) = v49;
        v51 = *(v41 - 44);
        *((_QWORD *)v41 - 5) = v50;
        LOBYTE(v49) = *(_BYTE *)(v46 + 12);
        *(_BYTE *)(v46 + 12) = v51 & 2 | v49 & 0xFD;
        LOBYTE(v50) = v49 & 2 | *(v41 - 44) & 0xFD;
        *(v41 - 44) = v50;
        v52 = *(_BYTE *)(v46 + 12);
        *(_BYTE *)(v46 + 12) = v50 & 1 | v52 & 0xFE;
        LODWORD(v49) = *((_DWORD *)v41 - 8);
        *(v41 - 44) = v52 & 1 | *(v41 - 44) & 0xFE;
        LODWORD(v50) = *(_DWORD *)(v46 + 24);
        *(_DWORD *)(v46 + 24) = v49;
        v53 = *((_QWORD *)v41 - 3);
        *((_DWORD *)v41 - 8) = v50;
        v54 = *(_QWORD *)(v46 + 32);
        *(_QWORD *)(v46 + 32) = v53;
        v55 = *(v41 - 28);
        *((_QWORD *)v41 - 3) = v54;
        LOBYTE(v53) = *(_BYTE *)(v46 + 28);
        *(_BYTE *)(v46 + 28) = v55 & 2 | v53 & 0xFD;
        LOBYTE(v54) = v53 & 2 | *(v41 - 28) & 0xFD;
        *(v41 - 28) = v54;
        v56 = *(_BYTE *)(v46 + 28) & 1;
        *(_BYTE *)(v46 + 28) = v54 & 1 | *(_BYTE *)(v46 + 28) & 0xFE;
        *(v41 - 28) = v56 | *(v41 - 28) & 0xFE;
        *(_BYTE *)(v46 + 40) = *(v41 - 16);
        *(_DWORD *)(v46 + 48) = *((_DWORD *)v41 - 2);
      }
      while ( v43 != v41 );
LABEL_42:
      v42 = *(unsigned int *)(a1 + 16);
      v43 = *(char **)(a1 + 8);
    }
    if ( v43 )
    {
      if ( (_DWORD)v42 )
      {
        v57 = v43;
        v61 = &v43[56 * v42];
        do
        {
          v58 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v57 + 8);
          v59 = v57 + 24;
          v57 += 56;
          sub_182CBA0(v58, v59);
        }
        while ( v61 != v57 );
      }
      sub_186B220(v43);
    }
    *(_DWORD *)(a1 + 24) = 0;
    v8 = v71;
    *(_QWORD *)(a1 + 8) = v66;
    *(_DWORD *)(a1 + 16) = v62;
  }
  v11 = sub_182DB30(&v67);
  v12 = v11 + 3 * sub_182DB30(&v69);
  v13 = (v8 - v12) ^ (v12 << 8);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(unsigned int *)(a1 + 16);
  v16 = ((v13 ^ ((v12 - v13) << 16)) + v13 - v12) ^ ((v12 - v13) << 10);
  v17 = 56LL * (v16 & (unsigned int)(v15 - 1));
  v18 = v14 + v17;
  v19 = v14 + 56 * v15;
  if ( v17 != 56 * v15 )
  {
    v14 += v17;
    v20 = 0;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v14 + 4);
      if ( v21 == 2 )
      {
        if ( *(_DWORD *)v14 == v16 )
        {
          v65 = v16;
          v63 = v19;
          v22 = sub_3ED680((__int64)qword_1C7F2C0, v14 + 8, (__int64)&v67);
          v19 = v63;
          v16 = v65;
          if ( v22 )
          {
            v23 = v71;
            if ( *(_BYTE *)(v14 + 40) == v71 )
              goto LABEL_15;
          }
        }
      }
      else
      {
        if ( !v21 )
          goto LABEL_17;
        v20 = v14;
      }
      v14 += 56;
      if ( v19 == v14 )
      {
        v14 = *(_QWORD *)(a1 + 8);
        goto LABEL_24;
      }
    }
  }
  v20 = 0;
  while ( 1 )
  {
LABEL_24:
    if ( v18 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = *(_DWORD *)(v14 + 4);
    if ( v36 != 2 )
      break;
    if ( *(_DWORD *)v14 == v16 )
    {
      v64 = v16;
      v37 = sub_3ED680((__int64)qword_1C7F2C0, v14 + 8, (__int64)&v67);
      v16 = v64;
      if ( v37 )
      {
        v23 = v71;
        if ( *(_BYTE *)(v14 + 40) == v71 )
        {
LABEL_15:
          v24 = *(_DWORD *)(v14 + 8);
          *(_DWORD *)(v14 + 8) = v67;
          LODWORD(v67) = v24;
          v25 = *(_QWORD *)(v14 + 16);
          *(_QWORD *)(v14 + 16) = v68;
          v68 = v25;
          v26 = *(_BYTE *)(v14 + 12);
          LOBYTE(v25) = v26 & 2;
          v26 &= ~2u;
          LOBYTE(v25) = v26 & 1 | BYTE4(v67) & 0xFC | v25 & 0xFE;
          *(_BYTE *)(v14 + 12) = BYTE4(v67) & 1 | v26 & 0xFE | BYTE4(v67) & 2;
          BYTE4(v67) = v25;
          LODWORD(v25) = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v69;
          LODWORD(v69) = v25;
          v27 = *(_QWORD *)(v14 + 32);
          *(_QWORD *)(v14 + 32) = v70;
          v70 = v27;
          v28 = *(_BYTE *)(v14 + 28);
          LOBYTE(v27) = v28 & 2;
          v28 &= ~2u;
          LOBYTE(v27) = v28 & 1 | BYTE4(v69) & 0xFC | v27 & 0xFE;
          *(_BYTE *)(v14 + 28) = BYTE4(v69) & 1 | v28 & 0xFE | BYTE4(v69) & 2;
          BYTE4(v69) = v27;
          LODWORD(v27) = v72;
          *(_BYTE *)(v14 + 40) = v23;
          *(_DWORD *)(v14 + 48) = v27;
          *(_DWORD *)(v14 + 4) = 2;
          goto LABEL_16;
        }
      }
    }
LABEL_23:
    v14 += 56;
  }
  if ( v36 )
  {
    v20 = v14;
    goto LABEL_23;
  }
LABEL_17:
  if ( v20 )
    --*(_DWORD *)(a1 + 24);
  else
    v20 = v14;
  v31 = *(_DWORD *)(v20 + 8);
  *(_DWORD *)(v20 + 8) = v67;
  LODWORD(v67) = v31;
  v32 = *(_QWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 16) = v68;
  v68 = v32;
  v33 = *(_BYTE *)(v20 + 12);
  LOBYTE(v32) = v33 & 2;
  v33 &= ~2u;
  LOBYTE(v32) = v33 & 1 | BYTE4(v67) & 0xFC | v32 & 0xFE;
  *(_BYTE *)(v20 + 12) = BYTE4(v67) & 1 | v33 & 0xFE | BYTE4(v67) & 2;
  BYTE4(v67) = v32;
  LODWORD(v32) = *(_DWORD *)(v20 + 24);
  *(_DWORD *)(v20 + 24) = v69;
  LODWORD(v69) = v32;
  v34 = *(_QWORD *)(v20 + 32);
  *(_QWORD *)(v20 + 32) = v70;
  v70 = v34;
  v35 = *(_BYTE *)(v20 + 28);
  LOBYTE(v34) = v35 & 2;
  v35 &= ~2u;
  LOBYTE(v34) = v35 & 1 | BYTE4(v69) & 0xFC | v34 & 0xFE;
  *(_BYTE *)(v20 + 28) = BYTE4(v69) & 1 | v35 & 0xFE | BYTE4(v69) & 2;
  BYTE4(v69) = v34;
  *(_BYTE *)(v20 + 40) = v71;
  LODWORD(v34) = v72;
  *(_DWORD *)(v20 + 4) = 2;
  *(_DWORD *)(v20 + 48) = v34;
  *(_DWORD *)v20 = v16;
  ++*(_DWORD *)(a1 + 20);
LABEL_16:
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v67);
  return sub_182CBA0(v29, &v69);
}

