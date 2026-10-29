unsigned __int64 __fastcall sub_1EA230(__int64 a1)
{
  const char *v1; // rdx
  __int64 v3; // rdi
  bool v4; // zf
  __m128i *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // eax
  void *v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // r12
  __int64 v18; // r12
  __m128i *v20; // r14
  void *v21; // rdi
  __m128i *v22; // r14
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-98h] BYREF
  __m128i v27; // [rsp+10h] [rbp-88h] BYREF
  __int64 v28; // [rsp+20h] [rbp-78h]
  void *v29[2]; // [rsp+28h] [rbp-70h]
  __int128 v30; // [rsp+38h] [rbp-60h]
  void *src; // [rsp+48h] [rbp-50h]
  __int128 v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v1 = &s1;
  v33 = __readfsqword(0x28u);
  v26 = 0;
  v3 = *(_QWORD *)(a1 + 128);
  v27.m128i_i64[0] = 0;
  v27.m128i_i64[1] = -1;
  v28 = 0;
  src = nullptr;
  *(_OWORD *)v29 = 0;
  v4 = *(_QWORD *)(a1 + 112) == 0;
  v30 = 0;
  v32 = 0;
  if ( !v4 )
    v1 = *(const char **)(a1 + 104);
  v5 = &v26;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __m128i *, const char *))navstack_t_get_current)(v3, &v26, v1) )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      qfree(v10, v26.m128i_i8, v6, v7, v8, v9, *(_OWORD *)&v26, *(_OWORD *)&v27);
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = *(_QWORD *)(a1 + 48);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v11, v26.m128i_i8);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v12, v26.m128i_i8);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v13 = *(_QWORD *)(a1 + 40);
    if ( v13 )
    {
      qfree(v13, v26.m128i_i8);
      *(_QWORD *)(a1 + 40) = 0;
    }
    v14 = v28;
    v15 = v29[0];
    *(__m128i *)a1 = _mm_load_si128(&v26);
    v16 = _mm_load_si128(&v27);
    *(_DWORD *)(a1 + 32) = v14;
    *(__m128i *)(a1 + 16) = v16;
    if ( v15 )
      *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v30;
    if ( (unsigned __int64)v30 > 1 )
    {
      v22 = (__m128i *)v29[1];
      v23 = *(void **)(a1 + 48);
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)v30 )
      {
        v24 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v30, 1);
        *(_QWORD *)(a1 + 48) = v24;
        v23 = (void *)v24;
      }
      *(_QWORD *)(a1 + 56) = v17;
      v5 = v22;
      memmove(v23, v22, v17 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v17 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
    }
    v18 = v32;
    if ( (unsigned __int64)v32 > 1 )
    {
      v20 = (__m128i *)src;
      v21 = *(void **)(a1 + 72);
      if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)v32 )
      {
        v25 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v32, 1);
        *(_QWORD *)(a1 + 72) = v25;
        v21 = (void *)v25;
      }
      *(_QWORD *)(a1 + 80) = v18;
      v5 = v20;
      memmove(v21, v20, v18 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v18 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  if ( v29[0] )
  {
    qfree(v29[0], v5->m128i_i8);
    v29[0] = nullptr;
  }
  if ( v29[1] )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29[1], v5->m128i_i8);
    v29[1] = nullptr;
    *((_QWORD *)&v30 + 1) = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v32 = 0;
    qfree(src, v5->m128i_i8);
  }
  if ( v29[1] )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29[1], v5->m128i_i8);
  }
  if ( v29[0] )
    qfree(v29[0], v5->m128i_i8);
  return v33 - __readfsqword(0x28u);
}
