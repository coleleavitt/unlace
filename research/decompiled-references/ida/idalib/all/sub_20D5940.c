void __fastcall sub_20D5940(__int64 a1, _QWORD *a2)
{
  char *v3; // rdi
  int v4; // eax
  unsigned int v5; // edx
  char v6; // si
  int v7; // eax
  unsigned int v8; // edx
  char v9; // al
  char v10; // si
  int v11; // eax
  unsigned int v12; // edx
  char v13; // cl
  int v14; // eax
  unsigned int v15; // edx
  char v16; // al
  char v17; // cl
  int v18; // eax
  unsigned int v19; // edx
  char v20; // al
  int v21; // edx
  unsigned int v22; // r8d
  char v23; // dl
  char v24; // al
  int v25; // edx
  int v26; // edi
  unsigned int v27; // r8d
  char v28; // dl
  unsigned int v29; // r8d
  char v30; // di
  int v31; // eax
  float v32; // [rsp+0h] [rbp-3Ch]
  char s[16]; // [rsp+4h] [rbp-38h] BYREF
  __int64 v34; // [rsp+14h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 16) > 7u )
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
    HIBYTE(v32) = v10;
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
    BYTE2(v32) = v17;
    v19 = v18 - 48;
    v20 = v18 - 87;
    if ( v19 <= 9 )
      v20 = v19;
    v21 = v3[5];
    v22 = v21 - 48;
    v23 = v21 - 87;
    if ( v22 <= 9 )
      v23 = v22;
    v24 = v23 + 16 * v20;
    v25 = v3[6];
    v26 = v3[7];
    *(_OWORD *)s = 0;
    BYTE1(v32) = v24;
    v34 = 0;
    v27 = v25 - 48;
    v28 = v25 - 87;
    if ( v27 <= 9 )
      v28 = v27;
    v29 = v26 - 48;
    v30 = v26 - 87;
    if ( v29 <= 9 )
      v30 = v29;
    LOBYTE(v32) = v30 + 16 * v28;
    v31 = snprintf(s, 0x18u, "%af", v32);
    sub_20D1ED0(a2, v31, s);
  }
}
