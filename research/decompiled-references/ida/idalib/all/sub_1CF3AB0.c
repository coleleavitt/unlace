__int64 __fastcall sub_1CF3AB0(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned int v15; // [rsp+18h] [rbp-30h]
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]

  v12 = a1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
  v17 = 0;
  v10 = sub_1CE88F0(&v12, a2, a6, a7, v7, v8, v9);
  operator delete(v13, 16LL * v15, 8);
  return v10;
}
