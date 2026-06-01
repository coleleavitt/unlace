_BYTE *__fastcall sub_1134510(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *i; // rbp
  _BYTE *result; // rax
  __int64 v7; // r14
  __m128i v8; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v9[72]; // [rsp+20h] [rbp-48h] BYREF

  v8.m128i_i32[0] = 990;
  v2 = sub_21B6DA0(a2, &v8, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  for ( i = (_QWORD *)(v3 + 8 * HIDWORD(v2)); i != v4; ++v4 )
  {
    if ( *v4 && (unsigned __int8)sub_21B9810(*v4, 990) )
      break;
  }
  result = v9;
  while ( i != v4 )
  {
    v7 = *v4;
    sub_21B5FF0(&v8, *v4, a2);
    sub_A82C60(a1, &v8);
    if ( (_BYTE *)v8.m128i_i64[0] != v9 )
      operator delete((void *)v8.m128i_i64[0]);
    result = *(_BYTE **)(v7 + 16);
    if ( !result )
      result = (_BYTE *)v7;
    ++v4;
    result[44] |= 1u;
    if ( v4 == i )
      break;
    while ( 1 )
    {
      if ( *v4 )
      {
        result = (_BYTE *)sub_21B9810(*v4, 990);
        if ( (_BYTE)result )
          break;
      }
      if ( i == ++v4 )
        return result;
    }
  }
  return result;
}
