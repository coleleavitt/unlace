__int64 __fastcall sub_1156E20(__int64 a1, _QWORD *a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  size_t v8; // r14
  size_t v9; // r9
  unsigned __int64 v10; // rdx
  char *v11; // rax
  _BYTE *v12; // rdi
  unsigned __int64 v13; // rax
  _UNKNOWN **v14; // r14
  _BYTE *v15; // rsi
  __m128i *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  unsigned __int64 v19; // rax
  size_t v21; // rdx
  _QWORD *v22; // [rsp+8h] [rbp-F0h] BYREF
  void **v23; // [rsp+10h] [rbp-E8h]
  char *v24; // [rsp+18h] [rbp-E0h]
  char v25; // [rsp+2Fh] [rbp-C9h] BYREF
  void *v26; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C0h]
  __int64 v28; // [rsp+40h] [rbp-B8h] BYREF
  void *dest; // [rsp+50h] [rbp-A8h] BYREF
  __m128 v30; // [rsp+58h] [rbp-A0h] BYREF
  void *v31; // [rsp+70h] [rbp-88h] BYREF
  __int64 v32; // [rsp+78h] [rbp-80h]
  __m128i v33; // [rsp+80h] [rbp-78h] BYREF
  void *src; // [rsp+90h] [rbp-68h] BYREF
  size_t n; // [rsp+98h] [rbp-60h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v37; // [rsp+B0h] [rbp-48h]

  v4 = (_BYTE *)a2[311];
  v5 = (__int64)&v4[a2[312]];
  v23 = &v26;
  v26 = &v28;
  sub_1155F00(&v26, v4, v5);
  dest = &v30.m128_u16[4];
  sub_1155FC0(&dest, v26, (__int64)v26 + v27);
  v6 = v30.m128_u64[0];
  if ( 0x7FFFFFFFFFFFFFFFLL - v30.m128_u64[0] <= 3 )
    goto LABEL_64;
  if ( dest == &v30.m128_u16[4] )
    v7 = 15;
  else
    v7 = v30.m128_u64[1];
  if ( v30.m128_u64[0] + 4 > v7 )
    sub_974DF0((__int64)&dest, v30.m128_u64[0], 0, "/avr", 4u);
  else
    *(_DWORD *)((char *)dest + v30.m128_u64[0]) = 1920360751;
  v30.m128_u64[0] = v6 + 4;
  *((_BYTE *)dest + v6 + 4) = 0;
  v37 = 260;
  src = &dest;
  if ( !(unsigned int)sub_22674F0(&src, &v31) && (_BYTE)v31 )
  {
    *(_QWORD *)a1 = a1 + 16;
    v18 = dest;
    if ( dest != &v30.m128_u16[4] )
    {
LABEL_34:
      *(_QWORD *)a1 = v18;
      *(_QWORD *)(a1 + 16) = v30.m128_u64[1];
LABEL_35:
      v19 = v30.m128_u64[0];
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 8) = v19;
      goto LABEL_36;
    }
LABEL_56:
    *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v30.m128_u16[4]);
    goto LABEL_35;
  }
  src = v36;
  v22 = v36;
  sub_1155FC0(&src, v26, (__int64)v26 + v27);
  v8 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 6 )
LABEL_64:
    std::__throw_length_error("basic_string::append");
  v9 = n + 7;
  if ( src == v22 )
    v10 = 15;
  else
    v10 = v36[0];
  if ( v9 > v10 )
  {
    v22 = (_QWORD *)(n + 7);
    sub_974DF0((__int64)&src, n, 0, "/../avr", 7u);
    v9 = (size_t)v22;
  }
  else
  {
    v11 = (char *)src + n;
    *(_DWORD *)v11 = 791555631;
    *((_WORD *)v11 + 2) = 30305;
    v11[6] = 114;
  }
  n = v9;
  *((_BYTE *)src + v8 + 7) = 0;
  v12 = dest;
  if ( src == v36 )
  {
    v21 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v36[0];
      else
        memcpy(dest, src, n);
      v21 = n;
      v12 = dest;
    }
    v30.m128_u64[0] = v21;
    v12[v21] = 0;
    v12 = src;
  }
  else
  {
    if ( dest == &v30.m128_u16[4] )
    {
      v22 = (_QWORD *)v36[0];
      dest = src;
      v30 = _mm_loadh_ps((const double *)&v22);
    }
    else
    {
      v22 = (_QWORD *)v36[0];
      v13 = v30.m128_u64[1];
      dest = src;
      v30 = _mm_loadh_ps((const double *)&v22);
      if ( v12 )
      {
        src = v12;
        v36[0] = v13;
        goto LABEL_16;
      }
    }
    v12 = v36;
    src = v36;
  }
LABEL_16:
  n = 0;
  *v12 = 0;
  if ( src != v36 )
    operator delete(src);
  src = &dest;
  v37 = 260;
  if ( !(unsigned int)sub_22674F0(&src, &v31) && (_BYTE)v31 )
  {
    *(_QWORD *)a1 = a1 + 16;
    v18 = dest;
    if ( dest != &v30.m128_u16[4] )
      goto LABEL_34;
    goto LABEL_56;
  }
  v14 = &off_2B7FC60;
  v24 = &v25;
  v22 = v36;
  while ( 1 )
  {
    v15 = *v14;
    src = v22;
    if ( v15 )
    {
      sub_1155F00(&src, v15, (__int64)v14[1] + (_QWORD)v15);
    }
    else
    {
      n = 0;
      LOBYTE(v36[0]) = 0;
    }
    v16 = (__m128i *)sub_978080(&src, 0, 0, *(_BYTE **)(a2[1] + 488LL), *(_QWORD *)(a2[1] + 496LL));
    v31 = &v33;
    if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
    {
      v33 = _mm_loadu_si128(v16 + 1);
    }
    else
    {
      v31 = (void *)v16->m128i_i64[0];
      v33.m128i_i64[0] = v16[1].m128i_i64[0];
    }
    v32 = v16->m128i_i64[1];
    v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
    v16->m128i_i64[1] = 0;
    v16[1].m128i_i8[0] = 0;
    if ( src != v22 )
      operator delete(src);
    src = &v31;
    v37 = 260;
    if ( !(unsigned int)sub_22674F0(&src, v24) )
    {
      if ( v25 )
        break;
    }
    if ( v31 == &v33 )
    {
      v14 += 2;
      if ( &unk_2B7FC90 == (_UNKNOWN *)v14 )
      {
LABEL_41:
        *(_BYTE *)(a1 + 32) = 0;
        goto LABEL_42;
      }
    }
    else
    {
      operator delete(v31);
      v14 += 2;
      if ( &unk_2B7FC90 == (_UNKNOWN *)v14 )
        goto LABEL_41;
    }
  }
  *(_QWORD *)a1 = a1 + 16;
  if ( v31 == &v33 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v33);
  }
  else
  {
    *(_QWORD *)a1 = v31;
    *(_QWORD *)(a1 + 16) = v33.m128i_i64[0];
  }
  v17 = v32;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 8) = v17;
LABEL_42:
  if ( dest != &v30.m128_u16[4] )
    operator delete(dest);
LABEL_36:
  if ( v26 != v23 + 2 )
    operator delete(v26);
  return a1;
}

