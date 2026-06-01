__int64 __fastcall sub_C3EBC0(__int64 *a1, __int64 a2, __int64 a3)
{
  void *v5; // rbp
  int v6; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r13
  int v11; // edi
  __int64 v12; // rbp
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rbx
  size_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // r10
  __int64 v24; // rax
  char *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // esi
  int v31; // edx
  __int64 v32; // rsi
  __int64 v33; // rdx
  char v34; // di
  char v35; // di
  __int64 v36; // rsi
  __int64 v37; // rdx
  char v38; // di
  char v39; // di
  char *v40; // r14
  void *v41; // rbp
  char *v42; // rsi
  int v43; // eax
  int v44; // edx
  __int64 v45; // rax
  char v46; // cl
  __int64 v47; // rax
  char v48; // cl
  int v49; // edx
  int v50; // ecx
  __int64 v51; // rdx
  char v52; // si
  __int64 v53; // rdx
  char v54; // si
  int v55; // eax
  int v56; // edx
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rax
  char v60; // si
  char *v61; // [rsp+0h] [rbp-88h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  unsigned int v63; // [rsp+18h] [rbp-70h]
  unsigned int v64; // [rsp+1Ch] [rbp-6Ch]
  __int64 v66; // [rsp+28h] [rbp-60h] BYREF
  __int64 v67; // [rsp+30h] [rbp-58h]
  __int64 v68; // [rsp+38h] [rbp-50h] BYREF
  __int64 v69; // [rsp+40h] [rbp-48h]
  int v70; // [rsp+48h] [rbp-40h]
  char v71; // [rsp+4Ch] [rbp-3Ch]

  v66 = 0;
  v5 = qword_1C7F2C0;
  v67 = 0;
  v68 = 1;
  v69 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v66, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_48:
    sub_182C690(v5, &v68, a3 + 16);
    goto LABEL_4;
  }
  LODWORD(v66) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_48;
LABEL_3:
  v6 = *(_DWORD *)(a3 + 16);
  BYTE4(v68) &= ~1u;
  LODWORD(v68) = v6;
