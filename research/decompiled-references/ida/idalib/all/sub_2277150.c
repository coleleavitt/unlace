__int64 __fastcall sub_2277150(__int64 a1, __int64 a2)
{
  const __m128i **v2; // rax
  __int64 ***v4; // rdi
  __int64 result; // rax

  v2 = *(const __m128i ***)(a1 + 672);
  v4 = *(__int64 ****)(a1 + 80);
  sub_226EEF0(v4, *v2, a2, 0);
  result = std::_V2::generic_category((std::_V2 *)v4);
  *(_DWORD *)(a1 + 96) = 22;
  *(_QWORD *)(a1 + 104) = result;
  return result;
}
