__int64 __fastcall sub_C8FE40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  char *v7; // rdx
  int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // r9
  char *v13; // rdi
  char *v14; // rbx
  __int64 v15; // rax
  void *v16; // rbx
  void *v17; // rbx
  bool v18; // al
  char v19; // al
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // r15d
  __int64 v23; // r13
  __int64 v24; // r10
  int v25; // edi
  __int64 v26; // rbx
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rdi
  int v33; // eax
  int v34; // eax
  char v35; // al
  __int64 v36; // rax
  void *v37; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  char *v42; // r12
  char *v43; // rsi
  int v44; // eax
  int v45; // edx
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rax
  char v49; // si
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rdx
  char v53; // si
  __int64 v54; // rdx
  char v55; // si
  int v56; // eax
  int v57; // edx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rax
  char v61; // cl
  int v62; // eax
  void *v63; // [rsp+8h] [rbp-C0h]
  void *v64; // [rsp+8h] [rbp-C0h]
  void *v65; // [rsp+8h] [rbp-C0h]
  char *v66; // [rsp+28h] [rbp-A0h]
  size_t v67; // [rsp+30h] [rbp-98h]
  char *ptr; // [rsp+38h] [rbp-90h]
  _QWORD v69[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v70[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v71; // [rsp+60h] [rbp-68h]
  __int64 v72; // [rsp+68h] [rbp-60h] BYREF
  __int64 v73; // [rsp+70h] [rbp-58h]
  __int64 v74; // [rsp+78h] [rbp-50h] BYREF
  __int64 v75; // [rsp+80h] [rbp-48h]

  v6 = *(unsigned int *)(a1 + 792);
  v7 = *(char **)(a1 + 784);
  v71 = a2;
  v8 = *(_DWORD *)(a2 + 12);
  v69[0] = 0;
  v9 = v6 - 1;
  v69[1] = 0;
  v6 *= 40;
  v70[0] = 1;
  v10 = 5LL * (v8 & v9);
  v11 = &v7[v6];
  v70[1] = 0;
  v12 = 8 * v10;
  v72 = 0;
  v13 = &v7[v12];
  v73 = 0;
  v74 = 1;
  v75 = 0;
  if ( v12 == v6 )
  {
LABEL_23:
    while ( v13 != v7 )
    {
      v31 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 > 1u )
      {
        if ( *(_DWORD *)(v31 + 12) == v8 && a2 == v31 )
        {
          v14 = v7;
          goto LABEL_32;
        }
      }
      else if ( !v31 )
      {
        break;
      }
      v7 += 40;
    }
LABEL_8:
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v16, &v74);
    v17 = qword_1C7F2C0;
    v18 = (*(_BYTE *)(a3 + 4) & 1) == 0;
    goto LABEL_9;
  }
  v14 = &v7[v12];
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 > 1u )
      break;
    if ( !v15 )
      goto LABEL_8;
LABEL_5:
    v14 += 40;
    if ( v11 == v14 )
      goto LABEL_23;
  }
  if ( *(_DWORD *)(v15 + 12) != v8 || a2 != v15 )
    goto LABEL_5;
LABEL_32:
  v63 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v72);
  sub_182CBA0(v63, &v74);
  v32 = qword_1C7F2C0;
  if ( (v14[12] & 1) != 0 )
  {
    v65 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v69, v14 + 8);
    v32 = v65;
    if ( (v14[28] & 1) != 0 )
      goto LABEL_64;
LABEL_34:
    v34 = *((_DWORD *)v14 + 6);
    BYTE4(v70[0]) &= ~1u;
    LODWORD(v70[0]) = v34;
  }
  else
  {
    v33 = *((_DWORD *)v14 + 2);
    BYTE4(v69[0]) &= ~1u;
    LODWORD(v69[0]) = v33;
    if ( (v14[28] & 1) == 0 )
      goto LABEL_34;
LABEL_64:
    sub_182C690(v32, v70, v14 + 24);
  }
  v17 = qword_1C7F2C0;
  if ( (v70[0] & 0x100000000LL) != 0
    || LODWORD(v70[0]) != 1
    || (v19 = *(_BYTE *)(a3 + 20), (v19 & 1) != 0)
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    v35 = sub_1848D40(qword_1C7F2C0, v69, a3);
    v17 = qword_1C7F2C0;
    if ( !v35 )
      goto LABEL_48;
  }
  else
  {
    if ( (v69[0] & 0x100000000LL) == 0 && (*(_BYTE *)(a3 + 4) & 1) == 0 )
    {
      if ( SLODWORD(v69[0]) >= *(_DWORD *)a3 )
        goto LABEL_48;
      v71 = a2;
      v72 = 0;
      v73 = 0;
      v74 = 1;
      v75 = 0;
LABEL_11:
      LODWORD(v72) = *(_DWORD *)a3;
      if ( (v19 & 1) == 0 )
        goto LABEL_12;
LABEL_50:
      sub_182C690(v17, &v74, a3 + 16);
      goto LABEL_13;
    }
    v62 = sub_182C7B0(qword_1C7F2C0, v69, a3);
    v17 = qword_1C7F2C0;
    if ( v62 >= 0 )
      goto LABEL_48;
  }
  v18 = (*(_BYTE *)(a3 + 4) & 1) == 0;
