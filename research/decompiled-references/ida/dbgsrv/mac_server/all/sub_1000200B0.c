/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000200B0
// Address: 0x00000001000200B0

//----- (00000001000200B0) ----------------------------------------------------
bool __fastcall sub_1000200B0(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __m128i *v6; // rax
  __m128i v8; // [rsp+0h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+10h] [rbp-A0h] BYREF
  __m128i v10; // [rsp+20h] [rbp-90h] BYREF
  __m128i v11; // [rsp+30h] [rbp-80h] BYREF
  __m128i v12; // [rsp+40h] [rbp-70h] BYREF
  __m128i v13[3]; // [rsp+50h] [rbp-60h] BYREF

  if ( *(_BYTE *)(a1 + 1233) != 1 )
  {
    if ( sub_10001FF30(a1, a2, (natural_t *)&v12) )
    {
      v8 = _mm_cvtepu32_epi64(*(__m64 *)v12.i8);
      si128 = _mm_cvtepu32_epi64((__m64)v12.u64[1]);
      v10 = _mm_cvtepu32_epi64(*(__m64 *)v13[0].i8);
      v11 = _mm_cvtepu32_epi64((__m64)v13[0].u64[1]);
LABEL_7:
      switch ( a3 )
      {
        case 0u:
          v6 = &v8;
          goto LABEL_17;
        case 1u:
          v6 = (__m128i *)&v8.u64[1];
          goto LABEL_17;
        case 2u:
          v6 = &si128;
          goto LABEL_17;
        case 3u:
          v6 = (__m128i *)&si128.u64[1];
          goto LABEL_17;
        case 4u:
          v6 = &v10;
          goto LABEL_17;
        case 5u:
          v6 = (__m128i *)&v10.u64[1];
          goto LABEL_17;
        case 6u:
          v6 = &v11;
          goto LABEL_17;
        case 7u:
          v6 = (__m128i *)&v11.u64[1];
LABEL_17:
          v6->i64[0] = a4;
          break;
        default:
          return sub_10001FFF0(a1, a2, (__m128 *)&v8);
      }
      return sub_10001FFF0(a1, a2, (__m128 *)&v8);
    }
    return 0;
  }
  if ( !sub_10001FE70(a1, a2, (natural_t *)&v12) )
    return 0;
  v8 = _mm_load_si128(&v12);
  si128 = _mm_load_si128(v13);
  v10 = v13[1];
  v11 = v13[2];
  if ( a3 <= 7 )
    goto LABEL_7;
  return sub_10001FFF0(a1, a2, (__m128 *)&v8);
}
