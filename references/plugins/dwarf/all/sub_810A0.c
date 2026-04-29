__int64 __fastcall sub_810A0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v7[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int64 v11; // [rsp+58h] [rbp-10h]

  v2 = _mm_loadu_si128((const __m128i *)a2);
  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 56);
  v10 = 0;
  v7[0] = v2;
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v8 = v3;
  LODWORD(v3) = *(_DWORD *)(a2 + 64);
  v7[1] = v4;
  v5 = _mm_loadl_epi64((const __m128i *)(a2 + 32));
  v9 = v3;
  v7[2] = _mm_unpacklo_epi32(v5, (__m128i)0LL);
  v7[3] = _mm_loadu_si128((const __m128i *)(a2 + 40));
  sub_80E70(a1, v7);
  return 0;
}
