__int64 __fastcall sub_34F3C0(char **a1, __int64 a2, __int64 a3)
{
  void *v5; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // rbx
  size_t v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // r10
  __int64 v23; // rax
  char *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // esi
  int v30; // edx
  __int64 v31; // rsi
  __int64 v32; // rdx
  char v33; // di
  char v34; // di
  __int64 v35; // rsi
  __int64 v36; // rdx
  char v37; // di
  char v38; // di
  char *v39; // r15
  void *v40; // rbx
  char *v41; // rsi
  int v42; // eax
  int v43; // edx
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rax
  char v47; // cl
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rdx
  char v51; // si
  __int64 v52; // rdx
  char v53; // si
  int v54; // eax
  int v55; // edx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // rax
  char v59; // si
  char *v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  unsigned int v62; // [rsp+18h] [rbp-70h]
  unsigned int v63; // [rsp+1Ch] [rbp-6Ch]
  __int64 v65; // [rsp+28h] [rbp-60h] BYREF
  __int64 v66; // [rsp+30h] [rbp-58h]
  __int64 v67; // [rsp+38h] [rbp-50h] BYREF
  __int64 v68; // [rsp+40h] [rbp-48h]

  v65 = 0;
  v5 = qword_1C7F2C0;
  v66 = 0;
  v67 = 1;
  v68 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v65, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_48:
    sub_182C690(v5, &v67, a3 + 16);
    goto LABEL_4;
  }
  LODWORD(v65) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_48;
LABEL_3:
  v6 = *(_DWORD *)(a3 + 16);
  BYTE4(v67) &= ~1u;
  LODWORD(v67) = v6;
LABEL_4:
  v7 = *((unsigned int *)a1 + 2);
  v63 = 2 * v7;
  if ( 3 * (int)v7 < (unsigned int)(4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4))) )
  {
    v19 = 40LL * v63;
    v61 = v19;
    v20 = sub_186B270(v19);
    v8 = v20;
    if ( v63 )
    {
      v21 = v20 + 40LL * v63;
      do
      {
        *(_OWORD *)(v20 + 24) = 0;
        v20 += 40;
        *(_OWORD *)(v20 - 32) = 0;
        *(_QWORD *)(v20 - 40) = 0;
        *(_BYTE *)(v20 - 28) = 0;
        *(_DWORD *)(v20 - 16) = 1;
        *(_BYTE *)(v20 - 12) = 0;
      }
      while ( v21 != v20 );
    }
    v22 = *a1;
    v9 = v8 + v19;
    v23 = *((unsigned int *)a1 + 2);
    v24 = &(*a1)[40 * v23];
    v62 = v63 - 1;
    if ( *a1 != v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)v22;
          if ( *(_QWORD *)v22 > 1u )
            break;
          v22 += 40;
          if ( v24 == v22 )
            goto LABEL_35;
        }
        v26 = 40LL * (*(_DWORD *)(v25 + 12) & v62);
        v27 = v8 + v26;
        if ( v19 == v26 )
        {
LABEL_42:
          if ( v8 == v27 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v28 = v8;
          while ( *(_QWORD *)v28 )
          {
            v28 += 40;
            if ( v27 == v28 )
              goto LABEL_52;
          }
        }
        else
        {
          v28 = v8 + v26;
          while ( *(_QWORD *)v28 )
          {
            v28 += 40;
            if ( v9 == v28 )
              goto LABEL_42;
          }
        }
        v29 = *((_DWORD *)v22 + 2);
        *(_QWORD *)v28 = v25;
        v22 += 40;
        v30 = *(_DWORD *)(v28 + 8);
        *(_DWORD *)(v28 + 8) = v29;
        v31 = *((_QWORD *)v22 - 3);
        *((_DWORD *)v22 - 8) = v30;
        v32 = *(_QWORD *)(v28 + 16);
        *(_QWORD *)(v28 + 16) = v31;
        v33 = *(v22 - 28);
        *((_QWORD *)v22 - 3) = v32;
        LOBYTE(v32) = *(_BYTE *)(v28 + 12);
        *(_BYTE *)(v28 + 12) = v33 & 2 | v32 & 0xFD;
        LOBYTE(v32) = v32 & 2 | *(v22 - 28) & 0xFD;
        *(v22 - 28) = v32;
        v34 = *(_BYTE *)(v28 + 12);
        *(_BYTE *)(v28 + 12) = v32 & 1 | v34 & 0xFE;
        LODWORD(v31) = *((_DWORD *)v22 - 4);
        *(v22 - 28) = v34 & 1 | *(v22 - 28) & 0xFE;
        LODWORD(v32) = *(_DWORD *)(v28 + 24);
        *(_DWORD *)(v28 + 24) = v31;
        v35 = *((_QWORD *)v22 - 1);
        *((_DWORD *)v22 - 4) = v32;
        v36 = *(_QWORD *)(v28 + 32);
        *(_QWORD *)(v28 + 32) = v35;
        v37 = *(v22 - 12);
        *((_QWORD *)v22 - 1) = v36;
        LOBYTE(v36) = *(_BYTE *)(v28 + 28);
        *(_BYTE *)(v28 + 28) = v37 & 2 | v36 & 0xFD;
        LOBYTE(v36) = v36 & 2 | *(v22 - 12) & 0xFD;
        *(v22 - 12) = v36;
        v38 = *(_BYTE *)(v28 + 28) & 1;
        *(_BYTE *)(v28 + 28) = v36 & 1 | *(_BYTE *)(v28 + 28) & 0xFE;
        *(v22 - 12) = v38 | *(v22 - 12) & 0xFE;
      }
      while ( v24 != v22 );
