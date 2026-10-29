__int64 __fastcall sub_2CD880(
        __int64 a1,
        __int64 a2,
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
  unsigned int v12; // ebp
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v17; // rax

  v12 = *(unsigned __int8 *)(a1 + 1080);
  if ( !(_BYTE)v12 || *(_QWORD *)(a1 + 1064) == -1 )
  {
    v17 = sub_1EB5B0(a1, a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 224LL))(v17, 0);
  }
  else
  {
    v13 = sub_2CB300(a1, 1, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    sub_2CD5B0(a1, v13, a5, a6, a7, a8, v14, v15, a11, a12);
    return v12;
  }
}
