__m128i *__fastcall sub_1130070(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _BYTE *v7; // rdx
  _BYTE *v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 (__fastcall *v10)(__int64, __m128i **); // rax
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+0h] [rbp-188h] BYREF
  __int16 v14; // [rsp+20h] [rbp-168h]
  _BYTE v15[32]; // [rsp+30h] [rbp-158h] BYREF
  __int16 v16; // [rsp+50h] [rbp-138h]
  _BYTE v17[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v18; // [rsp+80h] [rbp-108h]
  __m128i *v19; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+98h] [rbp-F0h]
  __m128i v21; // [rsp+A0h] [rbp-E8h] BYREF
  __int16 v22; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v25[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v7 = (_BYTE *)(*a2 + a2[1]);
  v8 = (_BYTE *)*a2;
  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&ptr, v8, v7);
  v13[0] = a4;
  v18 = 257;
  v16 = 257;
  v14 = 260;
  v22 = 257;
  sub_228A3B0(&ptr, v13, v15, v17, &v19);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8LL) + 8LL);
  v10 = *(unsigned __int8 (__fastcall **)(__int64, __m128i **))(*(_QWORD *)v9 + 96LL);
  v19 = (__m128i *)ptr;
  v22 = 261;
  v20 = si128.m128i_i64[0];
  if ( v10(v9, &v19) )
  {
    v19 = &v21;
    sub_112B570(&v19, ptr, (__int64)ptr + si128.m128i_i64[0]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v19 == &v21 )
    {
      a1[1] = _mm_load_si128(&v21);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v19;
      a1[1].m128i_i64[0] = v21.m128i_i64[0];
    }
    v12 = v20;
    a1[2].m128i_i8[0] = 1;
    a1->m128i_i64[1] = v12;
  }
  else
  {
    a1[2].m128i_i64[0] = 0;
    *a1 = 0;
    a1[1] = 0;
  }
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
