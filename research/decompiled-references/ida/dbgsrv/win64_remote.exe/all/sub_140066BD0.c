/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140066BD0
// Address: 0x0000000140066BD0

//----- (0000000140066BD0) ----------------------------------------------------
__int64 __fastcall sub_140066BD0(_WORD *a1, _WORD *a2)
{
  __int16 v2; // ax
  __int16 v3; // r10
  __int16 v4; // cx
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // edx
  int v8; // ecx
  unsigned __int16 v9; // r8
  _WORD v10[12]; // [rsp+0h] [rbp-30h]
  _WORD v11[12]; // [rsp+18h] [rbp-18h]

  v2 = a1[7];
  v10[3] = a1[6];
  v3 = v2 >> 15;
  v10[4] = a1[5];
  v10[5] = a1[4];
  v10[6] = a1[3];
  v10[7] = a1[2];
  v10[8] = a1[1];
  v10[9] = *a1;
  v4 = a2[7];
  v10[1] = v2 & 0x7FFF;
  v11[1] = v4 & 0x7FFF;
  v5 = 0;
  v11[3] = a2[6];
  v11[4] = a2[5];
  v11[5] = a2[4];
  v11[6] = a2[3];
  v11[7] = a2[2];
  v11[8] = a2[1];
  v11[9] = *a2;
  v10[0] = v3;
  v10[2] = 0;
  v10[10] = 0;
  v11[0] = v4 >> 15;
  v11[2] = 0;
  v11[10] = 0;
  if ( v3 == v4 >> 15 )
  {
    v7 = 1;
    if ( v3 )
      v7 = -1;
    v8 = 10;
    while ( 1 )
    {
      v9 = v10[v5];
      if ( v9 != v11[v5] )
        break;
      ++v5;
      if ( !--v8 )
        return 0;
    }
    if ( v9 <= v11[v5] )
      return -v7;
    return v7;
  }
  else
  {
    result = 1;
    if ( v3 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
