unsigned __int64 __fastcall sub_469500(__int64 a1, int a2)
{
  __int64 i; // rax
  const char *v4; // rdx
  const char *p_src; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // r15
  _QWORD *v10; // r12
  void *v11; // rax
  void *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rbp
  int v15; // eax
  const char *v16; // r13
  size_t v17; // rax
  __int64 v18; // r14
  size_t v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  char *v23; // rax
  __m128i v24; // xmm0
  const char *v26; // rsi
  char *v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-98h]
  unsigned int v29; // [rsp+18h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *src; // [rsp+20h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __m128i v34; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v28 = switch_dbctx(a2);
  sub_79BBF0(&v29, v28, *(_QWORD *)(a1 + 16), 0, 0);
  v30 = v29;
  if ( sub_79BFB0(&v30, v28, "TraceWindowOpt", &src, 4, 72) > 0 )
  {
    if ( sub_79BFB0(&v30, v28, "TracingWindowOpt", 0, 0, 72) < 0 )
    {
      LODWORD(s1) = (_DWORD)src;
      sub_79C0D0(&v30, v28, "TracingWindowOpt", &s1, 4, 72);
    }
    sub_79C120(&v30, v28, "TraceWindowOpt", 72);
  }
  v30 = v29;
  if ( sub_79BFB0(&v30, v28, "TraceWindowOptMask", &src, 4, 72) > 0 )
  {
    if ( sub_79BFB0(&v30, v28, "TracingWindowOptMask", 0, 0, 72) < 0 )
    {
      LODWORD(s1) = (_DWORD)src;
      sub_79C0D0(&v30, v28, "TracingWindowOptMask", &s1, 4, 72);
    }
    sub_79C120(&v30, v28, "TraceWindowOptMask", 72);
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  for ( i = netnode_qhashfirst(v29, &src, 72); i >= 0; i = netnode_qhashnext(v29, &src, v4, 72) )
  {
    p_src = (const char *)&src;
    v6 = sub_469380(a1 + 72, (__int64)&src);
    if ( !v7 )
      goto LABEL_5;
    if ( !v6 && v7 != a1 + 80 )
    {
      p_src = haystack;
      if ( *(_QWORD *)(v7 + 40) )
      {
        p_src = *(const char **)(v7 + 32);
        if ( n[0] )
        {
LABEL_35:
          strcmp((const char *)src, p_src);
          goto LABEL_11;
        }
      }
      else if ( n[0] )
      {
        goto LABEL_35;
      }
      strcmp(haystack, p_src);
    }
LABEL_11:
    v8 = operator new(0x38u);
    v9 = n[0];
    *(_QWORD *)(v8 + 32) = 0;
    v10 = (_QWORD *)v8;
    *(_OWORD *)(v8 + 40) = 0;
    if ( v9 )
    {
      v11 = (void *)qalloc_or_throw(v9, p_src);
      v10[4] = v11;
      v12 = src;
      v10[6] = v9;
      memcpy(v11, v12, v9);
      v10[5] = v9;
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 112);
LABEL_5:
    v4 = haystack;
    if ( n[0] )
      v4 = (const char *)src;
  }
  if ( *(int *)(a1 + 128) > 0 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a1 + 120) + (v13 << 6);
        v15 = *(_DWORD *)(v14 + 56);
        if ( (v15 & 0x804) == 0 )
        {
          if ( (v15 & 0xF) == 0 )
          {
            if ( !under_debugger )
              interr(1932);
            BUG();
          }
          if ( sub_79B5C0(&v29, v28, *(unsigned int *)(v14 + 8), 0, 0, *(unsigned __int8 *)(v14 + 32)) > 0 )
          {
            v16 = *(const char **)v14;
            s1 = nullptr;
            v34 = 0;
            if ( v16 )
            {
              v17 = strlen(v16);
              v18 = v17 + 1;
              v19 = v17;
              s1 = (char *)qvector_reserve(&s1, 0, v17 + 1, 1);
              v34.m128i_i64[0] = v18;
              memmove(s1, v16, v19);
              s1[v19] = 0;
            }
            v20 = sub_469380(a1 + 72, (__int64)&s1);
            if ( v21 )
            {
              if ( !v20 && v21 != a1 + 80 )
              {
                v26 = haystack;
                if ( *(_QWORD *)(v21 + 40) )
                  v26 = *(const char **)(v21 + 32);
                v27 = (char *)haystack;
                if ( v34.m128i_i64[0] )
                  v27 = s1;
                strcmp(v27, v26);
              }
              v22 = operator new(0x38u);
              v23 = s1;
              v24 = _mm_loadu_si128(&v34);
              s1 = nullptr;
              *(_QWORD *)(v22 + 32) = v23;
              *(__m128i *)(v22 + 40) = v24;
              v34 = 0;
              std::_Rb_tree_insert_and_rebalance();
              ++*(_QWORD *)(a1 + 112);
            }
            if ( s1 )
              break;
          }
        }
        if ( *(_DWORD *)(a1 + 128) <= (int)++v13 )
          goto LABEL_30;
      }
      v34.m128i_i64[0] = 0;
      ++v13;
      qfree(s1);
    }
    while ( *(_DWORD *)(a1 + 128) > (int)v13 );
  }
LABEL_30:
  if ( sub_79BDC0(&v29, v28, 0, 0) >= 0 )
    *(_BYTE *)(a1 + 132) = 1;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v35 - __readfsqword(0x28u);
}

