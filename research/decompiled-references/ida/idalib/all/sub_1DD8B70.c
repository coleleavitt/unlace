__int64 __fastcall sub_1DD8B70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rbx
  __m128i v12; // [rsp+0h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-78h]
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h]
  unsigned int v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  unsigned int v20; // [rsp+58h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-28h]
  __int16 v22; // [rsp+68h] [rbp-20h]
  char v23; // [rsp+6Ah] [rbp-1Eh]

  v15 = a1;
  v19 = a6;
  v20 = a5;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 1;
  v23 = 0;
  v12 = 0;
  *(_OWORD *)ptr = 0;
  v14 = 0;
  sub_15AB8B0((__int64)&v12, a2, a3);
  v10 = sub_1DD84F0((__int64)&v15, &v12, a4, a5, 0, 0, (__m128)0LL, a8, 0);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  operator delete(v16, 16LL * v18, 8);
  return v10;
}
