__int64 __fastcall sub_2D2750(
        __int64 a1,
        __int64 a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, const char *),
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // r14
  char *v12; // rax
  const char *v13; // rcx
  char *v14; // r8
  const char *v15; // r13
  char *v16; // rax
  char *v17; // rbx
  char *v18; // r13
  const char *v19; // rsi
  unsigned int v20; // r12d
  __int64 v21; // rcx
  size_t v22; // rbp
  char *v23; // r8
  const char *v24; // r14
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  const char *v27; // rsi
  size_t v28; // r9
  unsigned __int64 v29; // r13
  char *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // r14
  char *v35; // [rsp+8h] [rbp-70h]
  size_t v36; // [rsp+10h] [rbp-68h]
  char *needlea; // [rsp+18h] [rbp-60h]
  char *needlec; // [rsp+18h] [rbp-60h]
  char *needleb; // [rsp+18h] [rbp-60h]
  const char *v41; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 8);
  if ( !v11 )
  {
    v12 = strstr(&s1, a3);
    v13 = &s1;
    if ( v12 )
    {
      v14 = (char *)(v12 - &s1);
      if ( v12 - &s1 != -1 )
        goto LABEL_14;
    }
    v15 = &s1;
    goto LABEL_5;
  }
  v15 = *(const char **)a1;
  --v11;
  v31 = strstr(*(const char **)a1, a3);
  if ( !v31 || (v14 = (char *)(v31 - v15), v31 - v15 == -1) )
  {
LABEL_5:
    v16 = strstr(v15, a4);
    if ( !v16 )
      return 0;
    v14 = (char *)(v16 - v15);
    if ( v16 - v15 == -1 )
      return 0;
  }
  if ( (unsigned __int64)v14 < v11 && a5 )
  {
    v17 = &v14[a5];
    v18 = v14;
    if ( (unsigned __int64)v17 < v11 )
    {
      v34 = v11 - (_QWORD)v17;
      needleb = v14;
      memmove(&v14[*(_QWORD *)a1], &v17[*(_QWORD *)a1], v34);
      v14 = needleb;
      v18 = &needleb[v34];
    }
    v19 = *(const char **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v18 + 1) )
    {
      needlec = v14;
      v33 = qvector_reserve(a1, v19, v18 + 1, 1);
      v14 = needlec;
      *(_QWORD *)a1 = v33;
      v19 = (const char *)v33;
    }
    *(_QWORD *)(a1 + 8) = v18 + 1;
    v18[(_QWORD)v19] = 0;
  }
LABEL_14:
  needlea = v14;
  v20 = a6(a2, a7, a8, v13);
  *(_OWORD *)n = 0;
  v41 = nullptr;
  sub_2D17F0(a2, (__int64 *)&v41, 0, v21, 0.0);
  v22 = n[0];
  v23 = needlea;
  v24 = &s1;
  if ( n[0] )
  {
    v24 = v41;
    v22 = n[0] - 1;
  }
  v25 = *(_QWORD *)(a1 + 8);
  v26 = *(_QWORD *)(a1 + 16);
  v27 = *(const char **)a1;
  if ( v25 )
  {
    v28 = --v25 + v22;
    v29 = v25 + v22 + 1;
    if ( v26 >= v29 )
      goto LABEL_18;
    goto LABEL_28;
  }
  v29 = v22 + 1;
  v28 = v22;
  if ( v26 < v22 + 1 )
  {
LABEL_28:
    v36 = v28;
    v32 = qvector_reserve(a1, v27, v29, 1);
    v28 = v36;
    v23 = needlea;
    *(_QWORD *)a1 = v32;
    v27 = (const char *)v32;
LABEL_18:
    *(_QWORD *)(a1 + 8) = v29;
    v27[v28] = 0;
    if ( (unsigned __int64)v23 < v25 )
    {
      v35 = v23;
      memmove(&v23[*(_QWORD *)a1 + v22], &v23[*(_QWORD *)a1], v25 - (_QWORD)v23);
      v25 = (unsigned __int64)v35;
    }
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 8) = v29;
  v27[v22] = 0;
LABEL_20:
  memmove((void *)(*(_QWORD *)a1 + v25), v24, v22);
  if ( v41 )
  {
    n[0] = 0;
    qfree(v41, v24);
  }
  return v20;
}
