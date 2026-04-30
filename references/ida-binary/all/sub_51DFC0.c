unsigned __int64 __fastcall sub_51DFC0(
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
  unsigned __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 32LL);
  if ( *(char *)(result + 9) < 0 )
    return sub_51DD00((QT::QWidget *)a1, *(_DWORD *)(a1 + 104) & 0xFFFFFFBF, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
