__int64 __fastcall sub_2278510(__int64 a1)
{
  const __m128i **v1; // rdx
  const __m128i *v2; // rsi
  __int64 result; // rax
  const __m128i *v4; // rax
  const __m128i *v5; // rcx
  __int64 ***v7; // rdi
  __int64 v8; // rax
  const char *v9; // [rsp+0h] [rbp-38h] BYREF
  __int16 v10; // [rsp+20h] [rbp-18h]

  v1 = *(const __m128i ***)(a1 + 672);
  v2 = *v1;
  result = (*v1)[2].m128i_u32[0];
  if ( (_DWORD)result == 5 )
    return ((char *)v1[2] - (char *)v1[1]) >> 3;
  if ( (_DWORD)result )
  {
    if ( (unsigned int)(result - 1) <= 1 )
    {
      v4 = v1[2];
      v5 = v1[1];
      if ( v4 == (const __m128i *)byte_4 )
      {
        if ( v5->m128i_i32[0] == 1819047278 || v5->m128i_i32[0] == 1819047246 || v5->m128i_i32[0] == 1280070990 )
          return 0;
      }
      else if ( v4 == (const __m128i *)((char *)&dword_0 + 1) && v5->m128i_i8[0] == 126 )
      {
        return 0;
      }
    }
    v7 = *(__int64 ****)(a1 + 80);
    v9 = "not a sequence";
    v10 = 259;
    sub_226EEF0(v7, v2, (__int64)&v9, 0);
    v8 = std::_V2::generic_category((std::_V2 *)v7);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = v8;
    return 0;
  }
  return result;
}