LABEL_9:
  v71 = a2;
  v72 = 0;
  v73 = 0;
  v74 = 1;
  v75 = 0;
  if ( v18 )
  {
    v19 = *(_BYTE *)(a3 + 20);
    goto LABEL_11;
  }
  sub_182C690(v17, &v72, a3);
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_50;
LABEL_12:
  v20 = *(_DWORD *)(a3 + 16);
  BYTE4(v74) &= ~1u;
  LODWORD(v74) = v20;
LABEL_13:
  v21 = *(_DWORD *)(a1 + 792);
  v22 = 2 * v21;
  if ( 3 * v21 < 4 * (*(_DWORD *)(a1 + 796) + *(_DWORD *)(a1 + 800)) )
  {
    v21 *= 2;
    v67 = 40LL * v22;
    v39 = sub_186B270(v67);
    v23 = v39;
    if ( v22 )
    {
      v40 = v39 + 40LL * v22;
      do
      {
        *(_OWORD *)(v39 + 24) = 0;
        v39 += 40;
        *(_OWORD *)(v39 - 32) = 0;
        *(_QWORD *)(v39 - 40) = 0;
        *(_BYTE *)(v39 - 28) = 0;
        *(_DWORD *)(v39 - 16) = 1;
        *(_BYTE *)(v39 - 12) = 0;
      }
      while ( v40 != v39 );
    }
    sub_7FF100(*(__int64 **)(a1 + 784), *(_DWORD *)(a1 + 792), v23, v22);
    ptr = *(char **)(a1 + 784);
    if ( ptr )
    {
      v41 = *(unsigned int *)(a1 + 792);
      if ( (_DWORD)v41 )
      {
        v42 = *(char **)(a1 + 784);
        v66 = &ptr[40 * v41];
        do
        {
          v64 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v42 + 8);
          v43 = v42 + 24;
          v42 += 40;
          sub_182CBA0(v64, v43);
        }
        while ( v42 != v66 );
      }
      sub_186B220(ptr);
    }
    *(_QWORD *)(a1 + 784) = v23;
    *(_DWORD *)(a1 + 792) = v22;
    *(_DWORD *)(a1 + 800) = 0;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 784);
    v67 = 40LL * v21;
  }
  v24 = v71;
  v25 = *(_DWORD *)(v71 + 12);
  v26 = v25 & (v21 - 1);
  v27 = v23 + 40 * v26;
  if ( 40 * v26 != v67 )
  {
    v28 = v23 + 40 * v26;
    v29 = 0;
    while ( 1 )
    {
      v30 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 > 1u )
      {
        if ( *(_DWORD *)(v30 + 12) == v25 && v71 == v30 )
        {
          v50 = *(_DWORD *)(v28 + 8);
          v51 = v72;
          *(_QWORD *)v28 = v71;
          *(_DWORD *)(v28 + 8) = v51;
          LODWORD(v72) = v50;
          v52 = *(_QWORD *)(v28 + 16);
          *(_QWORD *)(v28 + 16) = v73;
          v73 = v52;
          LOBYTE(v52) = *(_BYTE *)(v28 + 12);
          *(_BYTE *)(v28 + 12) = BYTE4(v72) & 2 | v52 & 0xFD;
          BYTE4(v72) = v52 & 2 | BYTE4(v72) & 0xFD;
          v53 = *(_BYTE *)(v28 + 12);
          *(_BYTE *)(v28 + 12) = BYTE4(v72) & 1 | v53 & 0xFE;
          BYTE4(v72) = v53 & 1 | BYTE4(v72) & 0xFE;
          LODWORD(v52) = *(_DWORD *)(v28 + 24);
          *(_DWORD *)(v28 + 24) = v74;
          LODWORD(v74) = v52;
          v54 = *(_QWORD *)(v28 + 32);
          *(_QWORD *)(v28 + 32) = v75;
          v75 = v54;
          LOBYTE(v54) = *(_BYTE *)(v28 + 28);
          *(_BYTE *)(v28 + 28) = BYTE4(v74) & 2 | v54 & 0xFD;
          BYTE4(v74) = v54 & 2 | BYTE4(v74) & 0xFD;
          v55 = *(_BYTE *)(v28 + 28) & 1;
          *(_BYTE *)(v28 + 28) = BYTE4(v74) & 1 | *(_BYTE *)(v28 + 28) & 0xFE;
          BYTE4(v74) = v55 | BYTE4(v74) & 0xFE;
          goto LABEL_47;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_61;
          v29 = v28;
          goto LABEL_62;
        }
        v29 = v28;
      }
      v28 += 40;
      if ( v23 + v67 == v28 )
        goto LABEL_42;
    }
  }
  v29 = 0;
