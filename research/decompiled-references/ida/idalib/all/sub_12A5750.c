__int64 __fastcall sub_12A5750(__int64 *a1, const char *a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, void *, __int64); // r12
  __int64 v8; // rbp
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __m128i v13; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v14; // [rsp+20h] [rbp-198h] BYREF
  __int64 v15; // [rsp+30h] [rbp-188h]
  char *s[2]; // [rsp+40h] [rbp-178h] BYREF
  __m128i v17; // [rsp+50h] [rbp-168h]
  __int64 v18; // [rsp+60h] [rbp-158h]
  void *ptr; // [rsp+70h] [rbp-148h] BYREF
  __m128i si128; // [rsp+78h] [rbp-140h]
  _BYTE v21[304]; // [rsp+88h] [rbp-130h] BYREF

  if ( *a4 )
  {
    if ( a2 )
    {
      v13.m128i_i64[0] = (__int64)a2;
      LOWORD(v15) = 773;
      v13.m128i_i64[1] = strlen(a2);
      v14.m128i_i64[0] = a3;
    }
    else
    {
      v14.m128i_i64[0] = a3;
      LOWORD(v15) = 773;
      v13 = 0u;
    }
    s[0] = (char *)&v13;
    ptr = v21;
    v6 = *a1;
    LOWORD(v18) = 770;
    v17.m128i_i64[0] = (__int64)a4;
    v7 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v6 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  }
  else
  {
    if ( a2 )
    {
      v13.m128i_i64[0] = (__int64)a2;
      LOWORD(v15) = 773;
      v13.m128i_i64[1] = strlen(a2);
      v14.m128i_i64[0] = a3;
    }
    else
    {
      v14.m128i_i64[0] = a3;
      LOWORD(v15) = 773;
      v13 = 0u;
    }
    v10 = _mm_load_si128(&v13);
    v11 = _mm_load_si128(&v14);
    ptr = v21;
    v12 = *a1;
    v18 = v15;
    *(__m128i *)s = v10;
    v7 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v12 + 16);
    v17 = v11;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  }
  sub_22538C0(s, &ptr);
  v8 = v7(a1, ptr, si128.m128i_i64[0]);
  if ( ptr != v21 )
    free(ptr);
  return v8;
}
