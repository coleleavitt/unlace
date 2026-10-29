/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63FC2
// Address: 0x00063FC2

//----- (00063FC2) --------------------------------------------------------
unsigned int __fastcall sub_63FC2(void **a1, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // r0
  void *v7; // r1
  unsigned int v8; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r2
  int v12; // r2
  char *v13; // r1
  int v14; // r7
  int v15; // r2
  int v16; // r2
  int v17; // r3
  char *v18; // r7

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
    if ( *a1 > a3 || (char *)*a1 + 8 * v8 <= (char *)a3 )
    {
      if ( v8 < a2 )
      {
        v7 = qvector_reserve((int)a1, v7, a2, 8u);
        *a1 = v7;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        v14 = a3[1];
        v15 = 8 * result;
        *((_DWORD *)v7 + 2 * result) = *a3;
        *((_DWORD *)v7 + 2 * result + 1) = v14;
        if ( result + 1 != a2 )
        {
          result = a2 - 1 - result;
          v16 = v15 + 8;
          do
          {
            v17 = a3[1];
            v18 = (char *)*a1;
            *(_DWORD *)&v18[v16] = *a3;
            *(_DWORD *)&v18[v16 + 4] = v17;
            --result;
            v16 += 8;
          }
          while ( result );
        }
      }
    }
    else
    {
      v9 = *a3;
      v10 = a3[1];
      if ( v8 < a2 )
      {
        v7 = qvector_reserve((int)a1, v7, a2, 8u);
        *a1 = v7;
        result = (unsigned int)a1[1];
      }
      if ( result < a2 )
      {
        v11 = 8 * result;
        *((_DWORD *)v7 + 2 * result) = v9;
        *((_DWORD *)v7 + 2 * result + 1) = v10;
        if ( result + 1 != a2 )
        {
          result = a2 - 1 - result;
          v12 = v11 + 8;
          do
          {
            v13 = (char *)*a1;
            *(_DWORD *)&v13[v12] = v9;
            *(_DWORD *)&v13[v12 + 4] = v10;
            --result;
            v12 += 8;
          }
          while ( result );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
