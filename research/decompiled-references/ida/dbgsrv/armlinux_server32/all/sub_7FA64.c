/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FA64
// Address: 0x0007FA64

//----- (0007FA64) --------------------------------------------------------
int __fastcall sub_7FA64(int a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r0
  char v5; // t1
  int v6; // r8
  _BYTE *v7; // r11
  int v8; // r10
  int v9; // r9
  int v10; // r12
  __int64 v11; // kr00_8
  int v12; // r2
  int v13; // r7
  char v14; // r3
  int v15; // r6
  int v16; // r3
  unsigned int v17; // r4
  unsigned int v18; // r0
  int v19; // r3
  unsigned int v20; // r0
  int v21; // r3
  unsigned int v22; // r0
  int v23; // r3
  int v24; // r3
  unsigned int v25; // r6
  _BYTE *v26; // r2
  char v27; // r3
  char v28; // r9
  char v29; // r8
  int v30; // r10
  unsigned int v31; // r9
  unsigned int v32; // r8
  unsigned int v33; // lr
  unsigned int v34; // r12
  unsigned int v35; // r7
  unsigned int v36; // r0
  unsigned int v37; // r3
  char *v38; // r3
  char v39; // t1
  int v41; // [sp+0h] [bp-34h]
  unsigned int v42; // [sp+4h] [bp-30h]
  unsigned int v43; // [sp+8h] [bp-2Ch]
  unsigned int v44; // [sp+Ch] [bp-28h]
  unsigned int v45; // [sp+10h] [bp-24h]
  unsigned int v46; // [sp+14h] [bp-20h]
  unsigned int v47; // [sp+18h] [bp-1Ch]
  unsigned int v48; // [sp+1Ch] [bp-18h]
  unsigned int v49; // [sp+24h] [bp-10h]
  unsigned int v50; // [sp+2Ch] [bp-8h]

  v48 = a3;
  if ( !a2 )
    return 0;
  v3 = a3;
  v4 = ~a1;
  if ( a3 > 0x16 )
  {
    while ( (_DWORD)a2 << 30 )
    {
      v5 = *a2++;
      --v3;
      v4 = dword_B56F0[(unsigned __int8)(v5 ^ v4)] ^ (v4 >> 8);
      if ( !v3 )
      {
        v48 = 0;
        v49 = 0;
        v50 = 0;
        goto LABEL_6;
      }
    }
    v49 = v3 / 0x14;
    v50 = 4 * (v3 / 0x14);
    v48 = v3 % 0x14;
LABEL_6:
    v6 = 0;
    v7 = a2 + 20;
    v8 = 0;
    v9 = 0;
    v47 = v49;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v7 - 20);
      v46 = v11 ^ v4;
      v12 = (unsigned __int8)(v11 ^ v4);
      v42 = v10 ^ HIDWORD(v11);
      v43 = v9 ^ *((_DWORD *)v7 - 3);
      v44 = v8 ^ *((_DWORD *)v7 - 2);
      v45 = v6 ^ *((_DWORD *)v7 - 1);
      if ( !--v47 )
        break;
      v13 = 1;
      v10 = dword_B46F0[(unsigned __int8)v42];
      v9 = dword_B46F0[(unsigned __int8)v43];
      v8 = dword_B46F0[(unsigned __int8)v44];
      v6 = dword_B46F0[(unsigned __int8)v45];
      v41 = dword_B46F0[v12];
      do
      {
        v14 = 8 * v13;
        v15 = v13++ << 8;
        v4 = v41 ^ dword_B46F0[(unsigned __int8)(v46 >> v14) + v15];
        v10 ^= dword_B46F0[(unsigned __int8)(v42 >> v14) + v15];
        v41 = v4;
        v9 ^= dword_B46F0[(unsigned __int8)(v43 >> v14) + v15];
        v8 ^= dword_B46F0[(unsigned __int8)(v44 >> v14) + v15];
        v6 ^= dword_B46F0[(unsigned __int8)(v45 >> v14) + v15];
      }
      while ( v13 != 4 );
      v7 += 20;
    }
    a2 += 4 * v50 + 4 * v49;
    v16 = 3;
    v17 = dword_B56F0[v12] ^ (v46 >> 8);
    do
    {
      --v16;
      v17 = dword_B56F0[(unsigned __int8)v17] ^ (v17 >> 8);
    }
    while ( v16 );
    v18 = v17 ^ v42;
    v19 = 4;
    do
    {
      --v19;
      v18 = dword_B56F0[(unsigned __int8)v18] ^ (v18 >> 8);
    }
    while ( v19 );
    v20 = v18 ^ v43;
    v21 = 4;
    do
    {
      --v21;
      v20 = dword_B56F0[(unsigned __int8)v20] ^ (v20 >> 8);
    }
    while ( v21 );
    v22 = v20 ^ v44;
    v23 = 4;
    do
    {
      --v23;
      v22 = dword_B56F0[(unsigned __int8)v22] ^ (v22 >> 8);
    }
    while ( v23 );
    v4 = v22 ^ v45;
    v24 = 4;
    do
    {
      --v24;
      v4 = dword_B56F0[(unsigned __int8)v4] ^ (v4 >> 8);
    }
    while ( v24 );
  }
  v25 = v48;
  if ( v48 > 7 )
  {
    v26 = a2 + 8;
    do
    {
      v27 = *(v26 - 8);
      v25 -= 8;
      v28 = *(v26 - 7);
      v29 = *(v26 - 6);
      v26 += 8;
      v30 = dword_B56F0[(unsigned __int8)(v27 ^ v4)];
      v31 = dword_B56F0[(unsigned __int8)(v28 ^ v30 ^ BYTE1(v4))] ^ ((v30 ^ (v4 >> 8)) >> 8);
      v32 = dword_B56F0[(unsigned __int8)(v29 ^ v31)] ^ (v31 >> 8);
      v33 = dword_B56F0[(unsigned __int8)(*(v26 - 13) ^ v32)] ^ (v32 >> 8);
      v34 = dword_B56F0[(unsigned __int8)(*(v26 - 12) ^ v33)] ^ (v33 >> 8);
      v35 = dword_B56F0[(unsigned __int8)(*(v26 - 11) ^ v34)] ^ (v34 >> 8);
      v36 = dword_B56F0[(unsigned __int8)(*(v26 - 10) ^ v35)] ^ (v35 >> 8);
      v4 = dword_B56F0[(unsigned __int8)(*(v26 - 9) ^ v36)] ^ (v36 >> 8);
    }
    while ( v25 > 7 );
    v37 = (v48 - 8) & 0xFFFFFFF8;
    v48 &= 7u;
    a2 += v37 + 8;
  }
  if ( v48 )
  {
    v38 = &a2[v48];
    do
    {
      v39 = *a2++;
      v4 = dword_B56F0[(unsigned __int8)(v39 ^ v4)] ^ (v4 >> 8);
    }
    while ( a2 != v38 );
  }
  return ~v4;
}
// B46F0: using guessed type int dword_B46F0[];
// B56F0: using guessed type int dword_B56F0[];
