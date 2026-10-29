__int64 __fastcall sub_1258040(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  char *v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  __m128i v10; // xmm0
  __int64 v11; // rbx
  size_t v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  __m128i v22; // xmm1
  char v23; // al
  __m128i v24; // xmm2
  void *v25; // rbx
  __m128i v26[4]; // [rsp+0h] [rbp-48h] BYREF

  switch ( a3 )
  {
    case 2:
      v5 = *a2;
      v6 = operator new(0xA0u);
      v7 = nullptr;
      v8 = *(_QWORD *)(v5 + 8) - *(_QWORD *)v5;
      v9 = v6;
      *(_OWORD *)v6 = 0;
      *(_QWORD *)(v6 + 16) = 0;
      if ( v8 )
        v7 = (char *)operator new(v8);
      v26[0].m128i_i64[0] = (__int64)v7;
      v10 = _mm_loadl_epi64(v26);
      *(_QWORD *)(v9 + 16) = &v7[v8];
      v11 = 0;
      *(__m128i *)v9 = _mm_unpacklo_epi64(v10, v10);
      v12 = *(_QWORD *)(v5 + 8) - *(_QWORD *)v5;
      if ( v12 )
      {
        v11 = *(_QWORD *)(v5 + 8) - *(_QWORD *)v5;
        v7 = (char *)memmove(v7, *(const void **)v5, v12);
      }
      *(_QWORD *)(v9 + 8) = &v7[v11];
      sub_C23620(v9 + 24, (__int64 *)(v5 + 24));
      v13 = *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 48);
      *(_OWORD *)(v9 + 48) = 0;
      *(_QWORD *)(v9 + 64) = 0;
      if ( v13 >> 6 )
      {
        if ( (unsigned __int64)(v13 >> 6) > 0x3FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v26[0].m128i_i64[0] = operator new(v13);
      }
      else
      {
        v26[0].m128i_i64[0] = 0;
      }
      v14 = v26[0].m128i_i64[0];
      v26[0].m128i_i64[1] = v26[0].m128i_i64[0];
      v15 = _mm_loadl_epi64((const __m128i *)&v26[0].m128i_u64[1]);
      *(_QWORD *)(v9 + 64) = v26[0].m128i_i64[0] + v13;
      *(__m128i *)(v9 + 48) = _mm_unpacklo_epi64(v15, v15);
      v16 = *(_QWORD *)(v5 + 48);
      v17 = *(_QWORD *)(v5 + 56);
      v26[0].m128i_i64[1] = v16;
      if ( v17 != v16 )
      {
        v18 = v16;
        v19 = (_QWORD *)v14;
        do
        {
          v18 += 64;
          *v19 = v19 + 2;
          sub_124E3C0(v19, *(_BYTE **)(v18 - 64), *(_QWORD *)(v18 - 64) + *(_QWORD *)(v18 - 56));
          v20 = v19 + 6;
          v21 = v19 + 4;
          v19 += 8;
          *(v19 - 4) = v20;
          sub_124E3C0(v21, *(_BYTE **)(v18 - 32), *(_QWORD *)(v18 - 32) + *(_QWORD *)(v18 - 24));
        }
        while ( v17 != v18 );
        v26[0].m128i_i64[0] += ((v17 - 64 - v26[0].m128i_i64[1]) & 0xFFFFFFFFFFFFFFC0LL) + 64;
      }
      *(_QWORD *)(v9 + 56) = v26[0].m128i_i64[0];
      sub_12576E0(v9 + 72, (__int16 **)(v5 + 72));
      v22 = _mm_loadu_si128((const __m128i *)(v5 + 128));
      *(_DWORD *)(v9 + 96) = *(_DWORD *)(v5 + 96);
      *(_QWORD *)(v9 + 104) = *(_QWORD *)(v5 + 104);
      *(_QWORD *)(v9 + 112) = *(_QWORD *)(v5 + 112);
      v23 = *(_BYTE *)(v5 + 120);
      *(__m128i *)(v9 + 128) = v22;
      v24 = _mm_loadu_si128((const __m128i *)(v5 + 144));
      *(_BYTE *)(v9 + 120) = v23;
      *(__m128i *)(v9 + 144) = v24;
      *a1 = v9;
      break;
    case 3:
      v25 = (void *)*a1;
      if ( *a1 )
      {
        sub_1251710(*a1);
        operator delete(v25, 0xA0u);
      }
      break;
    case 1:
      *a1 = *a2;
      break;
  }
  return 0;
}
