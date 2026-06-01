_QWORD *__fastcall sub_E46D50(_QWORD *a1, char *a2, __m128 a3)
{
  char *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  void (__fastcall *v6)(__int64, const char *); // rax
  unsigned __int64 v7; // r14
  __m128i si128; // xmm0
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdi

  v3 = a2;
  v4 = a1;
  v5 = *((_QWORD **)a2 + 21);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, const char *))(*v5 + 56LL);
    if ( v6 == sub_DF1620 )
    {
      a2 = (char *)v5[16];
      a1 = v5 + 16;
      if ( a2 == (char *)(v5 + 18) )
        goto LABEL_16;
      v7 = v5[18];
      if ( v7 > 0x21 )
      {
        if ( "cubing is not supported on tactics" < a2 || &a2[v5[17]] < "cubing is not supported on tactics" )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_18B6B20);
          *((_WORD *)a2 + 16) = 29539;
          *(__m128i *)a2 = si128;
          a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_18B6B30);
          *((__m128 *)a2 + 1) = a3;
          v9 = v5[16];
        }
        else
        {
          std::string::_M_replace_cold();
          v9 = v5[16];
        }
LABEL_7:
        v5[17] = 34;
        *(_BYTE *)(v9 + 34) = 0;
        goto LABEL_8;
      }
      v13 = 2 * v7;
      v14 = v13 + 1;
      if ( v13 <= 0x22 )
      {
LABEL_16:
        v13 = 34;
        v14 = 35;
      }
      v9 = operator new(v14);
      *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_18B6B20);
      a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_18B6B30);
      *(__m128 *)(v9 + 16) = a3;
      *(_WORD *)(v9 + 32) = 29539;
      a1 = (_QWORD *)v5[16];
      if ( v5 + 18 != a1 )
      {
        a2 = (char *)(v5[18] + 1LL);
        operator delete(a1, (unsigned __int64)a2);
      }
      v5[16] = v9;
      v5[18] = v13;
      goto LABEL_7;
    }
    a2 = "cubing is not supported on tactics";
    a1 = v5;
    v6((__int64)v5, "cubing is not supported on tactics");
  }
LABEL_8:
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
    {
      sub_186A4C0(*(double *)a3.m128_u64);
      v12 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v12, "cubing is not supported on tactics\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v10 = *((_QWORD *)v3 + 15);
  v4[1] = 0;
  *v4 = v10;
  return v4;
}

