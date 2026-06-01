__int64 __fastcall sub_228AF30(void ***a1, unsigned int a2)
{
  bool v3; // zf
  unsigned __int8 v4; // cl
  size_t v5; // rsi
  void *v6; // rbp
  __int64 v7; // rdx
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-B0h]
  _BYTE v11[160]; // [rsp+18h] [rbp-A0h] BYREF

  v3 = *((_BYTE *)a1 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v11;
  if ( v3 && (v4 = *((_BYTE *)a1 + 32), v4 <= 6u) && ((1LL << v4) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v5 = (size_t)a1[1];
        v6 = *a1;
        break;
      case 1:
        v5 = 0;
        v6 = nullptr;
        break;
      case 3:
        v6 = *a1;
        v5 = 0;
        if ( *a1 )
          v5 = j__strlen((const char *)*a1);
        break;
      case 4:
        v6 = **a1;
        v5 = (size_t)(*a1)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a1, (__int64)&ptr);
    v5 = si128.m128i_i64[0];
    v6 = ptr;
  }
  sub_228AB90((__int64)v6, v5, a2);
  LOBYTE(v6) = v7 != 0;
  if ( ptr != v11 )
    free(ptr);
  return (unsigned int)v6;
}
