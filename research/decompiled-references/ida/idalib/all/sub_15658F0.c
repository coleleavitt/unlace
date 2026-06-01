__int64 __fastcall sub_15658F0(__int64 a1, __m128i a2, double a3)
{
  __int64 result; // rax

  result = sub_13DC060(
             *(_DWORD *)(a1 + 40),
             0,
             *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
             a2,
             a3);
  if ( !(_DWORD)result )
    return *(unsigned int *)(a1 + 16);
  return result;
}
