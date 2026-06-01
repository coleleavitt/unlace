void __fastcall sub_C9FA70(int *a1, int *a2)
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
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // r10
  char v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r10
  char v27; // r15
  int v28; // eax
  char v29; // r8
  __int64 v30; // rax
  char v31; // r10
  char v32; // dl
  char v33; // cl
  __int64 v34; // rax
  char v35; // si
  char v36; // dl
  char v37; // dl
  int *v38; // r13
  char v39; // al
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  int v44; // eax
  int v45; // edx
  char v46; // si
  __int64 v47; // rdx
  __int64 v48; // rax
  char v49; // si
  char v50; // si
  __int64 v51; // rdx
  __int64 v52; // rax
  char v53; // si
  int *v54; // r14
  int v55; // eax
  int v56; // edx
  char v57; // si
  __int64 v58; // rax
  __int64 v59; // rdx
  char v60; // r8
  char v61; // si
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v65; // [rsp+10h] [rbp-78h]
  char v66; // [rsp+1Dh] [rbp-6Bh]
  char v67; // [rsp+1Eh] [rbp-6Ah]
  bool v68; // [rsp+1Fh] [rbp-69h]
  int v69; // [rsp+20h] [rbp-68h] BYREF
  char v70; // [rsp+24h] [rbp-64h]
  __int64 v71; // [rsp+28h] [rbp-60h]
  int v72; // [rsp+30h] [rbp-58h] BYREF
  char v73; // [rsp+34h] [rbp-54h]
  __int64 v74; // [rsp+38h] [rbp-50h]
  __int64 v75; // [rsp+40h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 10 )
  {
    v3 = a1 + 10;
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
        v63 = sub_182C7B0(qword_1C7F2C0, a1, v3);
        v6 = *v3;
        v7 = v3[4];
        v4 = qword_1C7F2C0;
        v5 = v63 >> 31;
      }
      else
      {
        v6 = *v3;
        LOBYTE(v5) = *a1 < *v3;
      }
      v69 = v6;
      if ( !(_BYTE)v5 )
        break;
      v8 = *((_BYTE *)v3 + 4);
      v72 = v7;
      v9 = v3 + 10;
      v10 = v8 & 1;
      v11 = (v8 & 2) != 0;
      v12 = *((_BYTE *)v3 + 20);
      v13 = (v12 & 2) != 0;
      v66 = v12 & 1;
      v70 = (2 * v11) | v10 | v70 & 0xFC;
      v14 = *((_QWORD *)v3 + 1);
      *((_QWORD *)v3 + 1) = 0;
      v65 = v14;
      v71 = v14;
      LOBYTE(v14) = v12 & 1 | v73 & 0xFC;
      v15 = *((_QWORD *)v3 + 3);
      *((_QWORD *)v3 + 3) = 0;
      v73 = (2 * v13) | v14;
      v16 = *((_QWORD *)v3 + 4);
      v74 = v15;
      v75 = v16;
      v17 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v3 - (char *)a1) >> 3);
      if ( (char *)v3 - (char *)a1 > 0 )
      {
        v67 = v10;
        v18 = v3 + 10;
        v68 = v11;
        do
        {
          v19 = v18;
          v20 = *(v18 - 10);
          v21 = *(v18 - 20);
          v18 -= 10;
          *(v18 - 10) = v20;
          v22 = *((_QWORD *)v18 + 1);
          *v18 = v21;
          v23 = *((_QWORD *)v18 - 4);
          *((_QWORD *)v18 - 4) = v22;
          LOBYTE(v22) = *((_BYTE *)v18 + 4);
          *((_QWORD *)v18 + 1) = v23;
          *((_BYTE *)v18 + 4) = *(_BYTE *)(v19 - 19) & 2 | v22 & 0xFD;
          LOBYTE(v22) = v22 & 2 | *(_BYTE *)(v19 - 19) & 0xFD;
          *((_BYTE *)v19 - 76) = v22;
          v24 = *((_BYTE *)v18 + 4);
          *((_BYTE *)v18 + 4) = v22 & 1 | v24 & 0xFE;
          *((_BYTE *)v19 - 76) = v24 & 1 | *(_BYTE *)(v19 - 19) & 0xFE;
          LODWORD(v23) = *(v18 - 6);
          *(v18 - 6) = v18[4];
          v25 = *((_QWORD *)v18 + 3);
          v18[4] = v23;
          v26 = *((_QWORD *)v18 - 2);
          *((_QWORD *)v18 - 2) = v25;
          LOBYTE(v25) = *((_BYTE *)v18 + 20);
          *((_QWORD *)v18 + 3) = v26;
          *((_BYTE *)v18 + 20) = *(_BYTE *)(v19 - 15) & 2 | v25 & 0xFD;
          LOBYTE(v25) = v25 & 2 | *(_BYTE *)(v19 - 15) & 0xFD;
          *((_BYTE *)v19 - 60) = v25;
          v27 = v18[5] & 1;
          *((_BYTE *)v18 + 20) = v25 & 1 | v18[5] & 0xFE;
          *((_BYTE *)v19 - 60) = v27 | *(_BYTE *)(v19 - 15) & 0xFE;
          *((_QWORD *)v18 + 4) = *((_QWORD *)v18 - 1);
          --v17;
        }
        while ( v17 );
        v10 = v67;
        v11 = v68;
      }
      v28 = *a1;
      v29 = *((_BYTE *)a1 + 4);
      *a1 = v6;
      v69 = v28;
      v30 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v65;
      v71 = v30;
      v31 = v10 | v29 & 0xFC | (2 * v11);
      v32 = *((_BYTE *)a1 + 20);
      LOBYTE(v30) = v29 & 1 | v29 & 2 | v70 & 0xFC;
      *((_BYTE *)a1 + 4) = v31;
      v70 = v30;
      LODWORD(v30) = a1[4];
      v33 = v32 & 0xFD;
      a1[4] = v7;
      v72 = v30;
      v34 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 3) = v15;
      v35 = v32;
      v74 = v34;
      LOBYTE(v34) = v32 & 0xFD | (2 * v13);
      v36 = v73 & 0xFC;
      *((_BYTE *)a1 + 20) = v66 | v34 & 0xFE;
      v73 = v33 & 1 | v35 & 2 | v36;
      *((_QWORD *)a1 + 4) = v75;
      sub_182CBA0(v4, &v69);
      sub_182CBA0(v4, &v72);
