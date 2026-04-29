unsigned __int64 __fastcall sub_103890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall ***v14)(); // [rsp+30h] [rbp-28h]
  __m128i v15; // [rsp+38h] [rbp-20h]
  unsigned __int64 v16; // [rsp+48h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v12 = a1;
  v8 = *(_QWORD *)(a2 + 1440);
  v11 = &off_4D7A40;
  v9 = v8 + *(_QWORD *)(a2 + 128);
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4D7B98), (__m128i)(unsigned __int64)&off_4D7920);
  v14 = &v11;
  v15 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
  ((void (__fastcall *)(__int64, unsigned __int64 *, unsigned __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), __int64, __int64, _DWORD, __int64))sub_317810)(
    a3,
    &v13.m128i_u64[1],
    v9,
    a4,
    a5,
    a6,
    &off_4D7A40,
    v12,
    a2,
    a4,
    v13.m128i_i64[0]);
  return v16 - __readfsqword(0x28u);
}
