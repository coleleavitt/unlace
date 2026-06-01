__int64 __fastcall sub_8966A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // eax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rbp
  __int64 *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  const __m128i *v18; // r12
  const __m128i *v19; // r14
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v32; // [rsp+0h] [rbp-58h]
  unsigned int v33; // [rsp+Ch] [rbp-4Ch]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD *)(a3 + 12);
  v35 = a3;
  if ( v5 <= 0x7F || (LODWORD(v32) = v5 & (v5 - 1), (_DWORD)v32) )
    sub_375320((__int64)"!!!VARRAY CORRUPTED: bad page size in the header\n");
  v7 = sub_894F70(a1, a2, a4, v5, a5);
  v9 = 0;
  if ( v7 )
    return 0xFFFFFFFFLL;
  v10 = v35;
  v11 = *(_DWORD *)(v35 + 16);
  *(_DWORD *)(a1 + 40) = v11;
  v12 = *(unsigned int *)(v10 + 8);
  v33 = v11;
  v13 = *(__int64 **)a1;
  v14 = **(_QWORD **)a1;
  if ( v12 )
  {
    v15 = **(_QWORD **)a1;
    v16 = 20;
    v34 = a1 + 16;
    while ( 1 )
    {
      v17 = (unsigned __int64)(v15 - v16) >> 3;
      if ( v17 > v12 )
        v17 = v12;
      v18 = (const __m128i *)(sub_898D20(v13, v9, 1) + v16);
      if ( v17 )
      {
        v19 = (const __m128i *)((char *)v18 + 8 * v17);
        do
        {
          v23 = _mm_loadl_epi64(v18);
          v24 = _mm_cvtsi128_si32(v23);
          if ( v24 >= _mm_cvtsi128_si32(_mm_shuffle_epi32(v23, 229)) )
            sub_375320((__int64)"!!!VARRAY CORRUPTED: bad VA chunk (end < start)\n");
          v25 = *(_QWORD *)(a1 + 24);
          v26 = *(_QWORD *)(a1 + 16);
          if ( v25 && *(_DWORD *)(v26 + 16 * v25 - 12) >= v24 )
            sub_375320((__int64)"!!!VARRAY CORRUPTED: bad chunk order (prev end >= next start)\n");
          v27 = v25 + 1;
          if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v25 + 1) )
          {
            v32 = v23.m128i_i64[0];
            v28 = qvector_reserve(v34, v26, v27, 16);
            v23.m128i_i64[0] = v32;
            *(_QWORD *)(a1 + 16) = v28;
            v26 = v28;
            v25 = *(_QWORD *)(a1 + 24);
            v27 = v25 + 1;
          }
          *(_QWORD *)(a1 + 24) = v27;
          v18 = (const __m128i *)((char *)v18 + 8);
          v20 = (_QWORD *)(16 * v25 + v26);
          v20[1] = v14;
          *v20 = v23.m128i_i64[0];
          v21 = *(_QWORD *)(a1 + 16) + 16LL * *(_QWORD *)(a1 + 24) - 16;
          v22 = (unsigned int)(*(_DWORD *)(v21 + 4) - *(_DWORD *)v21);
          v8 = *(_QWORD *)(v21 + 8);
          v14 = v8 + 4 * v22;
        }
        while ( v18 != v19 );
        v29 = v33 + 1;
        v12 -= v17;
        if ( !v12 )
          break;
      }
      else
      {
        v29 = v33 + 1;
      }
      v13 = *(__int64 **)a1;
      v9 = v33;
      v16 = 0;
      v33 = v29;
      v15 = *v13;
    }
  }
  v30 = v35;
  *(_BYTE *)(a1 + 92) = *(_QWORD *)(a1 + 24) != 0;
  return sub_896540(a1, *(unsigned __int16 *)(v30 + 4), v8);
}

