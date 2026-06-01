__int64 __fastcall set_idc_method(_QWORD *a1, const char *a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 *v5; // rax
  const char *v6; // rbx
  size_t v7; // rax
  __int64 v8; // r13
  size_t v9; // r12
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // r12
  char *v13; // r14
  char *v14; // rax
  _QWORD *v15; // r13
  const char *v16; // rsi
  const char *v17; // rdi
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  const char *v24; // rsi
  const char *v25; // rdi
  __int64 v26; // rax
  char *v27; // r13
  _QWORD *v28; // rsi
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // r12
  unsigned __int64 v33; // xmm0_8
  void *v34; // rdi
  const char *v35; // rsi
  __m128i v36; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v37; // [rsp+18h] [rbp-70h]
  void *v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+2Ch] [rbp-5Ch]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __m128i v41; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v3 = strchr(a2, 46);
  if ( !v3 )
    return 0;
  v4 = v3;
  v38 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v5 = (__int64 *)sub_76BCD0();
  v39 = sub_76D7A0(v5, a2);
  if ( v39 == 0x7FFFFFFF )
  {
    v22 = 0;
    goto LABEL_30;
  }
  v6 = v4 + 1;
  s2 = nullptr;
  v41 = 0;
  v7 = strlen(v6);
  v8 = v7 + 1;
  v9 = v7;
  s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
  v41.m128i_i64[0] = v8;
  memmove(s2, v6, v9);
  s2[v9] = 0;
  v10 = (_QWORD *)a1[2];
  v37 = a1 + 1;
  v11 = a1 + 1;
  if ( !v10 )
    goto LABEL_25;
  v12 = v41.m128i_i64[0];
  v13 = s2;
  v14 = (char *)haystack;
  v11 = v37;
  if ( v41.m128i_i64[0] )
    v14 = s2;
  v36.m128i_i64[0] = (__int64)v14;
  while ( 1 )
  {
    v20 = v10[5];
    if ( !v12 )
      break;
    if ( v20 )
      goto LABEL_16;
    v15 = v10;
    v16 = v13;
    v17 = haystack;
LABEL_9:
    v18 = strcmp(v17, v16);
    v19 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v18 >= 0 )
    {
      v11 = v15;
      v10 = v19;
    }
    if ( !v10 )
      goto LABEL_20;
  }
  if ( v20 )
  {
LABEL_16:
    v17 = (const char *)v10[4];
    v16 = (const char *)v36.m128i_i64[0];
    v15 = v10;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v21 = v10[2];
    if ( !v21 )
      break;
    v11 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v21 + 40) )
      goto LABEL_16;
  }
  v11 = v10;
LABEL_20:
  if ( v37 == v11 )
    goto LABEL_25;
  if ( !v11[5] )
  {
    v24 = haystack;
    if ( v12 )
    {
LABEL_23:
      v25 = v13;
      goto LABEL_24;
    }
    goto LABEL_32;
  }
  v24 = (const char *)v11[4];
  v25 = haystack;
  if ( v12 )
    goto LABEL_23;
LABEL_24:
  if ( strcmp(v25, v24) >= 0 )
  {
LABEL_32:
    *((_DWORD *)v11 + 14) = v39;
    if ( v13 )
    {
      v41.m128i_i64[0] = 0;
      qfree(v13);
    }
    goto LABEL_34;
  }
LABEL_25:
  v26 = operator new(0x40u);
  v27 = s2;
  v28 = v11;
  v29 = _mm_loadu_si128(&v41);
  *(_DWORD *)(v26 + 56) = 0;
  v11 = (_QWORD *)v26;
  *(_QWORD *)(v26 + 32) = v27;
  *(__m128i *)(v26 + 40) = v29;
  s2 = nullptr;
  v36 = v29;
  v41 = 0;
  v30 = sub_4C0260(a1, v28, v26 + 32);
  v32 = v30;
  if ( v31 )
  {
    if ( v37 != (_QWORD *)v31 )
    {
      v33 = _mm_load_si128(&v36).m128i_u64[0];
      if ( !v30 )
      {
        v35 = haystack;
        if ( *(_QWORD *)(v31 + 40) )
          v35 = *(const char **)(v31 + 32);
        v36.m128i_i64[0] = v31;
        if ( !v33 )
          v27 = (char *)haystack;
        strcmp(v27, v35);
      }
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    v13 = s2;
    goto LABEL_32;
  }
  if ( v11 )
  {
    if ( v27 )
    {
      v11[5] = 0;
      qfree(v27);
    }
    v34 = v11;
    v11 = v32;
    operator delete(v34, 0x40u);
    v13 = s2;
    goto LABEL_32;
  }
  *((_DWORD *)v30 + 14) = v39;
LABEL_34:
  v22 = 1;
LABEL_30:
  qmutex_unlock(v38);
  return v22;
}

