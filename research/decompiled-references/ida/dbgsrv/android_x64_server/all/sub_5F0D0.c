/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F0D0
// Address: 0x000000000005F0D0

//----- (000000000005F0D0) ----------------------------------------------------
char *__fastcall sub_5F0D0(__int64 a1, unsigned __int64 a2, char *a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rdx
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rsi

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > a2 )
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = a2;
    return result;
  }
  if ( v5 < a2 )
  {
    result = *(char **)a1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &result[v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (char *)qvector_reserve(a1, *(char **)a1, a2, 1u);
        *(_QWORD *)a1 = result;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        result[v5] = *a3;
        result = (char *)(v5 + 1);
        if ( v5 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v10 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            do
            {
              (result++)[*(_QWORD *)a1] = *a3;
              ++v10;
            }
            while ( v10 );
          }
          if ( a2 - 2 - v5 >= 3 )
          {
            do
            {
              result[*(_QWORD *)a1] = *a3;
              result[*(_QWORD *)a1 + 1] = *a3;
              result[*(_QWORD *)a1 + 2] = *a3;
              result[*(_QWORD *)a1 + 3] = *a3;
              result += 4;
            }
            while ( (char *)a2 != result );
          }
        }
      }
    }
    else
    {
      v8 = *a3;
      if ( v7 < a2 )
      {
        result = (char *)qvector_reserve(a1, *(char **)a1, a2, 1u);
        *(_QWORD *)a1 = result;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        result[v5] = v8;
        result = (char *)(v5 + 1);
        if ( v5 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v9 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            do
            {
              (result++)[*(_QWORD *)a1] = v8;
              ++v9;
            }
            while ( v9 );
          }
          if ( a2 - 2 - v5 >= 3 )
          {
            do
            {
              result[*(_QWORD *)a1] = v8;
              result[*(_QWORD *)a1 + 1] = v8;
              result[*(_QWORD *)a1 + 2] = v8;
              result[*(_QWORD *)a1 + 3] = v8;
              result += 4;
            }
            while ( (char *)a2 != result );
          }
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
