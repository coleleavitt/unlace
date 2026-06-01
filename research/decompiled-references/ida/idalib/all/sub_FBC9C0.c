__m128i *__fastcall sub_FBC9C0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        size_t a6,
        __int64 a7,
        __int64 a8)
{
  const char **i; // r15
  const char *v11; // r14
  void **v12; // r12
  const char *v13; // r14
  const char *v14; // r14
  const char *v15; // r12
  void **v17; // r15
  __int64 *v18; // rbp
  __int64 v19; // rsi
  __m128i v20; // xmm0
  const char *v21; // r12
  const char *v22; // r13
  const char *v23; // r12
  __m128i v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h]
  _QWORD v29[4]; // [rsp+40h] [rbp-68h] BYREF
  int v30; // [rsp+60h] [rbp-48h]
  __int64 v31; // [rsp+64h] [rbp-44h]
  int v32; // [rsp+6Ch] [rbp-3Ch]

  for ( i = (const char **)&off_2B4C400; ; i += 4 )
  {
    v15 = *i;
    if ( *i )
      break;
    if ( !a6 )
      goto LABEL_21;
    v11 = i[1];
    v12 = (void **)(i + 1);
    if ( !v11 )
      goto LABEL_9;
LABEL_6:
    if ( strlen(v11) == a6 )
    {
      if ( !a6 || !memcmp(v11, a5, a6) )
        goto LABEL_25;
LABEL_9:
      v13 = i[2];
      v12 = (void **)(i + 2);
      if ( !v13 )
        goto LABEL_13;
      goto LABEL_10;
    }
    v13 = i[2];
    v12 = (void **)(i + 2);
    if ( !v13 )
    {
      if ( !a6 )
      {
        v17 = (void **)(i + 2);
        goto LABEL_26;
      }
LABEL_13:
      v14 = i[3];
      v12 = (void **)(i + 3);
      if ( !v14 )
        goto LABEL_17;
      goto LABEL_14;
    }
LABEL_10:
    if ( strlen(v13) == a6 )
    {
      if ( !a6 || !memcmp(v13, a5, a6) )
        goto LABEL_25;
      goto LABEL_13;
    }
    v14 = i[3];
    v12 = (void **)(i + 3);
    if ( !v14 )
    {
      if ( !a6 )
        goto LABEL_25;
      goto LABEL_17;
    }
LABEL_14:
    if ( strlen(v14) == a6 && (!a6 || !memcmp(v14, a5, a6)) )
      goto LABEL_25;
LABEL_17:
    if ( i + 4 == (const char **)&off_2B4D420 )
    {
      v21 = i[4];
      if ( v21 )
      {
        if ( strlen(i[4]) == a6 && (!a6 || !memcmp(v21, a5, a6)) )
          goto LABEL_22;
        v22 = i[5];
        v12 = (void **)(i + 5);
        if ( v22 )
        {
LABEL_44:
          if ( strlen(v22) == a6 && (!a6 || !memcmp(v22, a5, a6)) )
          {
LABEL_25:
            v17 = v12;
            goto LABEL_26;
          }
          i = (const char **)(v12 + 1);
          v23 = (const char *)v12[1];
          if ( v23 )
            goto LABEL_48;
          if ( a6 )
            goto LABEL_27;
LABEL_21:
          if ( i == (const char **)&unk_2B4D438 )
            goto LABEL_27;
LABEL_22:
          a1[1].m128i_i8[0] = 0;
          return a1;
        }
        i += 5;
        if ( !a6 )
          goto LABEL_21;
      }
      else
      {
        if ( !a6 )
          goto LABEL_22;
        v22 = i[5];
        v12 = (void **)(i + 5);
        if ( v22 )
          goto LABEL_44;
      }
      i = (const char **)(v12 + 1);
      v23 = (const char *)v12[1];
      if ( !v23 )
        goto LABEL_27;
LABEL_48:
      if ( a6 != strlen(v23) || a6 && memcmp(v23, a5, a6) )
        goto LABEL_27;
      goto LABEL_21;
    }
  }
  if ( strlen(*i) == a6 && (!a6 || !memcmp(v15, a5, a6)) )
    goto LABEL_21;
  v11 = i[1];
  v12 = (void **)(i + 1);
  if ( v11 )
    goto LABEL_6;
  if ( a6 )
    goto LABEL_9;
  v17 = (void **)(i + 1);
LABEL_26:
  if ( v17 != (void **)&unk_2B4D438 )
    goto LABEL_22;
LABEL_27:
  v29[2] = a5;
  v18 = (__int64 *)&off_2B4C400;
  v29[3] = a6;
  v29[0] = 0;
  v29[1] = 0;
  v32 = 0;
  v30 = (a6 + 2) / 3;
  v31 = (unsigned int)(v30 + 1);
  do
  {
    v19 = *v18++;
    sub_101A620(v29, v19);
  }
  while ( &unk_2B4D438 != (_UNKNOWN *)v18 );
  sub_101A750(&v27, v29);
  if ( !(_BYTE)v28
    || !(unsigned int)sub_FBC550(*(_BYTE *)(a2 + 34) & 0xF, a3, a4, v27.m128i_i64[0], v27.m128i_i64[1], a7, a8, 1) )
  {
    goto LABEL_22;
  }
  v20 = _mm_load_si128(&v27);
  a1[1].m128i_i64[0] = v28;
  *a1 = v20;
  return a1;
}
