unsigned __int64 __fastcall sub_44D8B0(const __m128i *a1, const char *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rax
  size_t v8; // r13
  __m128i v9; // xmm0
  __int64 v10; // rbx
  size_t v11; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // eax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+8h] [rbp-60h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int32 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v4 = (int)a2;
  v23 = __readfsqword(0x28u);
  if ( !a4
    || (a2 = *(const char **)(a3 + 24),
        (unsigned __int8)idbattrs_need_merging(a1->m128i_i64[0], a2, *(_QWORD *)(a3 + 32))) )
  {
    v7 = a1->m128i_i64[0];
    v8 = a1[1].m128i_u64[0];
    src = nullptr;
    *(_OWORD *)n = 0;
    v18 = v7;
    if ( v8 )
    {
      v15 = (void *)qalloc_or_throw(v8, a2);
      a2 = (const char *)a1->m128i_i64[1];
      n[1] = v8;
      src = v15;
      memcpy(v15, a2, v8);
      n[0] = v8;
    }
    v9 = _mm_loadl_epi64(a1 + 2);
    v22 = a1[2].m128i_i32[2];
    v21 = v9.m128i_i64[0];
    if ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229)) == 2 )
    {
      a2 = "%s/%s";
      sub_3573A0((char **)&src);
    }
    v10 = operator new(0xA0u);
    v11 = n[0];
    *(_QWORD *)v10 = &off_2AFD020;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 8) = v18;
    *(_OWORD *)(v10 + 24) = 0;
    if ( v11 )
    {
      v16 = (void *)qalloc_or_throw(v11, a2);
      *(_QWORD *)(v10 + 16) = v16;
      v17 = src;
      *(_QWORD *)(v10 + 32) = v11;
      memcpy(v16, v17, v11);
      *(_QWORD *)(v10 + 24) = v11;
    }
    v12 = v21;
    *(_QWORD *)(v10 + 120) = -1;
    *(_QWORD *)(v10 + 40) = v12;
    LODWORD(v12) = v22;
    *(_QWORD *)(v10 + 128) = -1;
    *(_DWORD *)(v10 + 48) = v12;
    *(_QWORD *)(v10 + 136) = 0xFFFFFFFFLL;
    *(_DWORD *)(v10 + 144) = 0;
    *(_OWORD *)(v10 + 56) = 0;
    *(_OWORD *)(v10 + 72) = 0;
    *(_OWORD *)(v10 + 88) = 0;
    *(_OWORD *)(v10 + 104) = 0;
    merge_handler_ctr();
    *(_QWORD *)(v10 + 152) = a3;
    v13 = 256;
    *(_QWORD *)v10 = &off_2AFED78;
    v14 = *(_DWORD *)(v10 + 48);
    *(_DWORD *)(v10 + 140) = v4;
    if ( a3 )
      v13 = *(_DWORD *)(a3 + 40);
    *(_DWORD *)(v10 + 48) = v13 | v14;
    merge_handler_init(v10);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return v23 - __readfsqword(0x28u);
}

