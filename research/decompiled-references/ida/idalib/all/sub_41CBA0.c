__int64 __fastcall sub_41CBA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a1[308] != a2 || !a5 )
    return 0;
  v8[0] = a4;
  v7 = sub_3BDE50(a1, a3);
  v8[1] = v8[0] + a5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v9 = 0;
  v11 = 0;
  v12 = 0;
  sub_41C0A0((__int64)&v9, (__int64)v8);
  sub_41C600(a1 + 309, (__int64 *)&v7, (unsigned __int16 *)&v9, 0xA9u);
  return 1;
}
