/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DD10
// Address: 0x000000000043DD10

//----- (000000000043DD10) ----------------------------------------------------
__int64 *__fastcall sub_43DD10(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // x7
  unsigned int *v4; // x5
  unsigned int *v5; // x6
  int v6; // w4
  unsigned int v7; // w8
  unsigned __int64 v8; // x8
  unsigned int *v9; // x5
  unsigned int *v10; // x4
  int v11; // w3
  __int64 *result; // x0

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 && (v4 = (unsigned int *)a1[14], a2 >= *v4) )
    {
      v5 = (unsigned int *)a1[14];
      v6 = 0;
      do
      {
        ++v6;
        v7 = v5[1];
        if ( v6 >= v3 )
          break;
        v5 = &v4[2 * v6];
      }
      while ( *v5 <= a2 );
    }
    else
    {
      v7 = 0;
    }
    *a3 = v7;
  }
  v8 = a1[12];
  if ( !v8 )
    return nullptr;
  v9 = (unsigned int *)a1[11];
  if ( a2 < *v9 )
    return nullptr;
  v10 = (unsigned int *)a1[11];
  v11 = 0;
  do
  {
    ++v11;
    result = &qword_4B2D48;
    if ( *((_QWORD *)v10 + 2) )
      result = *((__int64 **)v10 + 1);
    if ( v8 <= v11 )
      break;
    v10 = &v9[8 * v11];
  }
  while ( *v10 <= a2 );
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
