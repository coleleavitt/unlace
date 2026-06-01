_QWORD *__fastcall ___ZNK5dyld313MachOAnalyzer15withChainStartsER11DiagnosticsyU13block_pointerFvPK28dyld_chained_starts_in_imageE_block_invoke(
        _QWORD *result,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // x9
  __int64 v7; // x10
  unsigned int v8; // w8
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x8
  __int64 v11; // x10
  int v12; // w12
  unsigned __int64 v13; // x9
  _WORD *v14; // x10
  __int64 v15; // x10
  _WORD *v16; // x8

  if ( *(unsigned __int8 *)(*(_QWORD *)(result[4] + 8LL) + 24LL) != a4 )
  {
    v6 = *(_QWORD *)(result[5] + 8LL);
    if ( *(_BYTE *)(*(_QWORD *)(result[4] + 8LL) + 24LL) )
    {
      v7 = result[6];
      v8 = *(_QWORD *)(v6 + 24) + 2 * *(unsigned __int16 *)(*(_QWORD *)(v6 + 24) + 20LL) - result[7] + 22;
      *(_DWORD *)(v7 + 4LL * a4 + 4) = v8;
      *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) = v7 + v8;
      v9 = *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL);
      if ( v9 >= result[8] )
        ___ZNK5dyld313MachOAnalyzer15withChainStartsER11DiagnosticsyU13block_pointerFvPK28dyld_chained_starts_in_imageE_block_invoke_cold_3();
    }
    else
    {
      *(_DWORD *)(result[6] + 4LL * a4 + 4) = *(_DWORD *)(v6 + 24) - *((_DWORD *)result + 14);
      v9 = *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL);
    }
    *(_WORD *)(v9 + 20) = 0;
    *(_BYTE *)(*(_QWORD *)(result[4] + 8LL) + 24LL) = a4;
  }
  v10 = a6 >> 12;
  v11 = *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL);
  v12 = *(unsigned __int16 *)(v11 + 20);
  v13 = result[8];
  if ( v12 != (unsigned int)(a6 >> 12) )
  {
    do
    {
      v14 = (_WORD *)(v11 + 2LL * (unsigned __int16)v12 + 22);
      if ( v13 <= (unsigned __int64)v14 )
        ___ZNK5dyld313MachOAnalyzer15withChainStartsER11DiagnosticsyU13block_pointerFvPK28dyld_chained_starts_in_imageE_block_invoke_cold_2();
      *v14 = -1;
      v15 = *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL);
      ++*(_WORD *)(v15 + 20);
      v11 = *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL);
      v12 = *(unsigned __int16 *)(v11 + 20);
    }
    while ( v12 != (_DWORD)v10 );
  }
  *(_DWORD *)v11 = 2 * v10 + 22;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 4LL) = 4096;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 6LL) = 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 8LL) = *(_QWORD *)(a3 + ((unsigned __int64)a4 << 6) + 16)
                                                                      - result[9];
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 16LL) = 0;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 20LL) = v10 + 1;
  v16 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) + 2LL * (unsigned int)v10 + 22);
  if ( v13 <= (unsigned __int64)v16 )
    ___ZNK5dyld313MachOAnalyzer15withChainStartsER11DiagnosticsyU13block_pointerFvPK28dyld_chained_starts_in_imageE_block_invoke_cold_1();
  *v16 = a6 & 0xFFF;
  return result;
}
