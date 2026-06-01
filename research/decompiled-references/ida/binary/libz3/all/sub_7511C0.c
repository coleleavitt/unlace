char *__fastcall sub_7511C0(char **a1, __int64 a2, __int64 a3)
{
  void *v5; // r13
  int v6; // eax
  void *v7; // r12
  __int64 v8; // rax
  int v9; // edi
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // r12
  char *v15; // rsi
  char *v16; // rdx
  char *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdx
  void *v20; // rbx
  void *v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // r12
  __int64 v26; // rax
  char *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // rsi
  char *v31; // rax
  int v32; // esi
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rdx
  char v36; // di
  char v37; // di
  __int64 v38; // rsi
  __int64 v39; // rdx
  char v40; // di
  char v41; // di
  char *v42; // r12
  char *v43; // rsi
  int v44; // eax
  int v45; // edx
  __int64 v46; // rax
  char v47; // cl
  __int64 v48; // rax
  char v49; // cl
  void *v50; // [rsp+8h] [rbp-C0h]
  char *v51; // [rsp+10h] [rbp-B8h]
  size_t v52; // [rsp+20h] [rbp-A8h]
  unsigned int v53; // [rsp+28h] [rbp-A0h]
  unsigned int v54; // [rsp+2Ch] [rbp-9Ch]
  _QWORD v55[2]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v56[3]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v57; // [rsp+60h] [rbp-68h]
  __int64 v58; // [rsp+68h] [rbp-60h] BYREF
  __int64 v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h] BYREF
  __int64 v61; // [rsp+80h] [rbp-48h]

  v55[0] = 0;
  v5 = qword_1C7F2C0;
  v55[1] = 0;
  v56[0] = 1;
  v56[1] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v55, a3);
  else
    LODWORD(v55[0]) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v5, v56, a3 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 16);
    BYTE4(v56[0]) &= ~1u;
    LODWORD(v56[0]) = v6;
  }
  v7 = qword_1C7F2C0;
  v58 = 0;
  v59 = 0;
  v57 = a2;
  v60 = 1;
  v61 = 0;
  if ( (v55[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v58, v55);
  else
    LODWORD(v58) = v55[0];
  if ( (v56[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, &v60, v56);
  }
  else
  {
    BYTE4(v60) &= ~1u;
    LODWORD(v60) = v56[0];
  }
  v8 = *((unsigned int *)a1 + 2);
  v9 = *((_DWORD *)a1 + 4);
  v54 = 2 * v8;
  if ( 3 * (int)v8 < (unsigned int)(4 * (v9 + *((_DWORD *)a1 + 3))) )
  {
    v52 = 40LL * v54;
    v23 = sub_186B270(v52);
    v10 = (char *)v23;
    if ( v54 )
    {
      v24 = v23 + 40LL * v54;
      do
      {
        *(_OWORD *)(v23 + 24) = 0;
        v23 += 40;
        *(_OWORD *)(v23 - 32) = 0;
        *(_QWORD *)(v23 - 40) = 0;
        *(_BYTE *)(v23 - 28) = 0;
        *(_DWORD *)(v23 - 16) = 1;
        *(_BYTE *)(v23 - 12) = 0;
      }
      while ( v24 != v23 );
    }
    v25 = *a1;
    v11 = (__int64)&v10[v52];
    v26 = *((unsigned int *)a1 + 2);
    v27 = &(*a1)[40 * v26];
    v53 = v54 - 1;
    if ( *a1 != v27 )
    {
      do
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)v25;
          if ( *(_QWORD *)v25 > 1u )
            break;
          v25 += 40;
          if ( v27 == v25 )
            goto LABEL_40;
        }
        v29 = 40LL * (*(_DWORD *)(v28 + 12) & v53);
        v30 = &v10[v29];
        if ( v52 == v29 )
        {
LABEL_47:
          if ( v10 == v30 )
          {
LABEL_59:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v31 = v10;
          while ( *(_QWORD *)v31 )
          {
            v31 += 40;
            if ( v30 == v31 )
              goto LABEL_59;
          }
        }
        else
        {
          v31 = &v10[v29];
          while ( *(_QWORD *)v31 )
          {
            v31 += 40;
            if ( (char *)v11 == v31 )
              goto LABEL_47;
          }
        }
        v32 = *((_DWORD *)v25 + 2);
        *(_QWORD *)v31 = v28;
        v25 += 40;
        v33 = *((_DWORD *)v31 + 2);
        *((_DWORD *)v31 + 2) = v32;
        v34 = *((_QWORD *)v25 - 3);
        *((_DWORD *)v25 - 8) = v33;
        v35 = *((_QWORD *)v31 + 2);
        *((_QWORD *)v31 + 2) = v34;
        v36 = *(v25 - 28);
        *((_QWORD *)v25 - 3) = v35;
        LOBYTE(v35) = v31[12];
        v31[12] = v36 & 2 | v35 & 0xFD;
        LOBYTE(v35) = v35 & 2 | *(v25 - 28) & 0xFD;
        *(v25 - 28) = v35;
        v37 = v31[12];
        v31[12] = v35 & 1 | v37 & 0xFE;
        LODWORD(v34) = *((_DWORD *)v25 - 4);
        *(v25 - 28) = v37 & 1 | *(v25 - 28) & 0xFE;
        LODWORD(v35) = *((_DWORD *)v31 + 6);
        *((_DWORD *)v31 + 6) = v34;
        v38 = *((_QWORD *)v25 - 1);
        *((_DWORD *)v25 - 4) = v35;
        v39 = *((_QWORD *)v31 + 4);
        *((_QWORD *)v31 + 4) = v38;
        v40 = *(v25 - 12);
        *((_QWORD *)v25 - 1) = v39;
        LOBYTE(v39) = v31[28];
        v31[28] = v40 & 2 | v39 & 0xFD;
        LOBYTE(v39) = v39 & 2 | *(v25 - 12) & 0xFD;
        *(v25 - 12) = v39;
        v41 = v31[28] & 1;
        v31[28] = v39 & 1 | v31[28] & 0xFE;
        *(v25 - 12) = v41 | *(v25 - 12) & 0xFE;
      }
      while ( v27 != v25 );
LABEL_40:
      v26 = *((unsigned int *)a1 + 2);
      v27 = *a1;
    }
    if ( v27 )
    {
      if ( (_DWORD)v26 )
      {
        v42 = v27;
        v51 = &v27[40 * v26];
        do
        {
          v50 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v42 + 8);
          v43 = v42 + 24;
          v42 += 40;
          sub_182CBA0(v50, v43);
        }
        while ( v42 != v51 );
      }
      sub_186B220(v27);
    }
    *a1 = v10;
    v9 = 0;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 2) = v54;
  }
  else
  {
    v10 = *a1;
    v53 = v8 - 1;
    v52 = 40 * v8;
    v11 = (__int64)&(*a1)[40 * v8];
  }
  v12 = v57;
  v13 = *(_DWORD *)(v57 + 12);
  v14 = v13 & v53;
  v15 = &v10[40 * v14];
  if ( 40 * v14 != v52 )
  {
    v16 = &v10[40 * v14];
    v17 = nullptr;
    while ( 1 )
    {
      v18 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 > 1u )
      {
        if ( *(_DWORD *)(v18 + 12) == v13 && v57 == v18 )
        {
          v17 = v16;
          goto LABEL_27;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_57;
          v17 = v16;
          goto LABEL_58;
        }
        v17 = v16;
      }
      v16 += 40;
      if ( v16 == (char *)v11 )
        goto LABEL_22;
    }
  }
  v17 = nullptr;
  while ( 1 )
  {
LABEL_22:
    if ( v15 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v19 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 <= 1u )
      break;
    if ( *(_DWORD *)(v19 + 12) == v13 && v57 == v19 )
    {
      v17 = v10;
      goto LABEL_27;
    }
LABEL_21:
    v10 += 40;
  }
  if ( v19 )
  {
    v17 = v10;
    goto LABEL_21;
  }
  if ( v17 )
