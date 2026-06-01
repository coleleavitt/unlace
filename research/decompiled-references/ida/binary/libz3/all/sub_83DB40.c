__int64 __fastcall sub_83DB40(__int64 a1, int *a2, int *a3)
{
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r12d
  int v8; // ecx
  __int64 v9; // rax
  int v10; // ecx
  char *v11; // r12
  unsigned int v12; // edx
  char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r14
  char *v16; // r15
  int v17; // eax
  bool v18; // al
  int v19; // eax
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rax
  char v23; // si
  int v24; // eax
  __int64 v25; // rax
  char v26; // di
  __int64 v27; // rax
  char v28; // di
  void *v29; // rbx
  int v31; // eax
  bool v32; // al
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  char *v39; // r15
  __int64 v40; // rax
  char *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  int v46; // esi
  __int64 v47; // rsi
  __int64 v48; // rdx
  char v49; // di
  char v50; // di
  __int64 v51; // rsi
  __int64 v52; // rdx
  char v53; // di
  char v54; // di
  char *v55; // r15
  _DWORD *v56; // rsi
  char *v57; // [rsp+0h] [rbp-88h]
  int v58; // [rsp+0h] [rbp-88h]
  size_t v59; // [rsp+0h] [rbp-88h]
  void *v60; // [rsp+0h] [rbp-88h]
  int v61; // [rsp+8h] [rbp-80h]
  char *v62; // [rsp+8h] [rbp-80h]
  int v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+20h] [rbp-68h] BYREF
  __int64 v65; // [rsp+28h] [rbp-60h]
  __int64 v66; // [rsp+30h] [rbp-58h] BYREF
  __int64 v67; // [rsp+38h] [rbp-50h]
  int v68; // [rsp+40h] [rbp-48h]

  v64 = 0;
  v65 = 0;
  v66 = 1;
  v67 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v64, a2);
  v5 = *(_DWORD *)(a1 + 8);
  v68 = *a3;
  v6 = 2 * v5;
  v63 = 2 * v5;
  if ( 3 * v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v33 = v6;
    v59 = 48LL * v6;
    v34 = sub_186B270(v59);
    v35 = v34;
    if ( (_DWORD)v33 )
    {
      v36 = v34 + 48 * v33;
      do
      {
        *(_BYTE *)(v34 + 12) &= 0xFCu;
        *(_BYTE *)(v34 + 28) &= 0xFCu;
        v34 += 48;
        *(_QWORD *)(v34 - 48) = 0;
        *(_QWORD *)(v34 - 32) = 0;
        *(_QWORD *)(v34 - 16) = 0;
      }
      while ( v36 != v34 );
      v37 = v35;
      if ( (((_BYTE)v36 - (_BYTE)v35) & 0x10) == 0 || (v37 = v35 + 48, *(_DWORD *)(v35 + 8) = 0, v36 != v35 + 48) )
      {
        do
        {
          *(_DWORD *)(v37 + 8) = 0;
          v37 += 96;
          *(_DWORD *)(v37 - 40) = 0;
        }
        while ( v36 != v37 );
      }
      v38 = v35;
      if ( (((_BYTE)v36 - (_BYTE)v35) & 0x10) == 0 || (v38 = v35 + 48, *(_DWORD *)(v35 + 24) = 1, v35 + 48 != v36) )
      {
        do
        {
          *(_DWORD *)(v38 + 24) = 1;
          v38 += 96;
          *(_DWORD *)(v38 - 24) = 1;
        }
        while ( v38 != v36 );
      }
    }
    v39 = *(char **)a1;
    v40 = *(unsigned int *)(a1 + 8);
    v41 = (char *)(*(_QWORD *)a1 + 48 * v40);
    if ( *(char **)a1 != v41 )
    {
      do
      {
        while ( *((_DWORD *)v39 + 1) != 2 )
        {
          v39 += 48;
          if ( v41 == v39 )
            goto LABEL_43;
        }
        v42 = 48LL * (*(_DWORD *)v39 & (unsigned int)(v63 - 1));
        v43 = v35 + v42;
        if ( v59 == v42 )
        {
LABEL_50:
          if ( v35 == v43 )
          {
LABEL_56:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v44 = v35;
          while ( *(_DWORD *)(v44 + 4) )
          {
            v44 += 48;
            if ( v43 == v44 )
              goto LABEL_56;
          }
        }
        else
        {
          v44 = v35 + v42;
          while ( *(_DWORD *)(v44 + 4) )
          {
            v44 += 48;
            if ( v35 + v59 == v44 )
              goto LABEL_50;
          }
        }
        *(_DWORD *)v44 = *(_DWORD *)v39;
        v45 = *(_DWORD *)(v44 + 8);
        v39 += 48;
        v46 = *((_DWORD *)v39 - 10);
        *(_DWORD *)(v44 + 4) = 2;
        *(_DWORD *)(v44 + 8) = v46;
        v47 = *((_QWORD *)v39 - 4);
        *((_DWORD *)v39 - 10) = v45;
        v48 = *(_QWORD *)(v44 + 16);
        *(_QWORD *)(v44 + 16) = v47;
        v49 = *(v39 - 36);
        *((_QWORD *)v39 - 4) = v48;
        LOBYTE(v48) = *(_BYTE *)(v44 + 12);
        *(_BYTE *)(v44 + 12) = v49 & 2 | v48 & 0xFD;
        LOBYTE(v48) = v48 & 2 | *(v39 - 36) & 0xFD;
        *(v39 - 36) = v48;
        v50 = *(_BYTE *)(v44 + 12);
        *(_BYTE *)(v44 + 12) = v48 & 1 | v50 & 0xFE;
        LODWORD(v47) = *((_DWORD *)v39 - 6);
        *(v39 - 36) = v50 & 1 | *(v39 - 36) & 0xFE;
        LODWORD(v48) = *(_DWORD *)(v44 + 24);
        *(_DWORD *)(v44 + 24) = v47;
        v51 = *((_QWORD *)v39 - 2);
        *((_DWORD *)v39 - 6) = v48;
        v52 = *(_QWORD *)(v44 + 32);
        *(_QWORD *)(v44 + 32) = v51;
        v53 = *(v39 - 20);
        *((_QWORD *)v39 - 2) = v52;
        LOBYTE(v52) = *(_BYTE *)(v44 + 28);
        *(_BYTE *)(v44 + 28) = v53 & 2 | v52 & 0xFD;
        LOBYTE(v52) = v52 & 2 | *(v39 - 20) & 0xFD;
        *(v39 - 20) = v52;
        v54 = *(_BYTE *)(v44 + 28) & 1;
        *(_BYTE *)(v44 + 28) = v52 & 1 | *(_BYTE *)(v44 + 28) & 0xFE;
        *(v39 - 20) = v54 | *(v39 - 20) & 0xFE;
        *(_DWORD *)(v44 + 40) = *((_DWORD *)v39 - 2);
      }
      while ( v41 != v39 );
LABEL_43:
      v40 = *(unsigned int *)(a1 + 8);
      v41 = *(char **)a1;
    }
    if ( v41 )
    {
      if ( (_DWORD)v40 )
      {
        v55 = v41;
        v62 = &v41[48 * v40];
        do
        {
          v60 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v55 + 8);
          v56 = v55 + 24;
          v55 += 48;
          sub_182CBA0(v60, v56);
        }
        while ( v55 != v62 );
      }
      sub_186B220(v41);
    }
    *(_QWORD *)a1 = v35;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 8) = v63;
  }
  v7 = sub_182DB30(&v64);
  v8 = 3 * sub_182DB30(&v66);
  v9 = *(unsigned int *)(a1 + 8);
  v10 = v7 + v8;
  v11 = *(char **)a1;
  v12 = v9 - 1;
  v9 *= 48;
  v13 = (char *)(*(_QWORD *)a1 + v9);
  v14 = 48LL * (v10 & v12);
  v15 = *(_QWORD *)a1 + v14;
  if ( v14 != v9 )
  {
    v11 = (char *)(*(_QWORD *)a1 + v14);
    v16 = nullptr;
    while ( 1 )
    {
      v17 = *((_DWORD *)v11 + 1);
      if ( v17 == 2 )
      {
        if ( *(_DWORD *)v11 == v10 )
        {
          v61 = v10;
          v57 = v13;
          v18 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v11 + 8), (__int64)&v64);
          v13 = v57;
          v10 = v61;
          if ( v18 )
            goto LABEL_10;
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_11;
        v16 = v11;
      }
      v11 += 48;
      if ( v13 == v11 )
      {
        v11 = *(char **)a1;
        goto LABEL_19;
      }
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( (char *)v15 == v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = *((_DWORD *)v11 + 1);
    if ( v31 != 2 )
      break;
    if ( *(_DWORD *)v11 == v10 )
    {
      v58 = v10;
      v32 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v11 + 8), (__int64)&v64);
      v10 = v58;
      if ( v32 )
      {
LABEL_10:
        v19 = *((_DWORD *)v11 + 2);
        *((_DWORD *)v11 + 2) = v64;
        LODWORD(v64) = v19;
        v20 = *((_QWORD *)v11 + 2);
        *((_QWORD *)v11 + 2) = v65;
        v65 = v20;
        v21 = v11[12];
        LOBYTE(v20) = v21 & 2;
        v21 &= ~2u;
        LOBYTE(v20) = v21 & 1 | BYTE4(v64) & 0xFC | v20 & 0xFE;
        v11[12] = BYTE4(v64) & 1 | v21 & 0xFE | BYTE4(v64) & 2;
        BYTE4(v64) = v20;
        LODWORD(v20) = *((_DWORD *)v11 + 6);
        *((_DWORD *)v11 + 6) = v66;
        LODWORD(v66) = v20;
        v22 = *((_QWORD *)v11 + 4);
        *((_QWORD *)v11 + 4) = v67;
        v67 = v22;
        v23 = v11[28];
        LOBYTE(v22) = v23 & 2;
        v23 &= ~2u;
        LOBYTE(v22) = v23 & 1 | BYTE4(v66) & 0xFC | v22 & 0xFE;
        v11[28] = BYTE4(v66) & 1 | v23 & 0xFE | BYTE4(v66) & 2;
        BYTE4(v66) = v22;
        LODWORD(v22) = v68;
        *((_DWORD *)v11 + 1) = 2;
        *((_DWORD *)v11 + 10) = v22;
        goto LABEL_14;
      }
    }
