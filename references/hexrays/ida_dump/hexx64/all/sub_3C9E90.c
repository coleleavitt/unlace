__int64 __fastcall sub_3C9E90(__int64 a1, __int64 a2, const void *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  _QWORD *v11; // r15
  unsigned __int64 v12; // rdx
  __m128i si128; // xmm0
  __int64 v14; // rdi
  size_t v15; // rbx
  void *v16; // r12
  __m128i v17; // xmm0
  __int64 v18; // rdi
  size_t v19; // rbx
  void *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v24[4]; // [rsp+10h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (int)result <= 1 )
  {
    v9 = *(_QWORD **)(a1 + 336);
    v10 = 0;
    if ( !v9 )
      return result;
    goto LABEL_3;
  }
  v10 = j__qalloc_or_throw(232);
  sub_70F60(v10, a2);
  *(_BYTE *)(v10 + 32) = 1;
  result = (__int64)off_4EC980;
  *(_QWORD *)v10 = off_4EC980;
  *(_QWORD *)(v10 + 176) = 0;
  *(_QWORD *)(v10 + 200) = 0;
  *(_QWORD *)(v10 + 224) = 0;
  *(_OWORD *)(v10 + 184) = 0;
  *(_OWORD *)(v10 + 208) = 0;
  v9 = *(_QWORD **)(a1 + 336);
  if ( v9 )
  {
    do
    {
LABEL_3:
      v11 = v9;
      v9 = (_QWORD *)v9[28];
    }
    while ( v9 );
    v11[28] = v10;
    if ( a5 )
    {
      v12 = *(_QWORD *)(a5 + 8);
      si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      if ( v12 )
      {
        v24[0] = si128;
        n[0] = 4 * v12;
        v9 = (_QWORD *)qalloc_or_throw(4 * v12);
        result = (__int64)memcpy(v9, *(const void **)a5, n[0]);
        si128 = _mm_load_si128(v24);
      }
      v14 = v11[22];
      if ( v14 )
      {
        v11[23] = 0;
        *(__m128i *)n = si128;
        result = qfree(v14);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      v11[22] = v9;
      *(__m128i *)(v11 + 23) = si128;
    }
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 336) = v10;
LABEL_10:
  if ( v10 )
  {
    if ( a3 && (result = strlen((const char *)a3), (v15 = result) != 0) )
    {
      v20 = *(void **)(v10 + 8);
      v21 = result + 1;
      if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)(result + 1) )
      {
        v22 = qvector_reserve(v10 + 8, *(_QWORD *)(v10 + 8), v21, 1);
        *(_QWORD *)(v10 + 8) = v22;
        v20 = (void *)v22;
      }
      *(_QWORD *)(v10 + 16) = v21;
      memmove(v20, a3, v15);
      result = *(_QWORD *)(v10 + 8);
      *(_BYTE *)(result + v15) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = 0;
    }
    if ( a4 )
    {
      result = *(_QWORD *)(a4 + 8);
      v16 = nullptr;
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
      if ( result )
      {
        v19 = 4 * result;
        *(__m128i *)n = v17;
        v16 = (void *)qalloc_or_throw(4 * result);
        result = (__int64)memcpy(v16, *(const void **)a4, v19);
        v17 = _mm_load_si128((const __m128i *)n);
      }
      v18 = *(_QWORD *)(v10 + 200);
      if ( v18 )
      {
        *(_QWORD *)(v10 + 208) = 0;
        *(__m128i *)n = v17;
        result = qfree(v18);
        v17 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v10 + 200) = v16;
      *(__m128i *)(v10 + 208) = v17;
    }
  }
  return result;
}
