char *__fastcall sub_22452F0(void ***a1, const void ***a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  unsigned __int8 v8; // cl
  size_t v9; // r12
  const void *v10; // r13
  __int64 v11; // rsi
  void **v12; // rdi
  char *v13; // rbp
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-C0h]
  _BYTE v17[176]; // [rsp+18h] [rbp-B0h] BYREF

  v7 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v17;
  if ( v7 && (v8 = *((_BYTE *)a2 + 32), v8 <= 6u) && ((1LL << v8) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v9 = (size_t)a2[1];
        v10 = *a2;
        v11 = v9 + 1;
        break;
      case 1:
        v11 = 1;
        v9 = 0;
        v10 = nullptr;
        break;
      case 3:
        v10 = *a2;
        if ( *a2 )
        {
          v9 = strlen((const char *)*a2);
          v11 = v9 + 1;
        }
        else
        {
          v11 = 1;
          v9 = 0;
        }
        break;
      case 4:
        v9 = (size_t)(*a2)[1];
        v10 = **a2;
        v11 = v9 + 1;
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0(a2, &ptr);
    v9 = n[0];
    v10 = ptr;
    v11 = n[0] + 1;
  }
  v12 = *a1;
  v13 = (char *)**a1;
  v12[10] = (char *)v12[10] + v11;
  if ( v12[1] >= &v13[v11] && v13 )
    *v12 = &v13[v11];
  else
    v13 = (char *)sub_986170((__int64)v12, v11, v11, 0, a5, a6);
  if ( v9 )
    memcpy(v13, v10, v9);
  v13[v9] = 0;
  if ( ptr != v17 )
    free(ptr);
  return v13;
}
