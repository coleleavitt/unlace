__int64 __fastcall sub_4E3030(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v9 = 0;
  v11 = 0;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( !(unsigned __int8)get_fixup(&v9, a2) || (v9 & 0x400000000LL) != 0 )
  {
    if ( !(unsigned __int8)get_fixups(nullptr, (unsigned __int64)a2, 4) )
    {
      if ( a4 )
      {
        v6 = *a4;
        v8 = *a4;
        return sub_4E2E40((__int64)a1, (__int64)a2, v6);
      }
      if ( a3 != -1 )
      {
        if ( !a3 )
          a3 = (int)dword_23AE0E0[(unsigned __int8)(sub_4E2F40(a1, (unsigned __int64)a2) - 1)];
        if ( (unsigned __int8)sub_3C9E40(a1, &v8, a2, a3) )
        {
          v6 = v8;
          return sub_4E2E40((__int64)a1, (__int64)a2, v6);
        }
      }
    }
    return -1;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return si128.m128i_i64[0];
  result = 0;
  if ( si128.m128i_i64[1] != -1 )
    return 16 * sel2para(si128.m128i_i64[1]);
  return result;
}
