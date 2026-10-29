__int64 __fastcall sub_52C440(__int64 **a1, char **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rsi
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __m128i v11; // xmm0
  int v12; // eax
  int v13; // edx
  _QWORD *v14; // r13
  size_t v15; // rbx
  size_t v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rdx
  char v19; // al
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
  __int64 v39; // [rsp+68h] [rbp-50h]
  __int64 v40; // [rsp+70h] [rbp-48h]
  char v41; // [rsp+78h] [rbp-40h]
  int v42[2]; // [rsp+88h] [rbp-30h]

  v6 = *a2;
  *(_QWORD *)v42 = __readfsqword(0x28u);
  v7 = *a1;
  v8 = (*a1)[1];
  v9 = (*a1)[2];
  if ( v8 >= *((_QWORD *)v6 + 1) )
  {
    set_error_data(0, (*a1)[1], v8, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v10 = *(_QWORD *)v6 + (v8 << 7);
    sub_52B590(*v7, v6, v8);
    v12 = *(_DWORD *)(v10 + 116);
    v11 = _mm_loadu_si128((const __m128i *)v10);
    v13 = v12;
    BYTE1(v12) &= ~0x40u;
    BYTE1(v13) |= 0x40u;
    if ( v9 )
      v12 = v13;
    *(_DWORD *)(v10 + 116) = v12;
    v14 = (_QWORD *)*v7;
    v31 = v11;
    v33 = 0;
    v15 = *(_QWORD *)(v10 + 24);
    v32 = nullptr;
    if ( v15 )
    {
      v33.m128i_i64[1] = v15;
      v32 = (void *)qalloc_or_throw(v15, v6);
      v6 = *(char **)(v10 + 16);
      memcpy(v32, v6, v15);
      v33.m128i_i64[0] = v15;
    }
    ptr = nullptr;
    v35 = 0;
    v16 = *(_QWORD *)(v10 + 48);
    if ( v16 )
    {
      ptr = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 48), v6);
      v35.m128i_i64[1] = v16;
      memcpy(ptr, *(const void **)(v10 + 40), v16);
      v35.m128i_i64[0] = v16;
    }
    v36 = 0;
    copy_tinfo_t(&v36);
    v17 = _mm_loadu_si128((const __m128i *)(v10 + 72));
    v18 = *(_QWORD *)(v10 + 112);
    v39 = *(_QWORD *)(v10 + 104);
    v19 = *(_BYTE *)(v10 + 120);
    v37 = v17;
    v20 = _mm_loadu_si128((const __m128i *)(v10 + 88));
    v41 = v19;
    v40 = v18;
    v38 = v20;
    v21 = v14[13];
    v22 = v14[12];
    if ( v14[14] < (unsigned __int64)(v21 + 1) )
    {
      v30 = qvector_reserve(v14 + 12, v22, v21 + 1, 128);
      v14[12] = v30;
      v21 = v14[13];
      v22 = v30;
    }
    v23 = v22 + (v21 << 7);
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
    v27 = v39;
    *(__m128i *)(v23 + 72) = _mm_loadu_si128(&v37);
    v28 = _mm_loadu_si128(&v38);
    *(_QWORD *)(v23 + 104) = v27;
    *(__m128i *)(v23 + 88) = v28;
    *(_QWORD *)(v23 + 112) = v40;
    *(_BYTE *)(v23 + 120) = v41;
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

