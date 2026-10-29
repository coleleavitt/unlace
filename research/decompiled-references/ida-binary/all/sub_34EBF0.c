__int64 __fastcall sub_34EBF0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbp
  const char *v19; // r12
  size_t v20; // rbp
  char *v21; // rax
  __int64 v22; // rbp
  const char *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // rax
  int v30; // eax
  const char *v32; // r12
  size_t v33; // rbp
  char *v34; // rax
  const char *v35; // rsi
  char *v36; // rbp
  int v37; // r12d
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v39; // [rsp+8h] [rbp-60h]
  char *v40; // [rsp+20h] [rbp-48h] BYREF
  __int128 v41; // [rsp+28h] [rbp-40h]
  unsigned __int64 v42; // [rsp+38h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v15 = *(int *)(a1 + 144);
  if ( (int)v15 < 0 || (v14 = (_QWORD *)a1, (int)v15 >= *(_DWORD *)(a1 + 8)) )
  {
    if ( under_debugger )
      goto LABEL_48;
    a1 = 40501;
    v15 = interr(40501, a2, a3, a4, a7);
  }
  v16 = 3 * v15;
  v17 = *(_QWORD *)a1 + 24 * v15;
  v18 = *(_QWORD *)(v17 + 8);
  if ( v18 )
  {
    v19 = *(const char **)v17;
    a2 = (_BYTE *)(&qword_28 + 5);
    v20 = v18 - 1;
    v21 = strchr(*(const char **)v17, 45);
    v40 = nullptr;
    v41 = 0;
    v16 = v21 - v19;
    if ( v20 <= v21 - v19 )
      v16 = v20;
    if ( v21 )
      v20 = v16;
    if ( v20 )
    {
      a2 = v19;
      v40 = (char *)qvector_reserve(&v40, 0, v20 + 1, 1);
      *(_QWORD *)&v41 = v20 + 1;
      memmove(v40, v19, v20);
      v40[v20] = 0;
    }
  }
  else
  {
    v40 = nullptr;
    v41 = 0;
  }
  v22 = v14[13];
  if ( v22 )
  {
    v32 = (const char *)v14[12];
    a2 = (_BYTE *)(&qword_28 + 5);
    v33 = v22 - 1;
    v34 = strchr(v32, 45);
    s1 = nullptr;
    v39 = 0;
    v16 = v34 - v32;
    if ( v33 <= v34 - v32 )
      v16 = v33;
    if ( v34 )
      v33 = v16;
    if ( v33 )
    {
      s1 = (char *)qvector_reserve(&s1, 0, v33 + 1, 1);
      *(_QWORD *)&v39 = v33 + 1;
      memmove(s1, v32, v33);
      v35 = &::s1;
      s1[v33] = 0;
      v36 = s1;
      if ( !(_QWORD)v41 )
        goto LABEL_33;
      goto LABEL_42;
    }
  }
  else
  {
    s1 = nullptr;
    v39 = 0;
  }
  if ( (_QWORD)v41 )
  {
    v36 = nullptr;
LABEL_42:
    v35 = v40;
LABEL_33:
    if ( (_QWORD)v39 )
      v37 = strcmp(v36, v35);
    else
      v37 = -*(unsigned __int8 *)v35;
    if ( v36 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v36, v35);
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40, v35);
    }
    v26 = 0;
    if ( v37 )
      return v26;
    goto LABEL_17;
  }
  if ( v40 )
    qfree(v40, a2, v16);
LABEL_17:
  v23 = (const char *)&v40;
  v40 = nullptr;
  v41 = 0;
  sub_34E130(
    (__int64)v14,
    (const char *)&v40,
    (unsigned __int64)(v14 + 12),
    a4,
    a5,
    a6,
    (__m128)0LL,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    (char)s1);
  if ( (_QWORD)v41 )
  {
    v25 = v14[9];
    v23 = nullptr;
    v26 = 0;
    v27 = v25 + 4LL * v14[10];
    v28 = 0;
    while ( 1 )
    {
      v29 = &v40[4 * v28];
      if ( v25 == v27 )
        break;
      v30 = *(_DWORD *)v29;
      v24 = v14[9];
      while ( v30 != *(_DWORD *)v24 )
      {
        v24 += 4;
        if ( v27 == v24 )
          goto LABEL_46;
      }
      v23 = (const char *)(unsigned int)((_DWORD)v23 + 1);
      v24 = (v24 - v25) >> 2;
      v26 |= 1 << v24;
      v28 = (int)v23;
      if ( (int)v23 >= (unsigned __int64)v41 )
        goto LABEL_24;
    }
LABEL_46:
    if ( !under_debugger )
      interr(40651, v23, v27, v24, 0.0);
LABEL_48:
    BUG();
  }
  v26 = 0;
LABEL_24:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, v23);
  }
  return v26;
}
