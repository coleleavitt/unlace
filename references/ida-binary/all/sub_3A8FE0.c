__int64 __fastcall edit_type_form_data_t__::vfunc_3(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64),
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v11; // rbp

  result = *(unsigned __int8 *)(a1 + 296);
  switch ( (_BYTE)result )
  {
    case 0x1D:
      goto LABEL_7;
    case 0x2D:
      v11 = a1 + 268;
LABEL_6:
      sub_3A84E0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10);
      return (**a2)(a2, 100, v11);
    case 0xD:
LABEL_7:
      v11 = a1 + 264;
      goto LABEL_6;
  }
  return result;
}
