__int64 *__fastcall sub_227C560(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  char *v3; // rdi
  unsigned __int64 v4; // r12
  int (__fastcall *v5)(__int64, char *, unsigned int); // rax
  int v6; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r15d
  int (__fastcall *v12)(__int64, char *, unsigned int); // rax
  int v13; // eax
  size_t v14; // rdx
  size_t v15; // r15
  char *s; // [rsp+10h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-D0h]
  _BYTE v19[192]; // [rsp+28h] [rbp-C0h] BYREF

  v2 = (__int64 *)a1;
  v3 = *(char **)(a1 + 32);
  v4 = v2[3] - (_QWORD)v3;
  if ( v4 <= 3 )
  {
    v7 = 127;
  }
  else
  {
    v5 = *(int (__fastcall **)(__int64, char *, unsigned int))(*(_QWORD *)a2 + 8LL);
    if ( v5 == sub_B95B80 )
      v6 = snprintf(v3, (unsigned int)v4, *(const char **)(a2 + 8), *(unsigned __int8 *)(a2 + 16));
    else
      v6 = v5(a2, v3, v4);
    v7 = v6 - ((unsigned int)(v6 < (unsigned int)v4) - 1);
    if ( v6 < 0 )
      v7 = (unsigned int)(2 * v4);
    if ( v4 >= v7 )
    {
      v2[4] += v7;
      return v2;
    }
  }
  v8 = 0;
  s = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  while ( 1 )
  {
    if ( v7 == v8 )
      goto LABEL_21;
    if ( v7 < v8 )
    {
      si128.m128i_i64[0] = v7;
LABEL_21:
      v9 = s;
      v11 = v7;
      v12 = *(int (__fastcall **)(__int64, char *, unsigned int))(*(_QWORD *)a2 + 8LL);
      if ( v12 == sub_B95B80 )
        goto LABEL_13;
      goto LABEL_22;
    }
    if ( v7 > si128.m128i_i64[1] )
    {
      sub_2236E10((__int64)&s, v19, v7, 1);
      v8 = si128.m128i_i64[0];
    }
    v9 = s;
    if ( &s[v8] != &s[v7] )
    {
      memset(&s[v8], 0, v7 - v8);
      v9 = s;
    }
    v10 = *(_QWORD *)a2;
    si128.m128i_i64[0] = v7;
    v11 = v7;
    v12 = *(int (__fastcall **)(__int64, char *, unsigned int))(v10 + 8);
    if ( v12 == sub_B95B80 )
    {
LABEL_13:
      v13 = snprintf(v9, v7, *(const char **)(a2 + 8), *(unsigned __int8 *)(a2 + 16));
      goto LABEL_14;
    }
LABEL_22:
    v13 = v12(a2, v9, v7);
LABEL_14:
    v14 = v13 - ((unsigned int)(v13 < v11) - 1);
    v15 = 2 * v11;
    if ( v13 < 0 )
      v14 = v15;
    if ( v7 >= v14 )
      break;
    v8 = si128.m128i_i64[0];
    v7 = v14;
  }
  v2 = sub_227BF10(v2, (unsigned __int8 *)s, v14);
  if ( s != v19 )
    free(s);
  return v2;
}
