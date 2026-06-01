__int64 __fastcall sub_60BEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int128 a7, __int64 a8)
{
  __m128i v8; // xmm0
  size_t *v9; // rax
  size_t v10; // rdx
  __int64 MappedSourcePath_0; // r12
  __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-44h] BYREF
  size_t *v19; // [rsp+28h] [rbp-40h] BYREF
  __m128i v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 CString; // [rsp+48h] [rbp-20h]

  v8 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getFileLocation((int)&v19, (int)&v17, (int)&v18, 0, a5, a6, v8.m128i_i64[0], v8.m128i_i32[2], a8);
  v9 = v19;
  if ( v19 )
  {
    while ( 1 )
    {
      v10 = v9[1];
      if ( !v10 )
        break;
      if ( (v10 & 4) == 0 )
        break;
      v15 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v15 )
        break;
      v9 = (size_t *)v15;
    }
    MappedSourcePath_0 = sub_690520(v9 + 4, *v9);
    v13 = v12;
  }
  else
  {
    MappedSourcePath_0 = clang_CompileCommand_getMappedSourcePath_0();
    v13 = v16;
  }
  CString = clang_getCString(MappedSourcePath_0, v13);
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F48F8, (__m128i)(unsigned __int64)"(%s:%d:%d)");
  v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v17)).m128i_u64[0];
  sub_26248B0(a1 + 136, &v20);
  clang_disposeString(MappedSourcePath_0, v13);
  return a1;
}

