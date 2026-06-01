__int64 __fastcall sub_9EEAC0(__int64 a1, __int64 a2, int *a3)
{
  void *v5; // r15
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r12d
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  char *v13; // r12
  unsigned int v14; // edx
  char *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r14
  char *v18; // r15
  int v19; // eax
  bool v20; // al
  int v21; // eax
  __int64 v22; // rax
  char v23; // si
  __int64 v24; // rax
  char v25; // si
  int v26; // eax
  __int64 v27; // rax
  char v28; // di
  __int64 v29; // rax
  char v30; // di
  void *v31; // rbx
  int v33; // eax
  bool v34; // al
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  char *v41; // r15
  __int64 v42; // rax
  char *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
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
  _DWORD *v58; // rsi
  char *v59; // [rsp+0h] [rbp-88h]
  int v60; // [rsp+0h] [rbp-88h]
  size_t v61; // [rsp+0h] [rbp-88h]
  void *v62; // [rsp+0h] [rbp-88h]
  int v63; // [rsp+8h] [rbp-80h]
  char *v64; // [rsp+8h] [rbp-80h]
  int v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+20h] [rbp-68h] BYREF
  __int64 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h] BYREF
  __int64 v69; // [rsp+38h] [rbp-50h]
  int v70; // [rsp+40h] [rbp-48h]

  v66 = 0;
  v67 = 0;
  v5 = qword_1C7F2C0;
  v68 = 1;
  v69 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v66, a2);
  else
    LODWORD(v66) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v5, &v68, a2 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    BYTE4(v68) &= ~1u;
    LODWORD(v68) = v6;
  }
  v7 = *(_DWORD *)(a1 + 8);
  v70 = *a3;
  v8 = 2 * v7;
  v65 = 2 * v7;
  if ( 3 * v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v35 = v8;
    v61 = 48LL * v8;
    v36 = sub_186B270(v61);
    v37 = v36;
    if ( (_DWORD)v35 )
    {
      v38 = v36 + 48 * v35;
      do
      {
        *(_BYTE *)(v36 + 12) &= 0xFCu;
        *(_BYTE *)(v36 + 28) &= 0xFCu;
        v36 += 48;
        *(_QWORD *)(v36 - 48) = 0;
        *(_QWORD *)(v36 - 32) = 0;
        *(_QWORD *)(v36 - 16) = 0;
      }
      while ( v38 != v36 );
      v39 = v37;
      if ( (((_BYTE)v38 - (_BYTE)v37) & 0x10) == 0 || (v39 = v37 + 48, *(_DWORD *)(v37 + 8) = 0, v38 != v37 + 48) )
      {
        do
        {
          *(_DWORD *)(v39 + 8) = 0;
          v39 += 96;
          *(_DWORD *)(v39 - 40) = 0;
        }
        while ( v38 != v39 );
      }
      v40 = v37;
      if ( (((_BYTE)v38 - (_BYTE)v37) & 0x10) == 0 || (v40 = v37 + 48, *(_DWORD *)(v37 + 24) = 1, v37 + 48 != v38) )
      {
        do
        {
          *(_DWORD *)(v40 + 24) = 1;
          v40 += 96;
          *(_DWORD *)(v40 - 24) = 1;
        }
        while ( v40 != v38 );
      }
    }
    v41 = *(char **)a1;
    v42 = *(unsigned int *)(a1 + 8);
    v43 = (char *)(*(_QWORD *)a1 + 48 * v42);
    if ( *(char **)a1 != v43 )
    {
      do
      {
        while ( *((_DWORD *)v41 + 1) != 2 )
        {
          v41 += 48;
          if ( v43 == v41 )
            goto LABEL_49;
        }
        v44 = 48LL * (*(_DWORD *)v41 & (unsigned int)(v65 - 1));
        v45 = v37 + v44;
        if ( v61 == v44 )
        {
LABEL_56:
          if ( v37 == v45 )
          {
LABEL_62:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v46 = v37;
          while ( *(_DWORD *)(v46 + 4) )
          {
            v46 += 48;
            if ( v45 == v46 )
              goto LABEL_62;
          }
        }
        else
        {
          v46 = v37 + v44;
          while ( *(_DWORD *)(v46 + 4) )
          {
            v46 += 48;
            if ( v37 + v61 == v46 )
              goto LABEL_56;
          }
        }
        *(_DWORD *)v46 = *(_DWORD *)v41;
        v47 = *(_DWORD *)(v46 + 8);
        v41 += 48;
        v48 = *((_DWORD *)v41 - 10);
        *(_DWORD *)(v46 + 4) = 2;
        *(_DWORD *)(v46 + 8) = v48;
        v49 = *((_QWORD *)v41 - 4);
        *((_DWORD *)v41 - 10) = v47;
        v50 = *(_QWORD *)(v46 + 16);
        *(_QWORD *)(v46 + 16) = v49;
        v51 = *(v41 - 36);
        *((_QWORD *)v41 - 4) = v50;
        LOBYTE(v50) = *(_BYTE *)(v46 + 12);
        *(_BYTE *)(v46 + 12) = v51 & 2 | v50 & 0xFD;
        LOBYTE(v50) = v50 & 2 | *(v41 - 36) & 0xFD;
        *(v41 - 36) = v50;
        v52 = *(_BYTE *)(v46 + 12);
        *(_BYTE *)(v46 + 12) = v50 & 1 | v52 & 0xFE;
        LODWORD(v49) = *((_DWORD *)v41 - 6);
        *(v41 - 36) = v52 & 1 | *(v41 - 36) & 0xFE;
        LODWORD(v50) = *(_DWORD *)(v46 + 24);
        *(_DWORD *)(v46 + 24) = v49;
        v53 = *((_QWORD *)v41 - 2);
        *((_DWORD *)v41 - 6) = v50;
        v54 = *(_QWORD *)(v46 + 32);
        *(_QWORD *)(v46 + 32) = v53;
        v55 = *(v41 - 20);
        *((_QWORD *)v41 - 2) = v54;
        LOBYTE(v54) = *(_BYTE *)(v46 + 28);
        *(_BYTE *)(v46 + 28) = v55 & 2 | v54 & 0xFD;
        LOBYTE(v54) = v54 & 2 | *(v41 - 20) & 0xFD;
        *(v41 - 20) = v54;
        v56 = *(_BYTE *)(v46 + 28) & 1;
        *(_BYTE *)(v46 + 28) = v54 & 1 | *(_BYTE *)(v46 + 28) & 0xFE;
        *(v41 - 20) = v56 | *(v41 - 20) & 0xFE;
        *(_DWORD *)(v46 + 40) = *((_DWORD *)v41 - 2);
      }
      while ( v43 != v41 );
LABEL_49:
      v42 = *(unsigned int *)(a1 + 8);
      v43 = *(char **)a1;
    }
    if ( v43 )
    {
      if ( (_DWORD)v42 )
      {
        v57 = v43;
        v64 = &v43[48 * v42];
        do
        {
          v62 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v57 + 8);
          v58 = v57 + 24;
          v57 += 48;
          sub_182CBA0(v62, v58);
        }
        while ( v57 != v64 );
      }
      sub_186B220(v43);
    }
    *(_QWORD *)a1 = v37;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 8) = v65;
  }
  v9 = sub_182DB30(&v66);
  v10 = 3 * sub_182DB30(&v68);
  v11 = *(unsigned int *)(a1 + 8);
  v12 = v9 + v10;
  v13 = *(char **)a1;
  v14 = v11 - 1;
  v11 *= 48;
  v15 = (char *)(*(_QWORD *)a1 + v11);
  v16 = 48LL * (v12 & v14);
  v17 = *(_QWORD *)a1 + v16;
  if ( v16 != v11 )
  {
    v13 = (char *)(*(_QWORD *)a1 + v16);
    v18 = nullptr;
    while ( 1 )
    {
      v19 = *((_DWORD *)v13 + 1);
      if ( v19 == 2 )
      {
        if ( *(_DWORD *)v13 == v12 )
        {
          v63 = v12;
          v59 = v15;
          v20 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v13 + 8), (__int64)&v66);
          v15 = v59;
          v12 = v63;
          if ( v20 )
            goto LABEL_14;
        }
      }
      else
      {
        if ( !v19 )
          goto LABEL_15;
        v18 = v13;
      }
      v13 += 48;
      if ( v15 == v13 )
      {
        v13 = *(char **)a1;
        goto LABEL_23;
      }
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_23:
    if ( (char *)v17 == v13 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v33 = *((_DWORD *)v13 + 1);
    if ( v33 != 2 )
      break;
    if ( *(_DWORD *)v13 == v12 )
    {
      v60 = v12;
      v34 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v13 + 8), (__int64)&v66);
      v12 = v60;
      if ( v34 )
      {
LABEL_14:
        v21 = *((_DWORD *)v13 + 2);
        *((_DWORD *)v13 + 2) = v66;
        LODWORD(v66) = v21;
        v22 = *((_QWORD *)v13 + 2);
        *((_QWORD *)v13 + 2) = v67;
        v67 = v22;
        v23 = v13[12];
        LOBYTE(v22) = v23 & 2;
        v23 &= ~2u;
        LOBYTE(v22) = v23 & 1 | BYTE4(v66) & 0xFC | v22 & 0xFE;
        v13[12] = BYTE4(v66) & 1 | v23 & 0xFE | BYTE4(v66) & 2;
        BYTE4(v66) = v22;
        LODWORD(v22) = *((_DWORD *)v13 + 6);
        *((_DWORD *)v13 + 6) = v68;
        LODWORD(v68) = v22;
        v24 = *((_QWORD *)v13 + 4);
        *((_QWORD *)v13 + 4) = v69;
        v69 = v24;
        v25 = v13[28];
        LOBYTE(v24) = v25 & 2;
        v25 &= ~2u;
        LOBYTE(v24) = v25 & 1 | BYTE4(v68) & 0xFC | v24 & 0xFE;
        v13[28] = BYTE4(v68) & 1 | v25 & 0xFE | BYTE4(v68) & 2;
        BYTE4(v68) = v24;
        LODWORD(v24) = v70;
        *((_DWORD *)v13 + 1) = 2;
        *((_DWORD *)v13 + 10) = v24;
        goto LABEL_18;
      }
    }
