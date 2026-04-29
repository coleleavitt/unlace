__int64 __fastcall sub_533C0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned int v14; // esi
  __int64 v15; // rax
  const __m128i *v16; // rsi
  __int8 *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r10
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+0h] [rbp-48h]

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 144LL);
  sub_75D50(v9);
  v10 = *(_QWORD *)(v9 + 584);
  v11 = *(_QWORD *)(v9 + 576);
  if ( 40 * v10 )
  {
    v12 = *(_QWORD *)(v9 + 576);
    do
    {
      if ( *(_DWORD *)(v12 + 32) == a3
        && (!a4 || *(_DWORD *)(v12 + 16) == a4)
        && (!a5 || (v13 = *(_DWORD *)(v12 + 24)) == 0 || (v14 = *(_DWORD *)(v12 + 28)) == 0 || a5 >= v13 && a5 < v14) )
      {
        v15 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v15 + 1) )
        {
          v26 = *(_QWORD *)(a2 + 16);
          v19 = qvector_reserve(a2, 0, v15 + 1, 40);
          v20 = *(_QWORD *)(a2 + 8);
          v21 = *(_QWORD *)(a2 + 16);
          v22 = *(const __m128i **)a2;
          v16 = (const __m128i *)v19;
          *(_QWORD *)(a2 + 16) = v26;
          v23 = v20 - 1;
          if ( v23 >= 0 )
          {
            do
            {
              v24 = _mm_loadu_si128(v22);
              v19 += 40;
              v22 = (const __m128i *)((char *)v22 + 40);
              *(__m128i *)(v19 - 40) = v24;
              *(__m128i *)(v19 - 24) = _mm_loadu_si128((const __m128i *)((char *)v22 - 24));
              *(_QWORD *)(v19 - 8) = v22[-1].m128i_i64[1];
            }
            while ( v23-- != 0 );
            v22 = *(const __m128i **)a2;
          }
          v27 = v21;
          qfree(v22);
          v15 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v16;
          *(_QWORD *)(a2 + 16) = v27;
        }
        else
        {
          v16 = *(const __m128i **)a2;
        }
        v17 = &v16->m128i_i8[40 * v15];
        *(_OWORD *)(v17 + 8) = 0;
        *((_QWORD *)v17 + 3) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)v17 = -1;
        v17[32] = 0;
        ++*(_QWORD *)(a2 + 8);
        *(_QWORD *)v17 = *(_QWORD *)v12;
        *((_DWORD *)v17 + 2) = *(_QWORD *)(v12 + 8);
        *((_DWORD *)v17 + 3) = *(_DWORD *)(v12 + 24);
        *((_DWORD *)v17 + 4) = *(_DWORD *)(v12 + 28);
        *((_DWORD *)v17 + 5) = *(_DWORD *)(v12 + 16);
        *((_DWORD *)v17 + 6) = *(_DWORD *)(v12 + 20);
        *((_DWORD *)v17 + 7) = *(_DWORD *)(v12 + 32);
        v17[32] = *(_BYTE *)(v12 + 36);
        v11 = *(_QWORD *)(v9 + 576);
        v10 = *(_QWORD *)(v9 + 584);
      }
      v12 += 40;
    }
    while ( v12 != v11 + 40 * v10 );
  }
  return 0;
}
