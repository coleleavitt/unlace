__int64 __fastcall sub_1DD6BB0(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rcx
  unsigned int v10; // eax
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

  v9 = *a6;
  v17 = a3;
  v13 = a1;
  v19 = v9;
  v20 = 1;
  v18 = a5;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v21 = 0;
  LOBYTE(v10) = sub_1DD6360((unsigned int *)&v13, a2, a4, 0, a5, (__int64)a6, a7, a8);
  v11 = v10;
  operator delete(v14, 16LL * v16, 8);
  return v11;
}
