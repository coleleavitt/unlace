__int64 __fastcall sub_45EB50(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax

  if ( !a2 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 1072LL))(a1);
      case 2:
        return sub_33A6C0(a1, **(_QWORD **)(a4 + 8), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
      case 0:
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1128LL))(a1, *(_QWORD *)(a4 + 8));
    }
  }
  return result;
}
