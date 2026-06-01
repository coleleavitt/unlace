/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470310
// Address: 0x0000000000470310

//----- (0000000000470310) ----------------------------------------------------
unsigned __int8 *__fastcall sub_470310(__int64 a1, __int64 a2)
{
  unsigned __int8 *result; // x0
  __int64 v5; // x23
  __int64 i; // x22
  __int64 v7; // x0
  char *v8; // x25
  __int64 v9; // x19
  char *v10; // x24
  unsigned __int8 *v11; // x2
  unsigned __int8 *v12; // x19
  size_t v14; // x25
  unsigned __int64 v15; // x27
  void *v16; // x0

  result = (unsigned __int8 *)sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  v5 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    for ( i = 0; v5 != i; ++i )
    {
      v8 = *(char **)a1;
      v7 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(a1 + 16) )
      {
        v8 = (char *)sub_491288(a1, *(void **)a1, v7 + 1, 0x20u);
        v7 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v8;
      }
      v9 = 32 * v7;
      v10 = &v8[32 * v7];
      *((_QWORD *)v10 + 1) = 0;
      *((_QWORD *)v10 + 2) = 0;
      *((_QWORD *)v10 + 3) = 0;
      ++*(_QWORD *)(a1 + 8);
      result = (unsigned __int8 *)sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      *(_DWORD *)&v8[v9] = (_DWORD)result;
      v12 = *(unsigned __int8 **)a2;
      v11 = *(unsigned __int8 **)(a2 + 8);
      if ( (unsigned __int64)v11 > *(_QWORD *)a2 )
      {
        result = v12 + 1;
        if ( *v12 )
        {
          while ( result != v11 )
          {
            if ( !*result++ )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          *(_QWORD *)a2 = result;
          if ( v12 )
          {
            result = (unsigned __int8 *)strlen((const char *)v12);
            v14 = (size_t)result;
            if ( result )
            {
              v15 = (unsigned __int64)(result + 1);
              v16 = *((void **)v10 + 1);
              if ( v15 > *((_QWORD *)v10 + 3) )
              {
                v16 = sub_491288((__int64)(v10 + 8), *((void **)v10 + 1), v15, 1u);
                *((_QWORD *)v10 + 1) = v16;
              }
              *((_QWORD *)v10 + 2) = v15;
              memmove(v16, v12, v14);
              result = *((unsigned __int8 **)v10 + 1);
              result[v14] = 0;
              continue;
            }
          }
        }
      }
      *((_QWORD *)v10 + 2) = 0;
    }
  }
  return result;
}
