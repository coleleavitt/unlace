/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26B98
// Address: 0x00026B98

//----- (00026B98) --------------------------------------------------------
unsigned int __fastcall sub_26B98(void **a1, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // r0
  void *v7; // r1
  unsigned int v8; // r2
  int v9; // r6
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r1

  result = (unsigned int)a1[1];
  if ( result > a2 )
  {
LABEL_2:
    a1[1] = (void *)a2;
    return result;
  }
  if ( result < a2 )
  {
    v7 = *a1;
    v8 = (unsigned int)a1[2];
    if ( *a1 > a3 || (char *)*a1 + 4 * v8 <= (char *)a3 )
    {
      if ( v8 < a2 )
      {
        v7 = qvector_reserve((int)a1, v7, a2, 4u);
        *a1 = v7;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        v12 = 4 * result;
        *((_DWORD *)v7 + result) = *a3;
        if ( result + 1 != a2 )
        {
          result = a2 - 1 - result;
          v13 = v12 + 4;
          do
          {
            *(_DWORD *)((char *)*a1 + v13) = *a3;
            --result;
            v13 += 4;
          }
          while ( result );
        }
      }
    }
    else
    {
      v9 = *a3;
      if ( v8 < a2 )
      {
        v7 = qvector_reserve((int)a1, v7, a2, 4u);
        *a1 = v7;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        v10 = 4 * result;
        *((_DWORD *)v7 + result) = v9;
        if ( result + 1 != a2 )
        {
          result = a2 - 1 - result;
          v11 = v10 + 4;
          do
          {
            *(_DWORD *)((char *)*a1 + v11) = v9;
            --result;
            v11 += 4;
          }
          while ( result );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
