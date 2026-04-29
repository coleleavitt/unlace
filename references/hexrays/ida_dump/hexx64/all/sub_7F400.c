unsigned __int64 __fastcall sub_7F400(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 i; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  const __m128i *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  bool v23; // cf
  __int64 v24; // rax
  __int64 v25; // r12
  const __m128i *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = sub_7CEC0((_QWORD *)a2);
  *(_QWORD *)(a1 + 16) = sub_7CEC0((_QWORD *)a2);
  *(_QWORD *)(a1 + 24) = sub_7CEC0((_QWORD *)a2);
  sub_7D2C0((unsigned __int8 **)a2, a1 + 32, -1);
  v4 = sub_7D4F0((_QWORD *)a2);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = v4;
    v7 = *(_QWORD *)(a1 + 40);
    if ( v4 != v5 )
    {
      v30 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      if ( v4 >= v5 )
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = a1 + 40;
        if ( (unsigned __int64)&v30 < v7 || (unsigned __int64)&v30 >= v7 + 16 * v8 )
        {
          if ( v8 < v4 )
          {
            v17 = qvector_reserve(v9, 0, v4, 16);
            v18 = *(_QWORD *)(a1 + 56);
            v19 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v8;
            v7 = v17;
            v20 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v20 >= 0 )
            {
              v21 = v7;
              do
              {
                v22 = _mm_loadu_si128(v19);
                v21 += 16LL;
                ++v19;
                *(__m128i *)(v21 - 16) = v22;
                v23 = v20-- == 0;
              }
              while ( !v23 );
              v19 = *(const __m128i **)(a1 + 40);
            }
            qfree(v19);
            *(_QWORD *)(a1 + 56) = v18;
            v5 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v7;
          }
          if ( v5 < v6 )
          {
            v10 = _mm_load_si128(&v30);
            do
            {
              v11 = v5++;
              *(__m128i *)(v7 + 16 * v11) = v10;
              v7 = *(_QWORD *)(a1 + 40);
            }
            while ( v6 != v5 );
          }
        }
        else
        {
          if ( v8 < v4 )
          {
            v24 = qvector_reserve(v9, 0, v4, 16);
            v25 = *(_QWORD *)(a1 + 56);
            v26 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v8;
            v7 = v24;
            v27 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v27 >= 0 )
            {
              v28 = v7;
              do
              {
                v29 = _mm_loadu_si128(v26);
                v28 += 16LL;
                ++v26;
                *(__m128i *)(v28 - 16) = v29;
                v23 = v27-- == 0;
              }
              while ( !v23 );
              v26 = *(const __m128i **)(a1 + 40);
            }
            qfree(v26);
            *(_QWORD *)(a1 + 56) = v25;
            v5 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v7;
          }
          if ( v5 < v6 )
          {
            do
            {
              v15 = v5++;
              v16 = v7 + 16 * v15;
              *(_QWORD *)v16 = -1;
              *(_BYTE *)(v16 + 8) = 0;
              *(_DWORD *)(v16 + 12) = 0;
              v7 = *(_QWORD *)(a1 + 40);
            }
            while ( v6 != v5 );
          }
        }
      }
      *(_QWORD *)(a1 + 48) = v6;
      v5 = v6;
    }
    for ( i = v7 + 16 * v5; i != v7; *(_DWORD *)(v7 - 4) = unpack_dd(a2) )
    {
      if ( *(_DWORD *)(a2 + 48) <= 3u )
        v14 = sub_7CEC0((_QWORD *)a2);
      else
        v14 = sub_7CF00((_QWORD *)a2);
      *(_QWORD *)v7 = v14;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)
        || (*(_BYTE *)(v7 + 8) = unpack_dd(a2), *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)) )
      {
        if ( !under_debugger )
          sub_383060(50583);
        BUG();
      }
      v7 += 16LL;
    }
  }
  *(_DWORD *)(a1 + 64) = sub_7CD20((_QWORD *)a2);
  return v31 - __readfsqword(0x28u);
}
