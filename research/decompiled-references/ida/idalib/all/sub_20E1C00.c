_QWORD *__fastcall sub_20E1C00(_QWORD *dest, int *a2)
{
  void *v3; // rdx
  const __m128i *v4; // rax
  __int64 v5; // rdx
  const __m128i *v7; // r15
  _BYTE *v8; // rdi
  char v9; // si
  const __m128i *v10; // r12
  _BYTE *v11; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  const __m128i *v15; // rcx
  _QWORD *v16; // rdi
  const __m128i *v18; // rsi
  __m128i v19; // xmm0

  v3 = (void *)dest[4];
  if ( dest[3] - (_QWORD)v3 > 9u )
  {
    qmemcpy(v3, "RootFlags(", 10);
    dest[4] += 10LL;
  }
  else
  {
    sub_227BF10(dest, "RootFlags(", 10);
  }
  v4 = (const __m128i *)sub_201F4D0();
  _R14D = *a2;
  v7 = v4;
  if ( !*a2 )
  {
    v8 = (_BYTE *)dest[4];
    v13 = dest[3] - (_QWORD)v8;
    goto LABEL_29;
  }
  v8 = (_BYTE *)dest[4];
  v9 = 0;
  v10 = (const __m128i *)((char *)v4 + 40 * v5);
  v11 = (_BYTE *)dest[3];
  do
  {
    while ( 1 )
    {
      __asm { tzcnt   ecx, r14d }
      v13 = v11 - v8;
      v14 = 1 << _ECX;
      if ( (_R14D & (1 << _ECX)) != 0 )
        break;
      _R14D &= ~v14;
      if ( !_R14D )
        goto LABEL_17;
    }
    if ( v9 )
    {
      if ( v13 > 2 )
      {
        v8[2] = 32;
        *(_WORD *)v8 = 31776;
        v8 = (_BYTE *)(dest[4] + 3LL);
        dest[4] = v8;
      }
      else
      {
        sub_227BF10(dest, " | ", 3);
        v8 = (_BYTE *)dest[4];
      }
      v11 = (_BYTE *)dest[3];
      v13 = v11 - v8;
    }
    if ( v10 == v7 )
      goto LABEL_13;
    v15 = (const __m128i *)((char *)v7 + 40);
    if ( v14 != v7[2].m128i_i32[0] )
    {
      while ( 1 )
      {
        v18 = v15;
        if ( v10 == v15 )
          break;
        v15 = (const __m128i *)((char *)v15 + 40);
        if ( v14 == v15[-1].m128i_i32[2] )
          goto LABEL_21;
      }
LABEL_13:
      if ( v13 > 8 )
      {
        *(_QWORD *)v8 = 0x3A64696C61766E69LL;
        v8[8] = 32;
        v16 = dest;
        dest[4] += 9LL;
      }
      else
      {
        v16 = (_QWORD *)sub_227BF10(dest, "invalid: ", 9);
      }
      sub_227B910(v16, v14);
      v11 = (_BYTE *)dest[3];
      v8 = (_BYTE *)dest[4];
      v13 = v11 - v8;
      goto LABEL_16;
    }
    v18 = v7;
LABEL_21:
    v19 = _mm_loadu_si128(v18);
    if ( v13 < v19.m128i_i64[1] )
    {
      sub_227BF10(dest, v19.m128i_i64[0], v19.m128i_i64[1]);
      v11 = (_BYTE *)dest[3];
      v8 = (_BYTE *)dest[4];
      v13 = v11 - v8;
    }
    else if ( v19.m128i_i64[1] )
    {
      memcpy(v8, (const void *)v19.m128i_i64[0], v19.m128i_u64[1]);
      v11 = (_BYTE *)dest[3];
      v8 = (_BYTE *)(dest[4] + v19.m128i_i64[1]);
      dest[4] = v8;
      v13 = v11 - v8;
    }
LABEL_16:
    v9 = 1;
    _R14D &= ~v14;
  }
  while ( _R14D );
LABEL_17:
  if ( v9 )
  {
    if ( v11 == v8 )
      goto LABEL_19;
LABEL_32:
    *v8 = 41;
    ++dest[4];
    return dest;
  }
LABEL_29:
  if ( v13 > 3 )
  {
    *(_DWORD *)v8 = 1701736270;
    v8 = (_BYTE *)(dest[4] + 4LL);
    dest[4] = v8;
  }
  else
  {
    sub_227BF10(dest, "None", 4);
    v8 = (_BYTE *)dest[4];
  }
  if ( (_BYTE *)dest[3] != v8 )
    goto LABEL_32;
LABEL_19:
  sub_227BF10(dest, ")", 1);
  return dest;
}
