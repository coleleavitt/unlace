__m128i *__fastcall sub_2CD4C0(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v5; // rax
  unsigned __int8 v6; // bp
  __m128i *v7; // rax
  __m128i *v8; // r13
  int v9; // r14d
  int i; // ebp
  __m128i v11; // xmm0
  __int64 v12; // rdi
  int v13; // eax
  const char *v14; // rax
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v20; // [rsp+10h] [rbp-C8h]
  __int64 v21; // [rsp+18h] [rbp-C0h]
  __m128i v22; // [rsp+20h] [rbp-B8h] BYREF
  bool v23; // [rsp+37h] [rbp-A1h]
  _QWORD *v24; // [rsp+38h] [rbp-A0h]
  const __m128i *v25; // [rsp+48h] [rbp-90h] BYREF
  __m128i v26; // [rsp+50h] [rbp-88h] BYREF
  __int64 v27; // [rsp+60h] [rbp-78h] BYREF
  int v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  __m128i v30; // [rsp+78h] [rbp-60h] BYREF
  char v31; // [rsp+88h] [rbp-50h]
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v24 = a3;
  v32 = __readfsqword(0x28u);
  v5 = (unsigned __int8 *)*a3;
  v26 = _mm_unpacklo_epi64((__m128i)*a3, (__m128i)a4);
  if ( (unsigned __int64)v5 >= a4 )
  {
    v6 = 0;
  }
  else
  {
    v6 = *v5;
    v26.m128i_i64[0] = (__int64)(v5 + 1);
    if ( v6 > 2u )
    {
      v8 = nullptr;
      sub_2B05F0((__int64)"Cannot retrieve user-defined comments because they use a newer format");
      return v8;
    }
  }
  v7 = (__m128i *)qalloc(16);
  v8 = v7;
  if ( !v7 )
    sub_4E45E();
  v7->m128i_i64[0] = 0;
  v7->m128i_i64[1] = 0;
  v9 = unpack_dd(&v26);
  if ( v9 > 0 )
  {
    v23 = v6 == 1;
    for ( i = 0; i != v9; ++i )
    {
      while ( 1 )
      {
        v27 = sub_32D380(&v26, *(_QWORD *)(a1 + 8));
        v13 = unpack_dd(&v26);
        if ( v13 < 0 && v23 )
          v13 = v13 & 0x3FFFFFFF | 0x40000000;
        v28 = v13;
        v14 = (const char *)sub_32D340(&v26, v26.m128i_i64[1]);
        sub_7D780((__int64)&v29, v14);
        v31 = 0;
        v25 = (const __m128i *)&v27;
        v15 = sub_2CD330(v8, (unsigned __int64 *)&v27, &v25) + 24;
        v16 = _mm_loadu_si128(&v30);
        v17 = v29;
        v30 = 0;
        v18 = *(_QWORD *)(v15 + 16);
        v29 = 0;
        if ( v18 )
          break;
        *(_QWORD *)(v15 + 16) = v17;
        ++i;
        *(__m128i *)(v15 + 24) = v16;
        *(_BYTE *)(v15 + 40) = v31;
        if ( v9 == i )
          goto LABEL_14;
      }
      *(_QWORD *)(v15 + 24) = 0;
      v21 = v17;
      v20 = v15;
      v22 = v16;
      qfree(v18);
      v11 = _mm_load_si128(&v22);
      v12 = v29;
      *(_QWORD *)(v20 + 16) = v21;
      *(__m128i *)(v20 + 24) = v11;
      *(_BYTE *)(v20 + 40) = v31;
      if ( v12 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v12);
      }
    }
  }
LABEL_14:
  *v24 = v26.m128i_i64[0];
  return v8;
}
