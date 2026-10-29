/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68E10
// Address: 0x0000000000068E10

//----- (0000000000068E10) ----------------------------------------------------
char *__fastcall sub_68E10(__int64 a1, unsigned __int64 a2, char *a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rdx
  int v8; // ebp
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
    if ( *(_QWORD *)a1 > (unsigned __int64)a3 || &result[4 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (char *)qvector_reserve(a1, *(char **)a1, a2, 4u);
        *(_QWORD *)a1 = result;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        *(_DWORD *)&result[4 * v5] = *(_DWORD *)a3;
        result = (char *)(v5 + 1);
        if ( v5 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v10 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            do
            {
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result++) = *(_DWORD *)a3;
              ++v10;
            }
            while ( v10 );
          }
          if ( a2 - 2 - v5 >= 3 )
          {
            do
            {
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result) = *(_DWORD *)a3;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 4) = *(_DWORD *)a3;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 8) = *(_DWORD *)a3;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 12) = *(_DWORD *)a3;
              result += 4;
            }
            while ( (char *)a2 != result );
          }
        }
      }
    }
    else
    {
      v8 = *(_DWORD *)a3;
      if ( v7 < a2 )
      {
        result = (char *)qvector_reserve(a1, *(char **)a1, a2, 4u);
        *(_QWORD *)a1 = result;
        v5 = *(_QWORD *)(a1 + 8);
      }
      if ( v5 < a2 )
      {
        *(_DWORD *)&result[4 * v5] = v8;
        result = (char *)(v5 + 1);
        if ( v5 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v5) & 3) != 0 )
          {
            v9 = -(__int64)(((_BYTE)a2 + ~(_BYTE)v5) & 3);
            do
            {
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result++) = v8;
              ++v9;
            }
            while ( v9 );
          }
          if ( a2 - 2 - v5 >= 3 )
          {
            do
            {
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result) = v8;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 4) = v8;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 8) = v8;
              *(_DWORD *)(*(_QWORD *)a1 + 4LL * (_QWORD)result + 12) = v8;
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
