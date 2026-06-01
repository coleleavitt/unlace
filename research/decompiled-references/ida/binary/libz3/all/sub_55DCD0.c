__int64 __fastcall sub_55DCD0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8[4]; // [rsp+18h] [rbp-20h] BYREF

  sub_180C5A0(v8, "sparse");
  v1 = sub_4C3EA0(a1, v8);
  if ( !v1 )
    return 0;
  v2 = (__int64)v1;
  v3 = sub_186B270(0x28u);
  v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v2 + 24)), (__m128i)(unsigned __int64)v2);
  v4 = sub_55D760(v2);
  v5 = _mm_load_si128(&v7);
  *(_DWORD *)(v3 + 8) = -1;
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)v3 = off_1C50BD0;
  *(__m128i *)(v3 + 24) = v5;
  return v3;
}

