unsigned __int64 __fastcall sub_461C30(const __m128i *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  size_t v8; // r13
  __m128i v9; // xmm0
  const char *v10; // r14
  __int64 v11; // rbx
  size_t v12; // r13
  __int64 v13; // rax
  int v14; // edx
  int v15; // eax
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+8h] [rbp-60h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int32 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( !a4 || (unsigned __int8)idbattrs_need_merging(a1->m128i_i64[0], *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32)) )
  {
    v7 = a1->m128i_i64[0];
    v8 = a1[1].m128i_u64[0];
    src = nullptr;
    *(_OWORD *)n = 0;
    v20 = v7;
    if ( v8 )
    {
      v16 = (void *)qalloc_or_throw(v8);
      v17 = (const void *)a1->m128i_i64[1];
      n[1] = v8;
      src = v16;
      memcpy(v16, v17, v8);
      n[0] = v8;
    }
    v9 = _mm_loadl_epi64(a1 + 2);
    v24 = a1[2].m128i_i32[2];
    v23 = v9.m128i_i64[0];
    if ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229)) == 2 )
    {
      sub_35A790((char **)&src);
      v10 = nullptr;
    }
    else
    {
      v10 = "Database attributes";
    }
    v11 = operator new(0xA0u);
    v12 = n[0];
    *(_QWORD *)v11 = &off_2B26160;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 8) = v20;
    *(_OWORD *)(v11 + 24) = 0;
    if ( v12 )
    {
      v18 = (void *)qalloc_or_throw(v12);
      *(_QWORD *)(v11 + 16) = v18;
      v19 = src;
      *(_QWORD *)(v11 + 32) = v12;
      memcpy(v18, v19, v12);
      *(_QWORD *)(v11 + 24) = v12;
    }
    v13 = v23;
    *(_QWORD *)(v11 + 120) = -1;
    *(_QWORD *)(v11 + 40) = v13;
    LODWORD(v13) = v24;
    *(_QWORD *)(v11 + 128) = -1;
    *(_DWORD *)(v11 + 48) = v13;
    *(_QWORD *)(v11 + 136) = -1;
    *(_QWORD *)(v11 + 144) = 0;
    *(_OWORD *)(v11 + 56) = 0;
    *(_OWORD *)(v11 + 72) = 0;
    *(_OWORD *)(v11 + 88) = 0;
    *(_OWORD *)(v11 + 104) = 0;
    merge_handler_ctr(v11, v10);
    *(_QWORD *)(v11 + 152) = a3;
    v14 = 256;
    *(_QWORD *)v11 = &off_2B28D38;
    v15 = *(_DWORD *)(v11 + 48);
    *(_DWORD *)(v11 + 144) = a2;
    if ( a3 )
      v14 = *(_DWORD *)(a3 + 40);
    *(_DWORD *)(v11 + 48) = v14 | v15;
    merge_handler_init(v11, (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_454510);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return v25 - __readfsqword(0x28u);
}
