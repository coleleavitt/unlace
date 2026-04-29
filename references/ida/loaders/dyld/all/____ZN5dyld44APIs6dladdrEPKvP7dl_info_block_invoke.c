_QWORD *__fastcall ___ZN5dyld44APIs6dladdrEPKvP7dl_info_block_invoke(_QWORD *result, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x9

  v3 = result[6];
  v4 = result[5] + *(_QWORD *)(a2 + 16);
  if ( v4 <= v3 && v3 < *(_QWORD *)(a2 + 24) + v4 )
  {
    *(_BYTE *)(*(_QWORD *)(result[4] + 8LL) + 24LL) = 1;
    *a3 = 1;
  }
  return result;
}
