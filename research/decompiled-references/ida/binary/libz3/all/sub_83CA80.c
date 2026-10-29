char *__fastcall sub_83CA80(__int64 a1, int *a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // r9
  char *v11; // rdi
  char *result; // rax
  char *v13; // rcx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // si
  char v19; // si
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // si
  char v23; // si
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // cl
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // cl
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // di
  char v38; // di
  __int64 v39; // rdx
  __int64 v40; // rax
  char v41; // di
  int v42; // edi
  __int64 v43; // rax
  int v44; // ecx
  size_t v45; // rdx
  char *v46; // rax
  char *v47; // rax
  char *v48; // r12
  unsigned int v49; // esi
  char *v50; // r10
  __int64 v51; // rax
  char *v52; // rdx
  char *v53; // rax
  int v54; // edx
  int v55; // edx
  __int64 v56; // rsi
  __int64 v57; // rdx
  char v58; // di
  char v59; // di
  __int64 v60; // rsi
  __int64 v61; // rdx
  char v62; // di
  char v63; // di
  size_t v64; // [rsp+8h] [rbp-50h]
  int v65; // [rsp+10h] [rbp-48h]

  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v65 = 2 * v4;
    v64 = 48LL * (unsigned int)(2 * v4);
    v7 = v64;
    v43 = sub_186B270(v64);
    v44 = v65;
    v5 = (char *)v43;
    v45 = v43 + v64;
    if ( v65 )
    {
      do
      {
        *(_BYTE *)(v43 + 20) &= 0xFCu;
        *(_BYTE *)(v43 + 36) &= 0xFCu;
        v43 += 48;
        *(_QWORD *)(v43 - 48) = 0;
        *(_QWORD *)(v43 - 24) = 0;
        *(_QWORD *)(v43 - 8) = 0;
      }
      while ( v43 != v45 );
      v46 = v5;
      if ( (((_BYTE)v45 - (_BYTE)v5) & 0x10) == 0 || (v46 = v5 + 48, *((_DWORD *)v5 + 4) = 0, v5 + 48 != (char *)v45) )
      {
        do
        {
          *((_DWORD *)v46 + 4) = 0;
          v46 += 96;
          *((_DWORD *)v46 - 8) = 0;
        }
        while ( v46 != (char *)v45 );
      }
      v47 = v5;
      if ( (((_BYTE)v45 - (_BYTE)v5) & 0x10) == 0 || (v47 = v5 + 48, *((_DWORD *)v5 + 8) = 1, v5 + 48 != (char *)v45) )
      {
        do
        {
          *((_DWORD *)v47 + 8) = 1;
          v47 += 96;
          *((_DWORD *)v47 - 4) = 1;
        }
        while ( v47 != (char *)v45 );
      }
    }
    v48 = *(char **)a1;
    v6 = v65 - 1;
    v8 = (__int64)&v5[v64];
    v49 = *(_DWORD *)(a1 + 8);
    v50 = (char *)(*(_QWORD *)a1 + 48LL * v49);
    if ( *(char **)a1 != v50 )
    {
      do
      {
        while ( *((_DWORD *)v48 + 1) != 2 )
        {
          v48 += 48;
          if ( v50 == v48 )
            goto LABEL_40;
        }
        v51 = 48LL * (*(_DWORD *)v48 & v6);
        v52 = &v5[v51];
        if ( v51 == v64 )
        {
LABEL_45:
          if ( v52 == v5 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v53 = v5;
          while ( *((_DWORD *)v53 + 1) )
          {
            v53 += 48;
            if ( v52 == v53 )
              goto LABEL_52;
          }
        }
        else
        {
          v53 = &v5[v51];
          while ( *((_DWORD *)v53 + 1) )
          {
            v53 += 48;
            if ( (char *)v8 == v53 )
              goto LABEL_45;
          }
        }
        *(_DWORD *)v53 = *(_DWORD *)v48;
        v54 = *((_DWORD *)v48 + 2);
        v48 += 48;
        *((_DWORD *)v53 + 1) = 2;
        *((_DWORD *)v53 + 2) = v54;
        v55 = *((_DWORD *)v53 + 4);
        *((_DWORD *)v53 + 4) = *((_DWORD *)v48 - 8);
        v56 = *((_QWORD *)v48 - 3);
        *((_DWORD *)v48 - 8) = v55;
        v57 = *((_QWORD *)v53 + 3);
        *((_QWORD *)v53 + 3) = v56;
        v58 = *(v48 - 28);
        *((_QWORD *)v48 - 3) = v57;
        LOBYTE(v57) = v53[20];
        v53[20] = v58 & 2 | v57 & 0xFD;
        LOBYTE(v57) = v57 & 2 | *(v48 - 28) & 0xFD;
        *(v48 - 28) = v57;
        v59 = v53[20];
        v53[20] = v57 & 1 | v59 & 0xFE;
        LODWORD(v56) = *((_DWORD *)v48 - 4);
        *(v48 - 28) = v59 & 1 | *(v48 - 28) & 0xFE;
        LODWORD(v57) = *((_DWORD *)v53 + 8);
        *((_DWORD *)v53 + 8) = v56;
        v60 = *((_QWORD *)v48 - 1);
        *((_DWORD *)v48 - 4) = v57;
        v61 = *((_QWORD *)v53 + 5);
        *((_QWORD *)v53 + 5) = v60;
        v62 = *(v48 - 12);
        *((_QWORD *)v48 - 1) = v61;
        LOBYTE(v61) = v53[36];
        v53[36] = v62 & 2 | v61 & 0xFD;
        LOBYTE(v61) = v61 & 2 | *(v48 - 12) & 0xFD;
        *(v48 - 12) = v61;
        v63 = v53[36] & 1;
        v53[36] = v61 & 1 | v53[36] & 0xFE;
        *(v48 - 12) = v63 | *(v48 - 12) & 0xFE;
      }
      while ( v50 != v48 );
LABEL_40:
      v49 = *(_DWORD *)(a1 + 8);
      v50 = *(char **)a1;
    }
    if ( v50 )
    {
      sub_828DB0(v50, v49);
      v44 = v65;
      v6 = v65 - 1;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v44;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(char **)a1;
    v6 = v4 - 1;
    v7 = 48 * v4;
    v8 = *(_QWORD *)a1 + 48 * v4;
  }
  v9 = *a2;
  v10 = *a2 & v6;
  v11 = &v5[48 * v10];
  if ( 48 * v10 != v7 )
  {
    result = &v5[48 * v10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = *((_DWORD *)result + 1);
      if ( v14 == 2 )
      {
        if ( v9 == *(_DWORD *)result && v9 == *((_DWORD *)result + 2) )
        {
          *((_DWORD *)result + 2) = v9;
          v15 = *((_DWORD *)result + 4);
          *((_DWORD *)result + 4) = a2[2];
          v16 = *((_QWORD *)a2 + 2);
          a2[2] = v15;
          v17 = *((_QWORD *)result + 3);
          *((_QWORD *)result + 3) = v16;
          v18 = *((_BYTE *)a2 + 12);
          *((_QWORD *)a2 + 2) = v17;
          LOBYTE(v17) = result[20];
          result[20] = v18 & 2 | v17 & 0xFD;
          LOBYTE(v17) = v17 & 2 | a2[3] & 0xFD;
          *((_BYTE *)a2 + 12) = v17;
          v19 = result[20];
          result[20] = v17 & 1 | v19 & 0xFE;
          LODWORD(v16) = a2[6];
          *((_BYTE *)a2 + 12) = v19 & 1 | a2[3] & 0xFE;
          LODWORD(v17) = *((_DWORD *)result + 8);
          *((_DWORD *)result + 8) = v16;
          v20 = *((_QWORD *)a2 + 4);
          a2[6] = v17;
          v21 = *((_QWORD *)result + 5);
          *((_QWORD *)result + 5) = v20;
          v22 = *((_BYTE *)a2 + 28);
          *((_QWORD *)a2 + 4) = v21;
          LOBYTE(v21) = result[36];
          result[36] = v22 & 2 | v21 & 0xFD;
          LOBYTE(v21) = v21 & 2 | a2[7] & 0xFD;
          *((_BYTE *)a2 + 28) = v21;
          v23 = result[36] & 1;
          result[36] = v21 & 1 | result[36] & 0xFE;
          *((_BYTE *)a2 + 28) = v23 | a2[7] & 0xFE;
          *((_DWORD *)result + 1) = 2;
          return result;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_21;
          v13 = result;
          goto LABEL_22;
        }
        v13 = result;
      }
      result += 48;
      if ( result == (char *)v8 )
        goto LABEL_15;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v24 = *((_DWORD *)v5 + 1);
    if ( v24 != 2 )
      break;
    if ( v9 == *(_DWORD *)v5 && v9 == *((_DWORD *)v5 + 2) )
    {
      *((_DWORD *)v5 + 2) = v9;
      v25 = *((_DWORD *)v5 + 4);
      *((_DWORD *)v5 + 4) = a2[2];
      v26 = *((_QWORD *)a2 + 2);
      a2[2] = v25;
      v27 = *((_QWORD *)v5 + 3);
      *((_QWORD *)v5 + 3) = v26;
      v28 = *((_BYTE *)a2 + 12);
      *((_QWORD *)a2 + 2) = v27;
      LOBYTE(v26) = v5[20];
      v5[20] = v28 & 2 | v26 & 0xFD;
      LOBYTE(v27) = v26 & 2 | a2[3] & 0xFD;
      *((_BYTE *)a2 + 12) = v27;
      v29 = v5[20];
      v5[20] = v27 & 1 | v29 & 0xFE;
      LODWORD(v26) = a2[6];
      *((_BYTE *)a2 + 12) = v29 & 1 | a2[3] & 0xFE;
      LODWORD(v27) = *((_DWORD *)v5 + 8);
      *((_DWORD *)v5 + 8) = v26;
      v30 = *((_QWORD *)a2 + 4);
      a2[6] = v27;
      v31 = *((_QWORD *)v5 + 5);
      *((_QWORD *)v5 + 5) = v30;
      v32 = *((_BYTE *)a2 + 28);
      *((_QWORD *)a2 + 4) = v31;
      LOBYTE(v30) = v5[36];
      v5[36] = v32 & 2 | v30 & 0xFD;
      LOBYTE(v31) = v30 & 2 | a2[7] & 0xFD;
      *((_BYTE *)a2 + 28) = v31;
      v33 = v5[36] & 1;
      v5[36] = v31 & 1 | v5[36] & 0xFE;
      result = (char *)(v33 | (_BYTE)a2[7] & 0xFEu);
      *((_BYTE *)a2 + 28) = v33 | a2[7] & 0xFE;
      *((_DWORD *)v5 + 1) = 2;
      return result;
    }
LABEL_14:
    v5 += 48;
  }
  if ( v24 )
  {
    v13 = v5;
    goto LABEL_14;
  }
  if ( v13 )
LABEL_21:
    --*(_DWORD *)(a1 + 16);
  else
    v13 = v5;
LABEL_22:
  *((_DWORD *)v13 + 2) = v9;
  v34 = *((_DWORD *)v13 + 4);
  *((_DWORD *)v13 + 4) = a2[2];
  v35 = *((_QWORD *)a2 + 2);
  a2[2] = v34;
  v36 = *((_QWORD *)v13 + 3);
  *((_QWORD *)v13 + 3) = v35;
  v37 = *((_BYTE *)a2 + 12);
  *((_QWORD *)a2 + 2) = v36;
  LOBYTE(v35) = v13[20];
  v13[20] = v37 & 2 | v35 & 0xFD;
  LOBYTE(v36) = v35 & 2 | a2[3] & 0xFD;
  *((_BYTE *)a2 + 12) = v36;
  v38 = v13[20];
  v13[20] = v36 & 1 | v38 & 0xFE;
  LODWORD(v35) = a2[6];
  *((_BYTE *)a2 + 12) = v38 & 1 | a2[3] & 0xFE;
  LODWORD(v36) = *((_DWORD *)v13 + 8);
  *((_DWORD *)v13 + 8) = v35;
  v39 = *((_QWORD *)a2 + 4);
  a2[6] = v36;
  v40 = *((_QWORD *)v13 + 5);
  *((_QWORD *)v13 + 5) = v39;
  v41 = *((_BYTE *)a2 + 28);
  *((_QWORD *)a2 + 4) = v40;
  LOBYTE(v39) = v13[36];
  v13[36] = v41 & 2 | v39 & 0xFD;
  LOBYTE(v40) = v39 & 2 | a2[7] & 0xFD;
  *((_BYTE *)a2 + 28) = v40;
  v42 = v13[36] & 1;
  v13[36] = v40 & 1 | v13[36] & 0xFE;
  result = (char *)(v42 | (_BYTE)a2[7] & 0xFEu);
  *((_BYTE *)a2 + 28) = v42 | a2[7] & 0xFE;
  *((_DWORD *)v13 + 1) = 2;
  *(_DWORD *)v13 = v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

