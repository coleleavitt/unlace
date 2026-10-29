/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8501C
// Address: 0x0008501C

//----- (0008501C) --------------------------------------------------------
_DWORD *__fastcall sub_8501C(_DWORD *result, const char *a2, int a3)
{
  _DWORD *v5; // r6
  unsigned int v6; // r7
  void *v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r2
  void *v10; // r0

  if ( result )
  {
    v5 = result;
    v6 = result[1];
    if ( v6 >= 2 )
    {
      v7 = (void *)*result;
      if ( *(_BYTE *)(*result + v6 - 2) != 10 )
      {
        v8 = v6 + 1;
        v9 = v6 - 1;
        if ( result[2] < v6 + 1 )
        {
          v10 = qvector_reserve((int)result, v7, v6 + 1, 1u);
          v8 = v6 + 1;
          v9 = v6 - 1;
          v7 = v10;
          *v5 = v10;
        }
        v5[1] = v8;
        *((_BYTE *)v7 + v9) = 10;
        *(_BYTE *)(*v5 + v6) = 0;
      }
    }
    return (_DWORD *)sub_3717C((int)v5, a2, a3);
  }
  return result;
}
