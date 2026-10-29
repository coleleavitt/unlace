__int64 __fastcall sub_22771E0(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64, _QWORD *, _QWORD); // rax
  const __m128i **v4; // rdx
  const __m128i *v5; // r8
  __int64 result; // rax
  __int64 ***v7; // rdi
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int16 v9; // [rsp+20h] [rbp-18h]

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 216LL);
  if ( (char *)v3 != (char *)sub_2277280 )
    return v3(a1, a2, 0);
  v4 = *(const __m128i ***)(a1 + 672);
  v5 = *v4;
  if ( (unsigned int)((*v4)[2].m128i_i32[0] - 1) > 1 )
  {
    v7 = *(__int64 ****)(a1 + 80);
    v8 = "unexpected scalar";
    v9 = 259;
    sub_226EEF0(v7, v5, (__int64)&v8, 0);
    result = std::_V2::generic_category((std::_V2 *)v7);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = result;
  }
  else
  {
    result = (__int64)v4[2];
    *a2 = v4[1];
    a2[1] = result;
  }
  return result;
}
