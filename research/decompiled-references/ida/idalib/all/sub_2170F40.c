__m128i *__fastcall sub_2170F40(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v8; // rax
  __int64 v9[2]; // [rsp+10h] [rbp-88h] BYREF
  char v10; // [rsp+20h] [rbp-78h]
  void *v11[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  __m128i v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h] BYREF

  sub_216E130((__int64)v9, a2, a3, a4, a5, a6);
  if ( (v10 & 1) != 0 )
  {
    v8 = (void *)v9[0];
    v9[0] = 0;
    v11[0] = v8;
    sub_A05760(&v13, (_QWORD **)v11);
    if ( v11[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11[0] + 8LL))(v11[0]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    sub_2162C40(a1, "[unknown index]", (__int64)"");
  }
  else
  {
    sub_D8B070(
      v11,
      (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
      32,
      (__int64)"%ld",
      0xCCCCCCCCCCCCCCCDLL * ((a3 - v9[0]) >> 3));
    sub_E7ED70(&v13, "[index ", v11);
    sub_10E1980(a1, &v13, "]");
    if ( (__int64 *)v13.m128i_i64[0] != &v14 )
      operator delete((void *)v13.m128i_i64[0]);
    if ( v11[0] != &v12 )
      operator delete(v11[0]);
  }
  sub_216EEA0(v9);
  return a1;
}