LABEL_18:
    v11 += 48;
  }
  if ( v31 )
  {
    v16 = v11;
    goto LABEL_18;
  }
LABEL_11:
  if ( v16 )
    --*(_DWORD *)(a1 + 16);
  else
    v16 = v11;
  v24 = *((_DWORD *)v16 + 2);
  *((_DWORD *)v16 + 2) = v64;
  LODWORD(v64) = v24;
  v25 = *((_QWORD *)v16 + 2);
  *((_QWORD *)v16 + 2) = v65;
  v65 = v25;
  v26 = v16[12];
  LOBYTE(v25) = v26 & 2;
  v26 &= ~2u;
  LOBYTE(v25) = v26 & 1 | BYTE4(v64) & 0xFC | v25 & 0xFE;
  v16[12] = BYTE4(v64) & 1 | v26 & 0xFE | BYTE4(v64) & 2;
  BYTE4(v64) = v25;
  LODWORD(v25) = *((_DWORD *)v16 + 6);
  *((_DWORD *)v16 + 6) = v66;
  LODWORD(v66) = v25;
  v27 = *((_QWORD *)v16 + 4);
  *((_QWORD *)v16 + 4) = v67;
  v67 = v27;
  v28 = v16[28];
  LOBYTE(v27) = v28 & 2;
  v28 &= ~2u;
  LOBYTE(v27) = v28 & 1 | BYTE4(v66) & 0xFC | v27 & 0xFE;
  v16[28] = BYTE4(v66) & 1 | v28 & 0xFE | BYTE4(v66) & 2;
  BYTE4(v66) = v27;
  LODWORD(v27) = v68;
  *((_DWORD *)v16 + 1) = 2;
  *((_DWORD *)v16 + 10) = v27;
  *(_DWORD *)v16 = v10;
  ++*(_DWORD *)(a1 + 12);
LABEL_14:
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v64);
  return sub_182CBA0(v29, &v66);
}

