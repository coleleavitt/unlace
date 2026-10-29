__int64 __fastcall sub_14BDAA0(__int64 a1, __m128i a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax

  v2 = *(__int64 **)a1;
  result = sub_14BDA20(*(_QWORD *)(a1 + 8), 1, 0, 0, 0, nullptr, a2);
  *v2 = result;
  return result;
}
