/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow_primary_exception
// Address: 0x00000000000D679C

//----- (00000000000D679C) ----------------------------------------------------
_DWORD *__fastcall _cxa_rethrow_primary_exception(_DWORD *result)
{
  _DWORD *v1; // x20
  unsigned __int16 *v2; // x0
  unsigned __int16 *v3; // x19
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 terminate; // x0
  _DWORD *globals; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  __int64 v15; // x20
  int v16; // w8
  char v17; // [xsp+0h] [xbp-20h]

  if ( !result )
    return result;
  v1 = result;
  v2 = sub_D7A6C(0x80u);
  if ( !v2 )
LABEL_14:
    std::terminate();
  v3 = v2;
  v4 = (unsigned __int64 *)(v1 - 32);
  *((_QWORD *)v2 + 15) = 0;
  *(_OWORD *)(v2 + 52) = 0u;
  *(_OWORD *)(v2 + 44) = 0u;
  *(_OWORD *)(v2 + 36) = 0u;
  *(_OWORD *)(v2 + 28) = 0u;
  *(_OWORD *)(v2 + 20) = 0u;
  *(_OWORD *)(v2 + 12) = 0u;
  *(_OWORD *)(v2 + 4) = 0u;
  *(_QWORD *)v2 = v1;
  do
    v5 = __ldaxr(v4);
  while ( __stlxr(v5 + 1, v4) );
  *((_QWORD *)v2 + 1) = *((_QWORD *)v1 - 15);
  *((_QWORD *)v2 + 3) = std::get_unexpected();
  terminate = std::get_terminate();
  *((_QWORD *)v3 + 12) = 0x434C4E47432B2B01LL;
  *((_QWORD *)v3 + 4) = terminate;
  globals = _cxa_get_globals();
  ++globals[2];
  *((_QWORD *)v3 + 13) = sub_D68C8;
  Unwind_RaiseException((_QWORD *)v3 + 12, v8, v9, v10, v11, v12, v13, v14, v17);
  v15 = *((_QWORD *)v3 + 12);
  result = _cxa_get_globals();
  if ( (v15 & 0xFFFFFFFFFFFFFF00LL) != 0x434C4E47432B2B00LL )
  {
    if ( !*(_QWORD *)result )
    {
      *(_QWORD *)result = v3;
      return result;
    }
    goto LABEL_14;
  }
  v16 = *((_DWORD *)v3 + 12);
  if ( v16 < 0 )
    v16 = -v16;
  *((_DWORD *)v3 + 12) = v16 + 1;
  if ( *(unsigned __int16 **)result != v3 )
  {
    *((_QWORD *)v3 + 5) = *(_QWORD *)result;
    *(_QWORD *)result = v3;
  }
  --result[2];
  return result;
}
// D6854: variable 'v8' is possibly undefined
// D6854: variable 'v9' is possibly undefined
// D6854: variable 'v10' is possibly undefined
// D6854: variable 'v11' is possibly undefined
// D6854: variable 'v12' is possibly undefined
// D6854: variable 'v13' is possibly undefined
// D6854: variable 'v14' is possibly undefined
// D6854: variable 'v17' is possibly undefined
