void __fastcall sub_2277180(__int64 a1)
{
  const __m128i **v2; // rax
  __int64 ***v3; // rdi
  __int64 v4; // rax
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int16 v6; // [rsp+20h] [rbp-18h]

  if ( !*(_BYTE *)(a1 + 680) )
  {
    v5 = "unknown enumerated scalar";
    v6 = 259;
    v2 = *(const __m128i ***)(a1 + 672);
    v3 = *(__int64 ****)(a1 + 80);
    sub_226EEF0(v3, *v2, (__int64)&v5, 0);
    v4 = std::_V2::generic_category((std::_V2 *)v3);
    *(_DWORD *)(a1 + 96) = 22;
    *(_QWORD *)(a1 + 104) = v4;
  }
}
