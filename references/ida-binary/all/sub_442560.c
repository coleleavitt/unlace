__int64 __fastcall sub_442560(__int64 *a1, __int64 a2)
{
  const char *v2; // r12
  bool v4; // zf
  char *v6; // r13
  const char *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  const char *v10; // r15
  const char *v11; // rsi
  char *v12; // rax
  char *v13; // rax
  size_t v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdi
  double v18; // xmm0_8
  __int64 v19; // rdi
  size_t v21; // rax
  size_t v22; // rbp
  void *v23; // rdi
  void *v24; // rdi
  size_t v25; // r13
  __int64 v26; // rax
  int v27; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v2 = &s1;
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v30 = __readfsqword(0x28u);
  if ( !v4 )
    v2 = *(const char **)a2;
  if ( (unsigned int)qsscanf(v2, "/%d@%n", a1 + 3, &v27) != 1 )
    return 0;
  v6 = (char *)v27;
  v7 = &v2[v27];
  if ( !*v7 )
    return 0;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8
    && (v9 = v8 - 1, v8 - 1 >= (unsigned __int64)v27)
    && (v10 = *(const char **)a2,
        v11 = (_BYTE *)(&qword_28 + 7),
        (v12 = strchr((const char *)(*(_QWORD *)a2 + v27), 47)) != nullptr)
    && (v13 = (char *)(v12 - v10), v13 != (char *)-1LL) )
  {
    v14 = v9 - (_QWORD)v6;
    if ( v9 >= (unsigned __int64)v13 )
    {
      if ( v6 > v13 )
        v6 = v13;
      v14 = v13 - v6;
    }
    v15 = 0;
    v16 = 0;
    v28 = 0;
    v29 = 0;
    if ( v14 )
    {
      v23 = nullptr;
      if ( v14 != -1 )
      {
        v28 = qvector_reserve(&v28, 0, v14 + 1, 1);
        v23 = (void *)v28;
      }
      v11 = &v6[(_QWORD)v10];
      *(_QWORD *)&v29 = v14 + 1;
      memmove(v23, &v6[(_QWORD)v10], v14);
      *(_BYTE *)(v28 + v14) = 0;
      v16 = v28;
      v15 = *((_QWORD *)&v29 + 1);
      v14 = v29;
    }
    v28 = 0;
    v17 = *a1;
    v29 = 0;
    if ( v17 )
    {
      a1[1] = 0;
      v18 = qfree(v17, v11);
      v19 = v28;
      *a1 = v16;
      a1[1] = v14;
      a1[2] = v15;
      if ( v19 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v19, v11, v18);
      }
    }
    else
    {
      *a1 = v16;
      a1[1] = v14;
      a1[2] = v15;
    }
  }
  else if ( v7 && (v21 = strlen(v7), (v22 = v21) != 0) )
  {
    v24 = (void *)*a1;
    v25 = v21 + 1;
    if ( a1[2] < v21 + 1 )
    {
      v26 = qvector_reserve(a1, *a1, v21 + 1, 1);
      *a1 = v26;
      v24 = (void *)v26;
    }
    a1[1] = v25;
    memmove(v24, v7, v22);
    *(_BYTE *)(*a1 + v22) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return 1;
}
