_QWORD *__fastcall sub_1D52240(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned int v9; // [rsp+18h] [rbp-20h]
  __int64 v10; // [rsp+20h] [rbp-18h]
  __int16 v11; // [rsp+28h] [rbp-10h]

  v6 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 256;
  v4 = sub_1D51630(&v6, a2, a3, a4);
  operator delete(v7, 16LL * v9, 8);
  return v4;
}
