/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE990
// Address: 0x00000000000DE990

//----- (00000000000DE990) ----------------------------------------------------
unsigned __int64 __fastcall sub_DE990(__int64 a1, void **a2)
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
  char v27; // si
  char v28; // si
  char v29; // bl
  char v30; // si
  char v31; // si
  char v32; // bl
  char v33; // al
  char v34; // di
  char *v35; // rcx
  char *v36; // rsi
  char v37; // dl
  char v38; // dl
  int v40; // eax
  size_t v41; // rbx
  char *v42; // rdi
  size_t v43; // rsi
  size_t v44; // rax
  char *v45; // rax
  size_t v46; // rsi
  long double v48; // [rsp+0h] [rbp-58h] BYREF
  char s[16]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v50; // [rsp+20h] [rbp-38h]
  __int64 v51; // [rsp+30h] [rbp-28h]
  unsigned __int64 v52; // [rsp+40h] [rbp-18h]

  v52 = __readfsqword(0x28u);
  v2 = *(char **)(a1 + 16);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL - (_QWORD)v2) >= 0x15 )
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
    LOBYTE(v48) = v2[1] + v8 + 16 * v6;
    v9 = 0;
    if ( (unsigned int)(v2[2] - 48) >= 0xA )
      v9 = 9;
    v10 = v2[2] + v9;
    v11 = -48;
    if ( (unsigned int)(v2[3] - 48) >= 0xA )
      v11 = -87;
    BYTE1(v48) = v2[3] + v11 + 16 * v10;
    v12 = 0;
    if ( (unsigned int)(v2[4] - 48) >= 0xA )
      v12 = 9;
    v13 = v2[4] + v12;
    v14 = -48;
    if ( (unsigned int)(v2[5] - 48) >= 0xA )
      v14 = -87;
    BYTE2(v48) = v2[5] + v14 + 16 * v13;
    v15 = 0;
    if ( (unsigned int)(v2[6] - 48) >= 0xA )
      v15 = 9;
    v16 = v2[6] + v15;
    v17 = -48;
    if ( (unsigned int)(v2[7] - 48) >= 0xA )
      v17 = -87;
    BYTE3(v48) = v2[7] + v17 + 16 * v16;
    v18 = 0;
    if ( (unsigned int)(v2[8] - 48) >= 0xA )
      v18 = 9;
    v19 = v2[8] + v18;
    v20 = -48;
    if ( (unsigned int)(v2[9] - 48) >= 0xA )
      v20 = -87;
    BYTE4(v48) = v2[9] + v20 + 16 * v19;
    v21 = 0;
    if ( (unsigned int)(v2[10] - 48) >= 0xA )
      v21 = 9;
    v22 = v2[10] + v21;
    v23 = -48;
    if ( (unsigned int)(v2[11] - 48) >= 0xA )
      v23 = -87;
    BYTE5(v48) = v2[11] + v23 + 16 * v22;
    v24 = 0;
    if ( (unsigned int)(v2[12] - 48) >= 0xA )
      v24 = 9;
    v25 = v2[12] + v24;
    v26 = -48;
    if ( (unsigned int)(v2[13] - 48) >= 0xA )
      v26 = -87;
    BYTE6(v48) = v2[13] + v26 + 16 * v25;
    v27 = 0;
    if ( (unsigned int)(v2[14] - 48) >= 0xA )
      v27 = 9;
    v28 = v2[14] + v27;
    v29 = -48;
    if ( (unsigned int)(v2[15] - 48) >= 0xA )
      v29 = -87;
    BYTE7(v48) = v2[15] + v29 + 16 * v28;
    v30 = 0;
    if ( (unsigned int)(v2[16] - 48) >= 0xA )
      v30 = 9;
    v31 = v2[16] + v30;
    v32 = -48;
    if ( (unsigned int)(v2[17] - 48) >= 0xA )
      v32 = -87;
    BYTE8(v48) = v2[17] + v32 + 16 * v31;
    if ( (unsigned int)(v2[18] - 48) >= 0xA )
      v4 = 9;
    v33 = v2[18] + v4;
    v34 = v2[19];
    if ( (unsigned int)(v34 - 48) >= 0xA )
      v7 = -87;
    v35 = (char *)&v48 + 2;
    v36 = (char *)&v48 + 8;
    v37 = LOBYTE(v48);
    LOBYTE(v48) = v34 + v7 + 16 * v33;
    BYTE9(v48) = v37;
    do
    {
      v38 = *(v35 - 1);
      *(v35 - 1) = *v36;
      *v36-- = v38;
    }
    while ( v35++ < v36 );
    v50 = 0;
    *(_OWORD *)s = 0;
    v51 = 0;
    v40 = snprintf(s, 0x28u, "%LaL", v48);
    if ( v40 )
    {
      v41 = v40;
      v42 = (char *)a2[1];
      v43 = (size_t)a2[2];
      v44 = (size_t)&v42[v40];
      if ( v44 >= v43 )
      {
        v46 = 2 * v43;
        if ( v46 < v44 )
          v46 = v44;
        a2[2] = (void *)v46;
        v45 = (char *)realloc(*a2, v46);
        *a2 = v45;
        v42 = (char *)a2[1];
      }
      else
      {
        v45 = (char *)*a2;
      }
      memmove(&v42[(_QWORD)v45], s, v41);
      a2[1] = (char *)a2[1] + v41;
    }
  }
  return __readfsqword(0x28u);
}