LABEL_42:
  while ( 2 )
  {
    if ( v27 == v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 > 1u )
    {
      if ( *(_DWORD *)(v36 + 12) == v25 && v71 == v36 )
      {
        v56 = *(_DWORD *)(v23 + 8);
        v57 = v72;
        *(_QWORD *)v23 = v71;
        *(_DWORD *)(v23 + 8) = v57;
        LODWORD(v72) = v56;
        v58 = *(_QWORD *)(v23 + 16);
        *(_QWORD *)(v23 + 16) = v73;
        v73 = v58;
        LOBYTE(v57) = *(_BYTE *)(v23 + 12);
        *(_BYTE *)(v23 + 12) = BYTE4(v72) & 2 | v57 & 0xFD;
        BYTE4(v72) = v57 & 2 | BYTE4(v72) & 0xFD;
        v59 = *(_BYTE *)(v23 + 12);
        *(_BYTE *)(v23 + 12) = BYTE4(v72) & 1 | v59 & 0xFE;
        BYTE4(v72) = v59 & 1 | BYTE4(v72) & 0xFE;
        LODWORD(v58) = *(_DWORD *)(v23 + 24);
        *(_DWORD *)(v23 + 24) = v74;
        LODWORD(v74) = v58;
        v60 = *(_QWORD *)(v23 + 32);
        *(_QWORD *)(v23 + 32) = v75;
        v75 = v60;
        LOBYTE(v57) = *(_BYTE *)(v23 + 28);
        *(_BYTE *)(v23 + 28) = BYTE4(v74) & 2 | v57 & 0xFD;
        BYTE4(v74) = v57 & 2 | BYTE4(v74) & 0xFD;
        v61 = *(_BYTE *)(v23 + 28) & 1;
        *(_BYTE *)(v23 + 28) = BYTE4(v74) & 1 | *(_BYTE *)(v23 + 28) & 0xFE;
        BYTE4(v74) = v61 | BYTE4(v74) & 0xFE;
        goto LABEL_47;
      }
      goto LABEL_41;
    }
    if ( v36 )
    {
      v29 = v23;
LABEL_41:
      v23 += 40;
      continue;
    }
    break;
  }
  if ( v29 )
LABEL_61:
    --*(_DWORD *)(a1 + 800);
  else
    v29 = v23;
LABEL_62:
  v44 = *(_DWORD *)(v29 + 8);
  v45 = v72;
  *(_QWORD *)v29 = v24;
  *(_DWORD *)(v29 + 8) = v45;
  LODWORD(v72) = v44;
  v46 = *(_QWORD *)(v29 + 16);
  *(_QWORD *)(v29 + 16) = v73;
  v73 = v46;
  LOBYTE(v45) = *(_BYTE *)(v29 + 12);
  *(_BYTE *)(v29 + 12) = BYTE4(v72) & 2 | v45 & 0xFD;
  BYTE4(v72) = v45 & 2 | BYTE4(v72) & 0xFD;
  v47 = *(_BYTE *)(v29 + 12);
  *(_BYTE *)(v29 + 12) = BYTE4(v72) & 1 | v47 & 0xFE;
  BYTE4(v72) = v47 & 1 | BYTE4(v72) & 0xFE;
  LODWORD(v46) = *(_DWORD *)(v29 + 24);
  *(_DWORD *)(v29 + 24) = v74;
  LODWORD(v74) = v46;
  v48 = *(_QWORD *)(v29 + 32);
  *(_QWORD *)(v29 + 32) = v75;
  v75 = v48;
  LOBYTE(v45) = *(_BYTE *)(v29 + 28);
  *(_BYTE *)(v29 + 28) = BYTE4(v74) & 2 | v45 & 0xFD;
  BYTE4(v74) = v45 & 2 | BYTE4(v74) & 0xFD;
  v49 = *(_BYTE *)(v29 + 28) & 1;
  *(_BYTE *)(v29 + 28) = BYTE4(v74) & 1 | *(_BYTE *)(v29 + 28) & 0xFE;
  LOBYTE(v48) = BYTE4(v74);
  ++*(_DWORD *)(a1 + 796);
  BYTE4(v74) = v49 | v48 & 0xFE;
LABEL_47:
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v72);
  sub_182CBA0(v37, &v74);
  v17 = qword_1C7F2C0;
LABEL_48:
  sub_182CBA0(v17, v69);
  return sub_182CBA0(v17, v70);
}

