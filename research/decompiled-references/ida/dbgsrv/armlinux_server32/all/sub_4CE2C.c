/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CE2C
// Address: 0x0004CE2C

//----- (0004CE2C) --------------------------------------------------------
_DWORD *__fastcall sub_4CE2C(_DWORD *result, int a2)
{
  _DWORD *v2; // r6
  int v4; // r4
  _DWORD *v5; // r7
  unsigned int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  int v9; // t0
  _DWORD *i; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r1
  int v16; // t0
  _DWORD *v17; // r8

  v2 = result;
  if ( !*result )
  {
    result = (_DWORD *)result[1];
    if ( result == (_DWORD *)1 )
    {
      v2[6] = 0;
      v17 = v2 + 6;
    }
    else
    {
      result = sub_4B504((unsigned int)result);
      v17 = result;
    }
    *v2 = v17;
  }
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = sub_4B524(v4 + 4);
    v5[6] = *(_DWORD *)(v4 + 24);
    v2[2] = v5;
    v6 = v2[1];
    v7 = v5[6];
    v9 = v7 / v6;
    v8 = v7 % v6;
    result = (_DWORD *)v9;
    *(_DWORD *)(*v2 + 4 * v8) = v2 + 2;
    for ( i = *(_DWORD **)v4; i; v5 = v12 )
    {
      v11 = sub_4B524((int)(i + 1));
      *v5 = v11;
      v12 = v11;
      v13 = i[6];
      v12[6] = v13;
      v14 = v2[1];
      v16 = v13 / v14;
      v15 = v13 % v14;
      result = (_DWORD *)v16;
      if ( !*(_DWORD *)(*v2 + 4 * v15) )
        *(_DWORD *)(*v2 + 4 * v15) = v5;
      i = (_DWORD *)*i;
    }
  }
  return result;
}
