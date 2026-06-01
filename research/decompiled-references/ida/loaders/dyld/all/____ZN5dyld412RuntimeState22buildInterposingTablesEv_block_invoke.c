__int64 __fastcall ___ZN5dyld412RuntimeState22buildInterposingTablesEv_block_invoke(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // x20
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10

  *(_DWORD *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) += a3 >> 4;
  v4 = *(_QWORD *)(a1[5] + 8LL);
  result = dyld3::OverflowSafeArray<dyld4::Loader const*,4294967295ul>::verifySpace(v4 + 40, 1);
  v6 = a1[6];
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)(v4 + 56) = v8 + 1;
  *(_QWORD *)(v7 + 8 * v8) = v6;
  return result;
}
