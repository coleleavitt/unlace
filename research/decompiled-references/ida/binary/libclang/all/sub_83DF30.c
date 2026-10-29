__int64 *__fastcall sub_83DF30(
        __int64 *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  _BYTE *v8; // r13
  void *v9; // rdi
  size_t v10; // rbp
  __int64 v12; // rax
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-60h]
  _BYTE v15[80]; // [rsp+28h] [rbp-50h] BYREF

  ptr = v15;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
  sub_2593F40(a2, (unsigned int)&ptr, a3, a4, a5, a6, a7);
  v8 = ptr;
  v9 = a1 + 2;
  v10 = n[0];
  *a1 = (__int64)(a1 + 2);
  if ( !v8 && v10 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( v10 > 0xF )
  {
    v12 = std::string::_M_create();
    *a1 = v12;
    v9 = (void *)v12;
    a1[2] = v10;
LABEL_12:
    memcpy(v9, v8, v10);
    v9 = (void *)*a1;
    goto LABEL_6;
  }
  if ( v10 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v8;
    goto LABEL_6;
  }
  if ( v10 )
    goto LABEL_12;
LABEL_6:
  a1[1] = v10;
  *((_BYTE *)v9 + v10) = 0;
  if ( ptr != v15 )
    free(ptr);
  return a1;
}

