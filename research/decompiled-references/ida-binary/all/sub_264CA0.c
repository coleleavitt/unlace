__int64 __fastcall sub_264CA0(char a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  const char *v5; // r13
  size_t v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  const char *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rdx
  const char *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  const char *v19; // rdi
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  const char *v23; // rdi
  __int64 v24; // rbp
  void *v25; // rax
  size_t v26; // rax
  __int64 v27; // rbp
  size_t v28; // r8
  size_t v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  unsigned __int64 v36; // [rsp+8h] [rbp-60h]
  size_t v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  __m128i v39; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 8) == 0;
  v40 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = &s1;
  }
  else
  {
    v5 = *(const char **)a3;
    if ( !strncmp(*(const char **)a3, "IDA View-", 9u) )
    {
      v6 = 9;
      goto LABEL_4;
    }
    if ( !strncmp(v5, "view:IDA View-", 0xEu) )
    {
      v6 = 14;
      goto LABEL_4;
    }
  }
  v6 = 4;
  if ( strncmp(v5, "reg:", 4u) )
    return 0;
LABEL_4:
  v7 = dword_8BA594;
  if ( !a1 )
  {
    if ( dword_8BA594 >= 0 && !strcmp(&v5[v6], "$IP") )
    {
      v16 = 0;
      if ( v7 < (unsigned __int64)xmmword_8CC398 )
        v16 = qword_8CC390 + 56 * v7;
    }
    else
    {
      v17 = dword_8BA590;
      if ( dword_8BA590 < 0 || strcmp(&v5[v6], "$SP") )
      {
        v17 = dword_8BA58C;
        if ( dword_8BA58C < 0 || strcmp(&v5[v6], "$FP") )
          return 0;
      }
      v16 = 0;
      if ( v17 < (unsigned __int64)xmmword_8CC398 )
        v16 = qword_8CC390 + 56 * v17;
    }
    v12 = &s1;
    if ( *(_QWORD *)(v16 + 8) )
      v12 = *(const char **)v16;
    goto LABEL_43;
  }
  if ( dword_8BA594 < 0 )
    goto LABEL_30;
  v8 = 0;
  if ( dword_8BA594 < (unsigned __int64)xmmword_8CC398 )
    v8 = qword_8CC390 + 56LL * dword_8BA594;
  v9 = &s1;
  if ( *(_QWORD *)(v8 + 8) )
    v9 = *(const char **)v8;
  v35 = xmmword_8CC398;
  v10 = strcmp(v9, &v5[v6]);
  v11 = v35;
  if ( v10 )
  {
LABEL_30:
    v13 = dword_8BA590;
    if ( dword_8BA590 < 0 )
    {
      v14 = dword_8BA58C;
      if ( dword_8BA58C < 0 )
        return 0;
      v12 = nullptr;
      v11 = xmmword_8CC398;
      goto LABEL_38;
    }
    v12 = nullptr;
    v11 = xmmword_8CC398;
  }
  else
  {
    v12 = "$IP";
    v13 = dword_8BA590;
    if ( dword_8BA590 < 0 )
    {
      v14 = dword_8BA58C;
      if ( dword_8BA58C < 0 )
        goto LABEL_44;
      goto LABEL_38;
    }
  }
  v18 = 0;
  if ( v13 < v11 )
    v18 = qword_8CC390 + 56 * v13;
  v19 = &s1;
  if ( *(_QWORD *)(v18 + 8) )
    v19 = *(const char **)v18;
  v36 = v11;
  v20 = strcmp(v19, &v5[v6]);
  v11 = v36;
  v21 = v20;
  v14 = dword_8BA58C;
  if ( v21 )
  {
    if ( dword_8BA58C < 0 )
      goto LABEL_43;
    goto LABEL_38;
  }
  v12 = "$SP";
  if ( dword_8BA58C >= 0 )
  {
LABEL_38:
    v22 = 0;
    if ( v14 < v11 )
      v22 = qword_8CC390 + 56 * v14;
    v23 = &s1;
    if ( *(_QWORD *)(v22 + 8) )
      v23 = *(const char **)v22;
    if ( !strcmp(v23, &v5[v6]) )
    {
      v24 = v6 + 1;
      v38 = 0;
      v12 = "$FP";
      v39 = 0;
      goto LABEL_45;
    }
LABEL_43:
    if ( v12 )
      goto LABEL_44;
    return 0;
  }
LABEL_44:
  v38 = 0;
  v24 = v6 + 1;
  v39 = 0;
LABEL_45:
  v25 = (void *)qvector_reserve(&v38, 0, v24, 1);
  v39.m128i_i64[0] = v24;
  v38 = (__int64)v25;
  memmove(v25, v5, v6);
  *(_BYTE *)(v38 + v6) = 0;
  v26 = strlen(v12);
  v27 = v39.m128i_i64[0];
  v28 = v26;
  v29 = v26;
  if ( v39.m128i_i64[0] )
  {
    v27 = v39.m128i_i64[0] - 1;
    v29 = v26 + v39.m128i_i64[0] - 1;
  }
  v30 = v38;
  if ( v39.m128i_i64[1] < v29 + 1 )
  {
    v37 = v26;
    v38 = qvector_reserve(&v38, v38, v29 + 1, 1);
    v28 = v37;
    v30 = v38;
  }
  v39.m128i_i64[0] = v29 + 1;
  *(_BYTE *)(v30 + v29) = 0;
  memmove((void *)(v27 + v38), v12, v28);
  v32 = *(_QWORD *)(a2 + 16);
  v33 = v38;
  v34 = _mm_loadu_si128(&v39);
  v38 = *(_QWORD *)a2;
  v31 = v38;
  *(_QWORD *)a2 = v33;
  v39.m128i_i64[1] = v32;
  *(__m128i *)(a2 + 8) = v34;
  if ( v31 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v31, v12);
  }
  return 1;
}
