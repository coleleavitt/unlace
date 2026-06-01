__int64 __fastcall sub_41E0F0(__m128i *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 v8; // rax
  const __m128i *v9; // r13
  __m128i *v10; // rcx
  const __m128i *v11; // rbp
  __m128i *v12; // rbx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  _QWORD *v22; // rdi
  __m128i v23; // xmm0
  unsigned int v24; // r9d
  size_t v25; // rsi
  unsigned int v26; // r12d
  unsigned int *v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rax
  char **exception; // r14
  unsigned int v31; // [rsp+8h] [rbp-60h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *a3;
  *a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)*a3);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  result = *a4;
  a1[1].m128i_i64[0] = 0;
  if ( result )
  {
    v7 = *(_DWORD *)(result - 4);
    v8 = *(unsigned int *)(result - 8);
    v31 = v8;
    result = sub_186B270(48 * v8 + 8);
    v9 = (const __m128i *)*a4;
    v10 = (__m128i *)(result + 8);
    a1[1].m128i_i64[0] = result + 8;
    *(_QWORD *)result = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v7)).m128i_u64[0];
    if ( v9 )
    {
      result = v9[-1].m128i_u32[3];
      v11 = &v9[3 * result];
      if ( v9 != v11 )
      {
        v12 = v10;
        do
        {
          v13 = _mm_loadu_si128(v9);
          *v12 = v13;
          if ( v13.m128i_i64[0] )
            ++*(_DWORD *)(v13.m128i_i64[0] + 8);
          v14 = v9[1].m128i_i64[0];
          v12[1].m128i_i64[1] = 0;
          v15 = v9[1].m128i_i64[1];
          v12[1].m128i_i64[0] = v14;
          if ( v15 )
          {
            v16 = nullptr;
            v17 = 0;
            do
            {
              if ( v17 >= *(_DWORD *)(v15 - 4) )
                break;
              v18 = *(_QWORD *)(v15 + 8LL * v17);
              if ( v18 )
                ++*(_DWORD *)(v18 + 8);
              if ( v16 )
              {
                v19 = *((_DWORD *)v16 - 1);
                if ( v19 == *((_DWORD *)v16 - 2) )
                {
                  v24 = (3 * v19 + 1) >> 1;
                  v25 = 8 * v24 + 8;
                  v26 = v24;
                  if ( 8 * v19 + 8 >= (unsigned int)v25 || v19 >= v24 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_3FCFD0(v32, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v32);
                    sub_233E40((__int64)v32);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v27 = (unsigned int *)sub_186B300(v16 - 1, v25);
                  v28 = v27[1];
                  v16 = v27 + 2;
                  *v27 = v26;
                  v12[1].m128i_i64[1] = (__int64)(v27 + 2);
                  LODWORD(v27) = v28;
                  v22 = &v16[v28];
                  v15 = v9[1].m128i_i64[1];
                  v21 = (_DWORD)v27 + 1;
                }
                else
                {
                  v20 = v19;
                  v21 = v19 + 1;
                  v22 = &v16[v20];
                }
              }
              else
              {
                v29 = (_QWORD *)sub_186B270(0x18u);
                v16 = v29 + 1;
                v12[1].m128i_i64[1] = (__int64)(v29 + 1);
                v22 = v29 + 1;
                v15 = v9[1].m128i_i64[1];
                *v29 = 2;
                v21 = 1;
              }
              *v22 = v18;
              ++v17;
              *((_DWORD *)v16 - 1) = v21;
            }
            while ( v15 );
          }
          v23 = _mm_loadu_si128(v9 + 2);
          result = v23.m128i_i64[0];
          v12[2] = v23;
          if ( v23.m128i_i64[0] )
            ++*(_DWORD *)(v23.m128i_i64[0] + 8);
          v9 += 3;
          v12 += 3;
        }
        while ( v11 != v9 );
      }
    }
  }
  return result;
}