LABEL_4:
  v7 = *((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4);
  v70 = *(_DWORD *)(a3 + 32);
  v71 = *(_BYTE *)(a3 + 36);
  v8 = *((unsigned int *)a1 + 2);
  v64 = 2 * v8;
  if ( 3 * (int)v8 < (unsigned int)(4 * v7) )
  {
    v20 = 48LL * v64;
    v62 = v20;
    v21 = sub_186B270(v20);
    v9 = v21;
    if ( v64 )
    {
      v22 = v21 + 48LL * v64;
      do
      {
        *(_OWORD *)(v21 + 24) = 0;
        v21 += 48;
        *(_OWORD *)(v21 - 40) = 0;
        *(_QWORD *)(v21 - 48) = 0;
        *(_QWORD *)(v21 - 8) = 0;
        *(_BYTE *)(v21 - 36) = 0;
        *(_DWORD *)(v21 - 24) = 1;
        *(_BYTE *)(v21 - 20) = 0;
      }
      while ( v22 != v21 );
    }
    v10 = v9 + v20;
    v23 = (char *)*a1;
    v24 = *((unsigned int *)a1 + 2);
    v63 = v64 - 1;
    v25 = (char *)(*a1 + 48 * v24);
    if ( (char *)*a1 != v25 )
    {
      do
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)v23;
          if ( *(_QWORD *)v23 > 1u )
            break;
          v23 += 48;
          if ( v25 == v23 )
            goto LABEL_35;
        }
        v27 = 48LL * (*(_DWORD *)(v26 + 12) & v63);
        v28 = v9 + v27;
        if ( v20 == v27 )
        {
LABEL_42:
          if ( v9 == v28 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = v9;
          while ( *(_QWORD *)v29 )
          {
            v29 += 48;
            if ( v28 == v29 )
              goto LABEL_52;
          }
        }
        else
        {
          v29 = v9 + v27;
          while ( *(_QWORD *)v29 )
          {
            v29 += 48;
            if ( v10 == v29 )
              goto LABEL_42;
          }
        }
        v30 = *((_DWORD *)v23 + 2);
        *(_QWORD *)v29 = v26;
        v23 += 48;
        v31 = *(_DWORD *)(v29 + 8);
        *(_DWORD *)(v29 + 8) = v30;
        v32 = *((_QWORD *)v23 - 4);
        *((_DWORD *)v23 - 10) = v31;
        v33 = *(_QWORD *)(v29 + 16);
        *(_QWORD *)(v29 + 16) = v32;
        v34 = *(v23 - 36);
        *((_QWORD *)v23 - 4) = v33;
        LOBYTE(v33) = *(_BYTE *)(v29 + 12);
        *(_BYTE *)(v29 + 12) = v34 & 2 | v33 & 0xFD;
        LOBYTE(v33) = v33 & 2 | *(v23 - 36) & 0xFD;
        *(v23 - 36) = v33;
        v35 = *(_BYTE *)(v29 + 12);
        *(_BYTE *)(v29 + 12) = v33 & 1 | v35 & 0xFE;
        LODWORD(v32) = *((_DWORD *)v23 - 6);
        *(v23 - 36) = v35 & 1 | *(v23 - 36) & 0xFE;
        LODWORD(v33) = *(_DWORD *)(v29 + 24);
        *(_DWORD *)(v29 + 24) = v32;
        v36 = *((_QWORD *)v23 - 2);
        *((_DWORD *)v23 - 6) = v33;
        v37 = *(_QWORD *)(v29 + 32);
        *(_QWORD *)(v29 + 32) = v36;
        v38 = *(v23 - 20);
        *((_QWORD *)v23 - 2) = v37;
        LOBYTE(v37) = *(_BYTE *)(v29 + 28);
        *(_BYTE *)(v29 + 28) = v38 & 2 | v37 & 0xFD;
        LOBYTE(v37) = v37 & 2 | *(v23 - 20) & 0xFD;
        *(v23 - 20) = v37;
        v39 = *(_BYTE *)(v29 + 28) & 1;
        *(_BYTE *)(v29 + 28) = v37 & 1 | *(_BYTE *)(v29 + 28) & 0xFE;
        *(v23 - 20) = v39 | *(v23 - 20) & 0xFE;
        *(_DWORD *)(v29 + 40) = *((_DWORD *)v23 - 2);
        *(_BYTE *)(v29 + 44) = *(v23 - 4);
      }
      while ( v25 != v23 );
LABEL_35:
      v24 = *((unsigned int *)a1 + 2);
      v25 = (char *)*a1;
    }
    if ( v25 )
    {
      if ( (_DWORD)v24 )
      {
        v40 = v25;
        v61 = &v25[48 * v24];
        do
        {
          v41 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v40 + 8);
          v42 = v40 + 24;
          v40 += 48;
          sub_182CBA0(v41, v42);
        }
        while ( v61 != v40 );
      }
      sub_186B220(v25);
    }
    *a1 = v9;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 2) = v64;
  }
  else
  {
    v9 = *a1;
    v63 = v8 - 1;
    v62 = 48 * v8;
    v10 = *a1 + 48 * v8;
  }
  v11 = *(_DWORD *)(a2 + 12);
  v12 = v11 & v63;
  v13 = v9 + 48 * v12;
  if ( 48 * v12 != v62 )
  {
    v14 = v9 + 48 * v12;
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a2 == v16 )
        {
          v49 = *(_DWORD *)(v14 + 8);
          v50 = v66;
          *(_QWORD *)v14 = a2;
          *(_DWORD *)(v14 + 8) = v50;
          LODWORD(v66) = v49;
          v51 = *(_QWORD *)(v14 + 16);
          *(_QWORD *)(v14 + 16) = v67;
          v67 = v51;
          LOBYTE(v51) = *(_BYTE *)(v14 + 12);
          *(_BYTE *)(v14 + 12) = BYTE4(v66) & 2 | v51 & 0xFD;
          BYTE4(v66) = v51 & 2 | BYTE4(v66) & 0xFD;
          v52 = *(_BYTE *)(v14 + 12);
          *(_BYTE *)(v14 + 12) = BYTE4(v66) & 1 | v52 & 0xFE;
          BYTE4(v66) = v52 & 1 | BYTE4(v66) & 0xFE;
          LODWORD(v51) = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v68;
          LODWORD(v68) = v51;
          v53 = *(_QWORD *)(v14 + 32);
          *(_QWORD *)(v14 + 32) = v69;
          v69 = v53;
          LOBYTE(v53) = *(_BYTE *)(v14 + 28);
          *(_BYTE *)(v14 + 28) = BYTE4(v68) & 2 | v53 & 0xFD;
          BYTE4(v68) = v53 & 2 | BYTE4(v68) & 0xFD;
          v54 = *(_BYTE *)(v14 + 28) & 1;
          *(_BYTE *)(v14 + 28) = BYTE4(v68) & 1 | *(_BYTE *)(v14 + 28) & 0xFE;
          BYTE4(v68) = v54 | BYTE4(v68) & 0xFE;
          *(_DWORD *)(v14 + 40) = v70;
          *(_BYTE *)(v14 + 44) = v71;
          goto LABEL_22;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_50;
          v15 = v14;
          goto LABEL_51;
        }
        v15 = v14;
      }
      v14 += 48;
      if ( v14 == v10 )
        goto LABEL_17;
    }
  }
  v15 = 0;
  while ( 1 )
  {
LABEL_17:
    if ( v13 == v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 <= 1u )
      break;
    if ( *(_DWORD *)(v17 + 12) == v11 && a2 == v17 )
    {
      v55 = *(_DWORD *)(v9 + 8);
      v56 = v66;
      *(_QWORD *)v9 = a2;
      *(_DWORD *)(v9 + 8) = v56;
      LODWORD(v66) = v55;
      v57 = *(_QWORD *)(v9 + 16);
      *(_QWORD *)(v9 + 16) = v67;
      v67 = v57;
      LOBYTE(v56) = *(_BYTE *)(v9 + 12);
      *(_BYTE *)(v9 + 12) = BYTE4(v66) & 2 | v56 & 0xFD;
      BYTE4(v66) = v56 & 2 | BYTE4(v66) & 0xFD;
      v58 = *(_BYTE *)(v9 + 12);
      *(_BYTE *)(v9 + 12) = BYTE4(v66) & 1 | v58 & 0xFE;
      BYTE4(v66) = v58 & 1 | BYTE4(v66) & 0xFE;
      LODWORD(v57) = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v68;
      LODWORD(v68) = v57;
      v59 = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 32) = v69;
      v69 = v59;
      LOBYTE(v56) = *(_BYTE *)(v9 + 28);
      *(_BYTE *)(v9 + 28) = BYTE4(v68) & 2 | v56 & 0xFD;
      BYTE4(v68) = v56 & 2 | BYTE4(v68) & 0xFD;
      v60 = *(_BYTE *)(v9 + 28) & 1;
      *(_BYTE *)(v9 + 28) = BYTE4(v68) & 1 | *(_BYTE *)(v9 + 28) & 0xFE;
      BYTE4(v68) = v60 | BYTE4(v68) & 0xFE;
      *(_DWORD *)(v9 + 40) = v70;
      *(_BYTE *)(v9 + 44) = v71;
      goto LABEL_22;
    }
