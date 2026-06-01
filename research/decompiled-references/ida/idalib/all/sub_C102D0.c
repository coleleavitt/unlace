bool __fastcall sub_C102D0(const __m128i *a1, const __m128i *a2)
{
  __int64 v3; // r13
  int v4; // ebx
  int v5; // ebx
  __m128i si128; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v7[3]; // [rsp+10h] [rbp-38h] BYREF

  v7[0] = _mm_load_si128(a1);
  if ( sub_A4F700(v7) )
  {
    v7[0] = _mm_load_si128(a2);
    if ( sub_A4F700(v7)
      && (si128 = _mm_load_si128(a1),
          v3 = sub_A4F6E0((__int64)&si128),
          v7[0] = _mm_load_si128(a2),
          v3 == sub_A4F6E0((__int64)v7))
      && (v4 = sub_A4F4B0((__int64)a1), v4 == (unsigned int)sub_A4F4B0((__int64)a2)) )
    {
      v5 = sub_A4F4E0((__int64)a1);
      return v5 == (unsigned int)sub_A4F4E0((__int64)a2);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v7[0] = _mm_load_si128(a2);
    return !sub_A4F700(v7);
  }
}