LABEL_35:
      v23 = *((unsigned int *)a1 + 2);
      v24 = *a1;
    }
    if ( v24 )
    {
      if ( (_DWORD)v23 )
      {
        v39 = v24;
        v60 = &v24[40 * v23];
        do
        {
          v40 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v39 + 8);
          v41 = v39 + 24;
          v39 += 40;
          sub_182CBA0(v40, v41);
        }
        while ( v39 != v60 );
      }
      sub_186B220(v24);
    }
    *a1 = (char *)v8;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 2) = v63;
  }
  else
  {
    v8 = (__int64)*a1;
    v62 = v7 - 1;
    v61 = 40 * v7;
    v9 = (__int64)&(*a1)[40 * v7];
  }
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v10 & v62;
  v12 = v8 + 40 * v11;
  if ( 40 * v11 != v61 )
  {
    v13 = v8 + 40 * v11;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && a2 == v15 )
        {
          v48 = *(_DWORD *)(v13 + 8);
          v49 = v65;
          *(_QWORD *)v13 = a2;
          *(_DWORD *)(v13 + 8) = v49;
          LODWORD(v65) = v48;
          v50 = *(_QWORD *)(v13 + 16);
          *(_QWORD *)(v13 + 16) = v66;
          v66 = v50;
          LOBYTE(v50) = *(_BYTE *)(v13 + 12);
          *(_BYTE *)(v13 + 12) = BYTE4(v65) & 2 | v50 & 0xFD;
          BYTE4(v65) = v50 & 2 | BYTE4(v65) & 0xFD;
          v51 = *(_BYTE *)(v13 + 12);
          *(_BYTE *)(v13 + 12) = BYTE4(v65) & 1 | v51 & 0xFE;
          BYTE4(v65) = v51 & 1 | BYTE4(v65) & 0xFE;
          LODWORD(v50) = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v67;
          LODWORD(v67) = v50;
          v52 = *(_QWORD *)(v13 + 32);
          *(_QWORD *)(v13 + 32) = v68;
          v68 = v52;
          LOBYTE(v52) = *(_BYTE *)(v13 + 28);
          *(_BYTE *)(v13 + 28) = BYTE4(v67) & 2 | v52 & 0xFD;
          BYTE4(v67) = v52 & 2 | BYTE4(v67) & 0xFD;
          v53 = *(_BYTE *)(v13 + 28) & 1;
          *(_BYTE *)(v13 + 28) = BYTE4(v67) & 1 | *(_BYTE *)(v13 + 28) & 0xFE;
          BYTE4(v67) = v53 | BYTE4(v67) & 0xFE;
          goto LABEL_22;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_50;
          v14 = v13;
          goto LABEL_51;
        }
        v14 = v13;
      }
      v13 += 40;
      if ( v13 == v9 )
        goto LABEL_17;
    }
  }
  v14 = 0;
  while ( 1 )
  {
LABEL_17:
    if ( v12 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v16 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 <= 1u )
      break;
    if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
    {
      v54 = *(_DWORD *)(v8 + 8);
      v55 = v65;
      *(_QWORD *)v8 = a2;
      *(_DWORD *)(v8 + 8) = v55;
      LODWORD(v65) = v54;
      v56 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = v66;
      v66 = v56;
      LOBYTE(v55) = *(_BYTE *)(v8 + 12);
      *(_BYTE *)(v8 + 12) = BYTE4(v65) & 2 | v55 & 0xFD;
      BYTE4(v65) = v55 & 2 | BYTE4(v65) & 0xFD;
      v57 = *(_BYTE *)(v8 + 12);
      *(_BYTE *)(v8 + 12) = BYTE4(v65) & 1 | v57 & 0xFE;
      BYTE4(v65) = v57 & 1 | BYTE4(v65) & 0xFE;
      LODWORD(v56) = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v67;
      LODWORD(v67) = v56;
      v58 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 32) = v68;
      v68 = v58;
      LOBYTE(v55) = *(_BYTE *)(v8 + 28);
      *(_BYTE *)(v8 + 28) = BYTE4(v67) & 2 | v55 & 0xFD;
      BYTE4(v67) = v55 & 2 | BYTE4(v67) & 0xFD;
      v59 = *(_BYTE *)(v8 + 28) & 1;
      *(_BYTE *)(v8 + 28) = BYTE4(v67) & 1 | *(_BYTE *)(v8 + 28) & 0xFE;
      BYTE4(v67) = v59 | BYTE4(v67) & 0xFE;
      goto LABEL_22;
    }
