unsigned __int64 __fastcall sub_5DBA80(_QWORD *a1, char a2, const char *a3)
{
  __int64 v4; // rdi
  int file_line; // eax
  int v7; // r9d
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  size_t v10; // rax
  __int64 v11; // r13
  size_t v12; // r12
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // r12
  char *v16; // r14
  char *v17; // r15
  _QWORD *v18; // r13
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const char *v25; // rsi
  size_t v26; // rax
  size_t v27; // rbp
  __int64 v29; // rax
  char *v30; // r13
  __m128i v31; // xmm1
  _QWORD *v32; // r12
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // xmm1_8
  const char *v36; // rsi
  void *v37; // rdi
  size_t v38; // r12
  __int64 v39; // rax
  char v40; // [rsp+0h] [rbp-4A8h]
  _QWORD *v41; // [rsp+8h] [rbp-4A0h]
  _QWORD *v42; // [rsp+10h] [rbp-498h]
  __m128i v43; // [rsp+20h] [rbp-488h] BYREF
  int v44; // [rsp+3Ch] [rbp-46Ch] BYREF
  char *s2; // [rsp+40h] [rbp-468h] BYREF
  __m128i v46; // [rsp+48h] [rbp-460h] BYREF
  char v47[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v48; // [rsp+468h] [rbp-40h]

  v4 = a1[29];
  v48 = __readfsqword(0x28u);
  file_line = lex_get_file_line(v4, &v44, 0, 0);
  qsnprintf((int)v47, 1024, (int)"%s:%d", file_line, v44, v7, v40);
  v8 = a1 + 35;
  v9 = a1 + 41;
  v46 = 0;
  s2 = nullptr;
  if ( !a2 )
    v8 = v9;
  v42 = v8;
  if ( a3 )
  {
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
    s2 = (char *)qvector_reserve(&s2, 0, v10 + 1, 1);
    v46.m128i_i64[0] = v11;
    memmove(s2, a3, v12);
    s2[v12] = 0;
  }
  v13 = (_QWORD *)v42[2];
  v41 = v42 + 1;
  v14 = v42 + 1;
  if ( !v13 )
    goto LABEL_30;
  v15 = v46.m128i_i64[0];
  v16 = s2;
  v17 = (char *)haystack;
  v14 = v42 + 1;
  if ( v46.m128i_i64[0] )
    v17 = s2;
  while ( 1 )
  {
    v23 = v13[5];
    if ( !v15 )
      break;
    v18 = v13;
    v19 = v16;
    v20 = haystack;
    if ( v23 )
      goto LABEL_10;
LABEL_11:
    v21 = strcmp(v20, v19);
    v22 = (_QWORD *)v13[2];
    v13 = (_QWORD *)v13[3];
    if ( v21 >= 0 )
    {
      v14 = v18;
      v13 = v22;
    }
    if ( !v13 )
      goto LABEL_20;
  }
  if ( v23 )
  {
LABEL_18:
    v18 = v13;
LABEL_10:
    v20 = (const char *)v13[4];
    v19 = v17;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v24 = v13[2];
    if ( !v24 )
      break;
    v14 = v13;
    v13 = (_QWORD *)v13[2];
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_18;
  }
  v14 = v13;
LABEL_20:
  if ( v41 == v14 )
    goto LABEL_30;
  if ( !v14[5] )
  {
    v25 = haystack;
    if ( v15 )
      goto LABEL_24;
    goto LABEL_25;
  }
  v25 = (const char *)v14[4];
  if ( !v15 )
    v16 = (char *)haystack;
LABEL_24:
  if ( strcmp(v16, v25) < 0 )
  {
LABEL_30:
    v29 = operator new(0x50u);
    v30 = s2;
    v31 = _mm_loadu_si128(&v46);
    *(_OWORD *)(v29 + 64) = 0;
    v32 = (_QWORD *)v29;
    *(_QWORD *)(v29 + 32) = v30;
    *(_QWORD *)(v29 + 56) = 0;
    *(__m128i *)(v29 + 40) = v31;
    s2 = nullptr;
    v43 = v31;
    v46 = 0;
    v33 = sub_4D3870(v42, v14, v29 + 32);
    v14 = v33;
    if ( v34 )
    {
      if ( v41 != (_QWORD *)v34 )
      {
        v35 = _mm_load_si128(&v43).m128i_u64[0];
        if ( !v33 )
        {
          v36 = haystack;
          if ( *(_QWORD *)(v34 + 40) )
            v36 = *(const char **)(v34 + 32);
          v43.m128i_i64[0] = v34;
          if ( !v35 )
            v30 = (char *)haystack;
          strcmp(v30, v36);
        }
      }
      v14 = v32;
      std::_Rb_tree_insert_and_rebalance();
      ++v42[5];
    }
    else if ( v32 )
    {
      if ( v30 )
      {
        v32[5] = 0;
        qfree(v30);
      }
      operator delete(v32, 0x50u);
    }
  }
LABEL_25:
  v26 = strlen(v47);
  v27 = v26;
  if ( v26 )
  {
    v37 = (void *)v14[7];
    v38 = v26 + 1;
    if ( v14[9] < v26 + 1 )
    {
      v39 = qvector_reserve(v14 + 7, v14[7], v38, 1);
      v14[7] = v39;
      v37 = (void *)v39;
    }
    v14[8] = v38;
    memmove(v37, v47, v27);
    *(_BYTE *)(v14[7] + v27) = 0;
  }
  else
  {
    v14[8] = 0;
  }
  if ( s2 )
  {
    v46.m128i_i64[0] = 0;
    qfree(s2);
  }
  return v48 - __readfsqword(0x28u);
}

