_BYTE *__fastcall sub_E6EDA0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int8 v5; // al
  _BYTE *result; // rax
  __m128 v7; // [rsp+0h] [rbp-68h] BYREF
  __m128i v8; // [rsp+10h] [rbp-58h]
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+30h] [rbp-38h]
  __int16 v11; // [rsp+32h] [rbp-36h]
  __int32 v12; // [rsp+34h] [rbp-34h]

  v4 = 0;
  v8 = _mm_loadu_si128(a2 + 4);
  v7.m128_u64[0] = (unsigned __int64)"%02x";
  si128.m128i_i64[0] = (__int64)off_2C03770;
  si128.m128i_i64[1] = (__int64)"_GUID_%08x_%04x_%04x_";
  v10 = v8.m128i_i16[3];
  v7 = _mm_loadh_ps((const double *)v7.m128_u64);
  v11 = v8.m128i_i16[2];
  v12 = v8.m128i_i32[0];
  sub_227C560(a3, &si128);
  si128 = _mm_load_si128((const __m128i *)&v7);
  LOBYTE(v10) = v8.m128i_i8[8];
  sub_227C560(a3, &si128);
  do
  {
    while ( 1 )
    {
      v5 = v8.m128i_i8[v4 + 9];
      si128 = _mm_load_si128((const __m128i *)&v7);
      LOBYTE(v10) = v5;
      result = (_BYTE *)sub_227C560(a3, &si128);
      if ( !(_DWORD)v4 )
        break;
LABEL_2:
      if ( ++v4 == 7 )
        return result;
    }
    result = *(_BYTE **)(a3 + 32);
    if ( *(_BYTE **)(a3 + 24) != result )
    {
      *result = 95;
      ++*(_QWORD *)(a3 + 32);
      goto LABEL_2;
    }
    ++v4;
    result = (_BYTE *)sub_227BF10(a3, "_", 1);
  }
  while ( v4 != 7 );
  return result;
}
