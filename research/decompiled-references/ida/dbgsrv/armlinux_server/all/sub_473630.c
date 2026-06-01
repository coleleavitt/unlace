/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473630
// Address: 0x0000000000473630

//----- (0000000000473630) ----------------------------------------------------
unsigned __int8 *__fastcall sub_473630(__int64 a1, __int64 a2)
{
  unsigned __int8 *result; // x0
  unsigned __int8 *v5; // x2
  unsigned __int8 *v6; // x20
  size_t v8; // x19
  unsigned __int64 v9; // x23
  void *v10; // x0

  result = (unsigned __int8 *)sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 4) = (_DWORD)result;
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
    *(_QWORD *)(a1 + 16) = 0;
    return result;
  }
  v9 = (unsigned __int64)(result + 1);
  v10 = *(void **)(a1 + 8);
  if ( v9 > *(_QWORD *)(a1 + 24) )
  {
    v10 = sub_491288(a1 + 8, *(void **)(a1 + 8), v9, 1u);
    *(_QWORD *)(a1 + 8) = v10;
  }
  *(_QWORD *)(a1 + 16) = v9;
  memmove(v10, v6, v8);
  result = *(unsigned __int8 **)(a1 + 8);
  result[v8] = 0;
  return result;
}
