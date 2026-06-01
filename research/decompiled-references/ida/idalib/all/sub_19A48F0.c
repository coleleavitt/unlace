__int64 __fastcall sub_19A48F0(__int64 *a1, int a2, double a3, __int64 a4, __int64 a5, __int64 a6, unsigned int *a7)
{
  char v8; // bl
  unsigned int v9; // ebx
  __m128i v11[4]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a5;
  sub_17B41B0((__int64)v11, a1, a7, a3, a5, a6, (__int64)a7);
  v9 = (v8 == 0) + 17;
  if ( (unsigned __int8)sub_1E53090(a1, a6, v9) || (unsigned __int8)sub_1E536B0(a1, v11, v9) )
    return 3;
  else
    return sub_19A47C0((__int64)a1, a2, a6, v11);
}
