__int64 __fastcall sub_7F4500(__int64 a1)
{
  __int64 result; // rax

  result = sub_186B270(0x30u);
  *(_OWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 44) = 0;
  *(_QWORD *)(a1 + 48) = result;
  *(__m128i *)result = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

