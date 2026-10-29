/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A400
// Address: 0x000000014006A400

//----- (000000014006A400) ----------------------------------------------------
__int64 __fastcall sub_14006A400(int a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  char *v4; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // r14d
  int v9; // r12d
  int v10; // r13d
  int v11; // edx
  unsigned __int64 v12; // r15
  unsigned __int64 i; // r15
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int64 v38; // r8
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  __int64 v45; // rax
  char v46; // dl
  char v47; // dl
  int v48; // [rsp+38h] [rbp+10h]

  v3 = a3;
  v4 = a2;
  if ( !a2 )
    return 0;
  v6 = ~a1;
  if ( a3 >= 0x17 )
  {
    do
    {
      if ( ((unsigned __int8)v4 & 3) == 0 )
        break;
      v7 = (unsigned __int8)(v6 ^ *v4++);
      v6 = dword_1400AD240[v7] ^ (v6 >> 8);
      --v3;
    }
    while ( v3 );
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = v3 / 0x14;
    v48 = 0;
    v3 %= 0x14u;
    for ( i = v12 - 1; i; --i )
    {
      v14 = *((_DWORD *)v4 + 4) ^ v11;
      v15 = *(_DWORD *)v4 ^ v6;
      v16 = *((_DWORD *)v4 + 1) ^ v8;
      v17 = *((_DWORD *)v4 + 2) ^ v9;
      v18 = *((_DWORD *)v4 + 3) ^ v10;
      v4 += 20;
      v6 = dword_1400AE240[(unsigned __int64)v15 >> 24]
         ^ dword_1400ADA40[BYTE1(v15)]
         ^ dword_1400ADE40[BYTE2(v15)]
         ^ dword_1400AD640[(unsigned __int8)v15];
      v8 = dword_1400AE240[(unsigned __int64)v16 >> 24]
         ^ dword_1400ADA40[BYTE1(v16)]
         ^ dword_1400ADE40[BYTE2(v16)]
         ^ dword_1400AD640[(unsigned __int8)v16];
      v9 = dword_1400AE240[(unsigned __int64)v17 >> 24]
         ^ dword_1400ADA40[BYTE1(v17)]
         ^ dword_1400ADE40[BYTE2(v17)]
         ^ dword_1400AD640[(unsigned __int8)v17];
      v10 = dword_1400AE240[(unsigned __int64)v18 >> 24]
          ^ dword_1400ADA40[BYTE1(v18)]
          ^ dword_1400ADE40[BYTE2(v18)]
          ^ dword_1400AD640[(unsigned __int8)v18];
      v11 = dword_1400AE240[(unsigned __int64)v14 >> 24]
          ^ dword_1400ADA40[BYTE1(v14)]
          ^ dword_1400ADE40[BYTE2(v14)]
          ^ dword_1400AD640[(unsigned __int8)v14];
      v48 = v11;
    }
    v19 = dword_1400AD240[(unsigned __int8)(*v4 ^ v6)] ^ ((*(_DWORD *)v4 ^ v6) >> 8);
    v20 = dword_1400AD240[(unsigned __int8)v19] ^ (v19 >> 8);
    v21 = dword_1400AD240[(unsigned __int8)v20] ^ (v20 >> 8);
    v22 = v8 ^ *((_DWORD *)v4 + 1) ^ dword_1400AD240[(unsigned __int8)v21] ^ (v21 >> 8);
    v23 = dword_1400AD240[(unsigned __int8)v22] ^ (v22 >> 8);
    v24 = dword_1400AD240[(unsigned __int8)v23] ^ (v23 >> 8);
    v25 = dword_1400AD240[(unsigned __int8)v24] ^ (v24 >> 8);
    v26 = v9 ^ *((_DWORD *)v4 + 2) ^ dword_1400AD240[(unsigned __int8)v25] ^ (v25 >> 8);
    v27 = dword_1400AD240[(unsigned __int8)v26] ^ (v26 >> 8);
    v28 = dword_1400AD240[(unsigned __int8)v27] ^ (v27 >> 8);
    v29 = dword_1400AD240[(unsigned __int8)v28] ^ (v28 >> 8);
    v30 = v10 ^ *((_DWORD *)v4 + 3) ^ dword_1400AD240[(unsigned __int8)v29] ^ (v29 >> 8);
    v31 = dword_1400AD240[(unsigned __int8)v30] ^ (v30 >> 8);
    v32 = dword_1400AD240[(unsigned __int8)v31] ^ (v31 >> 8);
    v33 = dword_1400AD240[(unsigned __int8)v32] ^ (v32 >> 8);
    v34 = v48 ^ *((_DWORD *)v4 + 4) ^ dword_1400AD240[(unsigned __int8)v33] ^ (v33 >> 8);
    v35 = dword_1400AD240[(unsigned __int8)v34] ^ (v34 >> 8);
    v36 = dword_1400AD240[(unsigned __int8)v35] ^ (v35 >> 8);
    v37 = dword_1400AD240[(unsigned __int8)v36] ^ (v36 >> 8);
    v6 = dword_1400AD240[(unsigned __int8)v37] ^ (v37 >> 8);
    v4 += 20;
  }
  if ( v3 >= 8 )
  {
    v38 = v3 >> 3;
    v3 += -8LL * (v3 >> 3);
    do
    {
      v39 = dword_1400AD240[(unsigned __int8)(v6 ^ *v4)] ^ (v6 >> 8);
      v40 = dword_1400AD240[(unsigned __int8)(v39 ^ v4[1])] ^ (v39 >> 8);
      v41 = dword_1400AD240[(unsigned __int8)(v40 ^ v4[2])] ^ (v40 >> 8);
      v42 = dword_1400AD240[(unsigned __int8)(v41 ^ v4[3])] ^ (v41 >> 8);
      v43 = dword_1400AD240[(unsigned __int8)(v42 ^ v4[4])] ^ (v42 >> 8);
      v44 = dword_1400AD240[(unsigned __int8)(v43 ^ v4[5])] ^ (v43 >> 8);
      v45 = (unsigned __int8)(v44 ^ v4[6]);
      v46 = v4[7];
      v4 += 8;
      LODWORD(v45) = dword_1400AD240[v45] ^ (v44 >> 8);
      v6 = dword_1400AD240[(unsigned __int8)(v45 ^ v46)] ^ ((unsigned int)v45 >> 8);
      --v38;
    }
    while ( v38 );
  }
  for ( ; v3; --v3 )
  {
    v47 = *v4++;
    v6 = dword_1400AD240[(unsigned __int8)(v6 ^ v47)] ^ (v6 >> 8);
  }
  return ~v6;
}
// 1400AD240: using guessed type int dword_1400AD240[];
// 1400AD640: using guessed type int dword_1400AD640[];
// 1400ADA40: using guessed type int dword_1400ADA40[];
// 1400ADE40: using guessed type int dword_1400ADE40[];
// 1400AE240: using guessed type int dword_1400AE240[];
