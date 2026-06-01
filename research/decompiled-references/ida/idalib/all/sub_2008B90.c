__m128i *__fastcall sub_2008B90(__m128i *a1, __int64 *a2, _WORD *a3, unsigned __int64 a4)
{
  const void *v4; // r13
  size_t v6; // rbx
  char *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+0h] [rbp-468h] BYREF
  __m128i v14; // [rsp+10h] [rbp-458h] BYREF
  void *ptr; // [rsp+20h] [rbp-448h] BYREF
  __m128i si128; // [rsp+28h] [rbp-440h]
  _BYTE v17[1072]; // [rsp+38h] [rbp-430h] BYREF

  v4 = a3;
  v6 = a4;
  if ( a4 <= 1 )
  {
    ptr = v17;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  }
  else
  {
    if ( *a3 != 12078 )
    {
      v7 = v17;
      ptr = v17;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
      if ( a4 <= 0x400 )
        goto LABEL_5;
      goto LABEL_4;
    }
    v6 = a4 - 2;
    v4 = a3 + 1;
    ptr = v17;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
    if ( a4 - 2 > 0x400 )
    {
LABEL_4:
      sub_2236E10(&ptr, v17, v6, 1);
      v7 = (char *)ptr + si128.m128i_i64[0];
LABEL_5:
      memcpy(v7, v4, v6);
      v6 += si128.m128i_i64[0];
      goto LABEL_6;
    }
  }
  if ( v6 )
  {
    v7 = v17;
    goto LABEL_5;
  }
LABEL_6:
  v8 = *a2;
  si128.m128i_i64[0] = v6;
  v9 = (*(__int64 (__fastcall **)(__int64 *, void **))(v8 + 112))(a2, &ptr);
  if ( v9 )
  {
    sub_2220500(v13, v9, v10);
    v11 = v13[0];
    a1[2].m128i_i8[0] |= 1u;
    a1->m128i_i64[0] = v11;
  }
  else
  {
    sub_228EF50(&ptr, 0);
    v13[0] = &v14;
    sub_2007F10(v13, ptr, (__int64)ptr + si128.m128i_i64[0]);
    a1[2].m128i_i8[0] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v13[0] == &v14 )
    {
      a1[1] = _mm_load_si128(&v14);
    }
    else
    {
      a1->m128i_i64[0] = v13[0];
      a1[1].m128i_i64[0] = v14.m128i_i64[0];
    }
    a1->m128i_i64[1] = v13[1];
  }
  if ( ptr != v17 )
    free(ptr);
  return a1;
}
