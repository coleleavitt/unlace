void __fastcall sub_20D5750(__int64 a1, _QWORD *a2)
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
  char v13; // si
  int v14; // edx
  unsigned int v15; // ecx
  char v16; // dl
  char v17; // si
  int v18; // edx
  unsigned int v19; // ecx
  char v20; // di
  int v21; // edx
  unsigned int v22; // ecx
  char v23; // dl
  char v24; // di
  int v25; // edx
  unsigned int v26; // ecx
  char v27; // dl
  int v28; // ecx
  unsigned int v29; // r8d
  char v30; // cl
  char v31; // dl
  int v32; // ecx
  unsigned int v33; // r8d
  char v34; // cl
  int v35; // r8d
  unsigned int v36; // r9d
  char v37; // r8
  char v38; // cl
  int v39; // r8d
  unsigned int v40; // r9d
  char v41; // r8
  int v42; // r9d
  unsigned int v43; // r10d
  char v44; // r9
  char v45; // r8
  int v46; // r9d
  unsigned int v47; // ebp
  char v48; // r10
  int v49; // r9d
  unsigned int v50; // ebp
  char v51; // r9
  char v52; // r10
  int v53; // r9d
  int v54; // eax
  unsigned int v55; // ebp
  char v56; // r9
  unsigned int v57; // ebp
  char v58; // al
  int v59; // eax
  double v60; // [rsp+0h] [rbp-40h]
  char s[16]; // [rsp+8h] [rbp-38h] BYREF
  __int128 v62; // [rsp+18h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 16) > 0xFu )
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
    HIBYTE(v60) = v10;
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
    BYTE6(v60) = v17;
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
    BYTE5(v60) = v24;
    v26 = v25 - 48;
    v27 = v25 - 87;
    if ( v26 <= 9 )
      v27 = v26;
    v28 = v3[7];
    v29 = v28 - 48;
    v30 = v28 - 87;
    if ( v29 <= 9 )
      v30 = v29;
    v31 = v30 + 16 * v27;
    v32 = v3[8];
    BYTE4(v60) = v31;
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
    BYTE3(v60) = v38;
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
    BYTE2(v60) = v45;
    v47 = v46 - 48;
    v48 = v46 - 87;
    v49 = v3[13];
    if ( v47 <= 9 )
      v48 = v47;
    v50 = v49 - 48;
    v51 = v49 - 87;
    if ( v50 <= 9 )
      v51 = v50;
    v52 = v51 + 16 * v48;
    v53 = v3[14];
    v54 = v3[15];
    *(_OWORD *)s = 0;
    BYTE1(v60) = v52;
    v55 = v53 - 48;
    v56 = v53 - 87;
    v62 = 0;
    if ( v55 <= 9 )
      v56 = v55;
    v57 = v54 - 48;
    v58 = v54 - 87;
    if ( v57 > 9 )
      LOBYTE(v57) = v58;
    LOBYTE(v60) = v57 + 16 * v56;
    v59 = snprintf(s, 0x20u, "%a", v60);
    sub_20D1ED0(a2, v59, s);
  }
}
