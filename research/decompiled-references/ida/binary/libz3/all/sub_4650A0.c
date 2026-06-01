void __fastcall sub_4650A0(int *a1, int *a2)
{
  int *v3; // r15
  void *v4; // rdi
  unsigned int v5; // eax
  int v6; // r14d
  int v7; // r11d
  char v8; // r10
  int *v9; // r13
  char v10; // dl
  bool v11; // r10
  char v12; // cl
  bool v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r10
  char v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r10
  char v26; // r15
  int v27; // eax
  char v28; // r8
  __int64 v29; // rax
  char v30; // r10
  char v31; // dl
  char v32; // cl
  __int64 v33; // rax
  char v34; // si
  char v35; // dl
  char v36; // dl
  int *v37; // r13
  char v38; // al
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // al
  int v43; // eax
  int v44; // edx
  char v45; // si
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // si
  char v49; // si
  __int64 v50; // rdx
  __int64 v51; // rax
  char v52; // si
  int *v53; // r14
  int v54; // eax
  int v55; // edx
  char v56; // si
  __int64 v57; // rax
  __int64 v58; // rdx
  char v59; // r8
  char v60; // si
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v64; // [rsp+10h] [rbp-68h]
  char v65; // [rsp+1Dh] [rbp-5Bh]
  char v66; // [rsp+1Eh] [rbp-5Ah]
  bool v67; // [rsp+1Fh] [rbp-59h]
  int v68; // [rsp+20h] [rbp-58h] BYREF
  char v69; // [rsp+24h] [rbp-54h]
  __int64 v70; // [rsp+28h] [rbp-50h]
  int v71; // [rsp+30h] [rbp-48h] BYREF
  char v72; // [rsp+34h] [rbp-44h]
  __int64 v73; // [rsp+38h] [rbp-40h]

  if ( a1 != a2 && a2 != a1 + 8 )
  {
    v3 = a1 + 8;
    while ( 1 )
    {
      v4 = qword_1C7F2C0;
      if ( (a1[5] & 1) != 0 || a1[4] != 1 || (v3[5] & 1) != 0 || (v7 = v3[4], v7 != 1) )
      {
        LOBYTE(v5) = sub_1848D40(qword_1C7F2C0, a1, v3);
        v6 = *v3;
        v7 = v3[4];
        v4 = qword_1C7F2C0;
      }
      else if ( (a1[1] & 1) != 0 || (v3[1] & 1) != 0 )
      {
        v62 = sub_182C7B0(qword_1C7F2C0, a1, v3);
        v6 = *v3;
        v7 = v3[4];
        v4 = qword_1C7F2C0;
        v5 = v62 >> 31;
      }
      else
      {
        v6 = *v3;
        LOBYTE(v5) = *a1 < *v3;
      }
      v68 = v6;
      if ( !(_BYTE)v5 )
        break;
      v8 = *((_BYTE *)v3 + 4);
      v71 = v7;
      v9 = v3 + 8;
      v10 = v8 & 1;
      v11 = (v8 & 2) != 0;
      v12 = *((_BYTE *)v3 + 20);
      v13 = (v12 & 2) != 0;
      v65 = v12 & 1;
      v69 = (2 * v11) | v10 | v69 & 0xFC;
      v14 = *((_QWORD *)v3 + 1);
      *((_QWORD *)v3 + 1) = 0;
      v64 = v14;
      v70 = v14;
      LOBYTE(v14) = (2 * v13) | v12 & 1 | v72 & 0xFC;
      v15 = *((_QWORD *)v3 + 3);
      *((_QWORD *)v3 + 3) = 0;
      v72 = v14;
      v73 = v15;
      v16 = ((char *)v3 - (char *)a1) >> 5;
      if ( (char *)v3 - (char *)a1 > 0 )
      {
        v66 = v10;
        v17 = v3 + 8;
        v67 = v11;
        do
        {
          v18 = v17;
          v19 = *(v17 - 8);
          v20 = *(v17 - 16);
          v17 -= 8;
          *(v17 - 8) = v19;
          v21 = *((_QWORD *)v17 + 1);
          *v17 = v20;
          v22 = *((_QWORD *)v17 - 3);
          *((_QWORD *)v17 - 3) = v21;
          LOBYTE(v21) = *((_BYTE *)v17 + 4);
          *((_QWORD *)v17 + 1) = v22;
          *((_BYTE *)v17 + 4) = *(_BYTE *)(v18 - 15) & 2 | v21 & 0xFD;
          LOBYTE(v21) = v21 & 2 | *(_BYTE *)(v18 - 15) & 0xFD;
          *((_BYTE *)v18 - 60) = v21;
          v23 = *((_BYTE *)v17 + 4);
          *((_BYTE *)v17 + 4) = v21 & 1 | v23 & 0xFE;
          *((_BYTE *)v18 - 60) = v23 & 1 | *(_BYTE *)(v18 - 15) & 0xFE;
          LODWORD(v22) = *(v17 - 4);
          *(v17 - 4) = v17[4];
          v24 = *((_QWORD *)v17 + 3);
          v17[4] = v22;
          v25 = *((_QWORD *)v17 - 1);
          *((_QWORD *)v17 - 1) = v24;
          LOBYTE(v24) = *((_BYTE *)v17 + 20);
          *((_QWORD *)v17 + 3) = v25;
          *((_BYTE *)v17 + 20) = *(_BYTE *)(v18 - 11) & 2 | v24 & 0xFD;
          LOBYTE(v24) = v24 & 2 | *(_BYTE *)(v18 - 11) & 0xFD;
          *((_BYTE *)v18 - 44) = v24;
          v26 = v17[5] & 1;
          *((_BYTE *)v17 + 20) = v24 & 1 | v17[5] & 0xFE;
          *((_BYTE *)v18 - 44) = v26 | *(_BYTE *)(v18 - 11) & 0xFE;
          --v16;
        }
        while ( v16 );
        v10 = v66;
        v11 = v67;
      }
      v27 = *a1;
      v28 = *((_BYTE *)a1 + 4);
      *a1 = v6;
      v68 = v27;
      v29 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v64;
      v70 = v29;
      v30 = v10 | v28 & 0xFC | (2 * v11);
      v31 = *((_BYTE *)a1 + 20);
      LOBYTE(v29) = v28 & 1 | v28 & 2 | v69 & 0xFC;
      *((_BYTE *)a1 + 4) = v30;
      v69 = v29;
      LODWORD(v29) = a1[4];
      v32 = v31 & 0xFD;
      a1[4] = v7;
      v71 = v29;
      v33 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 3) = v15;
      v34 = v31;
      v73 = v33;
      LOBYTE(v33) = v31 & 0xFD | (2 * v13);
      v35 = v72 & 0xFC;
      *((_BYTE *)a1 + 20) = v65 | v33 & 0xFE;
      v72 = v32 & 1 | v34 & 2 | v35;
      sub_182CBA0(v4, &v68);
      sub_182CBA0(v4, &v71);
LABEL_13:
      v3 = v9;
      if ( a2 == v9 )
        return;
    }
    v36 = *((_BYTE *)v3 + 4);
    v71 = v7;
    v37 = v3 - 8;
    v38 = v36 & 3 | v69 & 0xFC;
    v39 = *((_BYTE *)v3 + 20);
    v69 = v38;
    v40 = *((_QWORD *)v3 + 1);
    *((_QWORD *)v3 + 1) = 0;
    v70 = v40;
    v72 = v39 & 3 | v72 & 0xFC;
    v41 = *((_QWORD *)v3 + 3);
    *((_QWORD *)v3 + 3) = 0;
    v73 = v41;
    while ( 1 )
    {
      v53 = v37 + 8;
      if ( (v37[5] & 1) != 0 || v37[4] != 1 || (v72 & 1) != 0 || v71 != 1 )
        break;
      if ( (v37[1] & 1) == 0 && (v69 & 1) == 0 )
      {
        v42 = *v37 < v68;
LABEL_17:
        if ( !v42 )
          goto LABEL_26;
        goto LABEL_18;
      }
      v54 = sub_182C7B0(v4, v37, &v68);
      v4 = qword_1C7F2C0;
      if ( v54 >= 0 )
      {
LABEL_26:
        v55 = v68;
        v9 = v3 + 8;
        v56 = *((_BYTE *)v53 + 4);
        v68 = *v53;
        v57 = *((_QWORD *)v53 + 1);
        *v53 = v55;
        v58 = v70;
        v70 = v57;
        LOBYTE(v57) = v69;
        v59 = v56 & 0xFD;
        *((_QWORD *)v53 + 1) = v58;
        LOBYTE(v58) = v57;
        LOBYTE(v57) = v57 & 0xFD;
        LOBYTE(v58) = v57 & 1 | v56 & 0xFC | v58 & 2;
        LOBYTE(v57) = v57 | v56 & 2;
        v60 = *((_BYTE *)v53 + 20);
        *((_BYTE *)v53 + 4) = v58;
        v69 = v59 & 1 | v57 & 0xFE;
        LODWORD(v57) = v53[4];
        v53[4] = v71;
        v71 = v57;
        v61 = *((_QWORD *)v53 + 3);
        *((_QWORD *)v53 + 3) = v73;
        v73 = v61;
        LOBYTE(v61) = v72 & 0xFD | v60 & 2;
        *((_BYTE *)v53 + 20) = v72 & 1 | v60 & 0xFC | v72 & 2;
        v72 = v60 & 1 | v61 & 0xFE;
        sub_182CBA0(v4, &v68);
        sub_182CBA0(v4, &v71);
        goto LABEL_13;
      }
LABEL_18:
      v43 = v37[8];
      v44 = *v37;
      v37 -= 8;
      v45 = *((_BYTE *)v37 + 36);
      v37[16] = v44;
      v46 = *((_QWORD *)v37 + 5);
      v37[8] = v43;
      v47 = *((_QWORD *)v37 + 9);
      *((_QWORD *)v37 + 9) = v46;
      *((_QWORD *)v37 + 5) = v47;
      LOBYTE(v46) = *((_BYTE *)v53 + 4);
      *((_BYTE *)v53 + 4) = v45 & 2 | v46 & 0xFD;
      LOBYTE(v47) = v46 & 2 | v37[9] & 0xFD;
      *((_BYTE *)v37 + 36) = v47;
      v48 = *((_BYTE *)v53 + 4);
      *((_BYTE *)v53 + 4) = v47 & 1 | v48 & 0xFE;
      LODWORD(v46) = v37[12];
      LOBYTE(v47) = v48 & 1 | v37[9] & 0xFE;
      v49 = *((_BYTE *)v37 + 52);
      *((_BYTE *)v37 + 36) = v47;
      LODWORD(v47) = v37[20];
      v37[20] = v46;
      v50 = *((_QWORD *)v37 + 7);
      v37[12] = v47;
      v51 = *((_QWORD *)v37 + 11);
      *((_QWORD *)v37 + 11) = v50;
      *((_QWORD *)v37 + 7) = v51;
      LOBYTE(v50) = *((_BYTE *)v53 + 20);
      *((_BYTE *)v53 + 20) = v49 & 2 | v50 & 0xFD;
      LOBYTE(v51) = v50 & 2 | v37[13] & 0xFD;
      *((_BYTE *)v37 + 52) = v51;
      v52 = v53[5] & 1;
      *((_BYTE *)v53 + 20) = v51 & 1 | v53[5] & 0xFE;
      *((_BYTE *)v37 + 52) = v52 | v37[13] & 0xFE;
    }
    v42 = sub_1848D40(v4, v37, &v68);
    v4 = qword_1C7F2C0;
    goto LABEL_17;
  }
}

