const __m128i *__fastcall sub_2277280(__int64 a1, _QWORD *a2)
{
  const __m128i **v2; // rdx
  const __m128i *v3; // r8
  const __m128i *result; // rax
  __int64 ***v6; // rdi
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int16 v8; // [rsp+20h] [rbp-18h]

  v2 = *(const __m128i ***)(a1 + 672);
  v3 = *v2;
  if ( (unsigned int)((*v2)[2].m128i_i32[0] - 1) > 1 )
  {
    v6 = *(__int64 ****)(a1 + 80);
    v7 = "unexpected scalar";
    v8 = 259;
    sub_226EEF0(v6, v3, (__int64)&v7, 0);
    result = (const __m128i *)std::_V2::generic_category((std::_V2 *)v6);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = result;
  }
  else
  {
    result = v2[2];
    *a2 = v2[1];
    a2[1] = result;
  }
  return result;
}
