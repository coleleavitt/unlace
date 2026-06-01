/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED2D8
// Address: 0x00000000000ED2D8

//----- (00000000000ED2D8) ----------------------------------------------------
__int64 __fastcall sub_ED2D8(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x9
  unsigned __int8 *v6; // x8
  unsigned __int8 *v7; // x9
  const char *i; // x10
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _BYTE *v11; // x0
  _BYTE *v12; // x0
  size_t v13; // x1

  result = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(result + 8) != 10 )
    goto LABEL_9;
  v5 = *(_QWORD *)(result + 16);
  if ( *(_BYTE *)(v5 + 8) != 7 )
    goto LABEL_9;
  v6 = *(unsigned __int8 **)(v5 + 16);
  v7 = *(unsigned __int8 **)(v5 + 24);
  if ( v7 - v6 != 11 )
    goto LABEL_9;
  if ( v6 != v7 )
  {
    for ( i = "objc_object"; *v6 == *(unsigned __int8 *)i; ++i )
    {
      if ( v7 == ++v6 )
        return result;
    }
LABEL_9:
    if ( *(_BYTE *)(result + 10) )
    {
      if ( *(_BYTE *)(result + 10) == 2 )
      {
        if ( ((*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 8LL))(result, a2) & 1) != 0 )
          goto LABEL_16;
        result = *(_QWORD *)(a1 + 16);
      }
      if ( *(_BYTE *)(result + 11)
        && (*(_BYTE *)(result + 11) != 2
         || ((*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 16LL))(result, a2) & 1) == 0) )
      {
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
      }
    }
LABEL_16:
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(a2 + 16);
    if ( v9 + 1 >= v10 )
    {
      v12 = *(_BYTE **)a2;
      if ( 2 * v10 >= v9 + 1 )
        v13 = 2 * v10;
      else
        v13 = v9 + 1;
      *(_QWORD *)(a2 + 16) = v13;
      v11 = realloc(v12, v13);
      v9 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v11;
    }
    else
    {
      v11 = *(_BYTE **)a2;
    }
    v11[v9] = 41;
    ++*(_QWORD *)(a2 + 8);
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
  }
  return result;
}
