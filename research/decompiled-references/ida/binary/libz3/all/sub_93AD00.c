void __fastcall sub_93AD00(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // edi
  __m128i v11; // xmm1
  int v12; // eax
  unsigned int v13; // r8d
  const __m128i *v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // r14d
  _QWORD v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 7) != 3
    || (v15 = *(_QWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 0xFFFFFFFFFFFFFFF8LL,
        v16 = *(_DWORD *)(a1 + 8),
        (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 40LL))(v15) != v16) )
  {
    v7 = *(_QWORD *)(a1 + 184);
    if ( v7 )
    {
      if ( a2 < *(_DWORD *)(v7 - 4) )
      {
        v8 = *(_QWORD *)(v7 + 8LL * a2);
        if ( v8 )
        {
          ++*(_DWORD *)(a1 + 80);
          v9 = *(_DWORD *)(v8 + 4);
          v10 = *(_DWORD *)(v8 + 8);
          v11 = _mm_loadl_epi64((const __m128i *)(v8 + 12));
          v12 = a3 ^ 1;
          v13 = v12 + 2 * a2;
          if ( (v12 & 1) != 0 )
          {
            v14 = (const __m128i *)(a1 + 64);
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 208) + v9) )
              v14 = (const __m128i *)(a1 + 72);
            v17[0] = _mm_sub_epi32(_mm_sub_epi32((__m128i)0LL, v11), _mm_loadl_epi64(v14)).m128i_u64[0];
            sub_93A520(a1, v10, v9, (__int64)v17, v13);
          }
          else
          {
            v17[0] = v11.m128i_i64[0];
            sub_93A520(a1, v9, v10, (__int64)v17, v13);
          }
        }
      }
    }
  }
}

