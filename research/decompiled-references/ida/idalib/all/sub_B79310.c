_QWORD *__fastcall sub_B79310(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        const void *a7,
        size_t n)
{
  __int64 v8; // r15
  size_t v10; // r12
  size_t v11; // rbp
  size_t v12; // rcx
  _QWORD *v13; // r14

  v8 = a2;
  v10 = a5 + 1;
  v11 = a5 + 1 + n;
  v12 = v11 + 1;
  if ( a2 )
  {
    v8 = a2 + 40;
    v13 = (_QWORD *)sub_B902D0(48, a1, a2 + 40, v12);
  }
  else
  {
    v13 = (_QWORD *)sub_B902D0(48, a1, 0, v12);
  }
  sub_B725B0((__int64)v13, 0xAu, v8, a3);
  v13[5] = v10;
  *v13 = &off_2B4ABC0;
  if ( a5 )
  {
    memmove(v13 + 6, a4, a5);
    *((_BYTE *)v13 + a5 + 48) = 0;
    if ( !n )
      goto LABEL_5;
LABEL_7:
    memmove((char *)v13 + a5 + 49, a7, n);
    goto LABEL_5;
  }
  *((_BYTE *)v13 + 48) = 0;
  if ( n )
    goto LABEL_7;
LABEL_5:
  *((_BYTE *)v13 + v11 + 48) = 0;
  return v13;
}
