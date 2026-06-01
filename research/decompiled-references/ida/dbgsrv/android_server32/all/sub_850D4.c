/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_850D4
// Address: 0x000850D4

//----- (000850D4) --------------------------------------------------------
int __fastcall sub_850D4(int a1, unsigned __int8 *a2, unsigned int a3)
{
  int result; // r0
  unsigned int v5; // r5
  _DWORD *v6; // r6
  int v7; // r3
  unsigned int v8; // r4
  unsigned __int8 *v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r7
  unsigned int v12; // r1
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r4
  unsigned int v16; // r1
  unsigned int v17; // r1
  unsigned int v18; // r3
  unsigned int v19; // r3
  unsigned int v20; // r3
  unsigned int v21; // r3
  unsigned int v22; // r1
  unsigned int v23; // r1
  unsigned int v24; // r1
  unsigned int v25; // r3
  unsigned int v26; // r3
  unsigned int v27; // r3
  unsigned int v28; // r3
  unsigned int v29; // r3
  int v30; // [sp+4h] [bp-40h]
  unsigned int v31; // [sp+18h] [bp-2Ch]
  int v32; // [sp+1Ch] [bp-28h]
  int v33; // [sp+20h] [bp-24h]
  int v34; // [sp+24h] [bp-20h]
  unsigned __int8 *v35; // [sp+28h] [bp-1Ch]
  _DWORD *v36; // [sp+3Ch] [bp-8h]
  unsigned int v37; // [sp+40h] [bp-4h]

  result = 0;
  if ( !a2 )
    return result;
  v5 = ~a1;
  if ( a3 >= 0x17 )
  {
    if ( (_DWORD)a2 << 30 )
    {
      do
      {
        v6 = a2 + 1;
        v7 = (unsigned int)(a2 + 1) & 3;
        v5 = (v5 >> 8) ^ dword_C697C[*a2 ^ (unsigned __int8)v5];
        v8 = a3 - 1;
        if ( a3 == 1 )
          break;
        ++a2;
        --a3;
      }
      while ( v7 );
    }
    else
    {
      v8 = a3;
      v6 = a2;
    }
    v10 = v8 / 0x14;
    v11 = *v6 ^ v5;
    a3 = v8 % 0x14;
    if ( v8 / 0x14 == 1 )
    {
      v14 = 0;
      v34 = 0;
      v15 = 0;
      v33 = 0;
    }
    else
    {
      v12 = 1 - v10;
      v30 = (int)&v6[5 * v10 - 5];
      v34 = 0;
      v14 = 0;
      v32 = 0;
      v33 = 0;
      v13 = v6 + 5;
      do
      {
        v31 = v12;
        v11 = *v13
            ^ *(int *)((char *)&dword_C797C + ((v11 >> 22) & 0x3FC))
            ^ dword_C6D7C[(unsigned __int8)v11]
            ^ *(int *)((char *)&dword_C717C + ((v11 >> 6) & 0x3FC))
            ^ *(int *)((char *)&dword_C757C + ((v11 >> 14) & 0x3FC));
        v36 = v13 - 20;
        v32 = *(int *)((char *)&dword_C797C + (((*(v13 - 1) ^ (unsigned int)v32) >> 22) & 0x3FC))
            ^ dword_C6D7C[(unsigned __int8)(*((_BYTE *)v13 - 4) ^ v32)]
            ^ *(int *)((char *)&dword_C717C + (((*(v13 - 1) ^ (unsigned int)v32) >> 6) & 0x3FC))
            ^ *(int *)((char *)&dword_C757C + (((*(v13 - 1) ^ (unsigned int)v32) >> 14) & 0x3FC));
        v34 = *(int *)((char *)&dword_C797C + (((*(v13 - 2) ^ (unsigned int)v34) >> 22) & 0x3FC))
            ^ dword_C6D7C[(unsigned __int8)(*((_BYTE *)v13 - 8) ^ v34)]
            ^ *(int *)((char *)&dword_C717C + (((*(v13 - 2) ^ (unsigned int)v34) >> 6) & 0x3FC))
            ^ *(int *)((char *)&dword_C757C + (((*(v13 - 2) ^ (unsigned int)v34) >> 14) & 0x3FC));
        v33 = *(int *)((char *)&dword_C797C + (((v36[17] ^ (unsigned int)v33) >> 22) & 0x3FC))
            ^ dword_C6D7C[(unsigned __int8)(*((_BYTE *)v36 + 68) ^ v33)]
            ^ *(int *)((char *)&dword_C717C + (((v36[17] ^ (unsigned int)v33) >> 6) & 0x3FC))
            ^ *(int *)((char *)&dword_C757C + (((v36[17] ^ (unsigned int)v33) >> 14) & 0x3FC));
        v14 = *(int *)((char *)&dword_C797C + (((*(v13 - 4) ^ (unsigned int)v14) >> 22) & 0x3FC))
            ^ dword_C6D7C[(unsigned __int8)(*((_BYTE *)v13 - 16) ^ v14)]
            ^ *(int *)((char *)&dword_C717C + (((*(v13 - 4) ^ (unsigned int)v14) >> 6) & 0x3FC))
            ^ *(int *)((char *)&dword_C757C + (((*(v13 - 4) ^ (unsigned int)v14) >> 14) & 0x3FC));
        v13 += 5;
        ++v12;
      }
      while ( v31 != -1 );
      v6 = (_DWORD *)v30;
      a3 = v8 % 0x14;
      v15 = v32;
    }
    v16 = dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v11]) ^ BYTE1(v11))]
        ^ ((dword_C697C[(unsigned __int8)v11] ^ (v11 >> 8)) >> 8);
    v17 = dword_C697C[(unsigned __int8)v16] ^ (v16 >> 8);
    v18 = v6[1] ^ dword_C697C[(unsigned __int8)v17] ^ v14 ^ (v17 >> 8);
    v19 = v6[2]
        ^ dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v18]) ^ BYTE1(v18))])
                                                                           ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v18])
                                                                                               ^ (v18 >> 8)) >> 8))])
                                      ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v18])
                                                                                               ^ BYTE1(v18))])
                                                          ^ ((dword_C697C[(unsigned __int8)v18] ^ (v18 >> 8)) >> 8)) >> 8))]
        ^ v33
        ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v18])
                                                                             ^ BYTE1(v18))])
                                        ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v18]) ^ (v18 >> 8)) >> 8))]
          ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v18]) ^ BYTE1(v18))]
            ^ ((dword_C697C[(unsigned __int8)v18] ^ (v18 >> 8)) >> 8)) >> 8)) >> 8);
    v20 = v6[3]
        ^ dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v19]) ^ BYTE1(v19))])
                                                                           ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v19])
                                                                                               ^ (v19 >> 8)) >> 8))])
                                      ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v19])
                                                                                               ^ BYTE1(v19))])
                                                          ^ ((dword_C697C[(unsigned __int8)v19] ^ (v19 >> 8)) >> 8)) >> 8))]
        ^ v34
        ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v19])
                                                                             ^ BYTE1(v19))])
                                        ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v19]) ^ (v19 >> 8)) >> 8))]
          ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v19]) ^ BYTE1(v19))]
            ^ ((dword_C697C[(unsigned __int8)v19] ^ (v19 >> 8)) >> 8)) >> 8)) >> 8);
    v21 = v6[4]
        ^ dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v20]) ^ BYTE1(v20))])
                                                                           ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v20])
                                                                                               ^ (v20 >> 8)) >> 8))])
                                      ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v20])
                                                                                               ^ BYTE1(v20))])
                                                          ^ ((dword_C697C[(unsigned __int8)v20] ^ (v20 >> 8)) >> 8)) >> 8))]
        ^ v15
        ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v20])
                                                                             ^ BYTE1(v20))])
                                        ^ ((unsigned __int16)(LOWORD(dword_C697C[(unsigned __int8)v20]) ^ (v20 >> 8)) >> 8))]
          ^ ((dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v20]) ^ BYTE1(v20))]
            ^ ((dword_C697C[(unsigned __int8)v20] ^ (v20 >> 8)) >> 8)) >> 8)) >> 8);
    v22 = dword_C697C[(unsigned __int8)(LOBYTE(dword_C697C[(unsigned __int8)v21]) ^ BYTE1(v21))]
        ^ ((dword_C697C[(unsigned __int8)v21] ^ (v21 >> 8)) >> 8);
    v23 = dword_C697C[(unsigned __int8)v22] ^ (v22 >> 8);
    v5 = (v23 >> 8) ^ dword_C697C[(unsigned __int8)v23];
    v9 = (unsigned __int8 *)(v6 + 5);
    if ( a3 < 8 )
      goto LABEL_19;
    goto LABEL_16;
  }
  v9 = a2;
  if ( a3 >= 8 )
  {
LABEL_16:
    v24 = a3 - 8;
    v37 = (a3 - 8) & 0xFFFFFFF8;
    v35 = v9;
    do
    {
      v25 = dword_C697C[v9[2]
                      ^ (unsigned __int8)(LOBYTE(dword_C697C[v9[1]
                                                           ^ (unsigned __int8)(LOBYTE(dword_C697C[*v9
                                                                                                ^ (unsigned __int8)v5])
                                                                             ^ BYTE1(v5))])
                                        ^ ((unsigned __int16)(LOWORD(dword_C697C[*v9 ^ (unsigned __int8)v5]) ^ (v5 >> 8)) >> 8))]
          ^ ((dword_C697C[v9[1] ^ (unsigned __int8)(LOBYTE(dword_C697C[*v9 ^ (unsigned __int8)v5]) ^ BYTE1(v5))]
            ^ ((dword_C697C[*v9 ^ (unsigned __int8)v5] ^ (v5 >> 8)) >> 8)) >> 8);
      v26 = dword_C697C[v9[3]
                      ^ (unsigned __int8)(LOBYTE(dword_C697C[v9[2]
                                                           ^ (unsigned __int8)(LOBYTE(dword_C697C[v9[1]
                                                                                                ^ (unsigned __int8)(LOBYTE(dword_C697C[*v9 ^ (unsigned __int8)v5]) ^ BYTE1(v5))])
                                                                             ^ ((unsigned __int16)(LOWORD(dword_C697C[*v9 ^ (unsigned __int8)v5])
                                                                                                 ^ (v5 >> 8)) >> 8))])
                                        ^ ((unsigned __int16)(LOWORD(dword_C697C[v9[1]
                                                                               ^ (unsigned __int8)(LOBYTE(dword_C697C[*v9 ^ (unsigned __int8)v5])
                                                                                                 ^ BYTE1(v5))])
                                                            ^ ((dword_C697C[*v9 ^ (unsigned __int8)v5] ^ (v5 >> 8)) >> 8)) >> 8))]
          ^ (v25 >> 8);
      v27 = dword_C697C[v9[4] ^ (unsigned __int8)v26] ^ (v26 >> 8);
      v28 = dword_C697C[v9[5] ^ (unsigned __int8)v27] ^ (v27 >> 8);
      v29 = dword_C697C[v9[6] ^ (unsigned __int8)v28] ^ (v28 >> 8);
      v5 = (v29 >> 8) ^ dword_C697C[v9[7] ^ (unsigned __int8)v29];
      v9 += 8;
      a3 -= 8;
    }
    while ( a3 > 7 );
    v9 = &v35[v37 + 8];
    a3 = v24 - v37;
  }
LABEL_19:
  while ( a3 )
  {
    v5 = (v5 >> 8) ^ dword_C697C[*v9++ ^ (unsigned __int8)v5];
    --a3;
  }
  return ~v5;
}
// C697C: using guessed type int dword_C697C[];
// C6D7C: using guessed type int dword_C6D7C[];
// C717C: using guessed type int dword_C717C;
// C757C: using guessed type int dword_C757C;
// C797C: using guessed type int dword_C797C;
