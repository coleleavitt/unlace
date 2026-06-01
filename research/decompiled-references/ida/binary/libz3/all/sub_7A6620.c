__m128 *__fastcall sub_7A6620(
        const __m128i *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __m128 a7)
{
  char **exception; // rbx
  __int64 v8; // rax
  const __m128i *v13; // r13
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  __m128 *v18; // rsi
  __m128i v19; // xmm1
  unsigned int v20; // eax
  unsigned int v21; // ebx
  size_t v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __m128i v25; // xmm1
  _DWORD *v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __m128i *v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __m128i v34; // [rsp+0h] [rbp-98h] BYREF
  _DWORD *v35; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v36; // [rsp+18h] [rbp-80h]
  unsigned int v37; // [rsp+24h] [rbp-74h]
  unsigned int *v38; // [rsp+28h] [rbp-70h]
  __int64 v39[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = a1[1].m128i_i64[1];
  v36 = a2;
  v37 = a3;
  v38 = a4;
  if ( !v8 || !*(_BYTE *)(v8 + 352) )
    return nullptr;
  sub_7A4170(a1);
  v13 = (const __m128i *)a1[515].m128i_i64[1];
  if ( v13 )
  {
    v13[-1].m128i_i32[3] = 0;
    if ( a5 )
    {
      v14 = a6;
      v15 = a6 + 16LL * a5;
      do
      {
        while ( 1 )
        {
          v19 = (__m128i)_mm_loadh_ps((const double *)*(_QWORD *)(v14 + 8));
          v20 = v13[-1].m128i_u32[3];
          if ( v20 != v13[-1].m128i_i32[2] )
            break;
          v21 = (3 * v20 + 1) >> 1;
          v22 = 16 * v21 + 8;
          if ( 16 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v39, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v34 = v19;
          v23 = sub_186B270(v22);
          v24 = a1[515].m128i_i64[1];
          v25 = _mm_load_si128(&v34);
          v26 = (_DWORD *)v23;
          v13 = (const __m128i *)(v23 + 8);
          if ( v24 )
          {
            v27 = *(unsigned int *)(v24 - 4);
            *(_DWORD *)(v23 + 4) = v27;
            v28 = 0;
            v29 = 16 * v27;
            if ( v29 )
            {
              do
              {
                a7 = (__m128)_mm_loadu_si128((const __m128i *)(v24 + v28));
                *(__m128 *)&v26[v28 / 4 + 2] = a7;
                v28 += 16LL;
              }
              while ( v29 != v28 );
            }
            v35 = v26;
            v34 = v25;
            sub_186B220((void *)(v24 - 8));
            v26 = v35;
            v25 = _mm_load_si128(&v34);
            v30 = (__m128i *)&v13[v35[1]];
            v31 = v35[1] + 1;
          }
          else
          {
            *(_DWORD *)(v23 + 4) = 0;
            v30 = (__m128i *)(v23 + 8);
            v31 = 1;
          }
          v14 += 16;
          a1[515].m128i_i64[1] = (__int64)v13;
          *v26 = v21;
          *v30 = v25;
          v13[-1].m128i_i32[3] = v31;
          if ( v14 == v15 )
            goto LABEL_17;
        }
        v16 = v20;
        v17 = v20 + 1;
        v18 = (__m128 *)&v13[v16];
LABEL_8:
        v14 += 16;
        *v18 = (__m128)v19;
        v13[-1].m128i_i32[3] = v17;
      }
      while ( v14 != v15 );
    }
  }
  else if ( a5 )
  {
    v14 = a6;
    v15 = a6 + 16LL * a5;
    v34 = (__m128i)_mm_loadh_ps((const double *)*(_QWORD *)(a6 + 8));
    v33 = (_QWORD *)sub_186B270(0x28u);
    v19 = _mm_load_si128(&v34);
    v13 = (const __m128i *)(v33 + 1);
    *v33 = 2;
    v17 = 1;
    a1[515].m128i_i64[1] = (__int64)v13;
    v18 = (__m128 *)v13;
    goto LABEL_8;
  }
LABEL_17:
  v32 = a1[1].m128i_i64[1];
  if ( v32 && *(_BYTE *)(v32 + 352) )
    return sub_7A5A00(a1, v36, v37, v38, a5, v13, *(double *)a7.m128_u64, 0, nullptr);
  else
    return nullptr;
}

