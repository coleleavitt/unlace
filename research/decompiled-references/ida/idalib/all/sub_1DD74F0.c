__int64 __fastcall sub_1DD74F0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned int v12; // [rsp+18h] [rbp-30h]
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int16 v16; // [rsp+38h] [rbp-10h]
  char v17; // [rsp+3Ah] [rbp-Eh]

  v9 = a1;
  v13 = a4;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v17 = 0;
  v7 = sub_1DD6C30(&v9, a2, &a2[2 * a3], a5, a6, a7);
  operator delete(v10, 16LL * v12, 8);
  return v7;
}
