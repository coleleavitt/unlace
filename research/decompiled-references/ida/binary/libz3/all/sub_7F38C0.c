__int64 __fastcall sub_7F38C0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v3 = (_QWORD *)sub_186B270(0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  *v3 = 0;
  v3[2] = 0;
  v3[4] = 0;
  v3[6] = 0;
  v3[8] = 0;
  v3[10] = 0;
  v3[12] = 0;
  v3[14] = 0;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = 8;
  *(_QWORD *)(a1 + 56) = 0x3E800000064LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  result = sub_186B270(0x30u);
  *(_QWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 44) = 0;
  *(_QWORD *)(a1 + 48) = result;
  *(__m128i *)result = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

