void __fastcall __noreturn sub_2236FB0(__int64 a1)
{
  __int64 v1; // rdi
  size_t v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __m128i *v5; // rax
  _BYTE *v6; // rdi
  __m128i v7[2]; // [rsp+0h] [rbp-108h] BYREF
  void *v8[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v12; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-98h] BYREF
  void *src; // [rsp+80h] [rbp-88h] BYREF
  size_t n; // [rsp+88h] [rbp-80h]
  _QWORD v16[2]; // [rsp+90h] [rbp-78h] BYREF
  __m128i v17; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-48h]

  sub_D8B070(
    &src,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    32,
    (__int64)"%lu",
    0xFFFFFFFFLL);
  sub_D8B070(v8, (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf, 32, (__int64)"%lu", a1);
  sub_E7ED70(&v10, "SmallVector unable to grow. Requested capacity (", v8);
  sub_10E1980(&v12, &v10, ") is larger than maximum value for size type (");
  v1 = v12.m128i_i64[0];
  v2 = v12.m128i_i64[1] + n;
  if ( (_QWORD *)v12.m128i_i64[0] == v13 )
    v3 = 15;
  else
    v3 = v13[0];
  if ( v2 <= v3 )
  {
    if ( n )
    {
      v6 = (_BYTE *)(v12.m128i_i64[1] + v12.m128i_i64[0]);
      if ( n == 1 )
        *v6 = *(_BYTE *)src;
      else
        memcpy(v6, src, n);
      v1 = v12.m128i_i64[0];
    }
  }
  else
  {
    if ( src == v16 )
      v4 = 15;
    else
      v4 = v16[0];
    if ( v2 <= v4 )
    {
      v5 = (__m128i *)sub_99BDC0(&src, 0, 0, v12.m128i_i64[0], v12.m128i_u64[1]);
LABEL_9:
      v17.m128i_i64[0] = (__int64)&v18;
      if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
      {
        v18 = _mm_loadu_si128(v5 + 1);
      }
      else
      {
        v17.m128i_i64[0] = v5->m128i_i64[0];
        v18.m128i_i64[0] = v5[1].m128i_i64[0];
      }
      v17.m128i_i64[1] = v5->m128i_i64[1];
      v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
      v5->m128i_i64[1] = 0;
      v5[1].m128i_i8[0] = 0;
      sub_10E1980(v7, &v17, ")");
      if ( (__m128i *)v17.m128i_i64[0] != &v18 )
        operator delete((void *)v17.m128i_i64[0]);
      if ( (_QWORD *)v12.m128i_i64[0] != v13 )
        operator delete((void *)v12.m128i_i64[0]);
      if ( (__int64 *)v10.m128i_i64[0] != &v11 )
        operator delete((void *)v10.m128i_i64[0]);
      if ( v8[0] != &v9 )
        operator delete(v8[0]);
      if ( src != v16 )
        operator delete(src);
      v17.m128i_i64[0] = (__int64)v7;
      v19 = 260;
      sub_2221AD0((__int64)&v17, 1u);
    }
    sub_998B30((__int64)&v12, v12.m128i_u64[1], 0, src, n);
    v1 = v12.m128i_i64[0];
  }
  v12.m128i_i64[1] = v2;
  v5 = &v12;
  *(_BYTE *)(v1 + v2) = 0;
  goto LABEL_9;
}
