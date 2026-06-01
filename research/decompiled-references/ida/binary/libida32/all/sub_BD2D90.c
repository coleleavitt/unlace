_QWORD *__fastcall sub_BD2D90(_QWORD *a1, __int64 a2, const void *a3, size_t a4)
{
  size_t v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  char *v12; // rdi
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-C0h]
  _BYTE v15[176]; // [rsp+18h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v15;
  if ( a4 > 0x80 )
  {
    sub_22130D0(&ptr, v15, a4, 1);
    v12 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v7 = a4;
    if ( !a4 )
      goto LABEL_3;
    v12 = v15;
  }
  memcpy(v12, a3, a4);
  v7 = a4 + si128.m128i_i64[0];
LABEL_3:
  v8 = *(_QWORD *)(a2 + 8);
  si128.m128i_i64[0] = v7;
  sub_FC6D80(v8, &ptr);
  v9 = ptr;
  v10 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_BD2CD0(a1, v9, (__int64)&v9[v10]);
  if ( ptr != v15 )
    free(ptr);
  return a1;
}

