/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ECA0
// Address: 0x0003ECA0

//----- (0003ECA0) --------------------------------------------------------
int *__fastcall sub_3ECA0(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  int v3; // r7
  unsigned int *v5; // r3
  int v6; // r4
  unsigned int v7; // t1
  unsigned int v8; // r2
  int v9; // r5
  unsigned int *v10; // r3
  int v11; // r2
  int *result; // r0
  unsigned int v13; // t1

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 && (v5 = (unsigned int *)a1[14], a2 >= *v5) )
    {
      v6 = 0;
      do
      {
        ++v6;
        v8 = v5[1];
        if ( v6 == v3 )
          break;
        v7 = v5[2];
        v5 += 2;
      }
      while ( v7 <= a2 );
    }
    else
    {
      v8 = 0;
    }
    *a3 = v8;
  }
  v9 = a1[12];
  if ( v9 )
  {
    v10 = (unsigned int *)a1[11];
    if ( a2 >= *v10 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v10[2] )
        {
          ++v11;
          result = (int *)v10[1];
          if ( v11 == v9 )
            return result;
        }
        else
        {
          ++v11;
          result = &dword_8DA5C;
          if ( v11 == v9 )
            return result;
        }
        v13 = v10[4];
        v10 += 4;
        if ( v13 > a2 )
          return result;
      }
    }
  }
  return nullptr;
}
// 8DA5C: using guessed type int dword_8DA5C;
