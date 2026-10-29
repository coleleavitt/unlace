__int64 __fastcall sub_7D5F10(__int64 a1, __int64 a2)
{
  char v2; // dl
  bool v3; // zf
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  __m128i v7; // [rsp+10h] [rbp-28h]

  v2 = 0;
  v3 = *(_WORD *)(a2 + 4) == 2;
  v6[1] = 0;
  v6[0] = a1;
  v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C54A40), (__m128i)(unsigned __int64)&sub_7D41C0);
  if ( v3 )
    v2 = *(_DWORD *)(a2 + 16) == 0;
  v4 = sub_7D5940(a1, a2, v2, (__int64)v6);
  if ( v7.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v7.m128i_i64[0])(v6, v6, 3);
  return v4;
}

