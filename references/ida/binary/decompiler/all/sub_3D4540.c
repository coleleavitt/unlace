__int64 __fastcall sub_3D4540(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx

  v10 = *(_QWORD *)(a2 + 64);
  if ( v10 )
  {
    a8 = 0;
    if ( (unsigned int)(*(_DWORD *)(v10 + 60) - 1) >= 2 )
      v10 = 0;
  }
  return sub_3D4050(a2, a1, v10, a3, a4, a5, a6, a8, a9, a10);
}
