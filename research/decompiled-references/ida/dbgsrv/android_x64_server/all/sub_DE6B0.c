/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE6B0
// Address: 0x00000000000DE6B0

//----- (00000000000DE6B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_DE6B0(__int64 a1, void **a2)
{
  char *v2; // rcx
  char v4; // al
  char v5; // si
  char v6; // si
  char v7; // r8
  char v8; // bl
  char v9; // si
  char v10; // si
  char v11; // bl
  char v12; // si
  char v13; // si
  char v14; // bl
  char v15; // si
  char v16; // si
  char v17; // bl
  char v18; // si
  char v19; // si
  char v20; // bl
  char v21; // si
  char v22; // si
  char v23; // bl
  char v24; // si
  char v25; // si
  char v26; // bl
  char v27; // al
  char v28; // di
  char *v29; // rcx
  char *v30; // rsi
  char v31; // dl
  char v32; // dl
  int v34; // eax
  size_t v35; // rbx
  char *v36; // rdi
  size_t v37; // rsi
  size_t v38; // rax
  char *v39; // rax
  size_t v40; // rsi
  double v42; // [rsp+8h] [rbp-40h] BYREF
  char s[16]; // [rsp+10h] [rbp-38h] BYREF
  __int128 v44; // [rsp+20h] [rbp-28h]
  unsigned __int64 v45; // [rsp+30h] [rbp-18h]

  v45 = __readfsqword(0x28u);
  v2 = *(char **)(a1 + 16);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL - (_QWORD)v2) >= 0x11 )
  {
    v4 = 0;
    v5 = 0;
    if ( (unsigned int)(*v2 - 48) >= 0xA )
      v5 = 9;
    v6 = *v2 + v5;
    v7 = -48;
    v8 = -48;
    if ( (unsigned int)(v2[1] - 48) >= 0xA )
      v8 = -87;
    LOBYTE(v42) = v2[1] + v8 + 16 * v6;
    v9 = 0;
    if ( (unsigned int)(v2[2] - 48) >= 0xA )
      v9 = 9;
    v10 = v2[2] + v9;
    v11 = -48;
    if ( (unsigned int)(v2[3] - 48) >= 0xA )
      v11 = -87;
    BYTE1(v42) = v2[3] + v11 + 16 * v10;
    v12 = 0;
    if ( (unsigned int)(v2[4] - 48) >= 0xA )
      v12 = 9;
    v13 = v2[4] + v12;
    v14 = -48;
    if ( (unsigned int)(v2[5] - 48) >= 0xA )
      v14 = -87;
    BYTE2(v42) = v2[5] + v14 + 16 * v13;
    v15 = 0;
    if ( (unsigned int)(v2[6] - 48) >= 0xA )
      v15 = 9;
    v16 = v2[6] + v15;
    v17 = -48;
    if ( (unsigned int)(v2[7] - 48) >= 0xA )
      v17 = -87;
    BYTE3(v42) = v2[7] + v17 + 16 * v16;
    v18 = 0;
    if ( (unsigned int)(v2[8] - 48) >= 0xA )
      v18 = 9;
    v19 = v2[8] + v18;
    v20 = -48;
    if ( (unsigned int)(v2[9] - 48) >= 0xA )
      v20 = -87;
    BYTE4(v42) = v2[9] + v20 + 16 * v19;
    v21 = 0;
    if ( (unsigned int)(v2[10] - 48) >= 0xA )
      v21 = 9;
    v22 = v2[10] + v21;
    v23 = -48;
    if ( (unsigned int)(v2[11] - 48) >= 0xA )
      v23 = -87;
    BYTE5(v42) = v2[11] + v23 + 16 * v22;
    v24 = 0;
    if ( (unsigned int)(v2[12] - 48) >= 0xA )
      v24 = 9;
    v25 = v2[12] + v24;
    v26 = -48;
    if ( (unsigned int)(v2[13] - 48) >= 0xA )
      v26 = -87;
    BYTE6(v42) = v2[13] + v26 + 16 * v25;
    if ( (unsigned int)(v2[14] - 48) >= 0xA )
      v4 = 9;
    v27 = v2[14] + v4;
    v28 = v2[15];
    if ( (unsigned int)(v28 - 48) >= 0xA )
      v7 = -87;
    v29 = (char *)&v42 + 2;
    v30 = (char *)&v42 + 6;
    v31 = LOBYTE(v42);
    LOBYTE(v42) = v28 + v7 + 16 * v27;
    HIBYTE(v42) = v31;
    do
    {
      v32 = *(v29 - 1);
      *(v29 - 1) = *v30;
      *v30-- = v32;
    }
    while ( v29++ < v30 );
    v44 = 0;
    *(_OWORD *)s = 0;
    v34 = snprintf(s, 0x20u, "%a", v42);
    if ( v34 )
    {
      v35 = v34;
      v36 = (char *)a2[1];
      v37 = (size_t)a2[2];
      v38 = (size_t)&v36[v34];
      if ( v38 >= v37 )
      {
        v40 = 2 * v37;
        if ( v40 < v38 )
          v40 = v38;
        a2[2] = (void *)v40;
        v39 = (char *)realloc(*a2, v40);
        *a2 = v39;
        v36 = (char *)a2[1];
      }
      else
      {
        v39 = (char *)*a2;
      }
      memmove(&v36[(_QWORD)v39], s, v35);
      a2[1] = (char *)a2[1] + v35;
    }
  }
  return __readfsqword(0x28u);
}
