/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454420
// Address: 0x0000000000454420

//----- (0000000000454420) ----------------------------------------------------
__int64 __fastcall sub_454420(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  __int64 result; // rax
  size_t v12; // r14
  void *v13; // r13
  __int64 v14; // rax
  char *v15; // rsi
  char *v16; // rax
  unsigned int v17; // eax
  size_t v18; // rbx
  void *v19; // r12
  char *v20; // rax
  unsigned int v22; // [rsp+8h] [rbp-50h]
  unsigned int v23; // [rsp+Ch] [rbp-4Ch]
  __int64 v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v4 = 0;
  v5 = 0;
  v7 = *(_QWORD *)(a1 + 56);
  v25 = a1 + 48;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)(v4 + *(_QWORD *)(a1 + 48));
      v9 = (void *)v8[4];
      if ( v9 )
      {
        v8[5] = 0;
        j__free(v9);
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v8[2] = 0;
        j__free(v10);
      }
      ++v5;
      v4 += 56;
    }
    while ( v7 != v5 );
  }
  *(_QWORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)a3 )
    *(_QWORD *)(a1 + 48) = sub_481540(v25, *(void **)(a1 + 48), a3, 0x38u);
  result = (unsigned int)a3;
  if ( a3 > 0 )
  {
    v24 = a2 + 56LL * a3;
    do
    {
      v17 = *(_DWORD *)v3;
      v18 = *(_QWORD *)(v3 + 16);
      v3 += 56;
      v19 = nullptr;
      v22 = v17;
      v23 = *(_DWORD *)(v3 - 52);
      if ( v18 )
      {
        v13 = nullptr;
        v19 = sub_4814F0(v18);
        memcpy(v19, *(const void **)(v3 - 48), v18);
        v12 = *(_QWORD *)(v3 - 16);
        if ( v12 )
        {
LABEL_17:
          v13 = sub_4814F0(v12);
          memcpy(v13, *(const void **)(v3 - 24), v12);
        }
      }
      else
      {
        v12 = *(_QWORD *)(v3 - 16);
        v13 = nullptr;
        if ( v12 )
          goto LABEL_17;
      }
      v14 = *(_QWORD *)(a1 + 56);
      v15 = *(char **)(a1 + 48);
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v14 + 1) )
      {
        v20 = (char *)sub_481540(v25, v15, v14 + 1, 0x38u);
        *(_QWORD *)(a1 + 48) = v20;
        v15 = v20;
        v14 = *(_QWORD *)(a1 + 56);
      }
      v16 = &v15[56 * v14];
      *(_QWORD *)v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v23)).m128i_u64[0];
      *((_QWORD *)v16 + 1) = v19;
      *((__m128i *)v16 + 1) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
      *((_QWORD *)v16 + 4) = v13;
      *(__m128i *)(v16 + 40) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      result = v24;
      ++*(_QWORD *)(a1 + 56);
    }
    while ( v3 != v24 );
  }
  return result;
}
