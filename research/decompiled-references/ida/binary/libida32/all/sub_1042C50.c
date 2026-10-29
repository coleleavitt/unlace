__m128i *__fastcall sub_1042C50(__m128i *a1, __int64 a2, unsigned __int8 **a3)
{
  unsigned __int8 *v5; // r13
  unsigned __int8 v6; // al
  size_t v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  __m128i *v11; // rax
  __int8 *v12; // rdi
  size_t v13; // rdx
  int v14; // ecx
  __m128i *v15; // rax
  size_t v16; // rax
  __m128i *v17; // rax
  unsigned __int16 *v18; // rdi
  unsigned __int16 *v19; // rdi
  unsigned __int64 v20; // rdx
  size_t v22; // rax
  unsigned __int64 v23; // rdx
  size_t v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-C0h] BYREF
  void *dest; // [rsp+10h] [rbp-B8h]
  __m128 v27; // [rsp+18h] [rbp-B0h] BYREF
  void *v28; // [rsp+30h] [rbp-98h] BYREF
  size_t v29; // [rsp+38h] [rbp-90h]
  __m128i v30; // [rsp+40h] [rbp-88h] BYREF
  void *v31; // [rsp+50h] [rbp-78h] BYREF
  size_t v32; // [rsp+58h] [rbp-70h]
  _QWORD v33[2]; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]
  _OWORD v36[4]; // [rsp+80h] [rbp-48h] BYREF

  v5 = *a3;
  v27.m128_i8[8] = 0;
  v27.m128_u64[0] = 0;
  dest = &v27.m128_u16[4];
  v6 = *v5;
  if ( *v5 != 64 )
  {
    if ( v6 == 85 )
    {
      v31 = v33;
      sub_103ABE0(&v31, v5, (__int64)(v5 + 3));
      v28 = &v30;
      v7 = j__strlen("@3");
      sub_103ABE0(&v28, "@3", (__int64)&::a3[v7]);
      v8 = v29 + v32;
      if ( v28 == &v30 )
        v9 = 15;
      else
        v9 = v30.m128i_i64[0];
      if ( v8 <= v9 || (v31 == v33 ? (v10 = 15) : (v10 = v33[0]), v8 > v10) )
        v11 = (__m128i *)sub_9CA820(&v28, v31, v32);
      else
        v11 = (__m128i *)sub_978080(&v31, 0, 0, v28, v29);
      src = v36;
      if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
      {
        v36[0] = _mm_loadu_si128(v11 + 1);
      }
      else
      {
        src = (void *)v11->m128i_i64[0];
        *(_QWORD *)&v36[0] = v11[1].m128i_i64[0];
      }
      n = v11->m128i_u64[1];
      v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
      v19 = (unsigned __int16 *)dest;
      v11->m128i_i64[1] = 0;
      v11[1].m128i_i8[0] = 0;
      if ( src == v36 )
      {
        v24 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)v19 = v36[0];
          else
            memcpy(v19, src, n);
          v24 = n;
          v19 = (unsigned __int16 *)dest;
        }
        v27.m128_u64[0] = v24;
        *((_BYTE *)v19 + v24) = 0;
        v19 = (unsigned __int16 *)src;
        goto LABEL_37;
      }
      if ( v19 == &v27.m128_u16[4] )
      {
        v25 = *(_QWORD *)&v36[0];
        dest = src;
        v27 = _mm_loadh_ps((const double *)&v25);
      }
      else
      {
        v25 = *(_QWORD *)&v36[0];
        v20 = v27.m128_u64[1];
        dest = src;
        v27 = _mm_loadh_ps((const double *)&v25);
        if ( v19 )
        {
          src = v19;
          *(_QWORD *)&v36[0] = v20;
LABEL_37:
          n = 0;
          *(_BYTE *)v19 = 0;
          if ( src != v36 )
            operator delete(src);
          if ( v28 != &v30 )
            operator delete(v28);
          if ( v31 != v33 )
            operator delete(v31);
          *a3 += 2;
LABEL_44:
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          if ( dest == &v27.m128_u16[4] )
          {
            a1[1] = _mm_load_si128((const __m128i *)&v27.m128_u16[4]);
          }
          else
          {
            a1->m128i_i64[0] = (__int64)dest;
            a1[1].m128i_i64[0] = v27.m128_i64[1];
          }
          a1->m128i_i64[1] = v27.m128_u64[0];
          return a1;
        }
      }
      v19 = (unsigned __int16 *)v36;
      src = v36;
      goto LABEL_37;
    }
    if ( v6 != 112 )
    {
      LOWORD(v36[0]) = v6;
      v12 = &v27.m128_i8[8];
      src = v36;
      n = 1;
      goto LABEL_12;
    }
    src = v36;
    v22 = j__strlen("r");
    sub_103ABE0(&src, "r", (__int64)&aArmv7R[v22 + 6]);
    v12 = (__int8 *)dest;
    if ( src == v36 )
    {
      v13 = n;
      if ( !n )
        goto LABEL_13;
      if ( n != 1 )
      {
        memcpy(dest, src, n);
        v13 = n;
        v12 = (__int8 *)dest;
        goto LABEL_13;
      }
LABEL_12:
      *v12 = v36[0];
      v13 = n;
      v12 = (__int8 *)dest;
LABEL_13:
      v27.m128_u64[0] = v13;
      v12[v13] = 0;
      v12 = (__int8 *)src;
      goto LABEL_14;
    }
    if ( dest == &v27.m128_u16[4] )
    {
      v25 = *(_QWORD *)&v36[0];
      dest = src;
      v27 = _mm_loadh_ps((const double *)&v25);
    }
    else
    {
      v25 = *(_QWORD *)&v36[0];
      v23 = v27.m128_u64[1];
      dest = src;
      v27 = _mm_loadh_ps((const double *)&v25);
      if ( v12 )
      {
        src = v12;
        *(_QWORD *)&v36[0] = v23;
        goto LABEL_14;
      }
    }
    v12 = (__int8 *)v36;
    src = v36;
