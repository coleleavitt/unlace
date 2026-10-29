__int64 __fastcall sub_5D6A40(__m128i *a1)
{
  bool v1; // zf
  const char *v3; // rdi
  const char *v4; // rsi
  unsigned __int64 v5; // r12
  _QWORD *v6; // rbp
  size_t v7; // r14
  __int64 v8; // r13
  size_t v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  const char *v14; // r13
  void *v15; // rdi
  __int64 v16; // rax
  int v17; // [rsp+4h] [rbp-5Ch] BYREF
  void *src; // [rsp+8h] [rbp-58h] BYREF
  __int128 v19; // [rsp+10h] [rbp-50h]
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]

  v1 = a1[4].m128i_i16[0] == 6;
  v20 = __readfsqword(0x28u);
  v19 = 0;
  src = nullptr;
  if ( !v1 )
  {
    v4 = &a1[2].m128i_i8[8];
    lex_print_token(&src, &a1[2].m128i_u64[1]);
    goto LABEL_6;
  }
  v3 = haystack;
  if ( a1[3].m128i_i64[0] )
    v3 = (const char *)a1[2].m128i_i64[1];
  v4 = (const char *)&v17;
  if ( (unsigned __int8)is_ordinal_name(v3, &v17) )
  {
    v4 = "\"#%u\"";
    sub_3573A0((char **)&src);
LABEL_6:
    v5 = v19;
    goto LABEL_7;
  }
  v11 = a1[3].m128i_u64[0];
  if ( v11 <= 1 )
  {
    *(_QWORD *)&v19 = 0;
    goto LABEL_17;
  }
  v14 = (const char *)a1[2].m128i_i64[1];
  v15 = src;
  if ( *((_QWORD *)&v19 + 1) < v11 )
  {
    src = (void *)qvector_reserve(&src, src, a1[3].m128i_i64[0], 1);
    v15 = src;
  }
  v4 = v14;
  *(_QWORD *)&v19 = v11;
  memmove(v15, v14, v11 - 1);
  *((char *)src + v11 - 1) = 0;
  v5 = v19;
LABEL_7:
  v6 = (_QWORD *)a1[7].m128i_i64[1];
  if ( !v6 )
  {
    v6 = (_QWORD *)a1[8].m128i_i64[0];
    if ( !v6 )
      v6 = (_QWORD *)a1[6].m128i_i64[1];
  }
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v5 != 1 )
    {
      v8 = v6[20];
      v9 = v5 - 1;
      if ( v8 )
      {
        --v8;
        v9 = v7 + v8;
        v5 += v8;
      }
      v10 = v6[19];
      if ( v6[21] < v5 )
      {
        v16 = qvector_reserve(v6 + 19, v10, v5, 1);
        v6[19] = v16;
        v10 = v16;
      }
      v6[20] = v5;
      *(_BYTE *)(v10 + v9) = 0;
      v4 = (const char *)src;
      memcpy((void *)(v8 + v6[19]), src, v7);
    }
  }
LABEL_17:
  v12 = sub_5CCDC0(a1, v4);
  if ( src )
  {
    *(_QWORD *)&v19 = 0;
    qfree(src);
  }
  return v12;
}

