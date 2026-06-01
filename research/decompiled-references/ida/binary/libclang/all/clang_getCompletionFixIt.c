__int64 __fastcall clang_getCompletionFixIt(__m128i *a1, __int64 a2, __int64 a3, __m128i *a4)
{
  __m128i *v4; // rbx
  __m128i **v6; // rax
  __int64 m128i_i64; // rbp
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]

  v4 = a4;
  if ( a1
    && (a4 = (__m128i *)a1[124].m128i_i64[0],
        a2 = (unsigned int)a2,
        (unsigned int)a2 < 0xAAAAAAAAAAAAAAABLL * ((a1[124].m128i_i64[1] - (__int64)a4) >> 3))
    && (a3 = (unsigned int)a3,
        v6 = (__m128i **)a4 + 3 * (unsigned int)a2,
        a4 = *v6,
        (unsigned int)a3 < (unsigned __int64)(((char *)v6[1] - (char *)*v6) >> 6)) )
  {
    m128i_i64 = (__int64)a4[4 * (unsigned __int64)(unsigned int)a3].m128i_i64;
    if ( v4 )
    {
      sub_602210(&v8, a1[114].m128i_i64[0], (__int64)a1[60].m128i_i64, m128i_i64);
      *v4 = _mm_loadu_si128(&v8);
      v4[1].m128i_i64[0] = v9;
    }
    return sub_6904A0(*(_QWORD *)(m128i_i64 + 24));
  }
  else
  {
    if ( v4 )
    {
      a1 = &v8;
      clang_getNullRange(&v8);
      *v4 = _mm_loadu_si128(&v8);
      v4[1].m128i_i64[0] = v9;
    }
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  }
}

