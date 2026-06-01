__int64 __fastcall sub_5F28C0(__int64 a1)
{
  bool v1; // zf
  const char *v3; // rdi
  unsigned __int64 v4; // r12
  _QWORD *v5; // rbp
  size_t v6; // r14
  __int64 v7; // r13
  size_t v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned int v11; // ebx
  const void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  int v16; // [rsp+4h] [rbp-5Ch] BYREF
  void *src; // [rsp+8h] [rbp-58h] BYREF
  __int128 v18; // [rsp+10h] [rbp-50h]
  unsigned __int64 v19; // [rsp+20h] [rbp-40h]

  v1 = *(_WORD *)(a1 + 64) == 6;
  v19 = __readfsqword(0x28u);
  v18 = 0;
  src = nullptr;
  if ( !v1 )
  {
    lex_print_token(&src, a1 + 40);
    goto LABEL_6;
  }
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  if ( (unsigned __int8)is_ordinal_name(v3, &v16) )
  {
    sub_35A790((char **)&src);
LABEL_6:
    v4 = v18;
    goto LABEL_7;
  }
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 <= 1 )
  {
    *(_QWORD *)&v18 = 0;
    goto LABEL_17;
  }
  v13 = *(const void **)(a1 + 40);
  v14 = src;
  if ( *((_QWORD *)&v18 + 1) < v10 )
  {
    src = (void *)qvector_reserve(&src, src, *(_QWORD *)(a1 + 48), 1);
    v14 = src;
  }
  *(_QWORD *)&v18 = v10;
  memmove(v14, v13, v10 - 1);
  *((char *)src + v10 - 1) = 0;
  v4 = v18;
LABEL_7:
  v5 = *(_QWORD **)(a1 + 128);
  if ( !v5 )
  {
    v5 = *(_QWORD **)(a1 + 136);
    if ( !v5 )
      v5 = *(_QWORD **)(a1 + 112);
  }
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( v4 != 1 )
    {
      v7 = v5[20];
      v8 = v4 - 1;
      if ( v7 )
      {
        --v7;
        v8 = v6 + v7;
        v4 += v7;
      }
      v9 = v5[19];
      if ( v5[21] < v4 )
      {
        v15 = qvector_reserve(v5 + 19, v9, v4, 1);
        v5[19] = v15;
        v9 = v15;
      }
      v5[20] = v4;
      *(_BYTE *)(v9 + v8) = 0;
      memcpy((void *)(v7 + v5[19]), src, v6);
    }
  }
LABEL_17:
  v11 = sub_5E8BB0(a1);
  if ( src )
  {
    *(_QWORD *)&v18 = 0;
    qfree(src);
  }
  return v11;
}
