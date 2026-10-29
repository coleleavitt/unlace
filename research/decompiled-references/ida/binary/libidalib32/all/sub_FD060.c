unsigned __int64 __fastcall sub_FD060(const __m128i *a1, void *a2, char a3)
{
  __m128i v6; // xmm2
  __m128i v7; // xmm0
  unsigned __int64 v8; // r12
  void **v9; // rbp
  void *v10; // rdi
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i v13; // [rsp+0h] [rbp-88h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  _OWORD v15[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_10E220() )
  {
    sub_91870((__int64)a1, a2, a3);
    if ( !a1[20].m128i_i8[9] && !a1[1].m128i_i32[0] && !*(_BYTE *)(a1->m128i_i64[1] + 841) )
    {
      v6 = _mm_loadu_si128(a1 + 17);
      v7 = _mm_loadu_si128(a1 + 19);
      v14 = _mm_loadu_si128(a1 + 16);
      v15[0] = _mm_loadu_si128(a1 + 18);
      v15[1] = v7;
      v16[0] = v14;
      v13 = v6;
      v16[1] = v6;
      sub_FA1C0(v16, v15);
      v8 = a1[19].m128i_i64[1] + 8;
      v9 = (void **)(v6.m128i_i64[1] + 8);
      if ( v6.m128i_i64[1] + 8 < v8 )
      {
        do
        {
          v10 = *v9++;
          operator delete(v10, 0x190u);
        }
        while ( (unsigned __int64)v9 < v8 );
      }
      v11 = _mm_load_si128(&v14);
      v12 = _mm_load_si128(&v13);
      a1[20].m128i_i32[0] = 0;
      a1[18] = v11;
      a1[19] = v12;
    }
  }
  return v17 - __readfsqword(0x28u);
}

