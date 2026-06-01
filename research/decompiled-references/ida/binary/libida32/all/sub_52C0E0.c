__int64 __fastcall sub_52C0E0(__int64 **a1, char **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rsi
  __int64 *v7; // r12
  unsigned __int64 v8; // rdx
  char *v9; // r13
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  __m128i v14; // xmm0
  int v15; // eax
  int v16; // edx
  _QWORD *v17; // r12
  size_t v18; // rbp
  size_t v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rdx
  char v22; // al
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
  __m128i v37; // [rsp+0h] [rbp-C8h] BYREF
  void *v38; // [rsp+10h] [rbp-B8h]
  __m128i v39; // [rsp+18h] [rbp-B0h] BYREF
  void *v40; // [rsp+28h] [rbp-A0h]
  __m128i v41; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  __m128i v43; // [rsp+48h] [rbp-80h] BYREF
  __m128i v44; // [rsp+58h] [rbp-70h] BYREF
  __int64 v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  char v47; // [rsp+78h] [rbp-50h]
  int v48[2]; // [rsp+88h] [rbp-40h]

  v6 = *a2;
  *(_QWORD *)v48 = __readfsqword(0x28u);
  v7 = *a1;
  v8 = (*a1)[1];
  v9 = (char *)(*a1)[2];
  v10 = (*a1)[3];
  if ( v8 >= *((_QWORD *)v6 + 1) )
  {
    set_error_data(0, (*a1)[1], v8, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v11 = *(_QWORD *)v6 + (v8 << 7);
    sub_52B590(*v7, v6, v8);
    if ( v9 && (v12 = strlen(v9), (v13 = v12) != 0) )
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
      v6 = v9;
      memmove(v33, v9, v13);
      *(_BYTE *)(*(_QWORD *)(v11 + 40) + v13) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0;
    }
    v15 = *(_DWORD *)(v11 + 116);
    v14 = _mm_loadu_si128((const __m128i *)v11);
    v16 = v15;
    BYTE1(v15) &= ~8u;
    BYTE1(v16) |= 8u;
    if ( v10 )
      v15 = v16;
    *(_DWORD *)(v11 + 116) = v15;
    v17 = (_QWORD *)*v7;
    v37 = v14;
    v39 = 0;
    v18 = *(_QWORD *)(v11 + 24);
    v38 = nullptr;
    if ( v18 )
    {
      v39.m128i_i64[1] = v18;
      v38 = (void *)qalloc_or_throw(v18, v6);
      v6 = *(char **)(v11 + 16);
      memcpy(v38, v6, v18);
      v39.m128i_i64[0] = v18;
    }
    v40 = nullptr;
    v41 = 0;
    v19 = *(_QWORD *)(v11 + 48);
    if ( v19 )
    {
      v40 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 48), v6);
      v41.m128i_i64[1] = v19;
      memcpy(v40, *(const void **)(v11 + 40), v19);
      v41.m128i_i64[0] = v19;
    }
    v42 = 0;
    copy_tinfo_t(&v42);
    v20 = _mm_loadu_si128((const __m128i *)(v11 + 72));
    v21 = *(_QWORD *)(v11 + 112);
    v45 = *(_QWORD *)(v11 + 104);
    v22 = *(_BYTE *)(v11 + 120);
    v43 = v20;
    v23 = _mm_loadu_si128((const __m128i *)(v11 + 88));
    v47 = v22;
    v46 = v21;
    v44 = v23;
    v24 = v17[13];
    v25 = v17[12];
    if ( v17[14] < (unsigned __int64)(v24 + 1) )
    {
      v35 = qvector_reserve(v17 + 12, v25, v24 + 1, 128);
      v17[12] = v35;
      v24 = v17[13];
      v25 = v35;
    }
    v26 = v25 + (v24 << 7);
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
    v30 = v45;
    *(__m128i *)(v26 + 72) = _mm_loadu_si128(&v43);
    v31 = _mm_loadu_si128(&v44);
    *(_QWORD *)(v26 + 104) = v30;
    *(__m128i *)(v26 + 88) = v31;
    *(_QWORD *)(v26 + 112) = v46;
    *(_BYTE *)(v26 + 120) = v47;
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

