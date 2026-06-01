__int64 __fastcall sub_1257D30(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // r13
  size_t v12; // rax
  signed __int64 v13; // rdi
  signed __int64 v14; // r13
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  char *v17; // rsi
  unsigned __int64 v18; // rcx
  char *v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  _WORD *v24; // rcx
  _WORD *v25; // rdx
  __m128i v26; // xmm2
  char v27; // al
  __m128i v28; // xmm3
  void *v29; // rbx
  unsigned __int64 v30; // rcx
  char v31; // r8
  char v32; // di
  __m128i v33[3]; // [rsp+8h] [rbp-30h] BYREF

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
      v33[0].m128i_i64[0] = (__int64)v7;
      v10 = _mm_loadl_epi64(v33);
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
      if ( v13 )
      {
        if ( v13 < 0 )
          std::__throw_bad_alloc();
        v14 = v13;
        v15 = operator new(v13);
      }
      else
      {
        v14 = 0;
        v15 = 0;
      }
      v33[0].m128i_i64[0] = v15;
      v16 = _mm_loadl_epi64(v33);
      *(_QWORD *)(v9 + 64) = v15 + v14;
      *(__m128i *)(v9 + 48) = _mm_unpacklo_epi64(v16, v16);
      v17 = *(char **)(v5 + 56);
      v18 = *(_QWORD *)(v5 + 48);
      if ( v17 != (char *)v18 )
      {
        v19 = *(char **)(v5 + 48);
        v20 = (unsigned __int64)&v17[-v18 - 2] >> 1;
        if ( (v18 >= v15 + 16 || v15 >= v18 + 16) && (unsigned __int64)&v17[-v18 - 2] > 0xC )
        {
          v21 = v20 + 1;
          v22 = 0;
          do
          {
            *(__m128i *)(v15 + v22) = _mm_loadu_si128((const __m128i *)(v18 + v22));
            v22 += 16;
          }
          while ( v22 != 16 * ((v20 + 1) >> 3) );
          v23 = 2 * (v21 & 0xFFFFFFFFFFFFFFF8LL);
          v24 = (_WORD *)(v23 + v18);
          v25 = (_WORD *)(v15 + v23);
          if ( v21 != (v21 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            *v25 = *v24;
            if ( v17 != (char *)(v24 + 1) )
            {
              v25[1] = v24[1];
              if ( v17 != (char *)(v24 + 2) )
              {
                v25[2] = v24[2];
                if ( v17 != (char *)(v24 + 3) )
                {
                  v25[3] = v24[3];
                  if ( v17 != (char *)(v24 + 4) )
                  {
                    v25[4] = v24[4];
                    if ( v17 != (char *)(v24 + 5) )
                    {
                      v25[5] = v24[5];
                      if ( v17 != (char *)(v24 + 6) )
                        v25[6] = v24[6];
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v30 = v15;
          do
          {
            v31 = *v19;
            v32 = v19[1];
            v19 += 2;
            v30 += 2LL;
            *(_BYTE *)(v30 - 2) = v31;
            *(_BYTE *)(v30 - 1) = v32;
          }
          while ( v17 != v19 );
          v21 = v20 + 1;
        }
        v15 += 2 * v21;
      }
      *(_QWORD *)(v9 + 56) = v15;
      sub_12576E0(v9 + 72, (__int16 **)(v5 + 72));
      v26 = _mm_loadu_si128((const __m128i *)(v5 + 128));
      *(_DWORD *)(v9 + 96) = *(_DWORD *)(v5 + 96);
      *(_QWORD *)(v9 + 104) = *(_QWORD *)(v5 + 104);
      *(_QWORD *)(v9 + 112) = *(_QWORD *)(v5 + 112);
      v27 = *(_BYTE *)(v5 + 120);
      *(__m128i *)(v9 + 128) = v26;
      v28 = _mm_loadu_si128((const __m128i *)(v5 + 144));
      *(_BYTE *)(v9 + 120) = v27;
      *(__m128i *)(v9 + 144) = v28;
      *a1 = v9;
      return 0;
    case 3:
      v29 = (void *)*a1;
      if ( !*a1 )
        return 0;
      sub_1251680(*a1);
      operator delete(v29, 0xA0u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