LABEL_16:
    v8 += 40;
  }
  if ( v16 )
  {
    v14 = v8;
    goto LABEL_16;
  }
  if ( v14 )
LABEL_50:
    --*((_DWORD *)a1 + 4);
  else
    v14 = v8;
LABEL_51:
  v42 = *(_DWORD *)(v14 + 8);
  v43 = v65;
  *(_QWORD *)v14 = a2;
  *(_DWORD *)(v14 + 8) = v43;
  LODWORD(v65) = v42;
  v44 = *(_QWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 16) = v66;
  v66 = v44;
  LOBYTE(v43) = *(_BYTE *)(v14 + 12);
  *(_BYTE *)(v14 + 12) = BYTE4(v65) & 2 | v43 & 0xFD;
  BYTE4(v65) = v43 & 2 | BYTE4(v65) & 0xFD;
  v45 = *(_BYTE *)(v14 + 12);
  *(_BYTE *)(v14 + 12) = BYTE4(v65) & 1 | v45 & 0xFE;
  BYTE4(v65) = v45 & 1 | BYTE4(v65) & 0xFE;
  LODWORD(v44) = *(_DWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v67;
  LODWORD(v67) = v44;
  v46 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 32) = v68;
  v68 = v46;
  LOBYTE(v43) = *(_BYTE *)(v14 + 28);
  *(_BYTE *)(v14 + 28) = BYTE4(v67) & 2 | v43 & 0xFD;
  BYTE4(v67) = v43 & 2 | BYTE4(v67) & 0xFD;
  v47 = *(_BYTE *)(v14 + 28) & 1;
  *(_BYTE *)(v14 + 28) = BYTE4(v67) & 1 | *(_BYTE *)(v14 + 28) & 0xFE;
  LOBYTE(v46) = BYTE4(v67);
  ++*((_DWORD *)a1 + 3);
  BYTE4(v67) = v47 | v46 & 0xFE;
LABEL_22:
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v65);
  return sub_182CBA0(v17, &v67);
}

