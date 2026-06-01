void __fastcall sub_20D54E0(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  int v4; // edx
  unsigned int v5; // ecx
  char v6; // r11
  int v7; // edx
  unsigned int v8; // ecx
  char v9; // dl
  char v10; // r11
  int v11; // edx
  unsigned int v12; // ecx
  char v13; // r10
  int v14; // edx
  unsigned int v15; // ecx
  char v16; // dl
  char v17; // r10
  int v18; // edx
  unsigned int v19; // ecx
  char v20; // si
  int v21; // edx
  unsigned int v22; // ecx
  char v23; // dl
  char v24; // si
  int v25; // edx
  unsigned int v26; // ecx
  char v27; // di
  int v28; // edx
  unsigned int v29; // ecx
  char v30; // dl
  char v31; // di
  int v32; // edx
  unsigned int v33; // ecx
  char v34; // dl
  int v35; // ecx
  unsigned int v36; // r8d
  char v37; // cl
  char v38; // dl
  int v39; // ecx
  unsigned int v40; // r8d
  char v41; // cl
  int v42; // r8d
  unsigned int v43; // r9d
  char v44; // r8
  char v45; // cl
  int v46; // r8d
  unsigned int v47; // r9d
  char v48; // r8
  int v49; // r9d
  unsigned int v50; // ebp
  char v51; // r9
  char v52; // r8
  int v53; // r9d
  unsigned int v54; // r12d
  char v55; // bp
  int v56; // r9d
  unsigned int v57; // r12d
  char v58; // r9
  char v59; // bp
  int v60; // r9d
  unsigned int v61; // r12d
  char v62; // r9
  int v63; // r12d
  unsigned int v64; // r13d
  char v65; // r12
  char v66; // r9
  int v67; // r12d
  int v68; // eax
  unsigned int v69; // r13d
  char v70; // r12
  unsigned int v71; // r13d
  char v72; // al
  int v73; // eax
  long double v74; // [rsp+0h] [rbp-68h]
  char s[16]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v76; // [rsp+20h] [rbp-48h]
  __int64 v77; // [rsp+30h] [rbp-38h]
  __int16 v78; // [rsp+38h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 16) > 0x13u )
  {
    v3 = *(char **)(a1 + 24);
    v4 = *v3;
    v5 = v4 - 48;
    v6 = v4 - 87;
    v7 = v3[1];
    if ( v5 <= 9 )
      v6 = v5;
    v8 = v7 - 48;
    v9 = v7 - 87;
    if ( v8 <= 9 )
      v9 = v8;
    v10 = v9 + 16 * v6;
    v11 = v3[2];
    BYTE9(v74) = v10;
    v12 = v11 - 48;
    v13 = v11 - 87;
    v14 = v3[3];
    if ( v12 <= 9 )
      v13 = v12;
    v15 = v14 - 48;
    v16 = v14 - 87;
    if ( v15 <= 9 )
      v16 = v15;
    v17 = v16 + 16 * v13;
    v18 = v3[4];
    BYTE8(v74) = v17;
    v19 = v18 - 48;
    v20 = v18 - 87;
    v21 = v3[5];
    if ( v19 <= 9 )
      v20 = v19;
    v22 = v21 - 48;
    v23 = v21 - 87;
    if ( v22 <= 9 )
      v23 = v22;
    v24 = v23 + 16 * v20;
    v25 = v3[6];
    BYTE7(v74) = v24;
    v26 = v25 - 48;
    v27 = v25 - 87;
    v28 = v3[7];
    if ( v26 <= 9 )
      v27 = v26;
    v29 = v28 - 48;
    v30 = v28 - 87;
    if ( v29 <= 9 )
      v30 = v29;
    v31 = v30 + 16 * v27;
    v32 = v3[8];
    v33 = v32 - 48;
    v34 = v32 - 87;
    if ( v33 <= 9 )
      v34 = v33;
    v35 = v3[9];
    v36 = v35 - 48;
    v37 = v35 - 87;
    if ( v36 <= 9 )
      v37 = v36;
    v38 = v37 + 16 * v34;
    v39 = v3[10];
    v40 = v39 - 48;
    v41 = v39 - 87;
    if ( v40 <= 9 )
      v41 = v40;
    v42 = v3[11];
    v43 = v42 - 48;
    v44 = v42 - 87;
    if ( v43 <= 9 )
      v44 = v43;
    v45 = v44 + 16 * v41;
    v46 = v3[12];
    v47 = v46 - 48;
    v48 = v46 - 87;
    if ( v47 <= 9 )
      v48 = v47;
    v49 = v3[13];
    v50 = v49 - 48;
    v51 = v49 - 87;
    if ( v50 <= 9 )
      v51 = v50;
    v52 = v51 + 16 * v48;
    v53 = v3[14];
    v54 = v53 - 48;
    v55 = v53 - 87;
    v56 = v3[15];
    if ( v54 <= 9 )
      v55 = v54;
    v57 = v56 - 48;
    v58 = v56 - 87;
    if ( v57 <= 9 )
      v58 = v57;
    v59 = v58 + 16 * v55;
    v60 = v3[16];
    BYTE2(v74) = v59;
    v61 = v60 - 48;
    v62 = v60 - 87;
    if ( v61 <= 9 )
      v62 = v61;
    v63 = v3[17];
    v64 = v63 - 48;
    v65 = v63 - 87;
    if ( v64 <= 9 )
      v65 = v64;
    v66 = v65 + 16 * v62;
    v67 = v3[18];
    v68 = v3[19];
    BYTE1(v74) = v66;
    v69 = v67 - 48;
    v70 = v67 - 87;
    if ( v69 <= 9 )
      v70 = v69;
    v71 = v68 - 48;
    v72 = v68 - 87;
    if ( v71 <= 9 )
      v72 = v71;
    LOBYTE(v74) = 16 * v70 + v72;
    BYTE3(v74) = v52;
    BYTE6(v74) = v31;
    BYTE4(v74) = v45;
    BYTE5(v74) = v38;
    *(_OWORD *)s = 0;
    v76 = 0;
    v78 = 0;
    v77 = 0;
    v73 = snprintf(s, 0x2Au, "%LaL", v74);
    sub_20D1ED0(a2, v73, s);
  }
}