LABEL_22:
    v13 += 48;
  }
  if ( v33 )
  {
    v18 = v13;
    goto LABEL_22;
  }
LABEL_15:
  if ( v18 )
    --*(_DWORD *)(a1 + 16);
  else
    v18 = v13;
  v26 = *((_DWORD *)v18 + 2);
  *((_DWORD *)v18 + 2) = v66;
  LODWORD(v66) = v26;
  v27 = *((_QWORD *)v18 + 2);
  *((_QWORD *)v18 + 2) = v67;
  v67 = v27;
  v28 = v18[12];
  LOBYTE(v27) = v28 & 2;
  v28 &= ~2u;
  LOBYTE(v27) = v28 & 1 | BYTE4(v66) & 0xFC | v27 & 0xFE;
  v18[12] = BYTE4(v66) & 1 | v28 & 0xFE | BYTE4(v66) & 2;
  BYTE4(v66) = v27;
  LODWORD(v27) = *((_DWORD *)v18 + 6);
  *((_DWORD *)v18 + 6) = v68;
  LODWORD(v68) = v27;
  v29 = *((_QWORD *)v18 + 4);
  *((_QWORD *)v18 + 4) = v69;
  v69 = v29;
  v30 = v18[28];
  LOBYTE(v29) = v30 & 2;
  v30 &= ~2u;
  LOBYTE(v29) = v30 & 1 | BYTE4(v68) & 0xFC | v29 & 0xFE;
  v18[28] = BYTE4(v68) & 1 | v30 & 0xFE | BYTE4(v68) & 2;
  BYTE4(v68) = v29;
  LODWORD(v29) = v70;
  *((_DWORD *)v18 + 1) = 2;
  *((_DWORD *)v18 + 10) = v29;
  *(_DWORD *)v18 = v12;
  ++*(_DWORD *)(a1 + 12);
LABEL_18:
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v66);
  return sub_182CBA0(v31, &v68);
}

