unsigned __int64 __fastcall sub_70A2A0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdi
  _QWORD v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v6; // [rsp+10h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v2 = _mm_loadl_epi64((const __m128i *)&off_2B0E5E0);
  v7 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 48) = 0;
  v5[0] = a1;
  v3 = *(_QWORD *)(a1 + 32);
  v5[1] = 0;
  v6 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)sub_709C70);
  sub_8148D0(v3, a2, v5, &stru_40000);
  if ( v6.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v6.m128i_i64[0])(v5, v5, 3);
  return v7 - __readfsqword(0x28u);
}

