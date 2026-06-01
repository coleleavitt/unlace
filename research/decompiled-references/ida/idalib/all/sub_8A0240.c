__int64 __fastcall sub_8A0240(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  _WORD *v5; // rax
  _BYTE *v6; // rdx
  char *v7; // r13
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  size_t v11; // r8
  size_t v12; // r15
  __int64 v13; // rsi
  size_t v14; // rdx
  _BYTE *v15; // r13
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  size_t v20; // r8
  size_t v21; // r15
  __int64 v22; // rsi
  size_t v23; // rdx
  _BYTE *v24; // r13
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  size_t v28; // r8
  size_t v29; // r15
  __int64 v30; // rsi
  size_t v31; // rdx
  unsigned int v32; // eax
  int v33; // r14d
  int v34; // r15d
  __m128i *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i si128; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // [rsp+8h] [rbp-C0h]
  size_t v43; // [rsp+8h] [rbp-C0h]
  size_t v44; // [rsp+8h] [rbp-C0h]
  void *src[2]; // [rsp+10h] [rbp-B8h] BYREF
  int v46; // [rsp+2Ah] [rbp-9Eh]
  __int16 v47; // [rsp+2Eh] [rbp-9Ah]
  __m128i v48; // [rsp+30h] [rbp-98h] BYREF
  __m128i v49[2]; // [rsp+40h] [rbp-88h] BYREF
  __m128i v50; // [rsp+60h] [rbp-68h] BYREF
  __m128i v51; // [rsp+70h] [rbp-58h] BYREF
  __int64 v52; // [rsp+80h] [rbp-48h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v2 = *a2;
  v3 = a2[1];
  v53 = __readfsqword(0x28u);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v2, (__m128i)(v2 + v3));
  if ( (int)unpack_dd(src) <= 3 )
  {
    v5 = src[0];
    v6 = src[1];
    v7 = (char *)src[0] + 6;
    if ( src[1] >= (char *)src[0] + 6 )
    {
      src[0] = (char *)src[0] + 6;
      *(_DWORD *)(a1 + 2) = *(_DWORD *)v5;
      *(_WORD *)(a1 + 6) = v5[2];
      v8 = v7;
      while ( v6 != v8 )
      {
        if ( !*v8++ )
        {
          src[0] = v8;
          v9 = *(_QWORD *)(a1 + 16);
          v10 = v8 - v7;
          v11 = v10 - 1;
          v12 = v10 - 1;
          if ( v9 )
          {
            --v9;
            v12 = v11 + v9;
          }
          v13 = *(_QWORD *)(a1 + 8);
          v14 = v12 + 1;
          if ( *(_QWORD *)(a1 + 24) < v12 + 1 )
          {
            v42 = v10 - 1;
            v17 = qvector_reserve(a1 + 8, v13, v14, 1);
            v11 = v42;
            v14 = v12 + 1;
            *(_QWORD *)(a1 + 8) = v17;
            v13 = v17;
          }
          *(_QWORD *)(a1 + 16) = v14;
          *(_BYTE *)(v13 + v12) = 0;
          memmove((void *)(v9 + *(_QWORD *)(a1 + 8)), v7, v11);
          v15 = src[0];
          v16 = src[0];
          while ( v16 < src[1] )
          {
            if ( !*v16++ )
            {
              src[0] = v16;
              if ( v15 )
              {
                v18 = v16 - v15;
                v19 = *(_QWORD *)(a1 + 40);
                v20 = v18 - 1;
                v21 = v18 - 1;
                if ( v19 )
                {
                  --v19;
                  v21 = v20 + v19;
                }
                v22 = *(_QWORD *)(a1 + 32);
                v23 = v21 + 1;
                if ( *(_QWORD *)(a1 + 48) < v21 + 1 )
                {
                  v44 = v18 - 1;
                  v41 = qvector_reserve(a1 + 32, v22, v23, 1);
                  v20 = v44;
                  v23 = v21 + 1;
                  *(_QWORD *)(a1 + 32) = v41;
                  v22 = v41;
                }
                *(_QWORD *)(a1 + 40) = v23;
                *(_BYTE *)(v22 + v21) = 0;
                memmove((void *)(v19 + *(_QWORD *)(a1 + 32)), v15, v20);
                v24 = src[0];
                v25 = src[0];
                while ( v25 < src[1] )
                {
                  if ( !*v25++ )
                  {
                    src[0] = v25;
                    if ( v24 )
                    {
                      v26 = v25 - v24;
                      v27 = *(_QWORD *)(a1 + 64);
                      v28 = v26 - 1;
                      v29 = v26 - 1;
                      if ( v27 )
                      {
                        --v27;
                        v29 = v28 + v27;
                      }
                      v30 = *(_QWORD *)(a1 + 56);
                      v31 = v29 + 1;
                      if ( *(_QWORD *)(a1 + 72) < v29 + 1 )
                      {
                        v43 = v26 - 1;
                        v40 = qvector_reserve(a1 + 56, v30, v31, 1);
                        v28 = v43;
                        v31 = v29 + 1;
                        *(_QWORD *)(a1 + 56) = v40;
                        v30 = v40;
                      }
                      *(_QWORD *)(a1 + 64) = v31;
                      *(_BYTE *)(v30 + v29) = 0;
                      memmove((void *)(v27 + *(_QWORD *)(a1 + 56)), v24, v28);
                      v32 = unpack_dd(src);
                      *(_QWORD *)(a1 + 80) = v32;
                      if ( v32 )
                      {
                        v33 = unpack_dd(src);
                        if ( v33 <= 0 )
                          return 1;
                        v34 = 0;
                        while ( 1 )
                        {
                          v50.m128i_i32[0] = 0;
                          v50.m128i_i16[2] = 0;
                          v48.m128i_i16[2] = 0;
                          v47 = 0;
                          v49[0].m128i_i16[0] = 0;
                          v46 = 0;
                          v48.m128i_i32[0] = 0;
                          v48.m128i_i64[1] = 0;
                          *(__m128i *)((char *)v49 + 8) = 0;
                          if ( !(unsigned __int8)sub_80E600((__int64)&v48, src, (char *)src[1] - (char *)src[0]) )
                            break;
                          v36 = *(_QWORD *)(a1 + 96);
                          v37 = *(_QWORD *)(a1 + 88);
                          v50 = _mm_load_si128(&v48);
                          si128 = _mm_load_si128(v49);
                          v52 = v49[1].m128i_i64[0];
                          v51 = si128;
                          if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v36 + 1) )
                          {
                            v39 = qvector_reserve(a1 + 88, v37, v36 + 1, 40);
                            v36 = *(_QWORD *)(a1 + 96);
                            *(_QWORD *)(a1 + 88) = v39;
                            v37 = v39;
                          }
                          ++v34;
                          v35 = (__m128i *)(v37 + 40 * v36);
                          *v35 = _mm_load_si128(&v50);
                          v35[1] = _mm_load_si128(&v51);
                          v35[2].m128i_i64[0] = v52;
                          ++*(_QWORD *)(a1 + 96);
                          if ( v33 == v34 )
                            return 1;
                        }
                      }
                    }
                    return 0;
                  }
                }
              }
              return 0;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
