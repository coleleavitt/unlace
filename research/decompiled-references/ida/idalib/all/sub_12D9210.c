char *__fastcall sub_12D9210(_QWORD *a1, void ***a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  unsigned __int8 v7; // cl
  char *v8; // rbp
  size_t v9; // r12
  _BYTE *v10; // r13
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-D0h]
  _BYTE v14[192]; // [rsp+18h] [rbp-C0h] BYREF

  v6 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v14;
  if ( v6 )
  {
    v7 = *((_BYTE *)a2 + 32);
    if ( v7 <= 6u && ((1LL << v7) & 0x7A) != 0 )
    {
      switch ( *((_BYTE *)a2 + 32) )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v9 = (size_t)a2[1];
          v10 = *a2;
          goto LABEL_10;
        case 1:
          return nullptr;
        case 3:
          v10 = *a2;
          if ( !*a2 )
            return nullptr;
          v9 = strlen((const char *)*a2);
LABEL_10:
          v8 = nullptr;
          if ( v9 )
            goto LABEL_11;
          return v8;
        case 4:
          v10 = **a2;
          v9 = (size_t)(*a2)[1];
          goto LABEL_10;
        default:
          break;
      }
    }
  }
  v8 = nullptr;
  sub_22538C0(a2, &ptr);
  v9 = n[0];
  v10 = ptr;
  if ( n[0] )
  {
LABEL_11:
    v8 = (char *)a1[36];
    a1[46] += v9;
    if ( a1[37] >= (unsigned __int64)&v8[v9] && v8 )
      a1[36] = &v8[v9];
    else
      v8 = (char *)sub_986170((__int64)(a1 + 36), v9, v9, 0, a5, a6);
    memmove(v8, v10, v9);
    v10 = ptr;
  }
  if ( v10 != v14 )
    free(v10);
  return v8;
}
