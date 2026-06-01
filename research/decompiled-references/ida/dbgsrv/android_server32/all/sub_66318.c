/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66318
// Address: 0x00066318

//----- (00066318) --------------------------------------------------------
_DWORD *__fastcall sub_66318(_DWORD *a1, unsigned int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r3
  unsigned int v8; // r2
  _DWORD *v9; // r7
  int v10; // r4
  _DWORD *result; // r0
  unsigned int v12; // r7
  _DWORD *v13; // r5
  unsigned int v14; // r2
  _DWORD *v15; // r2
  bool v16; // zf
  int v17; // r3
  unsigned int v18; // [sp+4h] [bp-4h]

  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 248))(a1);
  v7 = (_DWORD *)a1[66];
  v8 = -v6 & a2;
  v9 = a1 + 66;
  if ( !v7 )
    goto LABEL_10;
  v18 = a2;
  v10 = a3;
  result = a1 + 66;
  do
  {
    v12 = v7[4];
    if ( v12 >= v8 )
      result = v7;
    v13 = v7 + 1;
    if ( v12 >= v8 )
      v13 = v7;
    v7 = (_DWORD *)*v13;
  }
  while ( *v13 );
  v9 = a1 + 66;
  a3 = v10;
  a2 = v18;
  if ( result == a1 + 66 || (v14 = result[4], v9 = result, v14 >= a3 + v18) )
  {
LABEL_10:
    if ( v9 == (_DWORD *)a1[65] )
      return a1 + 66;
    v15 = (_DWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        result = v15;
        v15 = (_DWORD *)v15[1];
      }
      while ( v15 );
    }
    else
    {
      do
      {
        result = (_DWORD *)v9[2];
        v16 = *result == (_DWORD)v9;
        v9 = result;
      }
      while ( v16 );
    }
    v14 = result[4];
  }
  if ( !a3 )
    return a1 + 66;
  v17 = result[8];
  if ( !v17 || a3 + a2 - 1 < v14 || v14 + v17 - 1 < a2 )
    return a1 + 66;
  return result;
}
