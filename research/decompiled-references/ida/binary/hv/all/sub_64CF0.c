__int64 __fastcall sub_64CF0(__int64 a1, __int64 a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  void *v8; // rax
  size_t v10; // rax
  __int64 v11; // r14
  size_t v12; // r12
  char *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  char *v16; // r13
  size_t v17; // r8
  size_t v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // edi
  char v21; // r12
  int v22; // edx
  char *v23; // rax
  __int64 v24; // rdx
  char *v25; // r15
  bool v26; // r12
  char *v27; // rax
  char *v28; // rbx
  char v29; // al
  const char *v30; // rbx
  size_t v31; // rax
  const char *v32; // rsi
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  char *v35; // rdi
  __m128i v36; // xmm0
  unsigned __int64 v37; // r15
  size_t v38; // rax
  size_t v39; // rax
  const char *v40; // rbx
  size_t v41; // rax
  const char *v42; // rsi
  size_t v43; // rax
  size_t v44; // r12
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __m128i v47; // [rsp+0h] [rbp-98h] BYREF
  size_t v48; // [rsp+10h] [rbp-88h]
  size_t v49; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v51; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v53; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( !a3 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( !*a3 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v5 = strlen(a3);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)sub_96080(a1, 0, v5 + 1, 1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v8, a3, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    return a1;
  }
  s = nullptr;
  v51 = 0;
  v10 = strlen(a3);
  v11 = v10 + 1;
  v12 = v10;
  s = (char *)sub_96080(&s, 0, v10 + 1, 1);
  v51.m128i_i64[0] = v11;
  memmove(s, a3, v12);
  s[v12] = 0;
  v13 = s;
  sub_97680(s, 92, 47);
  v47.m128i_i8[0] = sub_643F0(v13);
  if ( v47.m128i_i8[0] )
  {
    v36 = _mm_loadu_si128(&v51);
    *(_QWORD *)a1 = s;
    *(__m128i *)(a1 + 8) = v36;
    return a1;
  }
  v14 = *(_QWORD *)(a2 + 56);
  v47.m128i_i64[1] = (__int64)&ptr;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v14 + 16LL))(&ptr);
  v15 = v53.m128i_i64[0];
  v16 = (char *)ptr;
  if ( !v53.m128i_i64[0] )
  {
    v37 = 2;
LABEL_42:
    if ( v53.m128i_i64[1] < v37 )
    {
      ptr = (void *)sub_96080(v47.m128i_i64[1], ptr, v37, 1);
      v16 = (char *)ptr;
    }
    v53.m128i_i64[0] = v37;
    v16[v15] = 47;
    *((_BYTE *)ptr + v15 + 1) = 0;
    v16 = (char *)ptr;
    if ( !v13 )
      goto LABEL_15;
    v38 = strlen(v13);
    v15 = v53.m128i_i64[0];
    v17 = v38;
    v18 = v38;
    if ( !v53.m128i_i64[0] )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v53.m128i_i64[0] == 1 || *((char *)ptr + v53.m128i_i64[0] - 2) != 47 )
  {
    v37 = v53.m128i_i64[0] + 1;
    v15 = v53.m128i_i64[0] - 1;
    goto LABEL_42;
  }
  if ( v13 )
  {
    v17 = strlen(v13);
LABEL_11:
    v18 = --v15 + v17;
LABEL_12:
    v19 = v18 + 1;
    if ( v53.m128i_i64[1] < v18 + 1 )
    {
      v49 = v17;
      v48 = v18 + 1;
      ptr = (void *)sub_96080(v47.m128i_i64[1], v16, v19, 1);
      v17 = v49;
      v16 = (char *)ptr;
      v19 = v18 + 1;
    }
    v53.m128i_i64[0] = v19;
    v16[v18] = 0;
    memmove((char *)ptr + v15, v13, v17);
    v16 = (char *)ptr;
  }