LABEL_13:
      v3 = v9;
      if ( a2 == v9 )
        return;
    }
    v37 = *((_BYTE *)v3 + 4);
    v72 = v7;
    v38 = v3 - 10;
    v39 = v37 & 3 | v70 & 0xFC;
    v40 = *((_BYTE *)v3 + 20);
    v70 = v39;
    v41 = *((_QWORD *)v3 + 1);
    *((_QWORD *)v3 + 1) = 0;
    v71 = v41;
    v73 = v40 & 3 | v73 & 0xFC;
    v42 = *((_QWORD *)v3 + 3);
    *((_QWORD *)v3 + 3) = 0;
    v74 = v42;
    v75 = *((_QWORD *)v3 + 4);
    while ( 1 )
    {
      v54 = v38 + 10;
      if ( (v38[5] & 1) != 0 || v38[4] != 1 || (v73 & 1) != 0 || v72 != 1 )
        break;
      if ( (v38[1] & 1) == 0 && (v70 & 1) == 0 )
      {
        v43 = *v38 < v69;
LABEL_17:
        if ( !v43 )
          goto LABEL_26;
        goto LABEL_18;
      }
      v55 = sub_182C7B0(v4, v38, &v69);
      v4 = qword_1C7F2C0;
      if ( v55 >= 0 )
      {
LABEL_26:
        v56 = v69;
        v9 = v3 + 10;
        v57 = *((_BYTE *)v54 + 4);
        v69 = *v54;
        v58 = *((_QWORD *)v54 + 1);
        *v54 = v56;
        v59 = v71;
        v71 = v58;
        LOBYTE(v58) = v70;
        v60 = v57 & 0xFD;
        *((_QWORD *)v54 + 1) = v59;
        LOBYTE(v59) = v58;
        LOBYTE(v58) = v58 & 0xFD;
        LOBYTE(v59) = v58 & 1 | v57 & 0xFC | v59 & 2;
        LOBYTE(v58) = v58 | v57 & 2;
        v61 = *((_BYTE *)v54 + 20);
        *((_BYTE *)v54 + 4) = v59;
        v70 = v60 & 1 | v58 & 0xFE;
        LODWORD(v58) = v54[4];
        v54[4] = v72;
        v72 = v58;
        v62 = *((_QWORD *)v54 + 3);
        *((_QWORD *)v54 + 3) = v74;
        v74 = v62;
        LOBYTE(v62) = v73 & 0xFD | v61 & 2;
        *((_BYTE *)v54 + 20) = v73 & 1 | v61 & 0xFC | v73 & 2;
        v73 = v61 & 1 | v62 & 0xFE;
        *((_QWORD *)v54 + 4) = v75;
        sub_182CBA0(v4, &v69);
        sub_182CBA0(v4, &v72);
        goto LABEL_13;
      }
LABEL_18:
      v44 = v38[10];
      v45 = *v38;
      v38 -= 10;
      v46 = *((_BYTE *)v38 + 44);
      v38[20] = v45;
      v47 = *((_QWORD *)v38 + 6);
      v38[10] = v44;
      v48 = *((_QWORD *)v38 + 11);
      *((_QWORD *)v38 + 11) = v47;
      *((_QWORD *)v38 + 6) = v48;
      LOBYTE(v47) = *((_BYTE *)v54 + 4);
      *((_BYTE *)v54 + 4) = v46 & 2 | v47 & 0xFD;
      LOBYTE(v48) = v47 & 2 | v38[11] & 0xFD;
      *((_BYTE *)v38 + 44) = v48;
      v49 = *((_BYTE *)v54 + 4);
      *((_BYTE *)v54 + 4) = v48 & 1 | v49 & 0xFE;
      LODWORD(v47) = v38[14];
      LOBYTE(v48) = v49 & 1 | v38[11] & 0xFE;
      v50 = *((_BYTE *)v38 + 60);
      *((_BYTE *)v38 + 44) = v48;
      LODWORD(v48) = v38[24];
      v38[24] = v47;
      v51 = *((_QWORD *)v38 + 8);
      v38[14] = v48;
      v52 = *((_QWORD *)v38 + 13);
      *((_QWORD *)v38 + 13) = v51;
      *((_QWORD *)v38 + 8) = v52;
      LOBYTE(v51) = *((_BYTE *)v54 + 20);
      *((_BYTE *)v54 + 20) = v50 & 2 | v51 & 0xFD;
      LOBYTE(v52) = v51 & 2 | v38[15] & 0xFD;
      *((_BYTE *)v38 + 60) = v52;
      v53 = v54[5] & 1;
      *((_BYTE *)v54 + 20) = v52 & 1 | v54[5] & 0xFE;
      *((_BYTE *)v38 + 60) = v53 | v38[15] & 0xFE;
      *((_QWORD *)v38 + 14) = *((_QWORD *)v38 + 9);
    }
    v43 = sub_1848D40(v4, v38, &v69);
    v4 = qword_1C7F2C0;
    goto LABEL_17;
  }
}

