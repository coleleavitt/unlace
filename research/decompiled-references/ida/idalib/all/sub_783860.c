__int64 __fastcall sub_783860(_QWORD *a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rbx
  __int64 v4; // rbp
  __int64 v5; // r15
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax
  const char *v9; // rbp
  size_t v10; // rax
  __int64 v11; // r15
  size_t v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rbx
  void *v18; // rax
  __m128i v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rsi
  __m128i v23; // xmm0
  void *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-C0h]
  void *v28; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v29; // [rsp+18h] [rbp-B0h] BYREF
  char v30[8]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+30h] [rbp-98h]
  __int64 v32; // [rsp+40h] [rbp-88h]
  void *ptr; // [rsp+50h] [rbp-78h]
  __m128i v34; // [rsp+58h] [rbp-70h] BYREF
  char v35[8]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v36; // [rsp+70h] [rbp-58h]
  __int64 v37; // [rsp+80h] [rbp-48h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v1 = (_QWORD *)a1[13];
  v2 = a1[6];
  v38 = __readfsqword(0x28u);
  v27 = v1[11];
  v4 = v27 + 56LL * v1[12];
  if ( v4 != v27 )
  {
    v5 = v1[11];
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      if ( !v2 )
        break;
      v6 = (const char *)a1[5];
      v7 = haystack;
      if ( v8 )
        goto LABEL_9;
LABEL_4:
      if ( !strcmp(v7, v6) )
        return 0;
      v5 += 56;
      if ( v4 == v5 )
        goto LABEL_10;
    }
    if ( !v8 )
      return 0;
    v6 = haystack;
LABEL_9:
    v7 = *(const char **)v5;
    goto LABEL_4;
  }
LABEL_10:
  v9 = haystack;
  if ( v2 )
    v9 = (const char *)a1[5];
  v28 = nullptr;
  v29 = 0;
  if ( v9 )
  {
    v10 = strlen(v9);
    v11 = v10 + 1;
    v12 = v10;
    v28 = (void *)qvector_reserve(&v28, 0, v10 + 1, 1);
    v29.m128i_i64[0] = v11;
    memmove(v28, v9, v12);
    *((_BYTE *)v28 + v12) = 0;
    v27 = v1[11];
  }
  v30[0] = 2;
  v32 = 0;
  v13 = v1[13];
  v31 = 0;
  v14 = v27;
  if ( (unsigned __int64)&v28 < v27 || (unsigned __int64)&v28 >= v27 + 56 * v13 )
  {
    v15 = v1[12];
    if ( v13 < v15 + 1 )
    {
      v14 = qvector_reserve(v1 + 11, v27, v15 + 1, 56);
      v1[11] = v14;
      v15 = v1[12];
    }
    v16 = _mm_loadu_si128(&v29);
    v17 = v14 + 56 * v15;
    v18 = v28;
    v28 = nullptr;
    *(__m128i *)(v17 + 8) = v16;
    *(_QWORD *)v17 = v18;
    *(_BYTE *)(v17 + 24) = 2;
    *(_QWORD *)(v17 + 48) = 0;
    v29 = 0;
    *(_OWORD *)(v17 + 32) = 0;
    copy_idcv(v17 + 24);
  }
  else
  {
    v20 = _mm_loadu_si128(&v29);
    v35[0] = 2;
    v34 = v20;
    ptr = v28;
    v28 = nullptr;
    v37 = 0;
    v29 = 0;
    v36 = 0;
    copy_idcv(v35);
    v21 = v1[12];
    v22 = v1[11];
    if ( v1[13] < (unsigned __int64)(v21 + 1) )
    {
      v26 = qvector_reserve(v1 + 11, v22, v21 + 1, 56);
      v1[11] = v26;
      v21 = v1[12];
      v22 = v26;
    }
    v23 = _mm_loadu_si128(&v34);
    v24 = ptr;
    ptr = nullptr;
    v25 = v22 + 56 * v21;
    *(__m128i *)(v25 + 8) = v23;
    *(_QWORD *)v25 = v24;
    *(_BYTE *)(v25 + 24) = 2;
    *(_QWORD *)(v25 + 48) = 0;
    v34 = 0;
    *(_OWORD *)(v25 + 32) = 0;
    copy_idcv(v25 + 24);
    free_idcv(v35);
    if ( ptr )
    {
      v34.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  ++v1[12];
  free_idcv(v30);
  if ( v28 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v28);
  }
  return 0;
}
