unsigned int *__fastcall sub_7CD0E0(_QWORD *a1)
{
  char **exception; // r13
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  unsigned int *result; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // rbp
  unsigned int v13; // r12d
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i *v20; // r15
  __int64 v21; // rax
  unsigned int v22; // ecx
  size_t v23; // rdi
  __int64 v24; // rax
  const __m128i *v25; // r14
  _DWORD *v26; // r10
  __int64 v27; // rax
  __m128i *v28; // rdx
  const __m128i *v29; // rdi
  const __m128i *i; // rax
  __int32 v31; // esi
  __m128i v32; // xmm0
  __int64 v33; // rax
  const __m128i *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // ecx
  _QWORD *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-80h] BYREF
  unsigned int *v40; // [rsp+10h] [rbp-78h]
  int v41; // [rsp+18h] [rbp-70h]
  unsigned int v42; // [rsp+1Ch] [rbp-6Ch]
  _DWORD *v43; // [rsp+20h] [rbp-68h]
  const __m128i *v44; // [rsp+28h] [rbp-60h]
  __int64 v45[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a1[1044];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 24 * v5;
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v4 + 8);
          if ( v7 )
          {
            v8 = *(_QWORD *)(v4 + 16);
            v9 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v9 )
              break;
          }
          v4 += 24;
          if ( v6 == v4 )
            goto LABEL_8;
        }
        sub_15D7BC0(v8, v7);
        v4 += 24;
      }
      while ( v6 != v4 );
LABEL_8:
      v4 = a1[1044];
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  result = (unsigned int *)a1[3];
  v11 = *((unsigned int **)result + 409);
  if ( v11 )
  {
    result = &v11[*(v11 - 1)];
    v40 = result;
    if ( v11 != result )
    {
      v12 = v11;
      do
      {
        result = (unsigned int *)a1[291];
        if ( result )
        {
          v13 = *v12;
          if ( *v12 < *(result - 1) )
          {
            v14 = *(unsigned int **)&result[2 * v13];
            if ( v14 )
            {
              v15 = a1[215];
              if ( v15 )
              {
                v16 = *v14;
                v17 = 0;
                if ( (unsigned int)v16 < *(_DWORD *)(v15 - 4) )
                {
                  v18 = *(_QWORD *)(v15 + 8 * v16);
                  if ( v18 )
                    v17 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 40));
                }
              }
              else
              {
                v17 = 0;
              }
              v19 = a1[18];
              v20 = (__m128i *)a1[1044];
              ++v14[2];
              v39 = v19;
              if ( v20 )
              {
                v21 = v20[-1].m128i_u32[3];
                if ( (_DWORD)v21 == v20[-1].m128i_i32[2] )
                {
                  v22 = (unsigned int)(3 * v21 + 1) >> 1;
                  v41 = v22;
                  v23 = 8 * (v22 + ((3 * (_DWORD)v21 + 1) & 0xFFFFFFFE)) + 8;
                  if ( 24 * (int)v21 + 8 >= (unsigned int)v23 || (unsigned int)v21 >= v22 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_116834(v45, "Overflow encountered when expanding vector", v2);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v45);
                    sub_233E40((__int64)v45);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v42 = _mm_cvtsi128_si32(v17);
                  v24 = sub_186B270(v23);
                  v25 = (const __m128i *)a1[1044];
                  v17 = _mm_cvtsi32_si128(v42);
                  v26 = (_DWORD *)v24;
                  v20 = (__m128i *)(v24 + 8);
                  if ( v25 )
                  {
                    v27 = v25[-1].m128i_u32[3];
                    v28 = v20;
                    v26[1] = v27;
                    v29 = (const __m128i *)((char *)v25 + 24 * v27);
                    for ( i = v25; v29 != i; v28[-1] = v32 )
                    {
                      v31 = i->m128i_i32[0];
                      i = (const __m128i *)((char *)i + 24);
                      v28 = (__m128i *)((char *)v28 + 24);
                      v28[-2].m128i_i32[2] = v31;
                      v28[-2].m128i_i32[3] = i[-2].m128i_i32[3];
                      v32 = _mm_loadu_si128(i - 1);
                      i[-1].m128i_i64[0] = 0;
                    }
                    v33 = v25[-1].m128i_u32[3];
                    if ( (_DWORD)v33 )
                    {
                      v34 = (const __m128i *)((char *)v25 + 24 * v33);
                      do
                      {
                        while ( 1 )
                        {
                          v35 = v25->m128i_i64[1];
                          if ( v35 )
                          {
                            v36 = v25[1].m128i_i64[0];
                            v9 = (*(_DWORD *)(v35 + 8))-- == 1;
                            if ( v9 )
                              break;
                          }
                          v25 = (const __m128i *)((char *)v25 + 24);
                          if ( v25 == v34 )
                            goto LABEL_36;
                        }
                        v44 = v34;
                        v25 = (const __m128i *)((char *)v25 + 24);
                        v43 = v26;
                        v42 = _mm_cvtsi128_si32(v17);
                        sub_15D7BC0(v36, v35);
                        v34 = v44;
                        v26 = v43;
                        v17 = _mm_cvtsi32_si128(v42);
                      }
                      while ( v25 != v44 );
LABEL_36:
                      v25 = (const __m128i *)a1[1044];
                    }
                    v43 = v26;
                    v42 = _mm_cvtsi128_si32(v17);
                    sub_186B220(&v25[-1].m128i_u64[1]);
                    v26 = v43;
                    v17 = _mm_cvtsi32_si128(v42);
                    result = (unsigned int *)v20 + 6 * (unsigned int)v43[1];
                  }
                  else
                  {
                    *(_DWORD *)(v24 + 4) = 0;
                    result = (unsigned int *)(v24 + 8);
                  }
                  v37 = v41;
                  a1[1044] = v20;
                  *v26 = v37;
                }
                else
                {
                  result = (unsigned int *)v20 + 6 * v21;
                }
              }
              else
              {
                v41 = _mm_cvtsi128_si32(v17);
                v38 = (_QWORD *)sub_186B270(0x38u);
                v20 = (__m128i *)(v38 + 1);
                *v38 = 2;
                v17 = _mm_cvtsi32_si128(v41);
                a1[1044] = v38 + 1;
                result = (unsigned int *)(v38 + 1);
              }
              *(_QWORD *)result = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v17).m128i_u64[0];
              *(__m128 *)(result + 2) = _mm_loadh_ps((const double *)&v39);
              ++v20[-1].m128i_i32[3];
            }
          }
        }
        ++v12;
      }
      while ( v40 != v12 );
    }
  }
  return result;
}

