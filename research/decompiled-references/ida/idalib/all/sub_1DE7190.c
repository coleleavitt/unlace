__int64 __fastcall sub_1DE7190(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned int v16; // [rsp+18h] [rbp-30h]
  __int64 v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int16 v20; // [rsp+38h] [rbp-10h]
  char v21; // [rsp+3Ah] [rbp-Eh]

  v13 = a1;
  v17 = a6;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = a2;
  v19 = 0;
  v20 = 1;
  v21 = 0;
  v11 = sub_1DE36B0((__int64)&v13, a2, a3, a4, 0, a5, a7, a8, a9, a10, a11, nullptr);
  operator delete(v14, 16LL * v16, 8);
  return v11;
}
