/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4622C0
// Address: 0x004622C0

//----- (004622C0) --------------------------------------------------------
int __cdecl sub_4622C0(int a1, char *a2, unsigned int a3)
{
  char *v3; // ebx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  char v7; // al
  unsigned int v8; // ebp
  int v9; // esi
  unsigned int v10; // ebp
  int v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  char v39; // al
  char v40; // al
  int v41; // [esp+4h] [ebp-1Ch]
  int v42; // [esp+8h] [ebp-18h]
  int v43; // [esp+Ch] [ebp-14h]
  unsigned int v44; // [esp+10h] [ebp-10h]
  unsigned int v45; // [esp+14h] [ebp-Ch]
  unsigned int v46; // [esp+18h] [ebp-8h]
  unsigned int v47; // [esp+1Ch] [ebp-4h]
  char *v48; // [esp+28h] [ebp+8h]
  unsigned int v49; // [esp+2Ch] [ebp+Ch]

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = a3;
  v6 = ~a1;
  if ( a3 >= 0x17 )
  {
    do
    {
      if ( ((unsigned __int8)v3 & 3) == 0 )
        break;
      v7 = *v3++;
      v6 = dword_4A3070[(unsigned __int8)(v6 ^ v7)] ^ (v6 >> 8);
      --v5;
    }
    while ( v5 );
    v48 = v3;
    v8 = v5 / 0x14;
    v9 = 0;
    v41 = 0;
    v42 = 0;
    v5 %= 0x14u;
    v43 = 0;
    v49 = v5;
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v46 = v11 ^ *((_DWORD *)v48 + 1);
        v44 = v42 ^ *((_DWORD *)v48 + 3);
        v45 = v43 ^ *((_DWORD *)v48 + 4);
        v47 = v41 ^ *((_DWORD *)v48 + 2);
        v48 += 20;
        v6 = dword_4A4070[(v6 ^ *(_DWORD *)v3) >> 24]
           ^ dword_4A3870[(unsigned __int8)((unsigned __int16)(v6 ^ *(_WORD *)v3) >> 8)]
           ^ dword_4A3C70[(unsigned __int8)((v6 ^ *(_DWORD *)v3) >> 16)]
           ^ dword_4A3470[(unsigned __int8)(v6 ^ *v3)];
        v11 = dword_4A4070[HIBYTE(v46)]
            ^ dword_4A3870[BYTE1(v46)]
            ^ dword_4A3C70[BYTE2(v46)]
            ^ dword_4A3470[(unsigned __int8)v46];
        v41 = dword_4A4070[HIBYTE(v47)]
            ^ dword_4A3870[BYTE1(v47)]
            ^ dword_4A3C70[BYTE2(v47)]
            ^ dword_4A3470[(unsigned __int8)v47];
        v42 = dword_4A4070[HIBYTE(v44)]
            ^ dword_4A3870[BYTE1(v44)]
            ^ dword_4A3C70[BYTE2(v44)]
            ^ dword_4A3470[(unsigned __int8)v44];
        v43 = dword_4A4070[HIBYTE(v45)]
            ^ dword_4A3870[BYTE1(v45)]
            ^ dword_4A3C70[BYTE2(v45)]
            ^ dword_4A3470[(unsigned __int8)v45];
        v3 = v48;
        --v10;
      }
      while ( v10 );
      v5 = v49;
      v9 = dword_4A4070[HIBYTE(v46)]
         ^ dword_4A3870[BYTE1(v46)]
         ^ dword_4A3C70[BYTE2(v46)]
         ^ dword_4A3470[(unsigned __int8)v46];
    }
    v12 = dword_4A3070[(unsigned __int8)(v6 ^ *v3)] ^ ((v6 ^ *(_DWORD *)v3) >> 8);
    v13 = dword_4A3070[(unsigned __int8)v12] ^ (v12 >> 8);
    v14 = dword_4A3070[(unsigned __int8)v13] ^ (v13 >> 8);
    v15 = dword_4A3070[(unsigned __int8)v14] ^ (v14 >> 8) ^ *((_DWORD *)v3 + 1);
    v16 = dword_4A3070[(unsigned __int8)(v9 ^ v15)] ^ ((v9 ^ (unsigned int)v15) >> 8);
    v17 = dword_4A3070[(unsigned __int8)v16] ^ (v16 >> 8);
    v18 = dword_4A3070[(unsigned __int8)v17] ^ (v17 >> 8);
    v19 = dword_4A3070[(unsigned __int8)v18] ^ (v18 >> 8) ^ *((_DWORD *)v3 + 2);
    v20 = dword_4A3070[(unsigned __int8)(v41 ^ v19)] ^ ((v41 ^ (unsigned int)v19) >> 8);
    v21 = dword_4A3070[(unsigned __int8)v20] ^ (v20 >> 8);
    v22 = dword_4A3070[(unsigned __int8)v21] ^ (v21 >> 8);
    v23 = dword_4A3070[(unsigned __int8)v22] ^ (v22 >> 8);
    v24 = dword_4A3070[(unsigned __int8)(v42 ^ v23 ^ v3[12])] ^ ((v42 ^ (unsigned int)v23 ^ *((_DWORD *)v3 + 3)) >> 8);
    v25 = dword_4A3070[(unsigned __int8)v24] ^ (v24 >> 8);
    v26 = dword_4A3070[(unsigned __int8)v25] ^ (v25 >> 8);
    v27 = dword_4A3070[(unsigned __int8)v26] ^ (v26 >> 8) ^ *((_DWORD *)v48 + 4);
    v28 = dword_4A3070[(unsigned __int8)(v43 ^ v27)] ^ ((v43 ^ (unsigned int)v27) >> 8);
    v29 = dword_4A3070[(unsigned __int8)v28] ^ (v28 >> 8);
    v30 = dword_4A3070[(unsigned __int8)v29] ^ (v29 >> 8);
    v6 = dword_4A3070[(unsigned __int8)v30] ^ (v30 >> 8);
    v3 = v48 + 20;
  }
  if ( v5 >= 8 )
  {
    v31 = v5 >> 3;
    do
    {
      v5 -= 8;
      v32 = dword_4A3070[(unsigned __int8)(v6 ^ *v3)] ^ (v6 >> 8);
      v33 = dword_4A3070[(unsigned __int8)(v32 ^ v3[1])] ^ (v32 >> 8);
      v34 = dword_4A3070[(unsigned __int8)(v33 ^ v3[2])] ^ (v33 >> 8);
      v35 = dword_4A3070[(unsigned __int8)(v34 ^ v3[3])] ^ (v34 >> 8);
      v36 = dword_4A3070[(unsigned __int8)(v35 ^ v3[4])] ^ (v35 >> 8);
      v37 = dword_4A3070[(unsigned __int8)(v36 ^ v3[5])] ^ (v36 >> 8);
      v38 = dword_4A3070[(unsigned __int8)(v37 ^ v3[6])] ^ (v37 >> 8);
      v39 = v3[7];
      v3 += 8;
      v6 = dword_4A3070[(unsigned __int8)(v38 ^ v39)] ^ (v38 >> 8);
      --v31;
    }
    while ( v31 );
  }
  for ( ; v5; --v5 )
  {
    v40 = *v3++;
    v6 = dword_4A3070[(unsigned __int8)(v6 ^ v40)] ^ (v6 >> 8);
  }
  return ~v6;
}
// 4A3070: using guessed type int dword_4A3070[];
// 4A3470: using guessed type int dword_4A3470[];
// 4A3870: using guessed type int dword_4A3870[];
// 4A3C70: using guessed type int dword_4A3C70[];
// 4A4070: using guessed type int dword_4A4070[];
