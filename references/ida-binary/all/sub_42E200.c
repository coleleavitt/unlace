unsigned __int64 __fastcall sub_42E200(_QWORD *a1, const char *a2)
{
  size_t v2; // rbx
  const char *v3; // r15
  _QWORD *v4; // r14
  _QWORD *v5; // rdx
  char v6; // al
  const char *v7; // r13
  bool v8; // zf
  const char *v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  const char *v16; // rdi
  size_t v17; // rbx
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // rbp
  __m128i v21; // xmm0
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  const char *v25; // rsi
  char *v27; // rax
  const char *v28; // [rsp+8h] [rbp-A0h]
  _QWORD *v29; // [rsp+10h] [rbp-98h]
  void *v31; // [rsp+30h] [rbp-78h] BYREF
  __int128 v32; // [rsp+38h] [rbp-70h]
  __m128i v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v2 = *((_QWORD *)a2 + 1);
  v35 = __readfsqword(0x28u);
  v3 = a2;
  if ( v2 )
  {
    v27 = (char *)qalloc_or_throw(v2);
    a2 = *(const char **)a2;
    v7 = v27;
    memcpy(v27, a2, v2);
    v4 = (_QWORD *)a1[46];
    v5 = a1 + 45;
    v29 = a1 + 45;
    if ( !v4 )
      goto LABEL_22;
    v6 = 0;
  }
  else
  {
    v4 = (_QWORD *)a1[46];
    v5 = a1 + 45;
    v6 = 1;
    v7 = nullptr;
    v29 = a1 + 45;
    if ( !v4 )
    {
      v32 = 0;
      goto LABEL_38;
    }
  }
  v8 = v6 == 0;
  v9 = &s1;
  v10 = v29;
  if ( v8 )
    v9 = v7;
  v28 = v9;
  while ( 1 )
  {
    v15 = v4[5];
    if ( !v2 )
      break;
    if ( v15 )
      goto LABEL_15;
    v11 = v4;
    a2 = v7;
    v12 = &s1;
LABEL_8:
    v13 = strcmp(v12, a2);
    v14 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
    if ( v13 >= 0 )
    {
      v10 = v11;
      v4 = v14;
    }
    if ( !v4 )
      goto LABEL_17;
  }
  if ( v15 )
  {
LABEL_15:
    v12 = (const char *)v4[4];
    a2 = v28;
    v11 = v4;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v14 = (_QWORD *)v4[2];
    if ( !v14 )
      break;
    v10 = v4;
    v4 = (_QWORD *)v4[2];
    if ( v14[5] )
      goto LABEL_15;
  }
  v10 = v4;
LABEL_17:
  if ( v29 == v10 )
    goto LABEL_22;
  if ( !v10[5] )
  {
    v16 = v7;
    a2 = &s1;
    if ( v2 )
      goto LABEL_21;
LABEL_31:
    if ( v7 )
      qfree(v7, a2);
    v10[7] = *((_QWORD *)v3 + 3);
    v10[8] = *((_QWORD *)v3 + 4);
    return v35 - __readfsqword(0x28u);
  }
  v16 = &s1;
  a2 = (const char *)v10[4];
  if ( v2 )
    v16 = v7;
LABEL_21:
  if ( strcmp(v16, a2) >= 0 )
    goto LABEL_31;
LABEL_22:
  if ( v7 )
    qfree(v7, a2, v5, v14);
  v17 = *((_QWORD *)v3 + 1);
  v32 = 0;
  if ( v17 )
  {
    v18 = (void *)qalloc_or_throw(v17);
    v19 = *(const void **)v3;
    *((_QWORD *)&v32 + 1) = v17;
    v20 = v18;
    memcpy(v18, v19, v17);
    *(_QWORD *)&v32 = v17;
    goto LABEL_26;
  }
LABEL_38:
  v20 = nullptr;
LABEL_26:
  v21 = _mm_loadu_si128((const __m128i *)(v3 + 24));
  v31 = v20;
  v22 = a1[42];
  v33 = v21;
  v34 = v22;
  v23 = sub_42DF70(a1 + 44, (__int64)&v31) + 4;
  v24 = a1[42];
  v25 = (const char *)a1[41];
  if ( a1[43] < (unsigned __int64)(v24 + 1) )
  {
    v25 = (const char *)qvector_reserve(a1 + 41, v25, v24 + 1, 8);
    a1[41] = v25;
    v24 = a1[42];
  }
  *(_QWORD *)&v25[8 * v24] = v23;
  ++a1[42];
  if ( v20 )
    qfree(v20, v25);
  return v35 - __readfsqword(0x28u);
}
