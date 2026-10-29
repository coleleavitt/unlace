/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x000000010006F0EC

//----- (000000010006F0EC) ----------------------------------------------------
__int64 __fastcall fwritebytes(FILE *a1, char *a2, size_t __n, int a4)
{
  size_t v5; // x19
  int8x16_t *v6; // x8
  size_t v7; // x10
  FILE *v8; // x20
  size_t v9; // x13
  int8x8_t *v10; // x11
  size_t v11; // x12
  int8x8_t *v12; // x13
  int8x8_t v13; // t1
  int8x16_t v14; // q0
  int8x16_t v15; // q0
  char *v16; // x11
  size_t v17; // x9
  char *v18; // x8
  char v19; // t1
  _OWORD v20[2]; // [xsp+0h] [xbp-40h] BYREF

  if ( (unsigned int)__n > 0x20 )
    return 0xFFFFFFFFLL;
  v5 = (int)__n;
  if ( !a4 )
  {
    if ( (_DWORD)__n )
    {
      v8 = a1;
      memcpy(v20, a2, (unsigned int)__n);
      a1 = v8;
    }
    goto LABEL_22;
  }
  if ( (_DWORD)__n )
  {
    v6 = (int8x16_t *)&a2[(int)__n];
    if ( (unsigned int)__n < 8 )
    {
      v7 = 0;
      goto LABEL_20;
    }
    if ( (unsigned int)__n >= 0x10 )
    {
      v7 = __n & 0x30;
      v14 = vrev64q_s8(v6[-1]);
      v20[0] = vextq_s8(v14, v14, 8u);
      if ( v7 != 16 )
      {
        v15 = vrev64q_s8(v6[-2]);
        v20[1] = vextq_s8(v15, v15, 8u);
      }
      if ( v7 == (unsigned int)__n )
        goto LABEL_22;
      if ( (__n & 8) == 0 )
      {
        v6 = (int8x16_t *)((char *)v6 - v7);
LABEL_20:
        v16 = (char *)v20 + v7;
        v17 = (unsigned int)__n - v7;
        v18 = &v6[-1].i8[15];
        do
        {
          v19 = *v18--;
          *v16++ = v19;
          --v17;
        }
        while ( v17 );
        goto LABEL_22;
      }
    }
    else
    {
      v7 = 0;
    }
    v9 = v7;
    v7 = __n & 0x38;
    v6 = (int8x16_t *)((char *)v6 - v7);
    v10 = (int8x8_t *)((char *)v20 + v9);
    v11 = v9 - v7;
    v12 = (int8x8_t *)&a2[(int)__n - v9 - 8];
    do
    {
      v13 = *v12--;
      *v10++ = vrev64_s8(v13);
      v11 += 8LL;
    }
    while ( v11 );
    if ( v7 == (unsigned int)__n )
      goto LABEL_22;
    goto LABEL_20;
  }
LABEL_22:
  if ( qfwrite(a1, v20, v5) == v5 )
    return 0;
  else
    return 0xFFFFFFFFLL;
}
