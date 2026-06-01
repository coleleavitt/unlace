/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x00000000000BDD08

//----- (00000000000BDD08) ----------------------------------------------------
__int64 __fastcall fwritebytes(FILE *a1, char *a2, unsigned int a3, int a4)
{
  char *v5; // x8
  __int64 v6; // x9
  _BYTE *v7; // x10
  char *v8; // x8
  char v9; // t1
  __int64 v10; // x9
  _BYTE *v11; // x10
  __int64 v12; // x8
  char v13; // t1
  int8x16_t *v14; // x13
  int8x16_t *v15; // x12
  unsigned __int64 v16; // x14
  int8x16_t v17; // q1
  int8x16_t v18; // q2
  __int128 *v19; // x10
  _OWORD *v20; // x11
  __int64 v21; // x12
  __int128 v22; // q0
  __int128 v23; // q1
  _BYTE ptr[16]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v25[3]; // [xsp+18h] [xbp-38h] BYREF

  v25[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 > 0x20 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    if ( a3 )
    {
      v5 = &a2[a3];
      if ( a3 >= 0x20 && (ptr >= v5 || &a2[(int)a3 - (unsigned __int64)a3] >= &ptr[a3]) )
      {
        v14 = (int8x16_t *)&a2[a3 - 16];
        v15 = (int8x16_t *)v25;
        v16 = a3 - (unsigned __int64)(a3 & 0x1F);
        do
        {
          v18 = v14[-1];
          v17 = *v14;
          v14 -= 2;
          v16 -= 32LL;
          v15[-1] = vqtbl1q_s8(v17, (int8x16_t)xmmword_11BFA0);
          *v15 = vqtbl1q_s8(v18, (int8x16_t)xmmword_11BFA0);
          v15 += 2;
        }
        while ( v16 );
      }
      else
      {
        v6 = a3;
        v7 = ptr;
        v8 = v5 - 1;
        do
        {
          v9 = *v8--;
          --v6;
          *v7++ = v9;
        }
        while ( v6 );
      }
    }
    goto LABEL_18;
  }
  if ( a3 )
  {
    if ( a3 > 0x1F && (ptr >= &a2[a3] || &ptr[a3] <= a2) )
    {
      v10 = a3 & 0xFFFFFFE0;
      v19 = (__int128 *)(a2 + 16);
      a2 += v10;
      v20 = v25;
      v21 = v10;
      do
      {
        v22 = *(v19 - 1);
        v23 = *v19;
        v19 += 2;
        v21 -= 32;
        *(v20 - 1) = v22;
        *v20 = v23;
        v20 += 2;
      }
      while ( v21 );
      if ( v10 == a3 )
        goto LABEL_18;
    }
    else
    {
      v10 = 0;
    }
    v11 = &ptr[v10];
    v12 = a3 - v10;
    do
    {
      v13 = *a2++;
      --v12;
      *v11++ = v13;
    }
    while ( v12 );
  }
LABEL_18:
  if ( qfwrite(a1, ptr, (int)a3) == a3 )
    return 0;
  else
    return 0xFFFFFFFFLL;
}
// BDE5C: conditional instruction was optimized away because w2.1==20
// 11BFA0: using guessed type __int128 xmmword_11BFA0;
