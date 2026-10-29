__int64 __fastcall sub_2289C70(void ***a1)
{
  bool v1; // zf
  unsigned __int8 v2; // cl
  __int128 v3; // rdi
  void *v4; // rbp
  __int64 v5; // rdx
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-B0h]
  _BYTE v9[160]; // [rsp+18h] [rbp-A0h] BYREF

  v1 = *((_BYTE *)a1 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v9;
  if ( v1 && (v2 = *((_BYTE *)a1 + 32), v2 <= 6u) && ((1LL << v2) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        *((_QWORD *)&v3 + 1) = a1[1];
        v4 = *a1;
        break;
      case 1:
        *((_QWORD *)&v3 + 1) = 0;
        v4 = nullptr;
        break;
      case 3:
        v4 = *a1;
        *((_QWORD *)&v3 + 1) = 0;
        if ( *a1 )
          *((_QWORD *)&v3 + 1) = j__strlen((const char *)*a1);
        break;
      case 4:
        v4 = **a1;
        *((_QWORD *)&v3 + 1) = (*a1)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a1, (__int64)&ptr);
    *((_QWORD *)&v3 + 1) = si128.m128i_i64[0];
    v4 = ptr;
  }
  *(_QWORD *)&v3 = v4;
  sub_2289AE0(v3, 0);
  LOBYTE(v4) = v5 != 0;
  if ( ptr != v9 )
    free(ptr);
  return (unsigned int)v4;
}
