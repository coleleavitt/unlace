char *__fastcall sub_15A4EB0(char **a1, const void ***a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  unsigned __int8 v7; // cl
  size_t v8; // r13
  const void *v9; // r14
  __int64 v10; // rsi
  char *v11; // r12
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-C0h]
  _BYTE v15[176]; // [rsp+18h] [rbp-B0h] BYREF

  v6 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v15;
  if ( v6 && (v7 = *((_BYTE *)a2 + 32), v7 <= 6u) && ((1LL << v7) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v8 = (size_t)a2[1];
        v9 = *a2;
        v10 = v8 + 1;
        break;
      case 1:
        v10 = 1;
        v8 = 0;
        v9 = nullptr;
        break;
      case 3:
        v9 = *a2;
        if ( *a2 )
        {
          v8 = strlen((const char *)*a2);
          v10 = v8 + 1;
        }
        else
        {
          v10 = 1;
          v8 = 0;
        }
        break;
      case 4:
        v8 = (size_t)(*a2)[1];
        v9 = **a2;
        v10 = v8 + 1;
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0(a2, &ptr);
    v8 = n[0];
    v9 = ptr;
    v10 = n[0] + 1;
  }
  v11 = *a1;
  a1[10] += v10;
  if ( a1[1] >= &v11[v10] && v11 )
    *a1 = &v11[v10];
  else
    v11 = (char *)sub_986170((__int64)a1, v10, v10, 0, a5, a6);
  if ( v8 )
    memmove(v11, v9, v8);
  v11[v8] = 0;
  if ( ptr != v15 )
    free(ptr);
  return v11;
}
