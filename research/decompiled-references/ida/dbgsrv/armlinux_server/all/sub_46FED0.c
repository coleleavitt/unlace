/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FED0
// Address: 0x000000000046FED0

//----- (000000000046FED0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_46FED0(__int64 a1, __int64 a2)
{
  unsigned __int8 *result; // x0
  unsigned __int8 *v5; // x2
  unsigned __int8 *v6; // x20
  size_t v8; // x19
  unsigned __int64 v9; // x23
  void *v10; // x0

  *(_QWORD *)a1 = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  result = (unsigned __int8 *)(sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1);
  *(_QWORD *)(a1 + 8) = result;
  v6 = *(unsigned __int8 **)a2;
  v5 = *(unsigned __int8 **)(a2 + 8);
  if ( (unsigned __int64)v5 <= *(_QWORD *)a2 )
    goto LABEL_6;
  result = v6 + 1;
  if ( *v6 )
  {
    while ( v5 != result )
    {
      if ( !*result++ )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)a2 = result;
  if ( !v6 || (result = (unsigned __int8 *)strlen((const char *)v6), (v8 = (size_t)result) == 0) )
  {
LABEL_6:
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v9 = (unsigned __int64)(result + 1);
  v10 = *(void **)(a1 + 16);
  if ( v9 > *(_QWORD *)(a1 + 32) )
  {
    v10 = sub_491288(a1 + 16, *(void **)(a1 + 16), v9, 1u);
    *(_QWORD *)(a1 + 16) = v10;
  }
  *(_QWORD *)(a1 + 24) = v9;
  memmove(v10, v6, v8);
  result = *(unsigned __int8 **)(a1 + 16);
  result[v8] = 0;
  return result;
}
