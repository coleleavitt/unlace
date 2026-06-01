__int64 __fastcall sub_FB41D0(
        _QWORD *a1,
        const void *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  const void *v6; // rax
  size_t v7; // r10
  unsigned int v9; // r13d
  __int64 result; // rax
  __int64 v13; // rax
  size_t v14; // r8
  void *v15; // r9
  size_t v16; // rsi
  char *v17; // rbx
  size_t v18; // rax
  char *v19; // rdi
  size_t na; // [rsp+0h] [rbp-E8h]
  size_t nb; // [rsp+0h] [rbp-E8h]
  size_t nc; // [rsp+0h] [rbp-E8h]
  size_t nd; // [rsp+0h] [rbp-E8h]
  size_t n; // [rsp+0h] [rbp-E8h]
  void *srca; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+8h] [rbp-E0h]
  char *s; // [rsp+10h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-D0h]
  _BYTE v29[192]; // [rsp+28h] [rbp-C0h] BYREF

  v6 = a2;
  v7 = a3;
  v9 = a5;
  if ( !a1[3] )
    return sub_FB92A0(a2, a3, a4, a5, a6, a1[100], a1[1]);
  s = v29;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( a3 > 0x80 )
  {
    nc = a3;
    sub_22130D0(&s, v29, a3, 1);
    v7 = nc;
    v6 = a2;
    v19 = &s[si128.m128i_i64[0]];
LABEL_13:
    nd = v7;
    memcpy(v19, v6, v7);
    a3 = nd + si128.m128i_i64[0];
    goto LABEL_6;
  }
  if ( a3 )
  {
    v19 = v29;
    goto LABEL_13;
  }
LABEL_6:
  si128.m128i_i64[0] = a3;
  sub_FB3800((__int64)a1, (__int64)&s);
  v13 = si128.m128i_i64[0];
  v14 = a1[1];
  v15 = (void *)a1[100];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    n = a1[1];
    src = (void *)a1[100];
    sub_22130D0(&s, v29, si128.m128i_i64[0] + 1, 1);
    v13 = si128.m128i_i64[0];
    v15 = src;
    v14 = n;
  }
  v16 = 0;
  s[v13] = 0;
  v17 = s;
  if ( s )
  {
    srca = v15;
    na = v14;
    v18 = strlen(s);
    v15 = srca;
    v14 = na;
    v16 = v18;
  }
  result = sub_FB92A0(v17, v16, a4, v9, a6, v15, v14);
  if ( s != v29 )
  {
    nb = result;
    free(s);
    return nb;
  }
  return result;
}