LABEL_57:
    *((_DWORD *)a1 + 4) = v9 - 1;
  else
    v17 = v10;
LABEL_58:
  v44 = *((_DWORD *)v17 + 2);
  v45 = v58;
  *(_QWORD *)v17 = v12;
  *((_DWORD *)v17 + 2) = v45;
  LODWORD(v58) = v44;
  v46 = *((_QWORD *)v17 + 2);
  *((_QWORD *)v17 + 2) = v59;
  v59 = v46;
  LOBYTE(v45) = v17[12];
  v17[12] = BYTE4(v58) & 2 | v45 & 0xFD;
  BYTE4(v58) = v45 & 2 | BYTE4(v58) & 0xFD;
  v47 = v17[12];
  v17[12] = BYTE4(v58) & 1 | v47 & 0xFE;
  BYTE4(v58) = v47 & 1 | BYTE4(v58) & 0xFE;
  LODWORD(v46) = *((_DWORD *)v17 + 6);
  *((_DWORD *)v17 + 6) = v60;
  LODWORD(v60) = v46;
  v48 = *((_QWORD *)v17 + 4);
  *((_QWORD *)v17 + 4) = v61;
  v61 = v48;
  LOBYTE(v45) = v17[28];
  v17[28] = BYTE4(v60) & 2 | v45 & 0xFD;
  BYTE4(v60) = v45 & 2 | BYTE4(v60) & 0xFD;
  v49 = v17[28] & 1;
  v17[28] = BYTE4(v60) & 1 | v17[28] & 0xFE;
  LOBYTE(v48) = BYTE4(v60);
  ++*((_DWORD *)a1 + 3);
  BYTE4(v60) = v49 | v48 & 0xFE;
LABEL_27:
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v58);
  sub_182CBA0(v20, &v60);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v55);
  sub_182CBA0(v21, v56);
  return v17 + 8;
}

