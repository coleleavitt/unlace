/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BB270
// Address: 0x000BB270

//----- (000BB270) --------------------------------------------------------
int __cdecl sub_BB270(int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  _DWORD *v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned __int8 *v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned __int8 *v27; // ebx
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
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  int v41; // [esp+Ch] [ebp-2Ch]
  unsigned int v42; // [esp+Ch] [ebp-2Ch]
  int v43; // [esp+10h] [ebp-28h]
  unsigned int v44; // [esp+10h] [ebp-28h]
  int v45; // [esp+14h] [ebp-24h]
  unsigned __int8 *v46; // [esp+14h] [ebp-24h]
  int v47; // [esp+1Ch] [ebp-1Ch]
  unsigned int v48; // [esp+28h] [ebp-10h]

  v3 = a2;
  if ( !a2 )
    return 0;
  v4 = a3;
  v5 = ~a1;
  if ( a3 < 0x17 )
  {
    if ( a3 < 8 )
      goto LABEL_4;
LABEL_18:
    v44 = v4 - 8;
    v42 = (v4 - 8) & 0xFFFFFFF8;
    v46 = v3;
    do
    {
      v34 = *((_DWORD *)&qword_13ACD8 + (*v3 ^ (unsigned __int8)v5) - 52135) ^ (v5 >> 8);
      v35 = *((_DWORD *)&qword_13ACD8 + (v3[1] ^ (unsigned __int8)v34) - 52135) ^ (v34 >> 8);
      v36 = *((_DWORD *)&qword_13ACD8 + (v3[2] ^ (unsigned __int8)v35) - 52135) ^ (v35 >> 8);
      v37 = *((_DWORD *)&qword_13ACD8 + (v3[3] ^ (unsigned __int8)v36) - 52135) ^ (v36 >> 8);
      v38 = *((_DWORD *)&qword_13ACD8 + (v3[4] ^ (unsigned __int8)v37) - 52135) ^ (v37 >> 8);
      v39 = *((_DWORD *)&qword_13ACD8 + (v3[5] ^ (unsigned __int8)v38) - 52135) ^ (v38 >> 8);
      v40 = *((_DWORD *)&qword_13ACD8 + (v3[6] ^ (unsigned __int8)v39) - 52135) ^ (v39 >> 8);
      v5 = *((_DWORD *)&qword_13ACD8 + (v3[7] ^ (unsigned __int8)v40) - 52135) ^ (v40 >> 8);
      v4 -= 8;
      v3 += 8;
    }
    while ( v4 > 7 );
    v4 = v44 - v42;
    v3 = &v46[v42 + 8];
    if ( v44 != v42 )
      goto LABEL_5;
    goto LABEL_21;
  }
  if ( ((unsigned __int8)a2 & 3) != 0 )
  {
    do
    {
      v5 = dword_107E3C[*v3++ ^ (unsigned __int8)v5] ^ (v5 >> 8);
      --v4;
    }
    while ( v4 && ((unsigned __int8)v3 & 3) != 0 );
  }
  v9 = v4 / 0x14;
  v10 = *(_DWORD *)v3 ^ v5;
  if ( v4 / 0x14 == 1 )
  {
    v41 = 0;
    v11 = 0;
    v43 = 0;
    v45 = 0;
  }
  else
  {
    v47 = (int)&v3[20 * v9 - 20];
    v48 = 1 - v9;
    v45 = 0;
    v43 = 0;
    v11 = 0;
    v12 = v3 + 20;
    v41 = 0;
    do
    {
      v13 = *(v12 - 4) ^ v11;
      v41 = *((_DWORD *)&qword_13ACD8 + ((*(v12 - 3) ^ (unsigned int)v41) >> 24) - 51111)
          ^ *(_DWORD *)((char *)&qword_13ACD8 + (((*(v12 - 3) ^ (unsigned int)v41) >> 14) & 0x3FC) - 205468)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)(*((_BYTE *)v12 - 12) ^ v41) - 51879)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)((unsigned __int16)(*((_WORD *)v12 - 6) ^ v41) >> 8) - 51623);
      v43 = *((_DWORD *)&qword_13ACD8 + ((*(v12 - 2) ^ (unsigned int)v43) >> 24) - 51111)
          ^ *(_DWORD *)((char *)&qword_13ACD8 + (((*(v12 - 2) ^ (unsigned int)v43) >> 14) & 0x3FC) - 205468)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)(*((_BYTE *)v12 - 8) ^ v43) - 51879)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)((unsigned __int16)(*((_WORD *)v12 - 4) ^ v43) >> 8) - 51623);
      v11 = *((_DWORD *)&qword_13ACD8 + HIBYTE(v13) - 51111)
          ^ *(int *)((char *)&dword_108A3C + ((v13 >> 14) & 0x3FC))
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)v13 - 51879)
          ^ *((_DWORD *)&qword_13ACD8 + BYTE1(v13) - 51623);
      v45 = *((_DWORD *)&qword_13ACD8 + ((*(v12 - 1) ^ (unsigned int)v45) >> 24) - 51111)
          ^ *(_DWORD *)((char *)&qword_13ACD8 + (((*(v12 - 1) ^ (unsigned int)v45) >> 14) & 0x3FC) - 205468)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)(*((_BYTE *)v12 - 4) ^ v45) - 51879)
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)((unsigned __int16)(*((_WORD *)v12 - 2) ^ v45) >> 8) - 51623);
      v10 = *v12
          ^ *((_DWORD *)&qword_13ACD8 + HIBYTE(v10) - 51111)
          ^ *(int *)((char *)&dword_108A3C + ((v10 >> 14) & 0x3FC))
          ^ *((_DWORD *)&qword_13ACD8 + (unsigned __int8)v10 - 51879)
          ^ *((_DWORD *)&qword_13ACD8 + BYTE1(v10) - 51623);
      v12 += 5;
      ++v48;
    }
    while ( v48 );
    v3 = (unsigned __int8 *)v47;
  }
  v14 = dword_107E3C[(unsigned __int8)v10] ^ (v10 >> 8);
  v15 = dword_107E3C[(unsigned __int8)v14] ^ (v14 >> 8);
  v16 = dword_107E3C[(unsigned __int8)v15] ^ (v15 >> 8);
  v17 = (v16 >> 8) ^ *((_DWORD *)v3 + 1) ^ dword_107E3C[(unsigned __int8)v16] ^ v11;
  v18 = dword_107E3C[(unsigned __int8)v17] ^ (v17 >> 8);
  v19 = dword_107E3C[(unsigned __int8)v18] ^ (v18 >> 8);
  v20 = dword_107E3C[(unsigned __int8)v19] ^ (v19 >> 8);
  v21 = (v20 >> 8) ^ *((_DWORD *)v3 + 2) ^ dword_107E3C[(unsigned __int8)v20] ^ v41;
  v22 = v3;
  v23 = dword_107E3C[(unsigned __int8)v21] ^ (v21 >> 8);
  v24 = dword_107E3C[(unsigned __int8)v23] ^ (v23 >> 8);
  v25 = dword_107E3C[(unsigned __int8)v24] ^ (v24 >> 8);
  v26 = (v25 >> 8) ^ *((_DWORD *)v22 + 3) ^ dword_107E3C[(unsigned __int8)v25] ^ v43;
  v27 = v22;
  v28 = dword_107E3C[(unsigned __int8)v26] ^ (v26 >> 8);
  v29 = dword_107E3C[(unsigned __int8)v28] ^ (v28 >> 8);
  v30 = dword_107E3C[(unsigned __int8)v29] ^ (v29 >> 8);
  v4 %= 0x14u;
  v31 = dword_107E3C[(unsigned __int8)(BYTE1(v30) ^ v27[16] ^ LOBYTE(dword_107E3C[(unsigned __int8)v30]) ^ v45)]
      ^ (((v30 >> 8) ^ *((_DWORD *)v27 + 4) ^ dword_107E3C[(unsigned __int8)v30] ^ v45) >> 8);
  v32 = dword_107E3C[(unsigned __int8)v31] ^ (v31 >> 8);
  v33 = dword_107E3C[(unsigned __int8)v32] ^ (v32 >> 8);
  v5 = dword_107E3C[(unsigned __int8)v33] ^ (v33 >> 8);
  v3 = v27 + 20;
  if ( v4 >= 8 )
    goto LABEL_18;
LABEL_4:
  if ( v4 )
  {
LABEL_5:
    v6 = v5;
    do
    {
      v7 = *v3++;
      v6 = dword_107E3C[v7 ^ (unsigned __int8)v5] ^ (v6 >> 8);
      --v4;
      LOBYTE(v5) = v6;
    }
    while ( v4 );
    return ~v6;
  }
LABEL_21:
  v6 = v5;
  return ~v6;
}
// 107E3C: using guessed type int dword_107E3C[];
// 108A3C: using guessed type int dword_108A3C;
// 13ACD8: using guessed type __int64 qword_13ACD8;
