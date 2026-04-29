__int64 __fastcall sub_3B0CC0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i si128,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64 *); // rax
  __m128 v18; // [rsp+0h] [rbp-48h] BYREF
  int v19; // [rsp+10h] [rbp-38h]
  unsigned __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-18h]
  unsigned __int64 v22; // [rsp+38h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  v19 = 0;
  v18.m128_u64[1] = 0xFFFFFFFFLL;
  if ( a2 < a1[28] )
  {
    v12 = a1[27] + 48 * a2;
    a4 = *(_QWORD *)(v12 + 24);
    a3 = **(_QWORD **)v12;
    v21 = *(_DWORD *)(v12 + 32);
    v20 = __PAIR128__(a4, a3);
    si128 = _mm_load_si128((const __m128i *)&v20);
    v19 = v21;
    v18 = (__m128)si128;
  }
  sub_3B0300((unsigned __int64)a1, 1u, a3, a4, a5, *(double *)si128.m128i_i64, a7, a8, a9, a10, a11, a12);
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 72LL);
  if ( v16 == sub_3A1720 )
    return sub_3A1720((__int64)a1, (__int64 *)&v18);
  else
    return ((__int64 (__fastcall *)(_QWORD *, __m128 *, __int64 (__fastcall *)(__int64, __int64 *), __int64, __int64, __int64, unsigned __int64, unsigned __int64, int))v16)(
             a1,
             &v18,
             sub_3A1720,
             v13,
             v14,
             v15,
             v18.m128_u64[0],
             v18.m128_u64[1],
             v19);
}
