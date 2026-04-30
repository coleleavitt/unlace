__int64 __fastcall rs_chooser_t__::vfunc_14(__int64 a1, __int64 **a2)
{
  unsigned __int64 v3; // r12
  size_t v5; // r12
  void *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  const char *v10; // rsi
  unsigned __int64 v11; // r12
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  void *v19; // rax
  __int64 *v20; // rsi
  __int64 *v21; // r13
  __int64 *v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  void *src; // [rsp+10h] [rbp-68h]
  unsigned __int64 v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int128 v29; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v3 = (unsigned __int64)a2[1];
  v30 = __readfsqword(0x28u);
  src = nullptr;
  v27 = 0;
  if ( v3 )
  {
    v19 = (void *)qalloc_or_throw(8 * v3);
    v20 = *a2;
    src = v19;
    memcpy(v19, v20, 8 * v3);
    v27 = v3;
  }
  v5 = *(_QWORD *)(a1 + 216);
  v28 = 0;
  v29 = 0;
  if ( v5 <= 1 )
  {
    sub_31A2A0(a1, &v28, a2);
  }
  else
  {
    v6 = (void *)qalloc_or_throw(v5);
    memcpy(v6, *(const void **)(a1 + 208), v5);
    v7 = v29;
    v8 = v28;
    if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
    {
      v28 = qvector_reserve(&v28, v28, v29 + 1, 24);
      v7 = v29;
      v8 = v28;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = v6;
    *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    *(_QWORD *)&v29 = v29 + 1;
    *(_QWORD *)(a1 + 216) = 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = (const char *)a2;
  if ( !sub_31A3D0(a1, (__int64 *)a2, &v28) )
  {
    v11 = v27;
    if ( v27 )
    {
      v10 = (const char *)src;
      v21 = (__int64 *)qalloc_or_throw(8 * v27);
      memcpy(v21, src, 8 * v27);
      v22 = *a2;
      if ( *a2 )
      {
        a2[1] = nullptr;
        v25 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
        qfree(v22, v10);
        v23 = _mm_load_si128(&v25);
      }
      else
      {
        v23 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      }
      *a2 = v21;
      *(__m128i *)(a2 + 1) = v23;
      v24 = *(_QWORD *)(a1 + 192);
      if ( v24 )
      {
        if ( --v24 > (unsigned __int64)*v21 )
          v24 = *v21;
      }
      a2[1] = nullptr;
      *v21 = v24;
      a2[1] = (__int64 *)((char *)a2[1] + 1);
    }
    else
    {
      v12 = *a2;
      if ( *a2 )
      {
        a2[1] = nullptr;
        qfree(v12, (const char *)a2);
        *a2 = nullptr;
      }
      *(_OWORD *)(a2 + 1) = 0;
    }
  }
  v13 = v28;
  if ( v28 )
  {
    v14 = v29;
    if ( (_QWORD)v29 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, v10);
          v13 = v28;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v29 = 0;
    qfree(v13, v10);
  }
  if ( src )
    qfree(src, v10);
  return 1;
}
