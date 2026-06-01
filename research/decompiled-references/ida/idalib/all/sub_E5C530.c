void __fastcall sub_E5C530(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  __m128i v8; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v9[16]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __m128i si128; // [rsp+28h] [rbp-80h]
  _BYTE v12[24]; // [rsp+38h] [rbp-70h] BYREF
  void *v13; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-50h]

  v3 = *(void **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  ptr = v12;
  if ( v5 > 1 )
  {
    sub_2205610(&v13, v4, v5, v3);
  }
  else
  {
    v14 = v4;
    if ( (unsigned int)v4 > 0x40 )
      sub_2205470(&v13, v3, 0);
    else
      v13 = v3;
  }
  v6 = sub_F65140(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  sub_220BA90((unsigned int)&v13, (unsigned int)&ptr, 10, v6, 0, 1, 0);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  v7 = a1 + 1048;
  v8.m128i_i64[0] = (__int64)v9;
  sub_E58600(&v8, ptr, (__int64)ptr + si128.m128i_i64[0]);
  sub_E59390((__int64)&v13, &v8);
  if ( (_BYTE *)v8.m128i_i64[0] != v9 )
    operator delete((void *)v8.m128i_i64[0]);
  sub_222AB70(v7, "value", 5);
  sub_222CAC0(v7, &v13);
  sub_2229BF0(v7);
  sub_222B2A0(&v13);
  if ( ptr != v12 )
    free(ptr);
}
