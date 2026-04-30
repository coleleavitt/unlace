__int64 __fastcall sub_22CF10(__int64 a1, __int64 a2, const char *a3)
{
  const char *v6; // rbx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // r15d
  const char *v10; // rdi
  char *v11; // rax
  size_t v12; // rax
  size_t v13; // rbp
  size_t v14; // rbx
  void *v15; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  const char *v22; // rax
  __int64 v23; // rbp
  const char *v24; // r12
  char v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rsi
  size_t v31; // rax
  __int64 v32; // rbx
  size_t v33; // rbp
  size_t v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r15
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+10h] [rbp-58h] BYREF
  __m128i v42; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v6 = a3 + 6;
  if ( strncmp(a3, "Local ", 6u) )
  {
    v6 = a3 + 7;
    if ( strncmp(a3, "Remote ", 7u) )
      v6 = a3;
  }
  v7 = *v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      v8 = toupper(v7);
      v9 = v8;
      if ( v8 <= 0x7F )
      {
        if ( isalnum(v8) )
        {
          v10 = &s1;
          if ( *(_QWORD *)(a2 + 8) )
            v10 = *(const char **)a2;
          v11 = strchr(v10, v9);
          if ( !v11 )
            break;
        }
      }
      v7 = *++v6;
      if ( !(_BYTE)v7 )
        goto LABEL_11;
    }
    v17 = 2;
    v41 = 0;
    v42 = 0;
    v18 = v6 - a3;
    if ( v6 == a3 )
      goto LABEL_15;
    v39 = v18 + 1;
    if ( v18 != -1 )
    {
      v11 = (char *)qvector_reserve(&v41, 0, v39, 1);
      v41 = (__int64)v11;
      v39 = v18 + 1;
    }
    v42.m128i_i64[0] = v39;
    memmove(v11, a3, v6 - a3);
    *(_BYTE *)(v41 + v18) = 0;
    if ( v42.m128i_i64[0] )
    {
      v18 = v42.m128i_i64[0] - 1;
      v17 = v42.m128i_i64[0] + 1;
    }
    else
    {
      v18 = 0;
      v17 = 2;
    }
    v11 = (char *)v41;
    if ( v42.m128i_i64[1] < v17 )
    {
LABEL_15:
      v40 = v17;
      v11 = (char *)qvector_reserve(&v41, v11, v17, 1);
      v41 = (__int64)v11;
      v17 = v40;
    }
    v42.m128i_i64[0] = v17;
    v11[v18] = 126;
    *(_BYTE *)(v41 + v18 + 1) = 0;
    v19 = *(_QWORD *)(a2 + 8);
    v20 = 2;
    if ( v19 )
    {
      v20 = v19 + 1;
      v21 = *(_QWORD *)a2;
      --v19;
      if ( *(_QWORD *)(a2 + 16) >= v20 )
        goto LABEL_18;
    }
    else
    {
      v21 = *(_QWORD *)a2;
      if ( *(_QWORD *)(a2 + 16) >= 2u )
        goto LABEL_18;
    }
    v38 = qvector_reserve(a2, v21, v20, 1);
    *(_QWORD *)a2 = v38;
    v21 = v38;
LABEL_18:
    *(_QWORD *)(a2 + 8) = v20;
    *(_BYTE *)(v21 + v19) = v9;
    v22 = *(const char **)a2;
    v23 = 2;
    v22[v19 + 1] = 0;
    v24 = v6 + 1;
    v25 = *v6;
    v26 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] )
    {
      v23 = v42.m128i_i64[0] + 1;
      v27 = v41;
      v26 = v42.m128i_i64[0] - 1;
      if ( v42.m128i_i64[1] >= (unsigned __int64)(v42.m128i_i64[0] + 1) )
        goto LABEL_20;
    }
    else
    {
      v27 = v41;
      if ( v42.m128i_i64[1] >= 2uLL )
        goto LABEL_20;
    }
    v41 = qvector_reserve(&v41, v27, v23, 1);
    v27 = v41;
LABEL_20:
    v42.m128i_i64[0] = v23;
    v28 = 2;
    *(_BYTE *)(v27 + v26) = v25;
    *(_BYTE *)(v41 + v26 + 1) = 0;
    v29 = v42.m128i_i64[0];
    if ( v42.m128i_i64[0] )
    {
      v28 = v42.m128i_i64[0] + 1;
      v30 = v41;
      v29 = v42.m128i_i64[0] - 1;
      if ( v42.m128i_i64[1] >= (unsigned __int64)(v42.m128i_i64[0] + 1) )
        goto LABEL_22;
    }
    else
    {
      v30 = v41;
      if ( v42.m128i_i64[1] >= 2uLL )
        goto LABEL_22;
    }
    v41 = qvector_reserve(&v41, v30, v28, 1);
    v30 = v41;
LABEL_22:
    v42.m128i_i64[0] = v28;
    *(_BYTE *)(v30 + v29) = 126;
    *(_BYTE *)(v41 + v29 + 1) = 0;
    v31 = strlen(v24);
    v32 = v42.m128i_i64[0];
    v33 = v31;
    v34 = v31;
    if ( v42.m128i_i64[0] )
    {
      v32 = v42.m128i_i64[0] - 1;
      v35 = v41;
      v34 = v31 + v42.m128i_i64[0] - 1;
      v36 = v31 + v42.m128i_i64[0];
      if ( v42.m128i_i64[1] >= v31 + v42.m128i_i64[0] )
        goto LABEL_24;
    }
    else
    {
      v35 = v41;
      v36 = v31 + 1;
      if ( v42.m128i_i64[1] >= v31 + 1 )
      {
LABEL_24:
        v42.m128i_i64[0] = v36;
        *(_BYTE *)(v35 + v34) = 0;
        memmove((void *)(v41 + v32), v24, v33);
        v37 = _mm_loadu_si128(&v42);
        *(_QWORD *)a1 = v41;
        *(__m128i *)(a1 + 8) = v37;
        return a1;
      }
    }
    v41 = qvector_reserve(&v41, v35, v36, 1);
    v35 = v41;
    goto LABEL_24;
  }
LABEL_11:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 )
  {
    v12 = strlen(a3);
    v13 = v12 + 1;
    v14 = v12;
    v15 = (void *)qvector_reserve(a1, 0, v12 + 1, 1);
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = v13;
    memmove(v15, a3, v14);
    *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
  }
  return a1;
}
