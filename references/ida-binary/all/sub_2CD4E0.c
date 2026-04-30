__int64 __fastcall sub_2CD4E0(
        __int64 a1,
        const char *a2,
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
  if ( *(_BYTE *)(a1 + 1080) )
  {
    sub_2CD240(a1, (__int64)a2, a5, a6, a7, a8, a9, a10, a11, a12);
    return *(unsigned __int8 *)(a1 + 1080);
  }
  else
  {
    if ( (unsigned __int8)sub_2CAEF0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12) )
    {
      *(_BYTE *)(a1 + 1080) = 1;
      *(_BYTE *)(a1 + 1082) = 0;
      sub_1E8C00((_QWORD *)(a1 + 576), a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 664LL))(a1);
    }
    else
    {
      sub_1C7D20(nullptr);
    }
    return *(unsigned __int8 *)(a1 + 1080);
  }
}
