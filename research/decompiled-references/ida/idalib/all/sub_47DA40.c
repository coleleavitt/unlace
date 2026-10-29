unsigned __int64 __fastcall sub_47DA40(__int64 a1, int a2)
{
  __int64 i; // rax
  const char *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  bool v8; // r14
  __int64 v9; // rax
  size_t v10; // r15
  _QWORD *v11; // r12
  void *v12; // rax
  void *v13; // rsi
  const char *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rbp
  int v17; // eax
  const char *v18; // r13
  size_t v19; // rax
  __int64 v20; // r14
  size_t v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbp
  bool v25; // r13
  __int64 v26; // rsi
  char *v27; // rax
  __m128i v28; // xmm0
  const char *v30; // rsi
  char *v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-98h]
  __int64 v33; // [rsp+10h] [rbp-88h] BYREF
  __int64 v34; // [rsp+18h] [rbp-80h] BYREF
  void *src; // [rsp+20h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __m128i v38; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v32 = switch_dbctx(a2);
  sub_7BEFF0(&v33, v32, *(_QWORD *)(a1 + 16), 0, 0);
  v34 = v33;
  if ( sub_7BF3B0(&v34, v32, "TraceWindowOpt", &src, 8, 72) > 0 )
  {
    if ( sub_7BF3B0(&v34, v32, "TracingWindowOpt", 0, 0, 72) < 0 )
    {
      s1 = (char *)src;
      sub_7BF4E0(&v34, v32, "TracingWindowOpt", &s1, 8, 72);
    }
    sub_7BF530(&v34, v32, "TraceWindowOpt", 72);
  }
  v34 = v33;
  if ( sub_7BF3B0(&v34, v32, "TraceWindowOptMask", &src, 8, 72) > 0 )
  {
    if ( sub_7BF3B0(&v34, v32, "TracingWindowOptMask", 0, 0, 72) < 0 )
    {
      s1 = (char *)src;
      sub_7BF4E0(&v34, v32, "TracingWindowOptMask", &s1, 8, 72);
    }
    sub_7BF530(&v34, v32, "TraceWindowOptMask", 72);
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  for ( i = netnode_qhashfirst(v33, &src, 72); i >= 0; i = netnode_qhashnext(v33, &src, v4, 72) )
  {
    v5 = sub_47D8C0(a1 + 72, (__int64)&src);
    v7 = v6;
    if ( !v6 )
      goto LABEL_5;
    v8 = 1;
    if ( !v5 && v6 != a1 + 80 )
    {
      v14 = haystack;
      if ( *(_QWORD *)(v6 + 40) )
      {
        v14 = *(const char **)(v6 + 32);
        if ( n[0] )
        {
LABEL_35:
          v8 = strcmp((const char *)src, v14) < 0;
          goto LABEL_11;
        }
      }
      else if ( n[0] )
      {
        goto LABEL_35;
      }
      v8 = strcmp(haystack, v14) < 0;
    }
LABEL_11:
    v9 = operator new(0x38u);
    v10 = n[0];
    *(_QWORD *)(v9 + 32) = 0;
    v11 = (_QWORD *)v9;
    *(_OWORD *)(v9 + 40) = 0;
    if ( v10 )
    {
      v12 = (void *)qalloc_or_throw(v10);
      v11[4] = v12;
      v13 = src;
      v11[6] = v10;
      memcpy(v12, v13, v10);
      v11[5] = v10;
    }
    std::_Rb_tree_insert_and_rebalance(v8, v11, v7, a1 + 80);
    ++*(_QWORD *)(a1 + 112);
LABEL_5:
    v4 = haystack;
    if ( n[0] )
      v4 = (const char *)src;
  }
  if ( *(int *)(a1 + 128) > 0 )
  {
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1 + 120) + (v15 << 6);
        v17 = *(_DWORD *)(v16 + 56);
        if ( (v17 & 0x804) == 0 )
        {
          if ( (v17 & 0xF) == 0 )
          {
            if ( !under_debugger )
              interr(1932);
            BUG();
          }
          if ( sub_7BE950(&v33, v32, *(_QWORD *)(v16 + 8), 0, 0, *(unsigned __int8 *)(v16 + 32)) > 0 )
          {
            v18 = *(const char **)v16;
            s1 = nullptr;
            v38 = 0;
            if ( v18 )
            {
              v19 = strlen(v18);
              v20 = v19 + 1;
              v21 = v19;
              s1 = (char *)qvector_reserve(&s1, 0, v19 + 1, 1);
              v38.m128i_i64[0] = v20;
              memmove(s1, v18, v21);
              s1[v21] = 0;
            }
            v22 = sub_47D8C0(a1 + 72, (__int64)&s1);
            v24 = v23;
            if ( v23 )
            {
              v25 = 1;
              if ( !v22 && v23 != a1 + 80 )
              {
                v30 = haystack;
                if ( *(_QWORD *)(v23 + 40) )
                  v30 = *(const char **)(v23 + 32);
                v31 = (char *)haystack;
                if ( v38.m128i_i64[0] )
                  v31 = s1;
                v25 = strcmp(v31, v30) < 0;
              }
              v26 = operator new(0x38u);
              v27 = s1;
              v28 = _mm_loadu_si128(&v38);
              s1 = nullptr;
              *(_QWORD *)(v26 + 32) = v27;
              *(__m128i *)(v26 + 40) = v28;
              v38 = 0;
              std::_Rb_tree_insert_and_rebalance(v25, v26, v24, a1 + 80);
              ++*(_QWORD *)(a1 + 112);
            }
            if ( s1 )
              break;
          }
        }
        if ( *(_DWORD *)(a1 + 128) <= (int)++v15 )
          goto LABEL_30;
      }
      v38.m128i_i64[0] = 0;
      ++v15;
      qfree(s1);
    }
    while ( *(_DWORD *)(a1 + 128) > (int)v15 );
  }
LABEL_30:
  if ( sub_7BF1C0(&v33, v32, 0, 0) >= 0 )
    *(_BYTE *)(a1 + 132) = 1;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v39 - __readfsqword(0x28u);
}