LABEL_14:
    n = 0;
    *v12 = 0;
    if ( src != v36 )
      operator delete(src);
    goto LABEL_44;
  }
  v14 = sub_103B080((__int64)v5);
  LODWORD(v25) = v14;
  if ( v14 )
  {
    v31 = v33;
    sub_103ABE0(&v31, v5, (__int64)&v5[v14]);
    v15 = (__m128i *)sub_978080(&v31, 0, 0, "{", 1u);
    src = v36;
    if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
    {
      v36[0] = _mm_loadu_si128(v15 + 1);
    }
    else
    {
      src = (void *)v15->m128i_i64[0];
      *(_QWORD *)&v36[0] = v15[1].m128i_i64[0];
    }
    n = v15->m128i_u64[1];
    v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
    v15->m128i_i64[1] = 0;
    v15[1].m128i_i8[0] = 0;
    v16 = j__strlen("}");
    if ( v16 > 0x7FFFFFFFFFFFFFFFLL - n )
      std::__throw_length_error("basic_string::append");
    v17 = (__m128i *)sub_9CA820(&src, "}", v16);
    v28 = &v30;
    if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
    {
      v30 = _mm_loadu_si128(v17 + 1);
    }
    else
    {
      v28 = (void *)v17->m128i_i64[0];
      v30.m128i_i64[0] = v17[1].m128i_i64[0];
    }
    v29 = v17->m128i_u64[1];
    v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
    v17->m128i_i64[1] = 0;
    v17[1].m128i_i8[0] = 0;
    if ( src != v36 )
      operator delete(src);
    if ( v31 != v33 )
      operator delete(v31);
    *a3 += (unsigned int)(v25 - 1);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v28 == &v30 )
    {
      a1[1] = _mm_load_si128(&v30);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v28;
      a1[1].m128i_i64[0] = v30.m128i_i64[0];
    }
    v18 = (unsigned __int16 *)dest;
    a1->m128i_i64[1] = v29;
    if ( v18 != &v27.m128_u16[4] )
      operator delete(v18);
  }
  else
  {
    a1->m128i_i64[1] = 1;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    a1[1].m128i_i16[0] = 64;
  }
  return a1;
}

