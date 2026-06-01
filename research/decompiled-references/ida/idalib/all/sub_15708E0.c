unsigned __int64 __fastcall sub_15708E0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __m128i a5)
{
  unsigned __int64 result; // rax

  result = sub_14BDAD0(a1, 0, a5);
  if ( result > 1 )
    return sub_1AA2500(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), a2, a3, a4, result & 0xFFFFFFFFFFFFFFFELL);
  return result;
}