LABEL_15:
  v20 = *v16;
  v21 = *v16;
  if ( v20 <= 0x7F )
  {
    v22 = isalpha(v20);
    v23 = v16;
    if ( v22 && v16[1] == 58 )
    {
      v21 = v16[2];
      v23 = v16 + 2;
    }
    if ( v21 == 47 )
    {
      v24 = 1;
      if ( v23[1] == 47 )
        v24 = 2;
      v23 += v24;
      v21 = *v23;
    }
    if ( !v21 )
    {
LABEL_36:
      v33 = _mm_loadl_epi64((const __m128i *)&v53.m128i_u64[1]);
      goto LABEL_37;
    }
    v16 = v23;
  }
  v25 = v16;
  while ( 1 )
  {
    v27 = strchr(v25, 47);
    v28 = v27;
    if ( v25 == v27 )
    {
      v39 = strlen(v25 + 1);
      memmove(v28, v25 + 1, v39 + 1);
      v47.m128i_i8[0] = 1;
      v29 = *v28;
      goto LABEL_34;
    }
    if ( !v27 )
      v28 = &v25[strlen(v25)];
    v29 = *v28;
    if ( v25 + 1 != v28 )
      break;
    if ( v21 == 46 )
    {
      v30 = &v28[v29 == 47];
      v31 = strlen(v30);
      v32 = v30;
      v28 = v25;
      memmove(v25, v32, v31 + 1);
      v47.m128i_i8[0] = 1;
      v29 = *v25;
      goto LABEL_34;
    }
LABEL_25:
    if ( !v29 )
      goto LABEL_35;
    if ( v29 == 47 )
    {
      v29 = *++v28;
      goto LABEL_34;
    }
LABEL_27:
    v25 = v28;
    v21 = v29;
  }
  v26 = v21 == 46 && v28 == v25 + 2;
  if ( !v26 || v25[1] != 46 )
    goto LABEL_25;
  if ( v16 < v25 && v16 < --v25 )
  {
    do
    {
      if ( *(v25 - 1) == 47 )
        break;
      --v25;
    }
    while ( v25 != v16 );
  }
  v40 = &v28[v29 == 47];
  v41 = strlen(v40);
  v42 = v40;
  v28 = v25;
  memmove(v25, v42, v41 + 1);
  v47.m128i_i8[0] = v26;
  v29 = *v25;
LABEL_34:
  if ( v29 )
    goto LABEL_27;
LABEL_35:
  v16 = (char *)ptr;
  if ( !v47.m128i_i8[0] )
    goto LABEL_36;
  v43 = strlen((const char *)ptr);
  v44 = v43;
  if ( v43 )
  {
    v45 = v43 + 1;
    v46 = v53.m128i_i64[0];
    if ( v53.m128i_i64[0] < v45 )
    {
      if ( v53.m128i_i64[1] < v45 )
      {
        ptr = (void *)sub_96080(v47.m128i_i64[1], v16, v45, 1);
        v16 = (char *)ptr;
        v46 = v53.m128i_i64[0];
      }
      memset(&v16[v46], 0, v45 - v46);
      v53.m128i_i64[0] = v45;
      v16 = (char *)ptr;
    }
    else if ( v45 != v53.m128i_i64[0] )
    {
      v53.m128i_i64[0] = v45;
    }
    v16[v44] = 0;
    v16 = (char *)ptr;
    goto LABEL_36;
  }
  if ( !v16 )
    goto LABEL_36;
  v47.m128i_i64[0] = 0;
  v53.m128i_i64[0] = 0;
  j__free(v16);
  v33 = _mm_loadl_epi64(&v47);
  v16 = nullptr;
LABEL_37:
  v34 = _mm_loadl_epi64(&v53);
  v35 = s;
  *(_QWORD *)a1 = v16;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v34, v33);
  if ( v35 )
  {
    v51.m128i_i64[0] = 0;
    j__free(v35);
  }
  return a1;
}

