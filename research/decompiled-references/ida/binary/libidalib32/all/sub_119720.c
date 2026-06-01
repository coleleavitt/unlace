__int64 __fastcall sub_119720(__int64 a1, __int64 **a2)
{
  unsigned __int64 v2; // r12
  size_t v4; // r12
  void *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rbx
  _QWORD *v13; // rax
  void *v15; // rax
  __int64 *v16; // rsi
  __int64 *v17; // r13
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-78h] BYREF
  void *src; // [rsp+10h] [rbp-68h]
  unsigned __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v2 = (unsigned __int64)a2[1];
  v25 = __readfsqword(0x28u);
  src = nullptr;
  v22 = 0;
  if ( v2 )
  {
    v15 = (void *)qalloc_or_throw();
    v16 = *a2;
    src = v15;
    memcpy(v15, v16, 8 * v2);
    v22 = v2;
  }
  v4 = *(_QWORD *)(a1 + 216);
  v23 = 0;
  v24 = 0;
  if ( v4 <= 1 )
  {
    sub_1193E0(a1, &v23, a2);
  }
  else
  {
    v5 = (void *)qalloc_or_throw();
    memcpy(v5, *(const void **)(a1 + 208), v4);
    v6 = v24;
    v7 = v23;
    if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
    {
      v23 = qvector_reserve();
      v6 = v24;
      v7 = v23;
    }
    v8 = v7 + 24 * v6;
    *(_QWORD *)v8 = v5;
    *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    *(_QWORD *)&v24 = v24 + 1;
    *(_QWORD *)(a1 + 216) = 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( !sub_119510(a1, (__int64 *)a2, &v23) )
  {
    v9 = v22;
    if ( v22 )
    {
      v17 = (__int64 *)qalloc_or_throw();
      memcpy(v17, src, 8 * v22);
      if ( *a2 )
      {
        a2[1] = nullptr;
        v20 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
        qfree();
        v18 = _mm_load_si128(&v20);
      }
      else
      {
        v18 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
      }
      *a2 = v17;
      *(__m128i *)(a2 + 1) = v18;
      v19 = *(_QWORD *)(a1 + 192);
      if ( v19 )
      {
        if ( --v19 > (unsigned __int64)*v17 )
          v19 = *v17;
      }
      a2[1] = nullptr;
      *v17 = v19;
      a2[1] = (__int64 *)((char *)a2[1] + 1);
    }
    else
    {
      if ( *a2 )
      {
        a2[1] = nullptr;
        qfree();
        *a2 = nullptr;
      }
      *(_OWORD *)(a2 + 1) = 0;
    }
  }
  v10 = v23;
  if ( v23 )
  {
    v11 = v24;
    if ( (_QWORD)v24 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v10 + 24 * v12);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = v23;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( src )
    qfree();
  return 1;
}

