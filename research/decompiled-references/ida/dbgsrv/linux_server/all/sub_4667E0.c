/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4667E0
// Address: 0x00000000004667E0

//----- (00000000004667E0) ----------------------------------------------------
void __fastcall sub_4667E0(__m128i **a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int128 v8; // xmm0
  __int64 v9; // r15
  int v10; // eax
  char v11; // al
  __int64 m128i_i64; // rbx
  void *v13; // rax
  void *v14; // rax
  __m128i *v15; // rax
  __m128i *v16; // rsi
  __m128i *v17; // r14
  __m128i *v18; // rbx
  __int64 v19; // r14
  __m128i *v20; // r15
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  void *v25; // rdi
  void *v26; // rdi
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = (unsigned __int64)a1[2];
  if ( v6 < a2 )
  {
    v15 = (__m128i *)sub_481540((__int64)a1, nullptr, a2, 0x1B0u);
    v16 = a1[2];
    v17 = a1[1];
    a1[2] = (__m128i *)v6;
    n = (size_t)v15;
    v18 = *a1;
    v19 = (__int64)&v17[-1].m128i_i64[1] + 7;
    if ( v19 >= 0 )
    {
      v20 = v15;
      do
      {
        v20->m128i_i64[0] = v18->m128i_i64[0];
        v21 = v18->m128i_i64[1];
        v22 = _mm_loadu_si128(v18 + 1);
        v18->m128i_i64[1] = 0;
        v20->m128i_i64[1] = v21;
        v20[1] = v22;
        LODWORD(v21) = v18[2].m128i_i32[0];
        v18[1] = 0;
        v20[2].m128i_i32[0] = v21;
        v23 = v18[2].m128i_i64[1];
        v24 = _mm_loadu_si128(v18 + 3);
        v18[2].m128i_i64[1] = 0;
        v20[2].m128i_i64[1] = v23;
        v20[3] = v24;
        v18[3].m128i_i64[1] = 0;
        qmemcpy(&v20[4], &v18[4], 0x169u);
        v20[26].m128i_i32[3] = v18[26].m128i_i32[3];
        v25 = (void *)v18[2].m128i_i64[1];
        if ( v25 )
        {
          v18[3].m128i_i64[0] = 0;
          j__free(v25);
        }
        v26 = (void *)v18->m128i_i64[1];
        if ( v26 )
        {
          v18[1].m128i_i64[0] = 0;
          j__free(v26);
        }
        v18 += 27;
        v20 += 27;
      }
      while ( v19-- != 0 );
      v18 = *a1;
    }
    j__free(v18);
    *a1 = (__m128i *)n;
    a1[2] = v16;
  }
  v7 = (unsigned __int64)a1[1];
  if ( v7 < a2 )
  {
    v8 = 0;
    v9 = 27 * v7;
    do
    {
      m128i_i64 = (__int64)(*a1)[v9].m128i_i64;
      *(_QWORD *)m128i_i64 = *(_QWORD *)a3;
      *(_QWORD *)(m128i_i64 + 8) = 0;
      *(_OWORD *)(m128i_i64 + 16) = v8;
      if ( *(_QWORD *)(a3 + 16) )
      {
        nb = *(_QWORD *)(a3 + 16);
        v13 = sub_4814F0(nb);
        *(_QWORD *)(m128i_i64 + 8) = v13;
        *(_QWORD *)(m128i_i64 + 24) = nb;
        memcpy(v13, *(const void **)(a3 + 8), nb);
        v8 = 0;
        *(_QWORD *)(m128i_i64 + 16) = nb;
      }
      v10 = *(_DWORD *)(a3 + 32);
      *(_QWORD *)(m128i_i64 + 40) = 0;
      *(_OWORD *)(m128i_i64 + 48) = v8;
      *(_DWORD *)(m128i_i64 + 32) = v10;
      if ( *(_QWORD *)(a3 + 48) )
      {
        na = *(_QWORD *)(a3 + 48);
        v14 = sub_4814F0(na);
        *(_QWORD *)(m128i_i64 + 40) = v14;
        *(_QWORD *)(m128i_i64 + 56) = na;
        memcpy(v14, *(const void **)(a3 + 40), na);
        v8 = 0;
        *(_QWORD *)(m128i_i64 + 48) = na;
      }
      v11 = *(_BYTE *)(a3 + 424);
      qmemcpy((void *)(m128i_i64 + 64), (const void *)(a3 + 64), 0x168u);
      ++v7;
      v9 += 27;
      *(_BYTE *)(m128i_i64 + 424) = v11;
      *(_DWORD *)(m128i_i64 + 428) = *(_DWORD *)(a3 + 428);
    }
    while ( a2 != v7 );
  }
  a1[1] = (__m128i *)a2;
}
