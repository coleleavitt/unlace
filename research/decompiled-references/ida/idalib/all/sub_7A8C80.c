__int64 __fastcall sub_7A8C80(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  void *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  void *v14; // r14
  __m128i si128; // xmm0
  int v16; // r9d
  unsigned int i; // r14d
  int v18; // edx
  int v19; // ecx
  int v20; // r9d
  unsigned int v21; // r15d
  __m128i v22; // xmm0
  unsigned int v23; // eax
  int v24; // [rsp+0h] [rbp-C8h]
  __int64 *v25; // [rsp+8h] [rbp-C0h]
  __int64 v26; // [rsp+10h] [rbp-B8h]
  int v27[2]; // [rsp+18h] [rbp-B0h]
  size_t n[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-98h]
  const void **v30; // [rsp+38h] [rbp-90h]
  int v31[4]; // [rsp+40h] [rbp-88h] BYREF
  int v32[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __m128i v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  int v36; // [rsp+80h] [rbp-48h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v25 = a1;
  v26 = a2;
  v37 = __readfsqword(0x28u);
  v6 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)v27 = v25[1];
  if ( *(_QWORD *)v27 )
  {
    HIBYTE(v29) = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      ptr = nullptr;
      ++v8;
      v35 = 0;
      v9 = *v25;
      v34 = 0;
      v36 = -1;
      v10 = v7 + v9;
      switch ( *(_DWORD *)v10 )
      {
        case 1:
          v23 = *(_DWORD *)(v10 + 4);
          *(__m128i *)v31 = _mm_unpacklo_epi32(
                              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v23 + 1)),
                              (__m128i)0LL);
          rangeset_t_add((int)&ptr, (int)v31, v23 + 1, a4, (int)&ptr, a6, v24, v25, v26, v27[0], (int)&ptr, n[1], v29);
          break;
        case 2:
          v22 = _mm_loadl_epi64((const __m128i *)(v10 + 4));
          n[0] = (size_t)&ptr;
          *(__m128i *)v32 = _mm_unpacklo_epi32(v22, (__m128i)0LL);
          sub_7A8B80((__int64)v25, (int)&ptr, (__int64 *)v32, v10, (int)&ptr, a6);
          break;
        case 3:
          for ( i = 0; ; ++i )
          {
            v21 = i + 1;
            if ( (unsigned __int8)((unsigned int)sub_8B6A20(i) >> 16) == *(_DWORD *)(v10 + 4) )
            {
              *(__m128i *)v32 = _mm_unpacklo_epi32(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(v21)),
                                  (__m128i)0LL);
              rangeset_t_add((int)&ptr, (int)v32, v18, v19, (int)&ptr, v20, v24, v25, v26, v27[0], n[0], n[1], v29);
            }
            if ( v21 == (_DWORD)&stru_110000 )
              break;
          }
          break;
        case 4:
          *(_OWORD *)v32 = 0;
          sub_8B6B70(v32, *(unsigned int *)(v10 + 4));
          n[0] = (size_t)&ptr;
          sub_7A8B80((__int64)v25, (int)&ptr, (__int64 *)v32, v10, (int)&ptr, v16);
          break;
        case 5:
          v12 = sub_8B7120(qword_2CCB598, v10 + 4, sub_7A9730);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8);
            v14 = nullptr;
            if ( v13 )
            {
              v30 = (const void **)v12;
              n[0] = 16 * v13;
              v14 = (void *)qalloc_or_throw(16 * v13);
              memcpy(v14, *v30, n[0]);
            }
            si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
            if ( ptr )
            {
              *(__m128i *)n = si128;
              v34.m128i_i64[0] = 0;
              qfree(ptr);
              si128 = _mm_load_si128((const __m128i *)n);
            }
            ptr = v14;
            v35 = 0;
            v34 = si128;
          }
          break;
        case 6:
          HIBYTE(v29) = 1;
          break;
        default:
          if ( !under_debugger )
            interr(1475);
          BUG();
      }
      if ( *(_BYTE *)(v10 + 264) )
        rangeset_t_sub2(v26);
      else
        rangeset_t_add2(v26);
      if ( ptr )
      {
        v34.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v7 += 268;
    }
    while ( v8 != *(_QWORD *)v27 );
  }
  else
  {
    HIBYTE(v29) = 0;
  }
  return HIBYTE(v29);
}
