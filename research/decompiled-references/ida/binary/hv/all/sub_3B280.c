__int64 __fastcall sub_3B280(__int64 a1, __int64 *a2, _BYTE *a3, __int64 *a4, __int64 a5, char *a6, unsigned int a7)
{
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r15d
  const char *v16; // r9
  const char *v17; // rcx
  char *v18; // rdi
  void *v19; // r14
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  void *v22; // rdi
  size_t v23; // rax
  size_t v24; // r14
  size_t v25; // r13
  size_t v26; // r13
  __int64 v27; // r8
  _BYTE *v28; // r14
  void *v29; // rdi
  __int64 v30; // r8
  void *v31; // rdi
  const char *v32; // rcx
  size_t v33; // rax
  char *v34; // r9
  size_t v35; // rbx
  size_t v36; // rax
  char *v37; // r9
  size_t v38; // rbx
  size_t v39; // r9
  size_t v40; // r10
  __int64 v41; // rax
  void *v42; // rdi
  size_t v43; // rbp
  void *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rax
  __int64 v47; // rax
  char *sa; // [rsp+8h] [rbp-E0h]
  char *sb; // [rsp+8h] [rbp-E0h]
  char *sc; // [rsp+8h] [rbp-E0h]
  __m128i v52; // [rsp+10h] [rbp-D8h] BYREF
  size_t v53; // [rsp+20h] [rbp-C8h]
  size_t v54; // [rsp+28h] [rbp-C0h]
  void *v55; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+38h] [rbp-B0h]
  void *v57; // [rsp+50h] [rbp-98h] BYREF
  size_t v58; // [rsp+58h] [rbp-90h]
  void *src; // [rsp+70h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-70h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __m128i v62; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v14 = sub_642E0(a6);
  if ( v14 )
    return v14;
  sub_64590((unsigned int)&v55, a5 + 32, (_DWORD)a6, v11, v12, v13);
  v16 = haystack;
  if ( v56 )
    v16 = (const char *)v55;
  if ( a7 != -4 )
  {
    v52.m128i_i64[0] = (__int64)v16;
    sub_38570((char **)&v57, a7);
    v17 = haystack;
    if ( v58 )
      v17 = (const char *)v57;
    sub_38D80((__int64 *)&ptr, *(__int64 **)(a5 + 56), v52.m128i_i64[0], (__int64)v17);
    v18 = (char *)*a2;
    v19 = ptr;
    ptr = nullptr;
    v20 = _mm_loadu_si128(&v62);
    v62 = 0;
    if ( v18 )
    {
      a2[1] = 0;
      v52 = v20;
      j__free(v18);
      v21 = _mm_load_si128(&v52);
      *a2 = (__int64)v19;
      v22 = ptr;
      *(__m128i *)(a2 + 1) = v21;
      if ( v22 )
      {
        v62.m128i_i64[0] = 0;
        j__free(v22);
      }
    }
    else
    {
      *a2 = (__int64)v19;
      *(__m128i *)(a2 + 1) = v20;
    }
    if ( a3 )
      *a3 = 1;
    if ( !a4 )
      goto LABEL_22;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( a6 )
    {
      v23 = strlen(a6);
      v24 = v23 + 1;
      v25 = v23;
      src = (void *)sub_96080(&src, 0, v23 + 1, 1);
      n[0] = v24;
      memmove(src, a6, v25);
      *((_BYTE *)src + v25) = 0;
      v26 = n[0];
      ptr = nullptr;
      v62 = 0;
      if ( n[0] )
      {
        ptr = (void *)sub_96030(n[0]);
        v62.m128i_i64[1] = v26;
        memcpy(ptr, src, v26);
        v62.m128i_i64[0] = v26;
        v27 = v62.m128i_i64[1];
        v28 = ptr;
        if ( !v58 )
          goto LABEL_17;
        v39 = v58 - 1;
        if ( v58 == 1 )
          goto LABEL_17;
        v40 = v26 - 1;
        v41 = v39 + v26 - 1;
        v26 += v39;
        if ( v62.m128i_i64[1] >= v26 )
          goto LABEL_40;
        v27 = v41;
LABEL_39:
        v54 = v39;
        v53 = v40;
        v52.m128i_i64[0] = v27;
        ptr = (void *)sub_96080(&ptr, v28, v26, 1);
        v28 = ptr;
        v39 = v54;
        v41 = v52.m128i_i64[0];
        v40 = v53;
LABEL_40:
        v62.m128i_i64[0] = v26;
        v28[v41] = 0;
        memcpy((char *)ptr + v40, v57, v39);
        v28 = ptr;
        v27 = v62.m128i_i64[1];
        v26 = v62.m128i_i64[0];
LABEL_17:
        v29 = (void *)*a4;
        ptr = nullptr;
        v62 = 0;
        if ( v29 )
        {
          a4[1] = 0;
          v52.m128i_i64[0] = v27;
          j__free(v29);
          v30 = v52.m128i_i64[0];
          *a4 = (__int64)v28;
          v31 = ptr;
          a4[1] = v26;
          a4[2] = v30;
          if ( v31 )
          {
            v62.m128i_i64[0] = 0;
            j__free(v31);
          }
        }
        else
        {
          *a4 = (__int64)v28;
          a4[1] = v26;
          a4[2] = v27;
        }
        if ( src )
        {
          n[0] = 0;
          j__free(src);
        }
LABEL_22:
        v32 = haystack;
        if ( a2[1] )
          v32 = (const char *)*a2;
        v14 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, const char *))(*(_QWORD *)a1 + 352LL))(
                a1,
                a6,
                a7,
                v32);
        if ( v57 )
        {
          v58 = 0;
          j__free(v57);
        }
        goto LABEL_26;
      }
    }
    else
    {
      ptr = nullptr;
      v62 = 0;
    }
    v26 = v58;
    if ( !v58 )
    {
      v27 = 0;
      v28 = nullptr;
      goto LABEL_17;
    }
    v27 = v58 - 1;
    if ( v58 == 1 )
    {
      v26 = 0;
      v28 = nullptr;
      goto LABEL_17;
    }
    v39 = v58 - 1;
    v28 = nullptr;
    v40 = 0;
    goto LABEL_39;
  }
  if ( !v16 )
  {
    a2[1] = 0;
    if ( a3 )
      *a3 = 0;
    if ( !a4 )
      goto LABEL_26;
LABEL_34:
    a4[1] = 0;
    goto LABEL_26;
  }
  sa = (char *)v16;
  v33 = strlen(v16);
  v34 = sa;
  v35 = v33;
  if ( v33 )
  {
    v44 = (void *)*a2;
    v45 = v33 + 1;
    if ( a2[2] < v33 + 1 )
    {
      v46 = sub_96080(a2, *a2, v33 + 1, 1);
      *a2 = v46;
      v34 = sa;
      v44 = (void *)v46;
    }
    a2[1] = v45;
    sc = v34;
    memmove(v44, v34, v35);
    v34 = sc;
    *(_BYTE *)(*a2 + v35) = 0;
    if ( a3 )
    {
LABEL_32:
      *a3 = 0;
      if ( !a4 )
        goto LABEL_26;
      goto LABEL_33;
    }
  }
  else
  {
    a2[1] = 0;
    if ( a3 )
      goto LABEL_32;
  }
  if ( a4 )
  {
LABEL_33:
    sb = v34;
    v36 = strlen(v34);
    v37 = sb;
    v38 = v36;
    if ( v36 )
    {
      v42 = (void *)*a4;
      v43 = v36 + 1;
      if ( a4[2] < v36 + 1 )
      {
        v47 = sub_96080(a4, *a4, v36 + 1, 1);
        *a4 = v47;
        v37 = sb;
        v42 = (void *)v47;
      }
      a4[1] = v43;
      memmove(v42, v37, v38);
      *(_BYTE *)(*a4 + v38) = 0;
      goto LABEL_26;
    }
    goto LABEL_34;
  }
LABEL_26:
  if ( v55 )
  {
    v56 = 0;
    j__free(v55);
  }
  return v14;
}

