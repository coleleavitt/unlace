__int64 *__fastcall sub_804210(__int64 *a1, __int64 a2, const void *a3, size_t a4)
{
  size_t v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // r13
  void *v10; // rdi
  size_t v11; // rbp
  char *v13; // rdi
  __int64 v14; // rax
  void *ptr; // [rsp+10h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-D0h]
  _BYTE dest[192]; // [rsp+28h] [rbp-C0h] BYREF

  ptr = dest;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  if ( a4 > 0x80 )
  {
    sub_25D6230(&ptr, dest, a4, 1);
    v13 = (char *)ptr + n[0];
    goto LABEL_13;
  }
  v7 = a4;
  if ( a4 )
  {
    v13 = dest;
LABEL_13:
    memcpy(v13, a3, a4);
    v7 = a4 + n[0];
  }
  v8 = *(_QWORD *)(a2 + 8);
  n[0] = v7;
  sub_C8DCE0(v8, &ptr);
  v9 = ptr;
  v10 = a1 + 2;
  v11 = n[0];
  *a1 = (__int64)(a1 + 2);
  if ( !v9 && v11 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( v11 > 0xF )
  {
    v14 = std::string::_M_create();
    *a1 = v14;
    v10 = (void *)v14;
    a1[2] = v11;
  }
  else
  {
    if ( v11 == 1 )
    {
      *((_BYTE *)a1 + 16) = *v9;
      goto LABEL_8;
    }
    if ( !v11 )
      goto LABEL_8;
  }
  memcpy(v10, v9, v11);
  v10 = (void *)*a1;
LABEL_8:
  a1[1] = v11;
  *((_BYTE *)v10 + v11) = 0;
  if ( ptr != dest )
    free(ptr);
  return a1;
}

