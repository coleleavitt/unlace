__int64 __fastcall sub_363FC0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 result; // rax

  result = sub_361EC0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 432LL))(a1, 1);
  return result;
}
