__int64 __fastcall sub_2CD5B0(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rax

  if ( !a2 )
    return 1;
  if ( (unsigned __int8)sub_2CCB20(a1, nullptr) )
  {
    sub_2CAEF0(a1, 0, v11, v12, a3, a4, a5, a6, v13, v14, a9, a10);
    if ( *(_BYTE *)(a1 + 1082) )
    {
      v15 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 1082) = 0;
      (*(void (__fastcall **)(__int64))(v15 + 664))(a1);
    }
    return 1;
  }
  else
  {
    sub_1C7D20(nullptr);
    return 0;
  }
}
