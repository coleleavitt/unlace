_QWORD *__fastcall ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_3(
        _QWORD *result,
        __int64 a2)
{
  unsigned __int64 v2; // x9
  _QWORD *v3; // x8
  __int64 v4; // kr00_8
  __int64 v5; // x10
  __int64 v6; // x8

  v2 = result[6];
  v3 = (_QWORD *)(result[5] + a2);
  if ( v2 <= (unsigned __int64)v3 && result[7] > (unsigned __int64)v3 )
  {
    v4 = (__int64)((__int64)v3 - v2) >> 3;
    v5 = *(_QWORD *)(result[4] + 8LL);
    if ( *(_QWORD *)(v5 + 56) <= (unsigned __int64)(v4 / 2) )
      ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_3_cold_2();
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 32 * (v4 / 2) + 8) = result[8] + *v3;
    v6 = *(_QWORD *)(result[4] + 8LL);
    if ( *(_QWORD *)(v6 + 56) <= (unsigned __int64)(v4 / 2) )
      ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_3_cold_1();
    *(_QWORD *)(*(_QWORD *)(v6 + 40) + 32 * (v4 / 2)) = result[9];
  }
  return result;
}
