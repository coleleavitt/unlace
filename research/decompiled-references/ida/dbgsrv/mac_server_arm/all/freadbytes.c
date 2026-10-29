/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x000000010006EF50

//----- (000000010006EF50) ----------------------------------------------------
__int64 __fastcall freadbytes(FILE *a1, char *a2, int a3, int a4)
{
  __int64 v7; // x20
  char *v8; // x8
  __int64 v9; // x10
  int8x16_t *v11; // x11
  int8x16_t *v12; // x12
  __int64 v13; // x13
  int8x16_t v14; // q0
  int8x16_t v15; // q1
  int8x16_t v16; // q2
  int8x16_t v17; // q3
  int8x16_t v18; // q0
  int8x16_t v19; // q1
  int8x16_t v20; // q0
  int8x16_t v21; // q1
  __int64 v22; // x13
  int8x8_t *v23; // x11
  __int64 v24; // x12
  int8x8_t *v25; // x13
  int8x8_t v26; // t1
  char *v27; // x11
  __int64 v28; // x9
  char *v29; // x8
  char v30; // t1
  _BYTE __src[32]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v32; // [xsp+28h] [xbp-28h] BYREF

  v7 = a3;
  if ( qfread(a1, __src, a3) != a3 )
    return 0xFFFFFFFFLL;
  if ( !a4 )
  {
    if ( a3 >= 1 )
      memcpy(a2, __src, (unsigned int)a3);
    return 0;
  }
  if ( a3 >= 1 )
  {
    v8 = &a2[v7];
    if ( (unsigned int)a3 < 8 )
    {
      v9 = 0;
      goto LABEL_20;
    }
    if ( (unsigned int)a3 >= 0x40 )
    {
      v9 = a3 & 0x7FFFFFC0;
      v11 = (int8x16_t *)&a2[v7 - 32];
      v12 = (int8x16_t *)&v32;
      v13 = v9;
      do
      {
        v14 = v12[-2];
        v15 = v12[-1];
        v16 = *v12;
        v17 = v12[1];
        v12 += 4;
        v18 = vrev64q_s8(v14);
        v19 = vrev64q_s8(v15);
        *v11 = vextq_s8(v19, v19, 8u);
        v11[1] = vextq_s8(v18, v18, 8u);
        v20 = vrev64q_s8(v16);
        v21 = vrev64q_s8(v17);
        v11[-2] = vextq_s8(v21, v21, 8u);
        v11[-1] = vextq_s8(v20, v20, 8u);
        v11 -= 4;
        v13 -= 64;
      }
      while ( v13 );
      if ( v9 == a3 )
        return 0;
      if ( (a3 & 0x38) == 0 )
      {
        v8 -= v9;
LABEL_20:
        v27 = &__src[v9];
        v28 = (unsigned int)a3 - v9;
        v29 = v8 - 1;
        do
        {
          v30 = *v27++;
          *v29-- = v30;
          --v28;
        }
        while ( v28 );
        return 0;
      }
    }
    else
    {
      v9 = 0;
    }
    v22 = v9;
    v9 = a3 & 0x7FFFFFF8;
    v8 -= v9;
    v23 = (int8x8_t *)&__src[v22];
    v24 = v22 - v9;
    v25 = (int8x8_t *)&a2[v7 - v22 - 8];
    do
    {
      v26 = *v23++;
      *v25-- = vrev64_s8(v26);
      v24 += 8;
    }
    while ( v24 );
    if ( v9 == a3 )
      return 0;
    goto LABEL_20;
  }
  return 0;
}
