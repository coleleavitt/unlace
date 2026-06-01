_QWORD *__fastcall sub_C16B30(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // r13
  signed __int64 v3; // rbx
  void *v4; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-60h]
  _BYTE v8[80]; // [rsp+18h] [rbp-50h] BYREF

  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  ptr = v8;
  sub_21F17D0(a2, &ptr);
  v2 = ptr;
  v3 = n[0];
  v4 = a1 + 2;
  *a1 = a1 + 2;
  if ( &v2[v3] && !v2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v3 > 0xF )
  {
    if ( v3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v4 = (void *)operator new(v3 + 1);
    a1[2] = v3;
    *a1 = v4;
LABEL_13:
    memcpy(v4, v2, v3);
    v4 = (void *)*a1;
    goto LABEL_6;
  }
  if ( v3 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v2;
    goto LABEL_6;
  }
  if ( v3 )
    goto LABEL_13;
LABEL_6:
  a1[1] = v3;
  *((_BYTE *)v4 + v3) = 0;
  if ( ptr != v8 )
    free(ptr);
  return a1;
}