LABEL_16:
    v9 += 48;
  }
  if ( v17 )
  {
    v15 = v9;
    goto LABEL_16;
  }
  if ( v15 )
LABEL_50:
    --*((_DWORD *)a1 + 4);
  else
    v15 = v9;
LABEL_51:
  v43 = *(_DWORD *)(v15 + 8);
  v44 = v66;
  *(_QWORD *)v15 = a2;
  *(_DWORD *)(v15 + 8) = v44;
  LODWORD(v66) = v43;
  v45 = *(_QWORD *)(v15 + 16);
  *(_QWORD *)(v15 + 16) = v67;
  v67 = v45;
  LOBYTE(v44) = *(_BYTE *)(v15 + 12);
  *(_BYTE *)(v15 + 12) = BYTE4(v66) & 2 | v44 & 0xFD;
  BYTE4(v66) = v44 & 2 | BYTE4(v66) & 0xFD;
  v46 = *(_BYTE *)(v15 + 12);
  *(_BYTE *)(v15 + 12) = BYTE4(v66) & 1 | v46 & 0xFE;
  BYTE4(v66) = v46 & 1 | BYTE4(v66) & 0xFE;
  LODWORD(v45) = *(_DWORD *)(v15 + 24);
  *(_DWORD *)(v15 + 24) = v68;
  LODWORD(v68) = v45;
  v47 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 32) = v69;
  v69 = v47;
  LOBYTE(v44) = *(_BYTE *)(v15 + 28);
  *(_BYTE *)(v15 + 28) = BYTE4(v68) & 2 | v44 & 0xFD;
  BYTE4(v68) = v44 & 2 | BYTE4(v68) & 0xFD;
  v48 = *(_BYTE *)(v15 + 28) & 1;
  *(_BYTE *)(v15 + 28) = BYTE4(v68) & 1 | *(_BYTE *)(v15 + 28) & 0xFE;
  BYTE4(v68) = v48 | BYTE4(v68) & 0xFE;
  *(_DWORD *)(v15 + 40) = v70;
  *(_BYTE *)(v15 + 44) = v71;
  ++*((_DWORD *)a1 + 3);
LABEL_22:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v66);
  return sub_182CBA0(v18, &v68);
}

