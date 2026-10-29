__int64 __fastcall sub_F29A40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __m128i v6; // xmm0

  *(_QWORD *)(a1 + 1128) = a3;
  v4 = a3 + 18568;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x2000000000LL;
  *(_WORD *)(a1 + 1056) = 257;
  *(_QWORD *)(a1 + 1064) = a1 + 1080;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1096) = a2;
  *(_BYTE *)(a1 + 1104) = a4;
  *(_QWORD *)(a1 + 1112) = &byte_22F0C30;
  *(_DWORD *)(a1 + 1120) = -1;
  *(_QWORD *)(a1 + 1072) = 0;
  result = *(_QWORD *)(v4 - 16256);
  *(_QWORD *)(a1 + 1136) = result;
  v6 = _mm_loadu_si128((const __m128i *)(v4 - 1104));
  *(_QWORD *)(a1 + 1160) = v4;
  *(__m128i *)(a1 + 1144) = v6;
  return result;
}
