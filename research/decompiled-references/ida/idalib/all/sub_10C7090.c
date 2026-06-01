__m128i *__fastcall sub_10C7090(__m128i *a1, __int64 a2, __int64 *a3)
{
  _BYTE *v4; // rbp
  __int8 v5; // cl
  int v8; // r15d
  size_t v9; // rax
  __m128i *v10; // rax
  size_t v11; // rbp
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  __m128i *v14; // rax
  size_t v15; // rdx
  _BYTE *v16; // rsi
  size_t v17; // rbp
  _BYTE *v18; // rsi
  size_t v19; // rax
  char v20; // al
  _BYTE *v21; // rsi
  _BYTE *v22; // rdi
  size_t v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __m128i *v26; // rax
  __int64 v27; // rcx
  __m128i *v28; // rdx
  _BYTE *v29; // rsi
  _BYTE *v30; // rdi
  size_t v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  _BYTE *v34; // rdi
  _BYTE *v35; // rdi
  size_t v36; // [rsp+8h] [rbp-A0h]
  __m128i *v37; // [rsp+10h] [rbp-98h]
  size_t v38; // [rsp+18h] [rbp-90h]
  __m128i si128; // [rsp+20h] [rbp-88h] BYREF
  void *v40; // [rsp+30h] [rbp-78h] BYREF
  size_t v41; // [rsp+38h] [rbp-70h]
  _QWORD v42[2]; // [rsp+40h] [rbp-68h] BYREF
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  __m128i v45[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = (_BYTE *)*a3;
  v5 = *(_BYTE *)*a3;
  switch ( v5 )
  {
    case '@':
      v8 = sub_10BB3C0(*a3);
      if ( v8 )
      {
        v40 = v42;
        sub_10BB0C0(&v40, v4, (__int64)&v4[v8]);
        v9 = j__strlen("{");
        v10 = (__m128i *)sub_99BDC0(&v40, 0, 0, "{", v9);
        src = v45;
        if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
        {
          v45[0] = _mm_loadu_si128(v10 + 1);
        }
        else
        {
          src = (void *)v10->m128i_i64[0];
          v45[0].m128i_i64[0] = v10[1].m128i_i64[0];
        }
        n = v10->m128i_u64[1];
        v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
        v10->m128i_i64[1] = 0;
        v10[1].m128i_i8[0] = 0;
        v11 = n;
        if ( n == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        v12 = n + 1;
        if ( src == v45 )
          v13 = 15;
        else
          v13 = v45[0].m128i_i64[0];
        if ( v12 > v13 )
        {
          v36 = n + 1;
          sub_998B30((__int64)&src, n, 0, "}", 1u);
          v12 = v36;
        }
        else
        {
          *((_BYTE *)src + n) = 125;
        }
        n = v12;
        *((_BYTE *)src + v11 + 1) = 0;
        v14 = (__m128i *)src;
        v37 = &si128;
        if ( src == v45 )
        {
          v14 = &si128;
          si128 = _mm_load_si128(v45);
        }
        else
        {
          v37 = (__m128i *)src;
          si128.m128i_i64[0] = v45[0].m128i_i64[0];
        }
        v15 = n;
        v38 = n;
        if ( v40 != v42 )
        {
          operator delete(v40);
          v15 = v38;
          v14 = v37;
        }
        *a3 += (unsigned int)(v8 - 1);
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( v14 == &si128 )
        {
          a1[1] = _mm_load_si128(&si128);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)v14;
          a1[1].m128i_i64[0] = si128.m128i_i64[0];
        }
        a1->m128i_i64[1] = v15;
      }
      else
      {
        a1->m128i_i64[1] = 1;
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        a1[1].m128i_i16[0] = 64;
      }
      return a1;
    case 'D':
      sub_10BB320(a1, "{di}");
      return a1;
    case 'S':
      sub_10BB320(a1, "{si}");
      return a1;
    case 'W':
      v16 = (_BYTE *)*a3;
      *a3 = (__int64)(v4 + 1);
      src = v45;
      sub_10BB0C0(&src, v16, (__int64)(v4 + 2));
      v17 = n;
      if ( n == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::_M_replace_aux");
      v18 = src;
      if ( src == v45 )
        v19 = 15;
      else
        v19 = v45[0].m128i_i64[0];
      if ( n + 1 > v19 )
      {
        sub_998B30((__int64)&src, 0, 0, nullptr, 1u);
        v18 = src;
      }
      else if ( n )
      {
        if ( n == 1 )
          *((_BYTE *)src + 1) = *(_BYTE *)src;
        else
          memmove((char *)src + 1, src, n);
        v18 = src;
      }
      *v18 = 94;
      n = v17 + 1;
      *((_BYTE *)src + v17 + 1) = 0;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( src == v45 )
      {
        a1[1] = _mm_load_si128(v45);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)src;
        a1[1].m128i_i64[0] = v45[0].m128i_i64[0];
      }
      a1->m128i_i64[1] = n;
      return a1;
    case 'Y':
      v20 = v4[1];
      if ( v20 != 107 )
      {
        if ( v20 <= 107 )
        {
          if ( v20 != 50 && v20 != 105 )
            goto LABEL_54;
        }
        else if ( v20 != 116 && v20 != 122 && v20 != 109 )
        {
          goto LABEL_54;
        }
      }
      v21 = (_BYTE *)*a3;
      *a3 = (__int64)(v4 + 1);
      src = v45;
      sub_10BB0C0(&src, v21, (__int64)(v4 + 2));
      sub_10BB320(&v40, "^");
      v22 = v40;
      v23 = v41 + n;
      if ( v40 == v42 )
        v24 = 15;
      else
        v24 = v42[0];
      if ( v23 <= v24 )
      {
        if ( n )
        {
          v35 = (char *)v40 + v41;
          if ( n == 1 )
            *v35 = *(_BYTE *)src;
          else
            memcpy(v35, src, n);
          v22 = v40;
        }
      }
      else
      {
        if ( src == v45 )
          v25 = 15;
        else
          v25 = v45[0].m128i_i64[0];
        if ( v23 <= v25 )
        {
          v26 = (__m128i *)sub_99BDC0(&src, 0, 0, v40, v41);
LABEL_45:
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          v27 = v26->m128i_i64[0];
          v28 = v26 + 1;
          if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
            goto LABEL_75;
          goto LABEL_46;
        }
        sub_998B30((__int64)&v40, v41, 0, src, n);
        v22 = v40;
      }
      v41 = v23;
      v26 = (__m128i *)&v40;
      v22[v23] = 0;
      goto LABEL_45;
    case 'a':
      sub_10BB320(a1, "{ax}");
      return a1;
    case 'b':
      sub_10BB320(a1, "{bx}");
      return a1;
    case 'c':
      sub_10BB320(a1, "{cx}");
      return a1;
    case 'd':
      sub_10BB320(a1, "{dx}");
      return a1;
    case 'j':
      v20 = v4[1];
LABEL_54:
      if ( v20 != 82 && v20 != 114 )
        goto LABEL_56;
      v29 = (_BYTE *)*a3;
      *a3 = (__int64)(v4 + 1);
      src = v45;
      sub_10BB0C0(&src, v29, (__int64)(v4 + 2));
      sub_10BB320(&v40, "^");
      v30 = v40;
      v31 = v41 + n;
      if ( v40 == v42 )
        v32 = 15;
      else
        v32 = v42[0];
      if ( v31 <= v32 )
      {
        if ( n )
        {
          v34 = (char *)v40 + v41;
          if ( n == 1 )
            *v34 = *(_BYTE *)src;
          else
            memcpy(v34, src, n);
          v30 = v40;
        }
        goto LABEL_73;
      }
      if ( src == v45 )
        v33 = 15;
      else
        v33 = v45[0].m128i_i64[0];
      if ( v31 > v33 )
      {
        sub_998B30((__int64)&v40, v41, 0, src, n);
        v30 = v40;
LABEL_73:
        v41 = v31;
        v26 = (__m128i *)&v40;
        v30[v31] = 0;
        goto LABEL_74;
      }
      v26 = (__m128i *)sub_99BDC0(&src, 0, 0, v40, v41);
LABEL_74:
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v27 = v26->m128i_i64[0];
      v28 = v26 + 1;
      if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
      {
LABEL_75:
        a1[1] = _mm_loadu_si128(v26 + 1);
      }
      else
      {
LABEL_46:
        a1->m128i_i64[0] = v27;
        a1[1].m128i_i64[0] = v26[1].m128i_i64[0];
      }
      a1->m128i_i64[1] = v26->m128i_i64[1];
      v26->m128i_i64[0] = (__int64)v28;
      v26->m128i_i64[1] = 0;
      v26[1].m128i_i8[0] = 0;
      if ( v40 != v42 )
        operator delete(v40);
      if ( src != v45 )
        operator delete(src);
      return a1;
    case 'p':
      sub_10BB320(a1, "p");
      return a1;
    case 't':
      sub_10BB320(a1, "{st}");
      return a1;
    case 'u':
      sub_10BB320(a1, "{st(1)}");
      return a1;
    default:
LABEL_56:
      a1[1].m128i_i8[0] = v5;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      a1->m128i_i64[1] = 1;
      a1[1].m128i_i8[1] = 0;
      return a1;
  }
}
