__int64 __fastcall sub_1065300(__int64 a1, __int64 a2, char **a3)
{
  __int64 v3; // r13
  char *v5; // rsi
  char v6; // al
  _WORD *v8; // r14
  size_t v9; // r15
  size_t v10; // r9
  __m128i *v11; // rax
  _WORD *v12; // rdi
  size_t v13; // [rsp+8h] [rbp-80h]
  size_t v14; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+18h] [rbp-70h]
  _WORD v17[8]; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v20[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a1 + 16;
  v5 = *a3;
  v6 = **a3;
  if ( v6 != 67 )
  {
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 17) = 0;
    return a1;
  }
  *a3 = v5 + 1;
  src = v20;
  v8 = v17;
  sub_1064E50(&src, v5, (__int64)(v5 + 2));
  v9 = n;
  v15 = v17;
  v16 = 1;
  v10 = n + 1;
  v17[0] = 94;
  if ( n + 1 <= 0xF )
  {
    if ( n )
    {
      if ( n == 1 )
      {
        HIBYTE(v17[0]) = *(_BYTE *)src;
      }
      else
      {
        v14 = n + 1;
        memcpy((char *)v17 + 1, src, n);
        v10 = v14;
      }
    }
  }
  else
  {
    if ( src != v20 && v10 <= v20[0] )
    {
      v11 = (__m128i *)sub_978080(&src, 0, 0, v17, 1u);
      goto LABEL_9;
    }
    v13 = n + 1;
    sub_974DF0((__int64)&v15, 1u, 0, src, n);
    v8 = v15;
    v10 = v13;
  }
  v16 = v10;
  v11 = (__m128i *)&v15;
  *((_BYTE *)v8 + v9 + 1) = 0;
LABEL_9:
  *(_QWORD *)a1 = v3;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    *(_QWORD *)a1 = v11->m128i_i64[0];
    *(_QWORD *)(a1 + 16) = v11[1].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = v11->m128i_i64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v12 = v15;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  if ( v12 != v17 )
    operator delete(v12);
  if ( src != v20 )
    operator delete(src);
  return a1;
}

