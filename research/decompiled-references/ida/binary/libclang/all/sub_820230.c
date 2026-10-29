bool __fastcall sub_820230(const __m128i *a1, const __m128i *a2)
{
  bool v2; // al
  __int64 v4; // r13
  int v5; // r12d
  int v6; // ebp
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+10h] [rbp-38h] BYREF

  v8[0] = _mm_loadu_si128(a1);
  v2 = sub_69F610(v8);
  v8[0] = _mm_loadu_si128(a2);
  if ( !v2 )
    return !sub_69F610(v8);
  if ( !sub_69F610(v8) )
    return 0;
  v7 = _mm_loadu_si128(a1);
  v4 = sub_69F5F0((__int64)&v7);
  v8[0] = _mm_loadu_si128(a2);
  if ( v4 != sub_69F5F0((__int64)v8) )
    return 0;
  v5 = sub_69F3D0((__int64)a1);
  if ( v5 != (unsigned int)sub_69F3D0((__int64)a2) )
    return 0;
  v6 = sub_69F3F0((__int64)a1);
  return v6 == (unsigned int)sub_69F3F0((__int64)a2);
}

