__int64 __fastcall sub_1CE6900(
        __int64 **a1,
        __m128i *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        int a9,
        char a10)
{
  __int64 *v11; // rdi
  __int64 *v13; // rdi
  __int64 v15; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-60h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFD1LL )
  {
    LODWORD(v17) = a5;
    HIDWORD(v17) = a5;
    v18 = a5;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    sub_15AFAE0((__int64)&v19, a5, -(int)a4, (int *)&v17);
    v13 = *a1;
    v15 = 0;
    sub_1CE5E60(v13, nullptr, a2, a3, (__int64)&v19, a6, a7, a8, 0, &v15, a10);
    sub_F22A90(&v16, v15);
    return v16;
  }
  else
  {
    v20 = a4;
    v11 = *a1;
    v19 = 0;
    HIDWORD(v21) = a5;
    LODWORD(v21) = a5;
    v16 = 0;
    sub_1CE5E60(v11, nullptr, a2, a3, (__int64)&v19, a6, a7, a8, 0, &v16, a10);
    sub_F22A90(&v17, v16);
    return v17;
  }
}
