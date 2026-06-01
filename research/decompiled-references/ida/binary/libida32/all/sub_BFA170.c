_QWORD *__fastcall sub_BFA170(
        _QWORD *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  _BYTE *v7; // r13
  signed __int64 v8; // rbx
  void *v9; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-60h]
  _BYTE v13[80]; // [rsp+18h] [rbp-50h] BYREF

  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  ptr = v13;
  sub_21E7D50(a2, (unsigned int)&ptr, a3, a4, a5, a6, a7);
  v7 = ptr;
  v8 = n[0];
  v9 = a1 + 2;
  *a1 = a1 + 2;
  if ( &v7[v8] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (void *)operator new(v8 + 1);
    a1[2] = v8;
    *a1 = v9;
LABEL_13:
    memcpy(v9, v7, v8);
    v9 = (void *)*a1;
    goto LABEL_6;
  }
  if ( v8 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v7;
    goto LABEL_6;
  }
  if ( v8 )
    goto LABEL_13;
LABEL_6:
  a1[1] = v8;
  *((_BYTE *)v9 + v8) = 0;
  if ( ptr != v13 )
    free(ptr);
  return a1;
}

