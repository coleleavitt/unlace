__int64 __fastcall sub_22785D0(__int64 a1)
{
  __int64 (*v2)(void); // rax
  const __m128i **v3; // rdx
  const __m128i *v4; // rsi
  __int64 result; // rax
  const __m128i *v6; // rax
  const __m128i *v7; // rcx
  __int64 ***v8; // rdi
  __int64 v9; // rax
  const char *v10; // [rsp+0h] [rbp-38h] BYREF
  __int16 v11; // [rsp+20h] [rbp-18h]

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v2 != (char *)sub_2278510 )
    return v2();
  v3 = *(const __m128i ***)(a1 + 672);
  v4 = *v3;
  result = (*v3)[2].m128i_u32[0];
  if ( (_DWORD)result == 5 )
    return ((char *)v3[2] - (char *)v3[1]) >> 3;
  if ( (_DWORD)result )
  {
    if ( (unsigned int)(result - 1) <= 1 )
    {
      v6 = v3[2];
      v7 = v3[1];
      if ( v6 == (const __m128i *)byte_4 )
      {
        if ( v7->m128i_i32[0] == 1819047278 || v7->m128i_i32[0] == 1819047246 || v7->m128i_i32[0] == 1280070990 )
          return 0;
      }
      else if ( v6 == (const __m128i *)((char *)&dword_0 + 1) && v7->m128i_i8[0] == 126 )
      {
        return 0;
      }
    }
    v8 = *(__int64 ****)(a1 + 80);
    v10 = "not a sequence";
    v11 = 259;
    sub_226EEF0(v8, v4, (__int64)&v10, 0);
    v9 = std::_V2::generic_category((std::_V2 *)v8);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = v9;
    return 0;
  }
  return result;
}
