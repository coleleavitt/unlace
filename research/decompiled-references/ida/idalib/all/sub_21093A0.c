__int64 __fastcall sub_21093A0(__int64 a1, void ***a2)
{
  bool v3; // zf
  unsigned __int8 v4; // cl
  const void **v5; // rbx
  _BYTE *v6; // r13
  _BYTE *v7; // rax
  size_t v8; // r8
  __int64 v9; // rdi
  const void **v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  _BYTE *v13; // rax
  size_t v14; // rax
  __int64 v15; // rbx
  const void **v17[4]; // [rsp+0h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+20h] [rbp-D8h]
  void *s; // [rsp+30h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-C0h]
  _BYTE v21[176]; // [rsp+48h] [rbp-B0h] BYREF

  v3 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  s = v21;
  if ( v3 )
  {
    v4 = *((_BYTE *)a2 + 32);
    if ( v4 <= 6u && ((1LL << v4) & 0x7A) != 0 )
    {
      switch ( *((_BYTE *)a2 + 32) )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v5 = (const void **)a2[1];
          v6 = *a2;
          goto LABEL_4;
        case 1:
          v6 = nullptr;
          v5 = nullptr;
          goto LABEL_24;
        case 3:
          v6 = *a2;
          if ( !*a2 )
            goto LABEL_30;
          v5 = (const void **)j__strlen((const char *)*a2);
          goto LABEL_4;
        case 4:
          v6 = **a2;
          v5 = (const void **)(*a2)[1];
          goto LABEL_4;
        default:
          break;
      }
    }
  }
  sub_22538C0(a2, &s);
  v5 = (const void **)n[0];
  v6 = s;
LABEL_4:
  if ( !v5 )
    goto LABEL_30;
  v7 = memchr(v6, 92, (size_t)v5);
  if ( !v7 || v7 - v6 == -1 )
    goto LABEL_24;
  n[0] = 0;
  sub_A1FE50(&s, v6, (_BYTE *)v5 + (_QWORD)v6);
  v8 = n[0];
  v9 = 0;
  v10 = nullptr;
  if ( !n[0] )
  {
    v6 = s;
LABEL_30:
    v5 = nullptr;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v5 = (const void **)((char *)v10 + 1);
    v11 = v9 + 1;
    v12 = *((_BYTE *)s + v9);
    v13 = (char *)v10 + (_QWORD)s;
    if ( v12 != 92 )
      goto LABEL_9;
    if ( v11 == v8 )
      break;
    v12 = *((_BYTE *)s + v11);
    if ( v12 != 34 && v12 != 92 )
    {
      *v13 = 92;
      goto LABEL_10;
    }
    v11 = v9 + 2;
LABEL_9:
    *v13 = v12;
    if ( v8 == v11 )
      goto LABEL_17;
LABEL_10:
    v10 = v5;
    v9 = v11;
  }
  *v13 = 92;
LABEL_17:
  v14 = n[0];
  if ( (const void **)n[0] == v5 )
  {
LABEL_32:
    v6 = s;
    goto LABEL_24;
  }
  if ( n[0] > (unsigned __int64)v5 )
  {
    n[0] = (size_t)v5;
    goto LABEL_32;
  }
  if ( (unsigned __int64)v5 > n[1] )
  {
    sub_2236E10(&s, v21, v5, 1);
    v14 = n[0];
  }
  v6 = s;
  if ( (char *)s + v14 != (char *)v5 + (_QWORD)s )
  {
    memset((char *)s + v14, 0, (size_t)v5 - v14);
    v6 = s;
  }
  n[0] = (size_t)v5;
LABEL_24:
  v17[1] = v5;
  v18 = 261;
  v17[0] = (const void **)v6;
  v15 = sub_2108A30(a1, v17);
  if ( s != v21 )
    free(s);
  return v15;
}
