__int64 __fastcall sub_9E9140(__int64 a1, int *a2, int *a3)
{
  int v5; // eax
  void *v6; // r14
  int v7; // eax
  int v8; // edx
  unsigned int v9; // r13d
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  int v19; // eax
  bool v20; // al
  int v21; // eax
  __int64 v22; // rax
  char v23; // si
  __int64 v24; // rax
  char v25; // si
  void *v26; // rbx
  int v28; // eax
  __int64 v29; // rax
  char v30; // di
  __int64 v31; // rax
  char v32; // di
  int v33; // eax
  bool v34; // al
  size_t v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  char *v38; // r15
  __int64 v39; // rax
  char *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  int v44; // edx
  int v45; // edx
  __int64 v46; // rsi
  __int64 v47; // rdx
  char v48; // di
  char v49; // di
  __int64 v50; // rsi
  __int64 v51; // rdx
  char v52; // di
  char v53; // di
  char *v54; // r14
  void *v55; // r15
  _DWORD *v56; // rsi
  __int64 v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  char *v59; // [rsp+8h] [rbp-80h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  int v62; // [rsp+20h] [rbp-68h]
  __int64 v63; // [rsp+28h] [rbp-60h] BYREF
  __int64 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+38h] [rbp-50h] BYREF
  __int64 v66; // [rsp+40h] [rbp-48h]
  int v67; // [rsp+48h] [rbp-40h]

  v5 = *a2;
  v63 = 0;
  v62 = v5;
  v6 = qword_1C7F2C0;
  v64 = 0;
  v65 = 1;
  v66 = 0;
  if ( (a2[3] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v63, a2 + 2);
  else
    LODWORD(v63) = a2[2];
  if ( (a2[7] & 1) != 0 )
  {
    sub_182C690(v6, &v65, a2 + 6);
  }
  else
  {
    v7 = a2[6];
    BYTE4(v65) &= ~1u;
    LODWORD(v65) = v7;
  }
  v8 = *(_DWORD *)(a1 + 16);
  v67 = *a3;
  v9 = 2 * v8;
  if ( 3 * v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24))) )
  {
    v35 = 56LL * v9;
    v36 = sub_186B270(v35);
    v61 = v36;
    if ( v9 )
    {
      v37 = v36 + 56LL * v9;
      do
      {
        *(_OWORD *)(v36 + 32) = 0;
        v36 += 56;
        *(_OWORD *)(v36 - 40) = 0;
        *(_QWORD *)(v36 - 56) = 0;
        *(_DWORD *)(v36 - 48) = 0;
        *(_BYTE *)(v36 - 36) = 0;
        *(_DWORD *)(v36 - 24) = 1;
        *(_BYTE *)(v36 - 20) = 0;
      }
      while ( v37 != v36 );
    }
    v38 = *(char **)(a1 + 8);
    v39 = *(unsigned int *)(a1 + 16);
    v40 = &v38[56 * v39];
    if ( v38 != v40 )
    {
      do
      {
        while ( *((_DWORD *)v38 + 1) != 2 )
        {
          v38 += 56;
          if ( v40 == v38 )
            goto LABEL_42;
        }
        v41 = 56LL * (*(_DWORD *)v38 & (v9 - 1));
        v42 = v61 + v41;
        if ( v35 == v41 )
        {
LABEL_52:
          v43 = v61;
          if ( v61 == v42 )
          {
LABEL_58:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          while ( *(_DWORD *)(v43 + 4) )
          {
            v43 += 56;
            if ( v42 == v43 )
              goto LABEL_58;
          }
        }
        else
        {
          v43 = v61 + v41;
          while ( *(_DWORD *)(v43 + 4) )
          {
            v43 += 56;
            if ( v61 + v35 == v43 )
              goto LABEL_52;
          }
        }
        *(_DWORD *)v43 = *(_DWORD *)v38;
        v44 = *((_DWORD *)v38 + 2);
        v38 += 56;
        *(_DWORD *)(v43 + 4) = 2;
        *(_DWORD *)(v43 + 8) = v44;
        v45 = *(_DWORD *)(v43 + 16);
        *(_DWORD *)(v43 + 16) = *((_DWORD *)v38 - 10);
        v46 = *((_QWORD *)v38 - 4);
        *((_DWORD *)v38 - 10) = v45;
        v47 = *(_QWORD *)(v43 + 24);
        *(_QWORD *)(v43 + 24) = v46;
        v48 = *(v38 - 36);
        *((_QWORD *)v38 - 4) = v47;
        LOBYTE(v47) = *(_BYTE *)(v43 + 20);
        *(_BYTE *)(v43 + 20) = v48 & 2 | v47 & 0xFD;
        LOBYTE(v47) = v47 & 2 | *(v38 - 36) & 0xFD;
        *(v38 - 36) = v47;
        v49 = *(_BYTE *)(v43 + 20);
        *(_BYTE *)(v43 + 20) = v47 & 1 | v49 & 0xFE;
        LODWORD(v46) = *((_DWORD *)v38 - 6);
        *(v38 - 36) = v49 & 1 | *(v38 - 36) & 0xFE;
        LODWORD(v47) = *(_DWORD *)(v43 + 32);
        *(_DWORD *)(v43 + 32) = v46;
        v50 = *((_QWORD *)v38 - 2);
        *((_DWORD *)v38 - 6) = v47;
        v51 = *(_QWORD *)(v43 + 40);
        *(_QWORD *)(v43 + 40) = v50;
        v52 = *(v38 - 20);
        *((_QWORD *)v38 - 2) = v51;
        LOBYTE(v51) = *(_BYTE *)(v43 + 36);
        *(_BYTE *)(v43 + 36) = v52 & 2 | v51 & 0xFD;
        LOBYTE(v51) = v51 & 2 | *(v38 - 20) & 0xFD;
        *(v38 - 20) = v51;
        v53 = *(_BYTE *)(v43 + 36) & 1;
        *(_BYTE *)(v43 + 36) = v51 & 1 | *(_BYTE *)(v43 + 36) & 0xFE;
        *(v38 - 20) = v53 | *(v38 - 20) & 0xFE;
        *(_DWORD *)(v43 + 48) = *((_DWORD *)v38 - 2);
      }
      while ( v40 != v38 );
LABEL_42:
      v39 = *(unsigned int *)(a1 + 16);
      v40 = *(char **)(a1 + 8);
    }
    if ( v40 )
    {
      if ( (_DWORD)v39 )
      {
        v54 = v40;
        v59 = &v40[56 * v39];
        do
        {
          v55 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v54 + 16);
          v56 = v54 + 32;
          v54 += 56;
          sub_182CBA0(v55, v56);
        }
        while ( v54 != v59 );
      }
      sub_186B220(v40);
    }
    *(_DWORD *)(a1 + 16) = v9;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v61;
  }
  v10 = sub_182DB30(&v63);
  v11 = (3 * sub_182DB30(&v65) + v10 - v62) ^ (v62 << 8);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(unsigned int *)(a1 + 16);
  v14 = ((v11 ^ ((v62 - v11) << 16)) + v11 - v62) ^ ((v62 - v11) << 10);
  v15 = 56LL * (v14 & (unsigned int)(v13 - 1));
  v16 = v12 + v15;
  v17 = v12 + 56 * v13;
  if ( v15 != 56 * v13 )
  {
    v12 += v15;
    v18 = 0;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v12 + 4);
      if ( v19 == 2 )
      {
        if ( *(_DWORD *)v12 == v14 && *(_DWORD *)(v12 + 8) == v62 )
        {
          v60 = v17;
          v57 = v16;
          v20 = sub_3ED680((__int64)qword_1C7F2C0, v12 + 16, (__int64)&v63);
          v16 = v57;
          v17 = v60;
          if ( v20 )
            goto LABEL_15;
        }
      }
      else
      {
        if ( !v19 )
          goto LABEL_17;
        v18 = v12;
      }
      v12 += 56;
      if ( v17 == v12 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        goto LABEL_24;
      }
    }
  }
  v18 = 0;
  while ( 1 )
  {
LABEL_24:
    if ( v16 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v33 = *(_DWORD *)(v12 + 4);
    if ( v33 != 2 )
      break;
    if ( *(_DWORD *)v12 == v14 && *(_DWORD *)(v12 + 8) == v62 )
    {
      v58 = v16;
      v34 = sub_3ED680((__int64)qword_1C7F2C0, v12 + 16, (__int64)&v63);
      v16 = v58;
      if ( v34 )
      {
LABEL_15:
        *(_DWORD *)(v12 + 8) = v62;
        v21 = *(_DWORD *)(v12 + 16);
        *(_DWORD *)(v12 + 16) = v63;
        LODWORD(v63) = v21;
        v22 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 24) = v64;
        v64 = v22;
        v23 = *(_BYTE *)(v12 + 20);
        LOBYTE(v22) = v23 & 2;
        v23 &= ~2u;
        LOBYTE(v22) = v23 & 1 | BYTE4(v63) & 0xFC | v22 & 0xFE;
        *(_BYTE *)(v12 + 20) = BYTE4(v63) & 1 | v23 & 0xFE | BYTE4(v63) & 2;
        BYTE4(v63) = v22;
        LODWORD(v22) = *(_DWORD *)(v12 + 32);
        *(_DWORD *)(v12 + 32) = v65;
        LODWORD(v65) = v22;
        v24 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 40) = v66;
        v66 = v24;
        v25 = *(_BYTE *)(v12 + 36);
        LOBYTE(v24) = v25 & 2;
        v25 &= ~2u;
        LOBYTE(v24) = v25 & 1 | BYTE4(v65) & 0xFC | v24 & 0xFE;
        *(_BYTE *)(v12 + 36) = BYTE4(v65) & 1 | v25 & 0xFE | BYTE4(v65) & 2;
        BYTE4(v65) = v24;
        LODWORD(v24) = v67;
        *(_DWORD *)(v12 + 4) = 2;
        *(_DWORD *)(v12 + 48) = v24;
        goto LABEL_16;
      }
    }
