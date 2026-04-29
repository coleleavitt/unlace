_QWORD *__fastcall ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke_2(
        _QWORD *result,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // x8
  _QWORD *v8; // x8
  _BYTE *v9; // x8
  _QWORD *v10; // x8
  _QWORD *v11; // x8
  _QWORD *v12; // x8
  _BYTE *v13; // x8

  v6 = result[5];
  if ( v6 >= a2 && v6 < a3 + a2 )
  {
    v8 = (_QWORD *)result[6];
    if ( v8 )
      *v8 = result[7] + a2;
    v9 = (_BYTE *)result[8];
    if ( v9 )
      *v9 = 1;
    v10 = (_QWORD *)result[9];
    if ( v10 )
      *v10 = a5;
    v11 = (_QWORD *)result[10];
    if ( v11 )
      *v11 = result[7] + a2;
    v12 = (_QWORD *)result[11];
    if ( v12 )
      *v12 = a3;
    v13 = (_BYTE *)result[12];
    if ( v13 )
      *v13 = 5;
    *a6 = 1;
    *(_BYTE *)(*(_QWORD *)(result[4] + 8LL) + 24LL) = 1;
  }
  return result;
}
