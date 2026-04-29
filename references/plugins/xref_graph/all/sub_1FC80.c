__int64 __fastcall sub_1FC80(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v8; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128i v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = sub_1FA80(a1 + 80);
  v9[1] = &v8;
  v8 = 0;
  v9[0] = v5;
  v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BC50), (__m128i)(unsigned __int64)sub_1F0E0);
  sub_1FBE0(v6, v4 & a3, (__int64)v9);
  if ( v10.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v10.m128i_i64[0])(v9, v9, 3);
  return v8;
}
