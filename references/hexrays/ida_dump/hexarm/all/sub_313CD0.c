unsigned __int64 __fastcall sub_313CD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v5; // ecx
  unsigned __int64 v6; // rax
  __m128i v7; // xmm1
  int v8; // ecx
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_312F40(a1);
  if ( (a3 & a2) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(51742);
    BUG();
  }
  if ( a3 | a2 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = 5;
    if ( v5 == 8 )
    {
      *(_QWORD *)(a1 + 8) = a2;
    }
    else
    {
      v6 = (1LL << (8 * (unsigned __int8)v5)) - 1;
      if ( v6 < a2 || (*(_QWORD *)(a1 + 8) = a2, v6 < a3) )
        sub_312E00(a1);
    }
    *(_QWORD *)(a1 + 16) = a3;
    sub_313320(a1);
    if ( (*(_DWORD *)a1 & 0xF) == 5 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v8 = *(_DWORD *)(a1 + 4);
      v9 = _mm_or_si128(_mm_srli_si128(v7, 8), v7).m128i_u64[0];
      v10 = v9;
      if ( v8 != 8 )
        v10 = (-1LL << (8 * (unsigned __int8)v8)) | v9;
      v11 = _mm_unpackhi_epi64(v7, _mm_unpacklo_epi64((__m128i)(unsigned __int64)-v10, (__m128i)(unsigned __int64)-v10));
      sub_312F40(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      sub_317470(a1 + 8, &v11);
    }
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  return v12 - __readfsqword(0x28u);
}
