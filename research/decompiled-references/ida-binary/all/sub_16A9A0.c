unsigned __int64 __fastcall sub_16A9A0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  __int64 v14; // rbp
  __int16 flags; // ax
  __int64 not_tail; // rdx
  __int128 v18; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  if ( !(unsigned __int8)sub_1F09E0(0, &v18, (char *)&v18 + 8) )
  {
    v14 = xmmword_8CC810;
    if ( (_QWORD)xmmword_8CC810 == -1 )
      sub_169630(
        (int)"Please select data to export",
        (__int64)&v18,
        v8,
        v9,
        v10,
        v11,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v12,
        v13,
        a7,
        a8,
        v18);
    flags = get_flags_ex(v14, 4);
    not_tail = v14;
    if ( (flags & 0x600) == 0x200 )
      not_tail = prev_not_tail(v14);
    *(_QWORD *)&v18 = not_tail;
    *((_QWORD *)&v18 + 1) = get_item_end(v14);
  }
  sub_16A410((__int64 *)&v18, 0.0, a2, a3, a4, *(double *)v12.m128_u64, *(double *)v13.m128_u64, a7, a8);
  return v19 - __readfsqword(0x28u);
}
