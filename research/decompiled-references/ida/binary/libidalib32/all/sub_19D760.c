unsigned __int64 __fastcall sub_19D760(const char *src, char *a2)
{
  size_t v2; // rax
  __int64 v3; // r14
  size_t v4; // rbx
  int *v5; // rbx
  size_t v7; // rbp
  int *v8; // rbp
  char *v9; // rax
  __int64 v10; // r12
  char *v11; // rsi
  const char *v12; // rdi
  int *v13; // r13
  int v14; // eax
  int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  char *v21; // r13
  __m128i v22; // xmm1
  int *v23; // r12
  int *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // xmm1_8
  size_t v27; // rax
  size_t v28; // r12
  void *v29; // rdi
  size_t v30; // r13
  __int64 v31; // rax
  const char *v32; // rsi
  __m128i v33; // [rsp+0h] [rbp-78h] BYREF
  char *s; // [rsp+10h] [rbp-68h]
  char *s2; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __m128i v37; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  s = a2;
  v38 = __readfsqword(0x28u);
  v37 = 0;
  s1 = nullptr;
  if ( src )
  {
    v2 = strlen(src);
    v3 = v2 + 1;
    v4 = v2;
    s1 = (char *)qvector_reserve();
    v37.m128i_i64[0] = v3;
    memmove(s1, src, v4);
    s1[v4] = 0;
  }
  v5 = (int *)sub_DD760((__int64)&qword_255DC0, (__int64)&s1);
  if ( v5 != &dword_255DC8 || sub_19D0F0(src) )
  {
    if ( !s1 )
      return v38 - __readfsqword(0x28u);
LABEL_5:
    v37.m128i_i64[0] = 0;
    qfree();
    return v38 - __readfsqword(0x28u);
  }
  if ( !sub_19D0F0(s) )
  {
    if ( !s1 )
      return v38 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  if ( s1 )
  {
    v37.m128i_i64[0] = 0;
    qfree();
  }
  s1 = nullptr;
  v37 = 0;
  if ( src )
  {
    v7 = strlen(src);
    s1 = (char *)qvector_reserve();
    v37.m128i_i64[0] = v7 + 1;
    memmove(s1, src, v7);
    s1[v7] = 0;
  }
  v8 = (int *)qword_255DD0;
  if ( !qword_255DD0 )
    goto LABEL_34;
  v9 = s1;
  v10 = v37.m128i_i64[0];
  s2 = s1;
  if ( !v37.m128i_i64[0] )
    v9 = (char *)::s1;
  v33.m128i_i64[0] = (__int64)v9;
  while ( 1 )
  {
    v16 = *((_QWORD *)v8 + 5);
    if ( !v10 )
      break;
    if ( v16 )
      goto LABEL_26;
    v11 = s2;
    v12 = ::s1;
    v13 = v8;
LABEL_19:
    v14 = strcmp(v12, v11);
    v15 = *((int **)v8 + 2);
    v8 = *((int **)v8 + 3);
    if ( v14 >= 0 )
    {
      v5 = v13;
      v8 = v15;
    }
    if ( !v8 )
      goto LABEL_28;
  }
  if ( v16 )
  {
LABEL_26:
    v12 = *((const char **)v8 + 4);
    v11 = (char *)v33.m128i_i64[0];
    v13 = v8;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v17 = *((_QWORD *)v8 + 2);
    if ( !v17 )
      break;
    v5 = v8;
    v8 = *((int **)v8 + 2);
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_26;
  }
  v5 = v8;
LABEL_28:
  if ( v5 == &dword_255DC8 )
    goto LABEL_34;
  if ( *((_QWORD *)v5 + 5) )
  {
    v18 = s2;
    if ( !v10 )
      v18 = (char *)::s1;
    v19 = *((const char **)v5 + 4);
    s2 = v18;
LABEL_33:
    if ( strcmp(s2, v19) < 0 )
    {
LABEL_34:
      v20 = operator new(0x50u);
      v21 = s1;
      v22 = _mm_loadu_si128(&v37);
      *(_OWORD *)(v20 + 64) = 0;
      v23 = (int *)v20;
      *(_QWORD *)(v20 + 32) = v21;
      *(_QWORD *)(v20 + 56) = 0;
      *(__m128i *)(v20 + 40) = v22;
      s1 = nullptr;
      v33 = v22;
      v37 = 0;
      v24 = (int *)sub_E6470(&qword_255DC0, v5, v20 + 32);
      v5 = v24;
      if ( v25 )
      {
        if ( &dword_255DC8 != (int *)v25 )
        {
          v26 = _mm_load_si128(&v33).m128i_u64[0];
          if ( !v24 )
          {
            if ( *(_QWORD *)(v25 + 40) )
              v32 = *(const char **)(v25 + 32);
            else
              v32 = ::s1;
            if ( !v26 )
              v21 = (char *)::s1;
            v33.m128i_i64[0] = v25;
            strcmp(v21, v32);
          }
        }
        v5 = v23;
        std::_Rb_tree_insert_and_rebalance();
        ++qword_255DE8;
      }
      else if ( v23 )
      {
        if ( v21 )
        {
          *((_QWORD *)v23 + 5) = 0;
          qfree();
        }
        operator delete(v23, 0x50u);
      }
    }
  }
  else if ( v10 )
  {
    v19 = ::s1;
    goto LABEL_33;
  }
  if ( s && (v27 = strlen(s), (v28 = v27) != 0) )
  {
    v29 = *((void **)v5 + 7);
    v30 = v27 + 1;
    if ( *((_QWORD *)v5 + 9) < v27 + 1 )
    {
      v31 = qvector_reserve();
      *((_QWORD *)v5 + 7) = v31;
      v29 = (void *)v31;
    }
    *((_QWORD *)v5 + 8) = v30;
    memmove(v29, s, v28);
    *(_BYTE *)(*((_QWORD *)v5 + 7) + v28) = 0;
  }
  else
  {
    *((_QWORD *)v5 + 8) = 0;
  }
  if ( s1 )
  {
    v37.m128i_i64[0] = 0;
    qfree();
  }
  return v38 - __readfsqword(0x28u);
}

