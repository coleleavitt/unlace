__int64 __fastcall sub_6BC280(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // r14d
  int v6; // ebx
  int v7; // r15d
  __int64 v8; // rax
  int v9; // r15d
  char *v10; // rbx
  unsigned int v11; // edx
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r13
  int v16; // eax
  void *v17; // rdi
  int v18; // eax
  bool v19; // al
  int v20; // eax
  bool v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // cl
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // cl
  char v30; // cl
  __int64 result; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  int v41; // eax
  void *v42; // r14
  bool v43; // al
  bool v44; // al
  int v45; // eax
  size_t v46; // r15
  __int64 v47; // rax
  size_t v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  char *v51; // r13
  __int64 v52; // rax
  char *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // edx
  int v58; // esi
  __int64 v59; // rsi
  __int64 v60; // rdx
  char v61; // di
  char v62; // di
  __int64 v63; // rsi
  __int64 v64; // rdx
  char v65; // di
  char v66; // di
  char *v67; // r15
  void *v68; // r13
  _DWORD *v69; // rsi
  int v70; // eax
  void *v71; // [rsp+8h] [rbp-50h]
  __int64 v72; // [rsp+8h] [rbp-50h]
  __int64 v73; // [rsp+8h] [rbp-50h]
  __int64 v74; // [rsp+8h] [rbp-50h]
  __int64 v75; // [rsp+8h] [rbp-50h]
  __int64 v76; // [rsp+10h] [rbp-48h]
  char *v77; // [rsp+10h] [rbp-48h]
  __int64 v78; // [rsp+18h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 8);
  v5 = 2 * v4;
  if ( 3 * v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v46 = 48LL * v5;
    v47 = sub_186B270(v46);
    v74 = v47;
    v48 = v47 + v46;
    if ( v5 )
    {
      do
      {
        *(_BYTE *)(v47 + 12) &= 0xFCu;
        *(_BYTE *)(v47 + 28) &= 0xFCu;
        v47 += 48;
        *(_QWORD *)(v47 - 48) = 0;
        *(_QWORD *)(v47 - 32) = 0;
        *(_QWORD *)(v47 - 16) = 0;
      }
      while ( v48 != v47 );
      v49 = v74;
      if ( (((_BYTE)v48 - (_BYTE)v74) & 0x10) == 0 || (v49 = v74 + 48, *(_DWORD *)(v74 + 8) = 0, v74 + 48 != v48) )
      {
        do
        {
          *(_DWORD *)(v49 + 8) = 0;
          v49 += 96;
          *(_DWORD *)(v49 - 40) = 0;
        }
        while ( v49 != v48 );
      }
      v50 = v74;
      if ( (((_BYTE)v48 - (_BYTE)v74) & 0x10) == 0 || (v50 = v74 + 48, *(_DWORD *)(v74 + 24) = 1, v74 + 48 != v48) )
      {
        do
        {
          *(_DWORD *)(v50 + 24) = 1;
          v50 += 96;
          *(_DWORD *)(v50 - 24) = 1;
        }
        while ( v50 != v48 );
      }
    }
    v51 = *(char **)a1;
    v52 = *(unsigned int *)(a1 + 8);
    v53 = (char *)(*(_QWORD *)a1 + 48 * v52);
    if ( *(char **)a1 != v53 )
    {
      do
      {
        while ( *((_DWORD *)v51 + 1) != 2 )
        {
          v51 += 48;
          if ( v53 == v51 )
            goto LABEL_57;
        }
        v54 = 48LL * (*(_DWORD *)v51 & (v5 - 1));
        v55 = v74 + v54;
        if ( v54 == v46 )
        {
LABEL_64:
          v56 = v74;
          if ( v55 == v74 )
          {
LABEL_72:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          while ( *(_DWORD *)(v56 + 4) )
          {
            v56 += 48;
            if ( v55 == v56 )
              goto LABEL_72;
          }
        }
        else
        {
          v56 = v74 + v54;
          while ( *(_DWORD *)(v56 + 4) )
          {
            v56 += 48;
            if ( v74 + v46 == v56 )
              goto LABEL_64;
          }
        }
        *(_DWORD *)v56 = *(_DWORD *)v51;
        v57 = *(_DWORD *)(v56 + 8);
        v51 += 48;
        v58 = *((_DWORD *)v51 - 10);
        *(_DWORD *)(v56 + 4) = 2;
        *(_DWORD *)(v56 + 8) = v58;
        v59 = *((_QWORD *)v51 - 4);
        *((_DWORD *)v51 - 10) = v57;
        v60 = *(_QWORD *)(v56 + 16);
        *(_QWORD *)(v56 + 16) = v59;
        v61 = *(v51 - 36);
        *((_QWORD *)v51 - 4) = v60;
        LOBYTE(v60) = *(_BYTE *)(v56 + 12);
        *(_BYTE *)(v56 + 12) = v61 & 2 | v60 & 0xFD;
        LOBYTE(v60) = v60 & 2 | *(v51 - 36) & 0xFD;
        *(v51 - 36) = v60;
        v62 = *(_BYTE *)(v56 + 12);
        *(_BYTE *)(v56 + 12) = v60 & 1 | v62 & 0xFE;
        LODWORD(v59) = *((_DWORD *)v51 - 6);
        *(v51 - 36) = v62 & 1 | *(v51 - 36) & 0xFE;
        LODWORD(v60) = *(_DWORD *)(v56 + 24);
        *(_DWORD *)(v56 + 24) = v59;
        v63 = *((_QWORD *)v51 - 2);
        *((_DWORD *)v51 - 6) = v60;
        v64 = *(_QWORD *)(v56 + 32);
        *(_QWORD *)(v56 + 32) = v63;
        v65 = *(v51 - 20);
        *((_QWORD *)v51 - 2) = v64;
        LOBYTE(v64) = *(_BYTE *)(v56 + 28);
        *(_BYTE *)(v56 + 28) = v65 & 2 | v64 & 0xFD;
        LOBYTE(v64) = v64 & 2 | *(v51 - 20) & 0xFD;
        *(v51 - 20) = v64;
        v66 = *(_BYTE *)(v56 + 28) & 1;
        *(_BYTE *)(v56 + 28) = v64 & 1 | *(_BYTE *)(v56 + 28) & 0xFE;
        *(v51 - 20) = v66 | *(v51 - 20) & 0xFE;
        *(_DWORD *)(v56 + 40) = *((_DWORD *)v51 - 2);
      }
      while ( v53 != v51 );
LABEL_57:
      v52 = *(unsigned int *)(a1 + 8);
      v53 = *(char **)a1;
    }
    if ( v53 )
    {
      if ( (_DWORD)v52 )
      {
        v67 = v53;
        v77 = &v53[48 * v52];
        do
        {
          v68 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v67 + 8);
          v69 = v67 + 24;
          v67 += 48;
          sub_182CBA0(v68, v69);
        }
        while ( v77 != v67 );
      }
      sub_186B220(v53);
    }
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)a1 = v74;
  }
  v6 = sub_182DB30(a2);
  v78 = a2 + 16;
  v7 = 3 * sub_182DB30(a2 + 16);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = v6 + v7;
  v10 = *(char **)a1;
  v11 = v8 - 1;
  v8 *= 48;
  v12 = (char *)(*(_QWORD *)a1 + v8);
  v13 = 48LL * (v9 & v11);
  v14 = *(_QWORD *)a1 + v13;
  if ( v13 != v8 )
  {
    v10 = (char *)(*(_QWORD *)a1 + v13);
    v15 = nullptr;
    while ( 1 )
    {
      v16 = *((_DWORD *)v10 + 1);
      if ( v16 == 2 )
      {
        if ( *(_DWORD *)v10 == v9 )
        {
          v17 = qword_1C7F2C0;
          if ( (v10[12] & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
          {
            v76 = v14;
            v71 = qword_1C7F2C0;
            v18 = sub_182C7B0(qword_1C7F2C0, v10 + 8, a2);
            v17 = v71;
            v14 = v76;
            v19 = v18 == 0;
          }
          else
          {
            v19 = *((_DWORD *)v10 + 2) == *(_DWORD *)a2;
          }
          if ( v19 )
          {
            if ( (v10[28] & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0 )
            {
              v72 = v14;
              v20 = sub_182C7B0(v17, v10 + 24, v78);
              v14 = v72;
              v21 = v20 == 0;
            }
            else
            {
              v21 = *((_DWORD *)v10 + 6) == *(_DWORD *)(a2 + 16);
            }
            if ( v21 )
              goto LABEL_17;
          }
        }
      }
      else
      {
        if ( !v16 )
          goto LABEL_18;
        v15 = v10;
      }
      v10 += 48;
      if ( v12 == v10 )
      {
        v10 = *(char **)a1;
        goto LABEL_25;
      }
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_25:
    if ( (char *)v14 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v41 = *((_DWORD *)v10 + 1);
    if ( v41 != 2 )
      break;
    if ( *(_DWORD *)v10 == v9 )
    {
      v42 = qword_1C7F2C0;
      if ( (v10[12] & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
      {
        v73 = v14;
        v45 = sub_182C7B0(qword_1C7F2C0, v10 + 8, a2);
        v14 = v73;
        v43 = v45 == 0;
      }
      else
      {
        v43 = *((_DWORD *)v10 + 2) == *(_DWORD *)a2;
      }
      if ( v43 )
      {
        if ( (v10[28] & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0 )
        {
          v75 = v14;
          v70 = sub_182C7B0(v42, v10 + 24, v78);
          v14 = v75;
          v44 = v70 == 0;
        }
        else
        {
          v44 = *((_DWORD *)v10 + 6) == *(_DWORD *)(a2 + 16);
        }
        if ( v44 )
        {
LABEL_17:
          v22 = *((_DWORD *)v10 + 2);
          *((_DWORD *)v10 + 2) = *(_DWORD *)a2;
          v23 = *(_QWORD *)(a2 + 8);
          *(_DWORD *)a2 = v22;
          v24 = *((_QWORD *)v10 + 2);
          *((_QWORD *)v10 + 2) = v23;
          v25 = *(_BYTE *)(a2 + 4);
          *(_QWORD *)(a2 + 8) = v24;
          LOBYTE(v23) = v10[12];
          v10[12] = v25 & 2 | v23 & 0xFD;
          LOBYTE(v24) = v23 & 2 | *(_BYTE *)(a2 + 4) & 0xFD;
          *(_BYTE *)(a2 + 4) = v24;
          v26 = v10[12];
          v10[12] = v24 & 1 | v26 & 0xFE;
          LODWORD(v23) = *(_DWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 4) = v26 & 1 | *(_BYTE *)(a2 + 4) & 0xFE;
          LODWORD(v24) = *((_DWORD *)v10 + 6);
          *((_DWORD *)v10 + 6) = v23;
          v27 = *(_QWORD *)(a2 + 24);
          *(_DWORD *)(a2 + 16) = v24;
          v28 = *((_QWORD *)v10 + 4);
          *((_QWORD *)v10 + 4) = v27;
          v29 = *(_BYTE *)(a2 + 20);
          *(_QWORD *)(a2 + 24) = v28;
          LOBYTE(v27) = v10[28];
          v10[28] = v29 & 2 | v27 & 0xFD;
          LOBYTE(v28) = v27 & 2 | *(_BYTE *)(a2 + 20) & 0xFD;
          *(_BYTE *)(a2 + 20) = v28;
          v30 = v10[28] & 1;
          v10[28] = v28 & 1 | v10[28] & 0xFE;
          *(_BYTE *)(a2 + 20) = v30 | *(_BYTE *)(a2 + 20) & 0xFE;
          result = *(unsigned int *)(a2 + 32);
          *((_DWORD *)v10 + 1) = 2;
          *((_DWORD *)v10 + 10) = result;
          return result;
        }
      }
    }
LABEL_24:
    v10 += 48;
  }
  if ( v41 )
  {
    v15 = v10;
    goto LABEL_24;
  }
LABEL_18:
  if ( v15 )
    --*(_DWORD *)(a1 + 16);
  else
    v15 = v10;
  v32 = *((_DWORD *)v15 + 2);
  *((_DWORD *)v15 + 2) = *(_DWORD *)a2;
  v33 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)a2 = v32;
  v34 = *((_QWORD *)v15 + 2);
  *((_QWORD *)v15 + 2) = v33;
  v35 = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a2 + 8) = v34;
  LOBYTE(v33) = v15[12];
  v15[12] = v35 & 2 | v33 & 0xFD;
  LOBYTE(v34) = v33 & 2 | *(_BYTE *)(a2 + 4) & 0xFD;
  *(_BYTE *)(a2 + 4) = v34;
  v36 = v15[12];
  v15[12] = v34 & 1 | v36 & 0xFE;
  LODWORD(v33) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 4) = v36 & 1 | *(_BYTE *)(a2 + 4) & 0xFE;
  LODWORD(v34) = *((_DWORD *)v15 + 6);
  *((_DWORD *)v15 + 6) = v33;
  v37 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 16) = v34;
  v38 = *((_QWORD *)v15 + 4);
  *((_QWORD *)v15 + 4) = v37;
  v39 = *(_BYTE *)(a2 + 20);
  *(_QWORD *)(a2 + 24) = v38;
  LOBYTE(v37) = v15[28];
  v15[28] = v39 & 2 | v37 & 0xFD;
  LOBYTE(v38) = v37 & 2 | *(_BYTE *)(a2 + 20) & 0xFD;
  *(_BYTE *)(a2 + 20) = v38;
  v40 = v15[28] & 1;
  v15[28] = v38 & 1 | v15[28] & 0xFE;
  *(_BYTE *)(a2 + 20) = v40 | *(_BYTE *)(a2 + 20) & 0xFE;
  result = *(unsigned int *)(a2 + 32);
  *((_DWORD *)v15 + 1) = 2;
  *((_DWORD *)v15 + 10) = result;
  *(_DWORD *)v15 = v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

