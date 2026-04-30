__int64 *__fastcall sub_180980(__int64 *a1, __int64 a2)
{
  __int64 *result; // rax
  int v3; // edx
  __int64 v4; // r13
  __int64 v5; // r12
  const char *v6; // rbp
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  char *v9; // rsi
  const char *v10; // rbp
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __m128i si128; // xmm0
  const char *v17; // rdx
  const char **v18; // rax

  result = *(__int64 **)(a2 + 144);
  if ( !result || result == (__int64 *)((char *)&dword_0 + 2) )
  {
    v4 = 9;
    v5 = 8;
    v6 = "built-in";
    if ( *(_DWORD *)(a2 + 124) == 2 )
    {
      v7 = (_QWORD *)*a1;
      v4 = 22;
      v5 = 21;
      v6 = "built-in (run plugin)";
      if ( (unsigned __int64)a1[2] >= 0x16 )
        goto LABEL_10;
    }
    else
    {
      v7 = (_QWORD *)*a1;
      if ( (unsigned __int64)a1[2] >= 9 )
      {
LABEL_10:
        a1[1] = v4;
        *v7 = *(_QWORD *)v6;
        *(_QWORD *)((char *)v7 + v5 - 8) = *(_QWORD *)&v6[v5 - 8];
        v8 = (unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v9 = (char *)v7 - v8;
        v10 = (const char *)(v6 - v9);
        v11 = (v5 + (_DWORD)v9) & 0xFFFFFFF8;
        if ( v11 >= 8 )
        {
          v12 = v11 & 0xFFFFFFF8;
          v13 = 0;
          do
          {
            v14 = v13;
            v13 += 8;
            *(_QWORD *)(v8 + v14) = *(_QWORD *)&v10[v14];
          }
          while ( v13 < v12 );
        }
        result = (__int64 *)*a1;
        *(_BYTE *)(*a1 + v5) = 0;
        return result;
      }
    }
    v7 = (_QWORD *)qvector_reserve(a1, v7, v4, 1);
    *a1 = (__int64)v7;
    goto LABEL_10;
  }
  if ( result == (__int64 *)((char *)&dword_0 + 1) )
  {
    v15 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x18 )
    {
      v15 = qvector_reserve(a1, v15, 25, 1);
      *a1 = v15;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC370);
    a1[1] = 25;
    *(_QWORD *)(v15 + 16) = 0x656C75646F6D2072LL;
    *(__m128i *)v15 = si128;
    result = (__int64 *)*a1;
    *(_BYTE *)(*a1 + 24) = 0;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 152);
    switch ( v3 )
    {
      case 2:
        result = (__int64 *)result[12];
        return sub_169A50(a1, (__int64)"plugin \"%s\"", (const char *)result[6]);
      case 3:
        v17 = "?";
        v18 = *(const char ***)(result[2] + 24);
        if ( v18 )
          v17 = *v18;
        return sub_169A50(a1, (__int64)"processor module \"%s\"", v17);
      case 1:
        return sub_169A50(a1, (__int64)"plugin \"%s\"", (const char *)result[6]);
    }
  }
  return result;
}
