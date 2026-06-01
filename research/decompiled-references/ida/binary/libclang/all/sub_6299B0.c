__int64 __fastcall sub_6299B0(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r14d
  size_t v3; // rdx
  size_t v4; // rdx
  char *v5; // rbx
  size_t v6; // r12
  int v8; // eax
  size_t v9; // r15
  size_t v10; // rdx
  void *s1; // [rsp+0h] [rbp-288h] BYREF
  size_t n; // [rsp+8h] [rbp-280h]
  void *v13; // [rsp+10h] [rbp-278h] BYREF
  __m128i si128; // [rsp+18h] [rbp-270h]
  _BYTE v15[264]; // [rsp+28h] [rbp-260h] BYREF
  void *ptr; // [rsp+130h] [rbp-158h] BYREF
  __m128i v17; // [rsp+138h] [rbp-150h]
  _BYTE v18[320]; // [rsp+148h] [rbp-140h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v13 = v15;
  s1 = sub_629860(a1, (char **)&v13);
  n = v3;
  ptr = v18;
  v17 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v5 = sub_629860(a2, (char **)&ptr);
  if ( n && (v6 = v4) != 0 )
  {
    v2 = 1;
    v8 = sub_25E3FC0(&s1, v5);
    if ( v8 >= 0 )
    {
      v2 = 0;
      if ( !v8 )
      {
        v9 = n;
        v10 = v6;
        if ( n <= v6 )
          v10 = n;
        if ( v10 && (v2 = memcmp(s1, v5, v10)) != 0 )
          v2 >>= 31;
        else
          LOBYTE(v2) = v9 < v6;
      }
    }
  }
  else
  {
    LOBYTE(v2) = n != 0;
  }
  if ( ptr != v18 )
    free(ptr);
  if ( v13 != v15 )
    free(v13);
  return v2;
}

