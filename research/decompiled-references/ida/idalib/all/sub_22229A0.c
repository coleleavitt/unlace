_QWORD *__fastcall sub_22229A0(_QWORD *dest, int a2)
{
  int v2; // r15d
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  const __m128i *v7; // rbx
  char v8; // r13
  __int32 v9; // ebp
  size_t v10; // rax
  _QWORD *v11; // r8
  size_t v12; // rcx
  const void *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // [rsp+0h] [rbp-68h]
  _QWORD *v18; // [rsp+8h] [rbp-60h]
  __int64 src_8; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-48h]

  v2 = a2;
  v4 = (_BYTE *)dest[4];
  if ( dest[3] <= (unsigned __int64)v4 )
  {
    sub_227BA10(dest, 40);
  }
  else
  {
    dest[4] = v4 + 1;
    *v4 = 40;
  }
  v5 = (_BYTE *)dest[3];
  v6 = (_BYTE *)dest[4];
  if ( a2 )
  {
    v7 = (const __m128i *)&unk_2BEAEA0;
    v8 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v7->m128i_i32[0];
        n = v7[1].m128i_u64[0];
        src_8 = _mm_loadu_si128(v7).m128i_i64[1];
        if ( (v2 & v7->m128i_i32[0]) == v7->m128i_i32[0] )
          break;
        v7 = (const __m128i *)((char *)v7 + 24);
        if ( &off_2BEB020 == (_UNKNOWN **)v7 )
          goto LABEL_13;
      }
      if ( v8 )
        break;
      if ( v6 != v5 )
      {
        *v6 = 32;
        v11 = dest;
        v6 = (_BYTE *)(dest[4] + 1LL);
        v16 = dest[3];
        dest[4] = v6;
        v10 = v16 - (_QWORD)v6;
LABEL_9:
        v12 = n;
        v13 = (const void *)src_8;
        if ( v10 >= n )
          goto LABEL_10;
        goto LABEL_18;
      }
      v15 = sub_227BF10(dest, " ", 1);
      v12 = n;
      v13 = (const void *)src_8;
      v6 = *(_BYTE **)(v15 + 32);
      v11 = (_QWORD *)v15;
      if ( *(_QWORD *)(v15 + 24) - (_QWORD)v6 >= n )
      {
LABEL_10:
        if ( v12 )
        {
          v18 = v11;
          v17 = v12;
          memcpy(v6, v13, v12);
          v18[4] += v17;
        }
        goto LABEL_12;
      }
LABEL_18:
      sub_227BF10(v11, v13, v12);
LABEL_12:
      v7 = (const __m128i *)((char *)v7 + 24);
      v6 = (_BYTE *)dest[4];
      v5 = (_BYTE *)dest[3];
      v2 = (unsigned __int16)v2 & (unsigned __int16)~(_WORD)v9 & 0x3FF;
      if ( &off_2BEB020 == (_UNKNOWN **)v7 )
      {
LABEL_13:
        if ( v5 <= v6 )
        {
          sub_227BA10(dest, 41);
        }
        else
        {
          dest[4] = v6 + 1;
          *v6 = 41;
        }
        return dest;
      }
    }
    v10 = v5 - v6;
    v11 = dest;
    v8 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v5 - v6) > 4 )
  {
    *(_DWORD *)v6 = 1701736302;
    v6[4] = 41;
    dest[4] += 5LL;
  }
  else
  {
    sub_227BF10(dest, "none)", 5);
  }
  return dest;
}
