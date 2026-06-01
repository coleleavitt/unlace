_QWORD *__fastcall ___ZN5dyld44APIs25_dyld_is_memory_immutableEPKvm_block_invoke_2(
        _QWORD *result,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // x8

  v6 = result[5];
  if ( v6 > a2 && (a6 & 2) == 0 && v6 + result[6] < a2 + a4 )
    *(_BYTE *)(*(_QWORD *)(result[4] + 8LL) + 24LL) = 1;
  return result;
}
