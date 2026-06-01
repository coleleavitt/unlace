unsigned __int64 __fastcall sub_1F0B40(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m256i *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // eax
  void *v13; // rdi
  __m128i si128; // xmm0
  __int64 v15; // r12
  __int64 v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  const void *v21; // r14
  void *v22; // rdi
  void *v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __m256i v27; // [rsp+0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+20h] [rbp-78h]
  void *src[2]; // [rsp+28h] [rbp-70h]
  __int128 v30; // [rsp+38h] [rbp-60h]
  void *v31; // [rsp+48h] [rbp-50h]
  __int128 v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  memset(&v27, 0, 24);
  v27.m256i_i64[3] = -1;
  v28 = 0;
  v31 = nullptr;
  *(_OWORD *)src = 0;
  v30 = 0;
  v32 = 0;
  sub_1EA700((_QWORD *)a1, &v27, a2, a4, a5, a6);
  v7 = *(__m256i **)(a1 + 40);
  if ( !sub_1F0940(*(_QWORD *)(a1 + 96), (__int64)v7, (__int64)src[0])
    || *(_DWORD *)(a1 + 32) != (_DWORD)v28
    || *(_QWORD *)(a1 + 24) != v27.m256i_i64[3]
    || *(double *)a1 != *(double *)v27.m256i_i64
    || *(double *)(a1 + 8) != *(double *)&v27.m256i_i64[1]
    || *(double *)(a1 + 16) != *(double *)&v27.m256i_i64[2] )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      qfree(v8, v7->m256i_i8);
      *(_QWORD *)(a1 + 40) = 0;
    }
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v9, v7->m256i_i8);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v10, v7->m256i_i8);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      qfree(v11, v7->m256i_i8);
      *(_QWORD *)(a1 + 40) = 0;
    }
    v12 = v28;
    v13 = src[0];
    *(__m128i *)a1 = _mm_load_si128((const __m128i *)&v27);
    si128 = _mm_load_si128((const __m128i *)&v27.m256i_u64[2]);
    *(_DWORD *)(a1 + 32) = v12;
    *(__m128i *)(a1 + 16) = si128;
    if ( v13 )
      *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = v30;
    if ( (unsigned __int64)v30 > 1 )
    {
      v21 = src[1];
      v22 = *(void **)(a1 + 48);
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)v30 )
      {
        v26 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v30, 1);
        *(_QWORD *)(a1 + 48) = v26;
        v22 = (void *)v26;
      }
      *(_QWORD *)(a1 + 56) = v15;
      memmove(v22, v21, v15 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v15 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
    }
    v16 = v32;
    if ( (unsigned __int64)v32 > 1 )
    {
      v23 = v31;
      v24 = *(void **)(a1 + 72);
      if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)v32 )
      {
        v25 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v32, 1);
        *(_QWORD *)(a1 + 72) = v25;
        v24 = (void *)v25;
      }
      *(_QWORD *)(a1 + 80) = v16;
      memmove(v24, v23, v16 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
    v17 = (_QWORD *)qword_8CB520;
    v18 = (_QWORD *)(qword_8CB520 + 8 * xmmword_8CB528);
    v19 = qword_8CB510;
    if ( (_QWORD *)qword_8CB520 == v18 )
      goto LABEL_34;
    while ( qword_8CB510 != *v17 )
    {
      if ( v18 == ++v17 )
        goto LABEL_34;
    }
    if ( v18 == v17 )
LABEL_34:
      v19 = 0;
    v7 = &v27;
    navstack_t_set_current(*(_QWORD *)(a1 + 128), &v27, *(_QWORD *)(a1 + 96) == v19);
  }
  if ( src[0] )
  {
    qfree(src[0], v7->m256i_i8);
    src[0] = nullptr;
  }
  if ( src[1] )
  {
    *(_QWORD *)&v30 = 0;
    qfree(src[1], v7->m256i_i8);
    src[1] = nullptr;
    *((_QWORD *)&v30 + 1) = 0;
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v7->m256i_i8);
  }
  if ( src[1] )
  {
    *(_QWORD *)&v30 = 0;
    qfree(src[1], v7->m256i_i8);
  }
  if ( src[0] )
    qfree(src[0], v7->m256i_i8);
  return v33 - __readfsqword(0x28u);
}
