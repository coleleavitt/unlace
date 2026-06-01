/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x00000000000BDBCC

//----- (00000000000BDBCC) ----------------------------------------------------
__int64 __fastcall freadbytes(FILE *a1, char *a2, int a3, int a4)
{
  __int64 v5; // x20
  char *v8; // x8
  unsigned __int64 v9; // x10
  unsigned __int64 v10; // x9
  char *v11; // x10
  char *v12; // x8
  char v13; // t1
  int8x16_t *v15; // x12
  int8x16_t *v16; // x13
  unsigned __int64 v17; // x14
  int8x16_t v18; // q1
  int8x16_t v19; // q2
  _BYTE src[16]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v21[3]; // [xsp+18h] [xbp-48h] BYREF

  v5 = a3;
  v21[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qfread(a1, src, a3) != a3 )
    return 0xFFFFFFFFLL;
  if ( !a4 )
  {
    if ( a3 >= 1 )
      memcpy(a2, src, (unsigned int)a3);
    return 0;
  }
  if ( a3 >= 1 )
  {
    v8 = &a2[v5];
    if ( (unsigned int)a3 >= 0x20 && (&a2[v5 - (unsigned int)a3] >= &src[a3] || src >= v8) )
    {
      v9 = (unsigned int)a3 - (unsigned __int64)(a3 & 0x1F);
      v8 += (a3 & 0x1F) - (unsigned __int64)(unsigned int)a3;
      v15 = (int8x16_t *)&a2[v5 - 16];
      v16 = (int8x16_t *)v21;
      v17 = v9;
      do
      {
        v18 = v16[-1];
        v19 = *v16;
        v17 -= 32LL;
        v16 += 2;
        v15[-1] = vqtbl1q_s8(v19, (int8x16_t)xmmword_11BFA0);
        *v15 = vqtbl1q_s8(v18, (int8x16_t)xmmword_11BFA0);
        v15 -= 2;
      }
      while ( v17 );
      if ( (a3 & 0x1F) == 0 )
        return 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = (unsigned int)a3 - v9;
    v11 = &src[v9];
    v12 = v8 - 1;
    do
    {
      v13 = *v11++;
      --v10;
      *v12-- = v13;
    }
    while ( v10 );
  }
  return 0;
}
// 11BFA0: using guessed type __int128 xmmword_11BFA0;
