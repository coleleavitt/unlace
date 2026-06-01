/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_370F6
// Address: 0x000370F6

//----- (000370F6) --------------------------------------------------------
unsigned int __fastcall sub_370F6(void **a1, unsigned int a2, _BYTE *a3)
{
  unsigned int result; // r0
  unsigned int v7; // r2
  void *v8; // r1
  char v9; // r6

  result = (unsigned int)a1[1];
  if ( result > a2 )
  {
LABEL_2:
    a1[1] = (void *)a2;
    return result;
  }
  if ( result < a2 )
  {
    v7 = (unsigned int)a1[2];
    v8 = *a1;
    if ( *a1 > a3 || (char *)*a1 + v7 <= a3 )
    {
      if ( v7 < a2 )
      {
        v8 = qvector_reserve((int)a1, v8, a2, 1u);
        *a1 = v8;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        for ( *((_BYTE *)v8 + result++) = *a3; a2 != result; ++result )
          *((_BYTE *)*a1 + result) = *a3;
      }
    }
    else
    {
      v9 = *a3;
      if ( v7 < a2 )
      {
        v8 = qvector_reserve((int)a1, v8, a2, 1u);
        *a1 = v8;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        for ( *((_BYTE *)v8 + result++) = v9; a2 != result; ++result )
          *((_BYTE *)*a1 + result) = v9;
      }
    }
    goto LABEL_2;
  }
  return result;
}
