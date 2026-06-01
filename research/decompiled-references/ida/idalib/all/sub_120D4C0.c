__int64 __fastcall sub_120D4C0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v6; // r13
  void *v7; // r15
  __m128i *v8; // rsi
  char *v9; // rdi
  void *src; // [rsp+0h] [rbp-8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp+0h] BYREF
  char vars18; // [rsp+20h] [rbp+18h]
  __int64 vars28; // [rsp+30h] [rbp+28h] BYREF
  __int16 vars48; // [rsp+50h] [rbp+48h]
  char vars58; // [rsp+60h] [rbp+58h] BYREF
  __int16 vars78; // [rsp+80h] [rbp+78h]
  char vars88; // [rsp+90h] [rbp+88h] BYREF
  __int16 varsA8; // [rsp+B0h] [rbp+A8h]
  __m128i varsB8; // [rsp+C0h] [rbp+B8h] BYREF
  __m128i varsC8; // [rsp+D0h] [rbp+C8h] BYREF
  __int16 varsD8; // [rsp+E0h] [rbp+D8h]
  void *ptr; // [rsp+F0h] [rbp+E8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp+F0h]
  _QWORD _108[24]; // [rsp+108h] [rbp+100h] BYREF

  _108[19] = n;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  sub_1131310((__int64)&src, a2);
  if ( !vars18 )
    return a1;
  v6 = n[0];
  v7 = src;
  ptr = _108;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n[0] > 0x80 )
  {
    sub_2236E10(&ptr, _108, n[0], 1);
    v9 = (char *)ptr + si128.m128i_i64[0];
    goto LABEL_16;
  }
  if ( n[0] )
  {
    v9 = (char *)_108;
LABEL_16:
    memcpy(v9, v7, v6);
    v6 += si128.m128i_i64[0];
  }
  si128.m128i_i64[0] = v6;
  varsA8 = 257;
  vars78 = 257;
  vars48 = 260;
  varsD8 = 257;
  vars28 = a3;
  sub_228A3B0(&ptr, &vars28, &vars58, &vars88, &varsB8);
  varsB8.m128i_i64[0] = (__int64)&varsC8;
  sub_120B6A0(&varsB8, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v8 = *(__m128i **)(a1 + 8);
  if ( v8 == *(__m128i **)(a1 + 16) )
  {
    sub_A82970((void ***)a1, v8, &varsB8);
    if ( (__m128i *)varsB8.m128i_i64[0] != &varsC8 )
      operator delete((void *)varsB8.m128i_i64[0]);
  }
  else
  {
    v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
    if ( (__m128i *)varsB8.m128i_i64[0] == &varsC8 )
    {
      v8[1] = _mm_load_si128(&varsC8);
    }
    else
    {
      v8->m128i_i64[0] = varsB8.m128i_i64[0];
      v8[1].m128i_i64[0] = varsC8.m128i_i64[0];
    }
    v8->m128i_i64[1] = varsB8.m128i_i64[1];
    *(_QWORD *)(a1 + 8) += 32LL;
  }
  if ( ptr != _108 )
    free(ptr);
  if ( vars18 && src != n )
    operator delete(src);
  return a1;
}
