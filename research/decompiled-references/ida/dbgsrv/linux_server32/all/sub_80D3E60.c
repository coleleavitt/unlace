/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3E60
// Address: 0x080D3E60

//----- (080D3E60) --------------------------------------------------------
int __cdecl sub_80D3E60(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  _BYTE *v5; // eax
  int v6; // edi
  int v7; // esi
  unsigned __int8 v8; // al
  bool v9; // zf
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // edx
  _BYTE *v20; // edx
  unsigned int v21; // eax
  unsigned __int8 v22; // bl
  unsigned int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // eax
  _BYTE *v31; // edx
  int v33; // [esp+0h] [ebp-48h]
  int v34; // [esp+4h] [ebp-44h]
  int v35; // [esp+8h] [ebp-40h]
  int v36; // [esp+Ch] [ebp-3Ch]
  unsigned int v37; // [esp+10h] [ebp-38h]
  unsigned int v38; // [esp+14h] [ebp-34h]
  unsigned int v39; // [esp+18h] [ebp-30h]
  unsigned int v40; // [esp+1Ch] [ebp-2Ch]
  unsigned int v41; // [esp+20h] [ebp-28h]
  _DWORD *v42; // [esp+24h] [ebp-24h]
  unsigned int v43; // [esp+28h] [ebp-20h]
  unsigned int v44; // [esp+30h] [ebp-18h]
  _DWORD *v45; // [esp+50h] [ebp+8h]

  if ( !a2 )
    return 0;
  v3 = ~a1;
  if ( a3 > 0x16 )
  {
    v4 = a3;
    v5 = a2;
    while ( ((unsigned __int8)v5 & 3) != 0 )
    {
      v3 = dword_80F24C0[(unsigned __int8)(*v5++ ^ v3)] ^ (v3 >> 8);
      if ( !--v4 )
      {
        v45 = v5;
        a3 = 0;
        v44 = 0;
        goto LABEL_7;
      }
    }
    v45 = v5;
    v44 = v4 / 0x14;
    a3 = v4 % 0x14;
LABEL_7:
    v6 = 0;
    v7 = v3;
    v36 = 0;
    v42 = v45;
    v35 = 0;
    v43 = v44;
    v34 = 0;
    while ( 1 )
    {
      v41 = *v42 ^ v7;
      v8 = *(_BYTE *)v42 ^ v7;
      v40 = v42[4] ^ v6;
      v37 = v42[1] ^ v34;
      v38 = v42[2] ^ v35;
      v9 = v43-- == 1;
      v39 = v42[3] ^ v36;
      v42 += 5;
      if ( v9 )
        break;
      v7 = dword_80F14C0[v8];
      v33 = 1;
      v34 = dword_80F14C0[(unsigned __int8)v37];
      v35 = dword_80F14C0[(unsigned __int8)v38];
      v36 = dword_80F14C0[(unsigned __int8)v39];
      v6 = dword_80F14C0[(unsigned __int8)v40];
      do
      {
        v10 = v33++;
        v7 ^= dword_80F14C0[256 * v10 + (unsigned __int8)(v41 >> (8 * v10))];
        v34 ^= dword_80F14C0[256 * v10 + (unsigned __int8)(v37 >> (8 * v10))];
        v35 ^= dword_80F14C0[256 * v10 + (unsigned __int8)(v38 >> (8 * v10))];
        v36 ^= dword_80F14C0[256 * v10 + (unsigned __int8)(v39 >> (8 * v10))];
        v6 ^= dword_80F14C0[256 * v10 + (unsigned __int8)(v40 >> (8 * v10))];
      }
      while ( v33 != 4 );
    }
    v11 = dword_80F24C0[v8] ^ (v41 >> 8);
    a2 = &v45[5 * v44];
    v12 = 3;
    do
    {
      v11 = dword_80F24C0[(unsigned __int8)v11] ^ (v11 >> 8);
      --v12;
    }
    while ( v12 );
    v13 = 4;
    v14 = v11 ^ v37;
    do
    {
      v14 = dword_80F24C0[(unsigned __int8)v14] ^ (v14 >> 8);
      --v13;
    }
    while ( v13 );
    v15 = v38 ^ v14;
    v16 = 4;
    do
    {
      v15 = dword_80F24C0[(unsigned __int8)v15] ^ (v15 >> 8);
      --v16;
    }
    while ( v16 );
    v17 = v39 ^ v15;
    v18 = 4;
    do
    {
      v17 = dword_80F24C0[(unsigned __int8)v17] ^ (v17 >> 8);
      --v18;
    }
    while ( v18 );
    v3 = v40 ^ v17;
    v19 = 4;
    do
    {
      v3 = dword_80F24C0[(unsigned __int8)v3] ^ (v3 >> 8);
      --v19;
    }
    while ( v19 );
  }
  if ( a3 > 7 )
  {
    v20 = a2;
    do
    {
      v21 = v3;
      v22 = *v20 ^ v3;
      v20 += 8;
      v23 = dword_80F24C0[v22] ^ (v21 >> 8);
      v24 = dword_80F24C0[(unsigned __int8)(*(v20 - 7) ^ v23)] ^ (v23 >> 8);
      v25 = dword_80F24C0[(unsigned __int8)(*(v20 - 6) ^ v24)] ^ (v24 >> 8);
      v26 = dword_80F24C0[(unsigned __int8)(*(v20 - 5) ^ v25)] ^ (v25 >> 8);
      v27 = dword_80F24C0[(unsigned __int8)(*(v20 - 4) ^ v26)] ^ (v26 >> 8);
      v28 = dword_80F24C0[(unsigned __int8)(*(v20 - 3) ^ v27)] ^ (v27 >> 8);
      v29 = dword_80F24C0[(unsigned __int8)(*(v20 - 2) ^ v28)] ^ (v28 >> 8);
      v3 = dword_80F24C0[(unsigned __int8)(*(v20 - 1) ^ v29)] ^ (v29 >> 8);
    }
    while ( (unsigned int)(&a2[a3] - v20) > 7 );
    v30 = a3;
    a3 &= 7u;
    a2 += 8 * ((v30 - 8) >> 3) + 8;
  }
  if ( a3 )
  {
    v31 = a2;
    do
      v3 = *((_DWORD *)&qword_811CFF4 + (unsigned __int8)(*v31++ ^ v3) - 43725) ^ (v3 >> 8);
    while ( v31 != &a2[a3] );
  }
  return ~v3;
}
// 80F14C0: using guessed type int dword_80F14C0[];
// 80F24C0: using guessed type int dword_80F24C0[];
// 811CFF4: using guessed type __int64 qword_811CFF4;