LABEL_23:
    v12 += 56;
  }
  if ( v33 )
  {
    v18 = v12;
    goto LABEL_23;
  }
LABEL_17:
  if ( v18 )
    --*(_DWORD *)(a1 + 24);
  else
    v18 = v12;
  *(_DWORD *)(v18 + 8) = v62;
  v28 = *(_DWORD *)(v18 + 16);
  *(_DWORD *)(v18 + 16) = v63;
  LODWORD(v63) = v28;
  v29 = *(_QWORD *)(v18 + 24);
  *(_QWORD *)(v18 + 24) = v64;
  v64 = v29;
  v30 = *(_BYTE *)(v18 + 20);
  LOBYTE(v29) = v30 & 2;
  v30 &= ~2u;
  LOBYTE(v29) = v30 & 1 | BYTE4(v63) & 0xFC | v29 & 0xFE;
  *(_BYTE *)(v18 + 20) = BYTE4(v63) & 1 | v30 & 0xFE | BYTE4(v63) & 2;
  BYTE4(v63) = v29;
  LODWORD(v29) = *(_DWORD *)(v18 + 32);
  *(_DWORD *)(v18 + 32) = v65;
  LODWORD(v65) = v29;
  v31 = *(_QWORD *)(v18 + 40);
  *(_QWORD *)(v18 + 40) = v66;
  v66 = v31;
  v32 = *(_BYTE *)(v18 + 36);
  LOBYTE(v31) = v32 & 2;
  v32 &= ~2u;
  LOBYTE(v31) = v32 & 1 | BYTE4(v65) & 0xFC | v31 & 0xFE;
  *(_BYTE *)(v18 + 36) = BYTE4(v65) & 1 | v32 & 0xFE | BYTE4(v65) & 2;
  BYTE4(v65) = v31;
  LODWORD(v31) = v67;
  *(_DWORD *)(v18 + 4) = 2;
  *(_DWORD *)(v18 + 48) = v31;
  *(_DWORD *)v18 = v14;
  ++*(_DWORD *)(a1 + 20);
LABEL_16:
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v63);
  return sub_182CBA0(v26, &v65);
}

