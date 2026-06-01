__int64 __fastcall sub_4C4CE0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 144LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    result = sub_186B270(0x30u);
    *(_OWORD *)(result + 16) = 0;
    v7 = *a3;
    v8 = _mm_loadl_epi64((const __m128i *)off_1C4F2D0);
    *(_DWORD *)(result + 40) = a4;
    *(_QWORD *)(result + 32) = v7;
    *(__m128i *)result = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_1C4F0D0);
  }
  return result;
}

