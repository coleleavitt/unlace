__int64 **__fastcall sub_ADBB40(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128 v13; // xmm2
  __int64 v14; // rbx
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  float v25; // xmm0_4
  __int64 v26; // rax
  __m128i v27; // xmm5
  __int64 v28; // rdx
  __int64 v29; // rsi
  __m128i v30; // xmm0
  float v31; // xmm0_4
  _QWORD *v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // rax
  int v35; // ecx
  __int64 **result; // rax
  unsigned int v37; // ebx
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  _QWORD *v42; // rax
  __int64 v43; // [rsp+0h] [rbp-78h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v43 = *a2;
  v11 = sub_952C10(*(__int64 **)a1, *a2);
  v12 = *(_QWORD *)(a1 + 984);
  v13 = 0;
  v14 = v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 4);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v16.m128_f32[0] = (float)a6;
  *(_DWORD *)(v12 + 56) = 0;
  *(float *)(v12 + 52) = (float)a5;
  v18 = 0;
  v18.m128_f32[0] = (float)(int)v11;
  v13.m128_f32[0] = (float)*(int *)v14;
  v15.m128_f32[0] = (float)*(int *)(v14 + 36);
  v19 = _mm_unpacklo_ps(v18, v13);
  v20 = 0;
  v21 = _mm_unpacklo_ps(v15, v16);
  v22 = 0;
  v23 = _mm_movelh_ps(v19, v21);
  v22.m128_f32[0] = (float)*(int *)(v43 + 44);
  v24 = 0;
  v24.m128_f32[0] = (float)*(int *)(v43 + 20);
  LODWORD(v11) = *(_DWORD *)(v14 + 8);
  *(__m128 *)(v12 + 36) = v23;
  v20.m128_f32[0] = (float)(int)v11;
  v17.m128_f32[0] = (float)a4;
  *(__m128 *)(v12 + 20) = _mm_movelh_ps(_mm_unpacklo_ps(v24, v22), _mm_unpacklo_ps(v20, v17));
  if ( a3 )
    v25 = (float)*(int *)(a3 + 24);
  else
    v25 = 1.0;
  v26 = *(_QWORD *)(a1 + 8);
  v27 = _mm_cvtsi32_si128(*(_DWORD *)(v14 + 32));
  *(float *)(v12 + 16) = v25;
  v28 = *(unsigned int *)(v12 - 4);
  v29 = *(_QWORD *)(a1 + 144);
  v30 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v14 + 12)), _mm_cvtsi32_si128(*(_DWORD *)(v14 + 16))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v26 + 9464)), v27));
  *(__m128 *)v12 = _mm_add_ps(
                     _mm_mul_ps(
                       _mm_cvtepi32_ps(_mm_srli_epi32(v30, 0x10u)),
                       _mm_shuffle_ps((__m128)0x47800000u, (__m128)0x47800000u, 0)),
                     _mm_cvtepi32_ps(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0), v30)));
  v31 = sub_15B8F00(a1 + 288, v29, v28);
  if ( v31 > *(float *)(v14 + 44) )
    *(float *)(v14 + 44) = v31;
  v32 = *(_QWORD **)(a1 + 1032);
  if ( v32 )
  {
    v33 = *((_DWORD *)v32 - 1);
    if ( v33 == *((_DWORD *)v32 - 2) )
    {
      v37 = (3 * v33 + 1) >> 1;
      v38 = 16 * v37 + 8;
      if ( 16 * v33 + 8 >= (unsigned int)v38 || v33 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v45, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v32 - 1, v38);
      v32 = v39 + 2;
      *v39 = v37;
      v40 = v39[1];
      *(_QWORD *)(a1 + 1032) = v32;
      v41 = v40;
      result = (__int64 **)&v32[2 * v40];
      v35 = v41 + 1;
    }
    else
    {
      v34 = v33;
      v35 = v33 + 1;
      result = (__int64 **)&v32[2 * v34];
    }
  }
  else
  {
    v42 = (_QWORD *)sub_186B270(0x28u);
    v35 = 1;
    v32 = v42 + 1;
    *v42 = 2;
    *(_QWORD *)(a1 + 1032) = v42 + 1;
    result = (__int64 **)(v42 + 1);
  }
  *result = a2;
  *((_DWORD *)result + 3) = a4 & 0x7FFFFFFF;
  *((float *)result + 2) = v31;
  *((_DWORD *)v32 - 1) = v35;
  return result;
}

