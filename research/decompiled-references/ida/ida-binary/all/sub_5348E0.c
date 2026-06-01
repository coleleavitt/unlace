unsigned __int64 __fastcall sub_5348E0(const char *src, char *a2)
{
  size_t v3; // rax
  __int64 v4; // r14
  size_t v5; // rbx
  char *v6; // rbx
  void *v7; // rdi
  __int64 v9; // rax
  size_t v10; // rbp
  char *v11; // rbp
  __int64 v12; // r12
  const char *v13; // rdx
  char *v14; // rsi
  char *v15; // r13
  const char *v16; // rdi
  int v17; // eax
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  const char *v24; // r13
  __m128i v25; // xmm1
  char *v26; // r12
  char *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // xmm1_8
  __int64 v30; // rdi
  size_t v31; // rax
  size_t v32; // r12
  void *v33; // rdi
  size_t v34; // r13
  __int64 v35; // rax
  const char *v36; // rsi
  unsigned int v37; // eax
  __m128i v38; // [rsp+0h] [rbp-78h] BYREF
  char *s; // [rsp+10h] [rbp-68h]
  char *s2; // [rsp+18h] [rbp-60h]
  void *v41; // [rsp+20h] [rbp-58h] BYREF
  __m128i v42; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  s = a2;
  v43 = __readfsqword(0x28u);
  v42 = 0;
  v41 = nullptr;
  if ( src )
  {
    v3 = strlen(src);
    v4 = v3 + 1;
    v5 = v3;
    v41 = (void *)qvector_reserve(&v41, 0, v3 + 1, 1);
    v42.m128i_i64[0] = v4;
    memmove(v41, src, v5);
    *((_BYTE *)v41 + v5) = 0;
  }
  v6 = (char *)sub_24D6C0((__int64)&qword_8D2540, (__int64)&v41);
  if ( v6 != (char *)&dword_8D2548 || sub_534430(src) )
  {
    v7 = v41;
    if ( !v41 )
      return v43 - __readfsqword(0x28u);
LABEL_5:
    v42.m128i_i64[0] = 0;
    qfree(v7, (const char *)&v41);
    return v43 - __readfsqword(0x28u);
  }
  v9 = sub_534430(s);
  v7 = v41;
  if ( !v9 )
  {
    if ( !v41 )
      return v43 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41, (const char *)&v41);
  }
  v41 = nullptr;
  v42 = 0;
  if ( src )
  {
    v10 = strlen(src);
    v41 = (void *)qvector_reserve(&v41, 0, v10 + 1, 1);
    v42.m128i_i64[0] = v10 + 1;
    memmove(v41, src, v10);
    *((_BYTE *)v41 + v10) = 0;
  }
  v11 = (char *)qword_8D2550;
  if ( !qword_8D2550 )
    goto LABEL_34;
  v12 = v42.m128i_i64[0];
  v13 = &s1;
  s2 = (char *)v41;
  if ( v42.m128i_i64[0] )
    v13 = (const char *)v41;
  v38.m128i_i64[0] = (__int64)v13;
  while ( 1 )
  {
    v19 = *((_QWORD *)v11 + 5);
    if ( !v12 )
      break;
    if ( v19 )
      goto LABEL_26;
    v14 = s2;
    v15 = v11;
    v16 = &s1;
LABEL_19:
    v17 = strcmp(v16, v14);
    v18 = *((char **)v11 + 2);
    v11 = *((char **)v11 + 3);
    if ( v17 >= 0 )
    {
      v6 = v15;
      v11 = v18;
    }
    if ( !v11 )
      goto LABEL_28;
  }
  if ( v19 )
  {
LABEL_26:
    v16 = *((const char **)v11 + 4);
    v14 = (char *)v38.m128i_i64[0];
    v15 = v11;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)v11 + 2);
    if ( !v20 )
      break;
    v6 = v11;
    v11 = *((char **)v11 + 2);
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_26;
  }
  v6 = v11;
LABEL_28:
  if ( v6 == (char *)&dword_8D2548 )
    goto LABEL_34;
  if ( *((_QWORD *)v6 + 5) )
  {
    v21 = (char *)&s1;
    if ( v12 )
      v21 = s2;
    v22 = *((char **)v6 + 4);
    s2 = v21;
LABEL_33:
    if ( strcmp(s2, v22) < 0 )
    {
LABEL_34:
      v23 = operator new(0x50u);
      v24 = (const char *)v41;
      v22 = v6;
      v25 = _mm_loadu_si128(&v42);
      *(_OWORD *)(v23 + 64) = 0;
      v26 = (char *)v23;
      *(_QWORD *)(v23 + 32) = v24;
      *(_QWORD *)(v23 + 56) = 0;
      *(__m128i *)(v23 + 40) = v25;
      v41 = nullptr;
      v38 = v25;
      v42 = 0;
      v27 = (char *)sub_258240(&qword_8D2540, v6, v23 + 32);
      v6 = v27;
      if ( v28 )
      {
        if ( &dword_8D2548 == (int *)v28 || (v29 = _mm_load_si128(&v38).m128i_u64[0], v27) )
        {
          v30 = 1;
        }
        else
        {
          v36 = &s1;
          if ( *(_QWORD *)(v28 + 40) )
            v36 = *(const char **)(v28 + 32);
          v38.m128i_i64[0] = v28;
          if ( !v29 )
            v24 = &s1;
          v37 = strcmp(v24, v36);
          v28 = v38.m128i_i64[0];
          v30 = v37 >> 31;
        }
        v22 = v26;
        v6 = v26;
        std::_Rb_tree_insert_and_rebalance(v30, v26, v28, &dword_8D2548);
        ++qword_8D2568;
      }
      else if ( v26 )
      {
        if ( v24 )
        {
          *((_QWORD *)v26 + 5) = 0;
          qfree(v24, v22);
        }
        v22 = (_BYTE *)off_50;
        operator delete(v26, 0x50u);
      }
    }
  }
  else
  {
    v22 = (char *)&s1;
    if ( v12 )
      goto LABEL_33;
  }
  if ( s && (v31 = strlen(s), (v32 = v31) != 0) )
  {
    v33 = *((void **)v6 + 7);
    v34 = v31 + 1;
    if ( *((_QWORD *)v6 + 9) < v31 + 1 )
    {
      v35 = qvector_reserve(v6 + 56, *((_QWORD *)v6 + 7), v34, 1);
      *((_QWORD *)v6 + 7) = v35;
      v33 = (void *)v35;
    }
    *((_QWORD *)v6 + 8) = v34;
    v22 = s;
    memmove(v33, s, v32);
    *(_BYTE *)(*((_QWORD *)v6 + 7) + v32) = 0;
  }
  else
  {
    *((_QWORD *)v6 + 8) = 0;
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41, v22);
  }
  return v43 - __readfsqword(0x28u);
}
