__int64 __fastcall sub_5452E0(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rsi
  _QWORD **v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __m128i v11; // xmm0
  int v12; // eax
  int v13; // edx
  _QWORD *v14; // r12
  size_t v15; // rbp
  size_t v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-B8h] BYREF
  void *v32; // [rsp+10h] [rbp-A8h]
  __m128i v33; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+28h] [rbp-90h]
  __m128i v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  __m128i v37; // [rsp+48h] [rbp-70h] BYREF
  __m128i v38; // [rsp+58h] [rbp-60h] BYREF
  __m128i v39; // [rsp+68h] [rbp-50h] BYREF
  __int64 v40; // [rsp+78h] [rbp-40h]
  __int64 v41; // [rsp+80h] [rbp-38h]
  char v42; // [rsp+88h] [rbp-30h]
  int v43[2]; // [rsp+98h] [rbp-20h]

  v6 = *a2;
  *(_QWORD *)v43 = __readfsqword(0x28u);
  v7 = *(_QWORD ***)a1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v8 >= v6[1] )
  {
    set_error_data(0, *(_QWORD *)(*(_QWORD *)a1 + 8LL), v8, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v10 = *v6 + 144 * v8;
    sub_544310(*v7, v6, v8);
    v12 = *(_DWORD *)(v10 + 132);
    v11 = _mm_loadu_si128((const __m128i *)v10);
    v13 = v12;
    BYTE1(v12) &= ~0x40u;
    BYTE1(v13) |= 0x40u;
    if ( v9 )
      v12 = v13;
    *(_DWORD *)(v10 + 132) = v12;
    v14 = *v7;
    v31 = v11;
    v33 = 0;
    v15 = *(_QWORD *)(v10 + 24);
    v32 = nullptr;
    if ( v15 )
    {
      v33.m128i_i64[1] = v15;
      v32 = (void *)qalloc_or_throw(v15);
      memcpy(v32, *(const void **)(v10 + 16), v15);
      v33.m128i_i64[0] = v15;
    }
    ptr = nullptr;
    v35 = 0;
    v16 = *(_QWORD *)(v10 + 48);
    if ( v16 )
    {
      ptr = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 48));
      v35.m128i_i64[1] = v16;
      memcpy(ptr, *(const void **)(v10 + 40), v16);
      v35.m128i_i64[0] = v16;
    }
    v36 = 0;
    copy_tinfo_t(&v36);
    v17 = *(_QWORD *)(v10 + 120);
    v18 = *(_QWORD *)(v10 + 128);
    v37 = _mm_loadu_si128((const __m128i *)(v10 + 72));
    v19 = _mm_loadu_si128((const __m128i *)(v10 + 88));
    v40 = v17;
    LOBYTE(v17) = *(_BYTE *)(v10 + 136);
    v38 = v19;
    v20 = _mm_loadu_si128((const __m128i *)(v10 + 104));
    v42 = v17;
    v41 = v18;
    v39 = v20;
    v21 = v14[13];
    v22 = v14[12];
    if ( v14[14] < (unsigned __int64)(v21 + 1) )
    {
      v30 = qvector_reserve(v14 + 12, v22, v21 + 1, 144);
      v14[12] = v30;
      v21 = v14[13];
      v22 = v30;
    }
    v23 = v22 + 144 * v21;
    *(__m128i *)v23 = _mm_load_si128(&v31);
    v24 = v32;
    v25 = _mm_loadu_si128(&v33);
    *(_QWORD *)(v23 + 64) = 0;
    *(__m128i *)(v23 + 24) = v25;
    *(_QWORD *)(v23 + 16) = v24;
    v26 = _mm_load_si128(&v35);
    v33 = 0;
    *(_QWORD *)(v23 + 40) = ptr;
    *(__m128i *)(v23 + 48) = v26;
    v32 = nullptr;
    ptr = nullptr;
    v35 = 0;
    copy_tinfo_t(v23 + 64);
    v27 = v40;
    *(__m128i *)(v23 + 72) = _mm_loadu_si128(&v37);
    v28 = _mm_loadu_si128(&v38);
    *(_QWORD *)(v23 + 120) = v27;
    *(__m128i *)(v23 + 88) = v28;
    *(__m128i *)(v23 + 104) = _mm_loadu_si128(&v39);
    *(_QWORD *)(v23 + 128) = v41;
    *(_BYTE *)(v23 + 136) = v42;
    ++v14[13];
    clear_tinfo_t(&v36);
    if ( ptr )
    {
      v35.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    return 0;
  }
}
