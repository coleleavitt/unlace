__int64 __fastcall sub_105B250(__int64 a1, __int64 a2, char **a3)
{
  __int64 v3; // r15
  char *v6; // rsi
  char v7; // al
  size_t v9; // rax
  size_t v10; // rax
  _BYTE *v11; // rdi
  size_t v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __m128i *v15; // rax
  void *v16; // rsi
  __m128i *v17; // rax
  _BYTE *v18; // rdi
  size_t v19; // [rsp+8h] [rbp-C0h]
  size_t v20; // [rsp+8h] [rbp-C0h]
  void *v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B0h]
  __m128i v23; // [rsp+20h] [rbp-A8h] BYREF
  void *v24; // [rsp+30h] [rbp-98h] BYREF
  size_t v25; // [rsp+38h] [rbp-90h]
  _QWORD v26[2]; // [rsp+40h] [rbp-88h] BYREF
  void *src; // [rsp+50h] [rbp-78h] BYREF
  size_t n; // [rsp+58h] [rbp-70h]
  _QWORD v29[2]; // [rsp+60h] [rbp-68h] BYREF
  void *v30[2]; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v31[4]; // [rsp+80h] [rbp-48h] BYREF

  v3 = a1 + 16;
  v6 = *a3;
  v23.m128i_i8[0] = 0;
  v22 = 0;
  v21 = &v23;
  v7 = *v6;
  if ( *v6 != 101 && v7 != 119 )
  {
    *(_QWORD *)a1 = v3;
    if ( v7 == 112 )
    {
      v9 = j__strlen("r");
      sub_10388C0((_QWORD *)a1, "r", (__int64)&aArmv7R[v9 + 6]);
      if ( v21 != &v23 )
        operator delete(v21);
    }
    else
    {
      *(_BYTE *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = 1;
      *(_BYTE *)(a1 + 17) = 0;
    }
    return a1;
  }
  src = v29;
  sub_10388C0(&src, v6, (__int64)(v6 + 2));
  v24 = v26;
  v10 = j__strlen("^");
  sub_10388C0(&v24, "^", (__int64)&aVirtfunc[v10 + 11]);
  v11 = v24;
  v12 = v25 + n;
  if ( v24 == v26 )
    v13 = 15;
  else
    v13 = v26[0];
  if ( v12 <= v13 )
  {
    if ( n )
    {
      v18 = (char *)v24 + v25;
      if ( n == 1 )
      {
        *v18 = *(_BYTE *)src;
        v11 = v24;
      }
      else
      {
        v20 = v25 + n;
        memcpy(v18, src, n);
        v11 = v24;
        v12 = v20;
      }
    }
  }
  else
  {
    if ( src == v29 )
      v14 = 15;
    else
      v14 = v29[0];
    if ( v12 <= v14 )
    {
      v15 = (__m128i *)sub_99BDC0(&src, 0, 0, v24, v25);
      goto LABEL_16;
    }
    v19 = v25 + n;
    sub_998B30((__int64)&v24, v25, 0, src, n);
    v11 = v24;
    v12 = v19;
  }
  v25 = v12;
  v15 = (__m128i *)&v24;
  v11[v12] = 0;
LABEL_16:
  v30[0] = v31;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v31[0] = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v30[0] = (void *)v15->m128i_i64[0];
    *(_QWORD *)&v31[0] = v15[1].m128i_i64[0];
  }
  v16 = (void *)v15->m128i_i64[1];
  v15[1].m128i_i8[0] = 0;
  v30[1] = v16;
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  sub_A0AAD0((__int64)&v21, v30);
  if ( v30[0] != v31 )
    operator delete(v30[0]);
  if ( v24 != v26 )
    operator delete(v24);
  if ( src != v29 )
    operator delete(src);
  v17 = (__m128i *)v21;
  ++*a3;
  *(_QWORD *)a1 = v3;
  if ( v17 == &v23 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v23);
  }
  else
  {
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 16) = v23.m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = v22;
  return a1;
}
