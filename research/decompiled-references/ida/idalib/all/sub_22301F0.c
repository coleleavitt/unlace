char *__fastcall sub_22301F0(__int64 a1, const void ***a2)
{
  bool v2; // zf
  unsigned __int8 v3; // cl
  const void *v4; // r15
  size_t v5; // rbp
  _BYTE *v6; // r14
  char *v7; // rax
  char *v8; // r12
  char *v9; // rcx
  void *ptr; // [rsp+0h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-150h]
  _BYTE v13[320]; // [rsp+18h] [rbp-140h] BYREF

  v2 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v13;
  if ( v2 && (v3 = *((_BYTE *)a2 + 32), v3 <= 6u) && ((1LL << v3) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v5 = (size_t)a2[1];
        v4 = *a2;
        break;
      case 1:
        v5 = 0;
        v4 = nullptr;
        break;
      case 3:
        v4 = *a2;
        v5 = 0;
        if ( *a2 )
          v5 = strlen((const char *)*a2);
        break;
      case 4:
        v4 = **a2;
        v5 = (size_t)(*a2)[1];
        break;
      default:
        goto LABEL_3;
    }
    v6 = v13;
  }
  else
  {
LABEL_3:
    sub_22538C0(a2, &ptr);
    v4 = ptr;
    v5 = n[0];
    v6 = ptr;
  }
  v7 = (char *)malloc(v5 + a1 + 9);
  v8 = v7;
  if ( !v7 )
    sub_2221CE0("Allocation failed", 1u);
  *(_QWORD *)&v7[a1] = v5;
  v9 = &v7[a1 + 8];
  if ( v5 )
    v9 = (char *)memcpy(&v7[a1 + 8], v4, v5);
  v9[v5] = 0;
  if ( v6 != v13 )
    free(v6);
  return v8;
}
