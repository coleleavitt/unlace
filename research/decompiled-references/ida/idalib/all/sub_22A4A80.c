_QWORD *__fastcall sub_22A4A80(_QWORD *a1)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  _BYTE *v7; // rdi
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-B8h] BYREF
  void *dest; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v15[7]; // [rsp+38h] [rbp-A0h] BYREF
  __m128i src; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-58h] BYREF
  __m128i v18; // [rsp+90h] [rbp-48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-38h]

  src.m128i_i64[0] = (__int64)v17;
  v2 = operator new(0x19u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BB0);
  strcpy((char *)(v2 + 16), "inux-gnu");
  *(__m128i *)v2 = si128;
  src.m128i_i64[0] = v2;
  v17[0] = 24;
  src.m128i_i64[1] = 24;
  sub_22A4240(&v12, &src);
  if ( (_QWORD *)src.m128i_i64[0] != v17 )
    operator delete((void *)src.m128i_i64[0]);
  sub_22BC1E0(&src, v12.m128i_i64[0], v12.m128i_i64[1], 0);
  sub_22B9ED0(&dest, &src);
  if ( (_QWORD *)src.m128i_i64[0] != v17 )
    operator delete((void *)src.m128i_i64[0]);
  if ( (unsigned __int8)sub_22B7EC0(&dest) )
  {
    sub_22BB610(&src, &dest);
    v7 = dest;
    if ( (_QWORD *)src.m128i_i64[0] == v17 )
    {
      v10 = src.m128i_i64[1];
      if ( src.m128i_i64[1] )
      {
        if ( src.m128i_i64[1] == 1 )
          *(_BYTE *)dest = v17[0];
        else
          memcpy(dest, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
        v10 = src.m128i_i64[1];
        v7 = dest;
      }
      v15[0] = v10;
      v7[v10] = 0;
      v7 = (_BYTE *)src.m128i_i64[0];
      goto LABEL_15;
    }
    if ( dest == &v15[1] )
    {
      v11 = v17[0];
      dest = (void *)src.m128i_i64[0];
      *(__m128 *)v15 = _mm_loadh_ps((const double *)&v11);
    }
    else
    {
      v11 = v17[0];
      v8 = v15[1];
      dest = (void *)src.m128i_i64[0];
      *(__m128 *)v15 = _mm_loadh_ps((const double *)&v11);
      if ( v7 )
      {
        src.m128i_i64[0] = (__int64)v7;
        v17[0] = v8;
        goto LABEL_15;
      }
    }
    v7 = v17;
    src.m128i_i64[0] = (__int64)v17;
LABEL_15:
    src.m128i_i64[1] = 0;
    *v7 = 0;
    v9 = _mm_load_si128(&v18);
    v15[5] = v19;
    *(__m128i *)&v15[3] = v9;
    if ( (_QWORD *)src.m128i_i64[0] != v17 )
      operator delete((void *)src.m128i_i64[0]);
  }
  v4 = dest;
  v5 = v15[0];
  *a1 = a1 + 2;
  sub_22A3230(a1, v4, (__int64)&v4[v5]);
  if ( dest != &v15[1] )
    operator delete(dest);
  if ( (__int64 *)v12.m128i_i64[0] != &v13 )
    operator delete((void *)v12.m128i_i64[0]);
  return a1;
}
