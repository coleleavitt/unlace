void __fastcall sub_B14750(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // r10
  __int64 i; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // r9
  char v15; // bp
  char v16; // bp
  __int64 v17; // r11
  __int64 v18; // r9
  char v19; // bp
  char v20; // bp
  char v21; // bp
  unsigned int v22; // r12d
  unsigned __int8 v23; // r14
  char v24; // r11
  int v25; // r15d
  char v26; // r11
  int v27; // r13d
  char v28; // cl
  __int64 v29; // r14
  char v30; // si
  bool v31; // bp
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  char v35; // r10
  char v36; // r9
  char v37; // cl
  char v38; // r10
  int v39; // r9d
  int v40; // ecx
  __int64 v41; // r9
  __int64 v42; // rcx
  char v43; // r10
  bool v44; // r9
  char v45; // r10
  __int64 v46; // rdx
  int v47; // r9d
  __int64 v48; // rcx
  char v49; // cl
  int v50; // edx
  char v51; // r8
  char v52; // di
  char v53; // cl
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rdx
  int v59; // ecx
  __int64 v60; // rsi
  __int64 v61; // rcx
  char v62; // r10
  char v63; // r10
  __int64 v64; // rsi
  __int64 v65; // rcx
  char v66; // r10
  char v67; // r10
  __int64 v68; // [rsp+0h] [rbp-78h]
  unsigned __int8 v69; // [rsp+Bh] [rbp-6Dh]
  int v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+18h] [rbp-60h] BYREF
  char v72; // [rsp+1Ch] [rbp-5Ch]
  __int64 v73; // [rsp+20h] [rbp-58h]
  int v74; // [rsp+28h] [rbp-50h]
  char v75; // [rsp+2Ch] [rbp-4Ch]
  __int64 v76; // [rsp+30h] [rbp-48h]

  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v9 = a2;
    v10 = a1 + 40 * a2;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = a1 + 80 * (i + 1);
      if ( *(_DWORD *)v10 < *(_DWORD *)(v10 - 40) )
      {
        --v9;
        v10 = a1 + 40 * v9;
      }
      v11 = a1 + 40 * i;
      *(_DWORD *)v11 = *(_DWORD *)v10;
      v12 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v10 + 8);
      v13 = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v10 + 8) = v12;
      v14 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v11 + 16) = v13;
      v15 = *(_BYTE *)(v10 + 12);
      *(_QWORD *)(v10 + 16) = v14;
      LOBYTE(v14) = *(_BYTE *)(v11 + 12);
      *(_BYTE *)(v11 + 12) = v15 & 2 | v14 & 0xFD;
      LOBYTE(v14) = v14 & 2 | *(_BYTE *)(v10 + 12) & 0xFD;
      *(_BYTE *)(v10 + 12) = v14;
      v16 = *(_BYTE *)(v11 + 12);
      *(_BYTE *)(v11 + 12) = v14 & 1 | v16 & 0xFE;
      LODWORD(v13) = *(_DWORD *)(v10 + 24);
      *(_BYTE *)(v10 + 12) = v16 & 1 | *(_BYTE *)(v10 + 12) & 0xFE;
      LODWORD(v14) = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = v13;
      v17 = *(_QWORD *)(v10 + 32);
      *(_DWORD *)(v10 + 24) = v14;
      v18 = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(v11 + 32) = v17;
      v19 = *(_BYTE *)(v10 + 28);
      *(_QWORD *)(v10 + 32) = v18;
      LOBYTE(v18) = *(_BYTE *)(v11 + 28);
      *(_BYTE *)(v11 + 28) = v19 & 2 | v18 & 0xFD;
      LOBYTE(v18) = v18 & 2 | *(_BYTE *)(v10 + 28) & 0xFD;
      *(_BYTE *)(v10 + 28) = v18;
      v20 = *(_BYTE *)(v11 + 28) & 1;
      *(_BYTE *)(v11 + 28) = v18 & 1 | *(_BYTE *)(v11 + 28) & 0xFE;
      *(_BYTE *)(v10 + 28) = v20 | *(_BYTE *)(v10 + 28) & 0xFE;
      if ( v5 <= v9 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v9 )
  {
    v56 = v9 + 1;
    v57 = 2 * v56;
    v58 = a1 + 80 * v56 - 40;
    *(_DWORD *)v10 = *(_DWORD *)v58;
    v59 = *(_DWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v58 + 8);
    v60 = *(_QWORD *)(v58 + 16);
    *(_DWORD *)(v58 + 8) = v59;
    v61 = *(_QWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = v60;
    v62 = *(_BYTE *)(v58 + 12);
    *(_QWORD *)(v58 + 16) = v61;
    LOBYTE(v61) = *(_BYTE *)(v10 + 12);
    *(_BYTE *)(v10 + 12) = v62 & 2 | v61 & 0xFD;
    LOBYTE(v61) = v61 & 2 | *(_BYTE *)(v58 + 12) & 0xFD;
    *(_BYTE *)(v58 + 12) = v61;
    v63 = *(_BYTE *)(v10 + 12);
    *(_BYTE *)(v10 + 12) = v61 & 1 | v63 & 0xFE;
    LODWORD(v60) = *(_DWORD *)(v58 + 24);
    *(_BYTE *)(v58 + 12) = v63 & 1 | *(_BYTE *)(v58 + 12) & 0xFE;
    LODWORD(v61) = *(_DWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 24) = v60;
    v64 = *(_QWORD *)(v58 + 32);
    *(_DWORD *)(v58 + 24) = v61;
    v65 = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 32) = v64;
    v66 = *(_BYTE *)(v58 + 28);
    *(_QWORD *)(v58 + 32) = v65;
    LOBYTE(v65) = *(_BYTE *)(v10 + 28);
    *(_BYTE *)(v10 + 28) = v66 & 2 | v65 & 0xFD;
    LOBYTE(v65) = v65 & 2 | *(_BYTE *)(v58 + 28) & 0xFD;
    *(_BYTE *)(v58 + 28) = v65;
    v67 = *(_BYTE *)(v10 + 28) & 1;
    *(_BYTE *)(v10 + 28) = v65 & 1 | *(_BYTE *)(v10 + 28) & 0xFE;
    *(_BYTE *)(v58 + 28) = v67 | *(_BYTE *)(v58 + 28) & 0xFE;
    v9 = v57 - 1;
    v10 = a1 + 40 * (v57 - 1);
  }
  v21 = *((_BYTE *)a4 + 28);
  v22 = *a4;
  v23 = *((_BYTE *)a4 + 12);
  v24 = v23 >> 1;
  v25 = a4[2];
  v23 &= 1u;
  v26 = v24 & 1;
  v27 = a4[6];
  v70 = *a4;
  v28 = v23 | v72 & 0xFC;
  v69 = v23;
  v29 = *((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0;
  v72 = (2 * v26) | v28;
  v30 = v21 & 1;
  v31 = (v21 & 2) != 0;
  v71 = v25;
  v73 = v29;
  v74 = v27;
  v75 = (2 * v31) | v30 | v75 & 0xFC;
  v32 = *((_QWORD *)a4 + 4);
  *((_QWORD *)a4 + 4) = 0;
  v68 = v32;
  v76 = v32;
  v33 = (v9 - 1) / 2;
  if ( v9 <= a2 )
  {
    v45 = *(_BYTE *)(v10 + 28) & 1;
    v44 = (*(_BYTE *)(v10 + 28) & 2) != 0;
  }
  else
  {
    v34 = v9;
    while ( 1 )
    {
      v46 = a1 + 40 * v34;
      v10 = a1 + 40 * v33;
      v47 = *(_DWORD *)(v46 + 8);
      v48 = *(_QWORD *)(v46 + 16);
      if ( *(_DWORD *)v10 >= v22 )
        break;
      *(_DWORD *)v46 = *(_DWORD *)v10;
      *(_DWORD *)(v46 + 8) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 8) = v47;
      *(_QWORD *)(v46 + 16) = *(_QWORD *)(v10 + 16);
      v35 = *(_BYTE *)(v10 + 12);
      *(_QWORD *)(v10 + 16) = v48;
      v36 = *(_BYTE *)(v46 + 12);
      *(_BYTE *)(v46 + 12) = v35 & 2 | v36 & 0xFD;
      v37 = v36 & 2 | *(_BYTE *)(v10 + 12) & 0xFD;
      *(_BYTE *)(v10 + 12) = v37;
      v38 = *(_BYTE *)(v46 + 12);
      *(_BYTE *)(v46 + 12) = v37 & 1 | v38 & 0xFE;
      v39 = *(_DWORD *)(v10 + 24);
      *(_BYTE *)(v10 + 12) = v38 & 1 | *(_BYTE *)(v10 + 12) & 0xFE;
      v40 = *(_DWORD *)(v46 + 24);
      *(_DWORD *)(v46 + 24) = v39;
      v41 = *(_QWORD *)(v10 + 32);
      *(_DWORD *)(v10 + 24) = v40;
      v42 = *(_QWORD *)(v46 + 32);
      *(_QWORD *)(v46 + 32) = v41;
      v43 = *(_BYTE *)(v10 + 28);
      *(_QWORD *)(v10 + 32) = v42;
      LOBYTE(v41) = *(_BYTE *)(v46 + 28);
      *(_BYTE *)(v46 + 28) = v43 & 2 | v41 & 0xFD;
      v44 = (v41 & 2) != 0;
      LOBYTE(v42) = (2 * v44) | *(_BYTE *)(v10 + 28) & 0xFD;
      *(_BYTE *)(v10 + 28) = v42;
      v45 = *(_BYTE *)(v46 + 28) & 1;
      *(_BYTE *)(v46 + 28) = v42 & 1 | *(_BYTE *)(v46 + 28) & 0xFE;
      *(_BYTE *)(v10 + 28) = v45 | *(_BYTE *)(v10 + 28) & 0xFE;
      v34 = v33;
      if ( a2 >= v33 )
        goto LABEL_16;
      v33 = (v33 - 1) / 2;
    }
    v10 = v46;
    v45 = *(_BYTE *)(v46 + 28) & 1;
    v44 = (*(_BYTE *)(v46 + 28) & 2) != 0;
  }
LABEL_16:
  v49 = *(_BYTE *)(v10 + 12);
  *(_DWORD *)v10 = v70;
  v50 = *(_DWORD *)(v10 + 8);
  v51 = v49 & 2;
  v52 = v49 & 0xFD;
  v53 = v72;
  *(_DWORD *)(v10 + 8) = v25;
  v71 = v50;
  v54 = *(_QWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = v29;
  v73 = v54;
  *(_BYTE *)(v10 + 12) = v69 | v52 & 0xFE | (2 * (v26 & 1));
  v72 = v52 & 1 | v51 | v53 & 0xFC;
  LODWORD(v54) = *(_DWORD *)(v10 + 24);
  *(_DWORD *)(v10 + 24) = v27;
  v74 = v54;
  v55 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v68;
  v76 = v55;
  *(_BYTE *)(v10 + 28) = v30 | (2 * v31) | *(_BYTE *)(v10 + 28) & 0xFC;
  v75 = v75 & 0xFC | (v45 | (2 * v44)) & 3;
  sub_25A130((char *)&v71);
}

