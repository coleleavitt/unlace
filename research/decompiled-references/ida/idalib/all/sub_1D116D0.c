__int64 __fastcall sub_1D116D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned int v12; // [rsp+18h] [rbp-30h]
  unsigned __int8 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  v9 = a1;
  v14 = a2;
  v15 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  sub_1D11200(&v9, a4, a6, a7, a3, (unsigned __int64)a4, a5);
  v7 = v13;
  operator delete(v10, 16LL * v12, 8);
  return v7;
}
