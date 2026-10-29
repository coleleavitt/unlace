/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5C20
// Address: 0x00000000004A5C20

//----- (00000000004A5C20) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A5C20(void *src, size_t n, __int64 a3)
{
  __int64 v5; // x0
  size_t v6; // x20
  int v8; // w2
  unsigned __int64 result; // x0
  int v10; // w2

  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a3 + 16);
  v8 = *(_DWORD *)(a3 + 24);
  result = n + 1 + v5;
  if ( result <= v6 )
  {
    if ( v8 )
      return result;
LABEL_4:
    memcpy((void *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8)), src, n);
    *(_BYTE *)(*(_QWORD *)a3 + n + *(_QWORD *)(a3 + 8)) = 0;
    result = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = result + n;
    return result;
  }
  if ( !v8 )
  {
    if ( v6 || (v6 = 2, result > 2) )
    {
      do
        v6 *= 2LL;
      while ( result > v6 );
    }
    result = (unsigned __int64)realloc(*(void **)a3, v6);
    if ( !result )
    {
      free(*(void **)a3);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = 1;
      return 1;
    }
    v10 = *(_DWORD *)(a3 + 24);
    *(_QWORD *)a3 = result;
    *(_QWORD *)(a3 + 16) = v6;
    if ( !v10 )
      goto LABEL_4;
  }
  return result;
}
