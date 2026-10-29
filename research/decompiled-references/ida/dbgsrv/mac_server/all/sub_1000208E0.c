/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000208E0
// Address: 0x00000001000208E0

//----- (00000001000208E0) ----------------------------------------------------
bool __fastcall sub_1000208E0(__m128 *a1, int a2)
{
  __m128 v2; // xmm0
  __m128 v4[3]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v5; // [rsp+30h] [rbp-70h]
  __int64 v6; // [rsp+38h] [rbp-68h]
  natural_t v7[4]; // [rsp+48h] [rbp-58h] BYREF
  __m64 v8; // [rsp+58h] [rbp-48h]
  __m128i v9[2]; // [rsp+68h] [rbp-38h] BYREF

  if ( a1[77].i8[1] == 1 )
  {
    if ( sub_10001FE70((__int64)a1, a2, v7) )
    {
      v2 = (__m128)_mm_loadu_si128(v9);
LABEL_6:
      v4[2] = v2;
      v4[0] = a1[46];
      v4[1] = a1[47];
      v5 = 0;
      v6 = a1[49].u32[1];
      return sub_10001FFF0((__int64)a1, a2, v4);
    }
  }
  else if ( sub_10001FF30((__int64)a1, a2, v7) )
  {
    v4[0].i64[0] = v7[0];
    v2 = (__m128)_mm_cvtepu32_epi64(v8);
    goto LABEL_6;
  }
  return 0;
}
