__int64 __fastcall sub_544F50(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rsi
  _QWORD **v7; // r13
  unsigned __int64 v8; // rdx
  const void *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  __m128i v14; // xmm0
  int v15; // eax
  int v16; // edx
  _QWORD *v17; // r12
  size_t v18; // rbp
  size_t v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbx
  void *v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  __m128i v31; // xmm0
  void *v33; // rdi
  size_t v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-D8h] BYREF
  void *v38; // [rsp+10h] [rbp-C8h]
  __m128i v39; // [rsp+18h] [rbp-C0h] BYREF
  void *v40; // [rsp+28h] [rbp-B0h]
  __m128i v41; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-98h] BYREF
  __m128i v43; // [rsp+48h] [rbp-90h] BYREF
  __m128i v44; // [rsp+58h] [rbp-80h] BYREF
  __m128i v45; // [rsp+68h] [rbp-70h] BYREF
  __int64 v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+80h] [rbp-58h]
  char v48; // [rsp+88h] [rbp-50h]
  int v49[2]; // [rsp+98h] [rbp-40h]

  v6 = *a2;
  *(_QWORD *)v49 = __readfsqword(0x28u);
  v7 = *(_QWORD ***)a1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v9 = *(const void **)(*(_QWORD *)a1 + 16LL);
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( v8 >= v6[1] )
  {
    set_error_data(0, *(_QWORD *)(*(_QWORD *)a1 + 8LL), v8, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v11 = *v6 + 144 * v8;
    sub_544310(*v7, v6, v8);
    if ( v9 && (v12 = strlen((const char *)v9), (v13 = v12) != 0) )
    {
      v33 = *(void **)(v11 + 40);
      v34 = v12 + 1;
      if ( *(_QWORD *)(v11 + 56) < v12 + 1 )
      {
        v36 = qvector_reserve(v11 + 40, *(_QWORD *)(v11 + 40), v34, 1);
        *(_QWORD *)(v11 + 40) = v36;
        v33 = (void *)v36;
      }
      *(_QWORD *)(v11 + 48) = v34;
      memmove(v33, v9, v13);
      *(_BYTE *)(*(_QWORD *)(v11 + 40) + v13) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0;
    }
    v15 = *(_DWORD *)(v11 + 132);
    v14 = _mm_loadu_si128((const __m128i *)v11);
    v16 = v15;
    BYTE1(v15) &= ~8u;
    BYTE1(v16) |= 8u;
    if ( v10 )
      v15 = v16;
    *(_DWORD *)(v11 + 132) = v15;
    v17 = *v7;
    v37 = v14;
    v39 = 0;
    v18 = *(_QWORD *)(v11 + 24);
    v38 = nullptr;
    if ( v18 )
    {
      v39.m128i_i64[1] = v18;
      v38 = (void *)qalloc_or_throw(v18);
      memcpy(v38, *(const void **)(v11 + 16), v18);
      v39.m128i_i64[0] = v18;
    }
    v40 = nullptr;
    v41 = 0;
    v19 = *(_QWORD *)(v11 + 48);
    if ( v19 )
    {
      v40 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 48));
      v41.m128i_i64[1] = v19;
      memcpy(v40, *(const void **)(v11 + 40), v19);
      v41.m128i_i64[0] = v19;
    }
    v42 = 0;
    copy_tinfo_t(&v42);
    v20 = *(_QWORD *)(v11 + 120);
    v21 = *(_QWORD *)(v11 + 128);
    v43 = _mm_loadu_si128((const __m128i *)(v11 + 72));
    v22 = _mm_loadu_si128((const __m128i *)(v11 + 88));
    v46 = v20;
    LOBYTE(v20) = *(_BYTE *)(v11 + 136);
    v44 = v22;
    v23 = _mm_loadu_si128((const __m128i *)(v11 + 104));
    v48 = v20;
    v47 = v21;
    v45 = v23;
    v24 = v17[13];
    v25 = v17[12];
    if ( v17[14] < (unsigned __int64)(v24 + 1) )
    {
      v35 = qvector_reserve(v17 + 12, v25, v24 + 1, 144);
      v17[12] = v35;
      v24 = v17[13];
      v25 = v35;
    }
    v26 = v25 + 144 * v24;
    *(__m128i *)v26 = _mm_load_si128(&v37);
    v27 = v38;
    v28 = _mm_loadu_si128(&v39);
    *(_QWORD *)(v26 + 64) = 0;
    *(__m128i *)(v26 + 24) = v28;
    *(_QWORD *)(v26 + 16) = v27;
    v29 = _mm_load_si128(&v41);
    v39 = 0;
    *(_QWORD *)(v26 + 40) = v40;
    *(__m128i *)(v26 + 48) = v29;
    v38 = nullptr;
    v40 = nullptr;
    v41 = 0;
    copy_tinfo_t(v26 + 64);
    v30 = v46;
    *(__m128i *)(v26 + 72) = _mm_loadu_si128(&v43);
    v31 = _mm_loadu_si128(&v44);
    *(_QWORD *)(v26 + 120) = v30;
    *(__m128i *)(v26 + 88) = v31;
    *(__m128i *)(v26 + 104) = _mm_loadu_si128(&v45);
    *(_QWORD *)(v26 + 128) = v47;
    *(_BYTE *)(v26 + 136) = v48;
    ++v17[13];
    clear_tinfo_t(&v42);
    if ( v40 )
    {
      v41.m128i_i64[0] = 0;
      qfree(v40);
    }
    if ( v38 )
    {
      v39.m128i_i64[0] = 0;
      qfree(v38);
    }
    return 0;
  }
}
