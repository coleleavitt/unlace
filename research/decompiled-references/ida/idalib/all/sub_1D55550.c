_QWORD *__fastcall sub_1D55550(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  _QWORD *v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned int v10; // [rsp+18h] [rbp-20h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int16 v12; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v11 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v5 = sub_1D51480(&v7, a2, a4, a5);
  operator delete(v8, 16LL * v10, 8);
  return v5;
}
