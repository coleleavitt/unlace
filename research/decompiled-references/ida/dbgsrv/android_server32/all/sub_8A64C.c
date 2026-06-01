/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A64C
// Address: 0x0008A64C

//----- (0008A64C) --------------------------------------------------------
int __fastcall sub_8A64C(int *a1)
{
  int **v2; // r2
  int *v3; // r2
  unsigned int v4; // r6
  int result; // r0
  unsigned int v6; // r0
  unsigned int *v7; // r2
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r2
  int v11; // r6
  unsigned int v12; // r7
  _BYTE *v13; // r6
  unsigned int v14; // r2
  int v15; // r7
  int v16; // r7
  unsigned int v17; // r2
  int v18; // r6
  unsigned int v19; // r0
  int v20; // r6
  unsigned int *v21; // [sp+4h] [bp-18h]
  _DWORD *v22; // [sp+8h] [bp-14h]
  unsigned int v23; // [sp+Ch] [bp-10h]
  int v24; // [sp+Ch] [bp-10h]
  unsigned int v25; // [sp+10h] [bp-Ch]
  int v26; // [sp+10h] [bp-Ch]
  int v27; // [sp+10h] [bp-Ch]
  _BYTE v28[4]; // [sp+14h] [bp-8h] BYREF

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v2 = (int **)a1[7];
  if ( !v2 )
    return -2;
  if ( *v2 != a1 )
    return -2;
  v22 = (_DWORD *)a1[7];
  v3 = v2[1];
  if ( (unsigned int)(v3 - 4045) > 0x1F )
    return -2;
  v4 = a1[1];
  if ( v4 || (result = -5, v22[16] >= 8u) )
  {
    if ( v3 == (int *)((char *)&stru_3F50.st_name + 3) )
    {
      v6 = v22[27];
      v7 = v22 + 27;
    }
    else
    {
      v22[1] = 16211;
      v8 = v22[16];
      v9 = v8 & 0xFFFFFFF8;
      v22[16] = v8 & 0xFFFFFFF8;
      v10 = v22[15] >> (v8 & 7);
      v22[15] = v10;
      if ( (v8 & 0xFFFFFFF8) != 0 )
      {
        v11 = 7 - v9;
        if ( 7 - v9 <= 0xFFFFFFF8 )
          v11 = -8;
        v23 = (v11 + v9) & 0xFFFFFFF8;
        v25 = (v11 + v9) >> 3;
        v12 = v25 + 1;
        v13 = v28;
        do
        {
          *v13++ = v10;
          --v12;
          v10 >>= 8;
        }
        while ( v12 );
        v22[27] = 0;
        v22[15] = v10;
        v22[16] = v9 - 8 - v23;
        v14 = 0;
        v6 = 0;
        do
        {
          v15 = 0;
          if ( v6 >= 2 )
            v15 = 255;
          if ( v15 == (unsigned __int8)v28[v14] )
          {
            ++v6;
          }
          else
          {
            v6 = 4 - v6;
            if ( v28[v14] )
              v6 = 0;
          }
          if ( v14 >= v25 )
            break;
          ++v14;
        }
        while ( v6 < 4 );
        v7 = v22 + 27;
      }
      else
      {
        v6 = 0;
        v22[27] = 0;
        v7 = v22 + 27;
      }
      *v7 = v6;
      v4 = a1[1];
    }
    v16 = 0;
    v21 = v7;
    if ( v4 && v6 <= 3 )
    {
      v26 = *a1;
      v16 = 0;
      do
      {
        v17 = v4;
        v18 = 0;
        if ( v6 >= 2 )
          v18 = 255;
        if ( v18 == *(unsigned __int8 *)(v26 + v16) )
        {
          ++v6;
        }
        else
        {
          v6 = 4 - v6;
          if ( *(_BYTE *)(v26 + v16) )
            v6 = 0;
        }
        if ( ++v16 >= v17 )
          break;
        v4 = v17;
      }
      while ( v6 < 4 );
    }
    *v21 = v6;
    a1[1] -= v16;
    *a1 += v16;
    a1[2] += v16;
    result = -3;
    if ( *v21 == 4 )
    {
      v19 = 0;
      v27 = v22[5];
      if ( v27 != -1 )
        v19 = v22[3] & 0xFFFFFFFB;
      v22[3] = v19;
      v24 = a1[2];
      v20 = a1[5];
      sub_88A48(a1);
      a1[5] = v20;
      a1[2] = v24;
      v22[1] = 16191;
      v22[5] = v27;
      return 0;
    }
  }
  return result;
}
// 3F50: using guessed type Elf32_Sym;
