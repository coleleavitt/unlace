__int64 __fastcall sub_D44F30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  __m128i v7; // rax
  __int64 v8; // rsi
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  void *v11; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-60h]
  char v13; // [rsp+1Ch] [rbp-5Ch]
  void *v14; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-50h]
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v7.m128i_i64[0] = sub_D44EB0(a1, a3, a3, a4, a5, a6);
  v8 = a1[22];
  v10 = v7;
  sub_D0AF80((__int64)&v16, v8);
  sub_CF8960((__int64)&v11, (__int64 *)&v16);
  if ( v13 )
    sub_2206D90(&v14, &v11, v6);
  else
    sub_2206DE0(&v14, &v11, v6);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  sub_D0C590((void **)&v10, (__int64)&v14);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v10);
  return 1;
}
