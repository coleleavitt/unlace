__int64 __fastcall sub_1CFF3D0(
        unsigned int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r8
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm3
  _BYTE *v26; // rdi
  __m128i *v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rdx
  __m128i *v32; // rax
  _BYTE *v33; // rdi
  __int64 v34; // rsi
  int v36; // [rsp+28h] [rbp-120h]
  int v37; // [rsp+2Ch] [rbp-11Ch]
  __m128i v38; // [rsp+30h] [rbp-118h] BYREF
  __m128i v39; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v40; // [rsp+58h] [rbp-F0h] BYREF
  int v41; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v42; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v43; // [rsp+70h] [rbp-D8h]
  __m128 v44; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v45; // [rsp+90h] [rbp-B8h]
  __m128i v46; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-98h]
  __int64 v48; // [rsp+B8h] [rbp-90h]
  __m128i v49; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __int64 v51; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v53[88]; // [rsp+F0h] [rbp-58h] BYREF

  if ( a3 == a5 )
    return 0;
  v10 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *a2;
        v12 = *((unsigned int *)a2 + 8);
        v42.m128i_i64[1] = 0;
        v43.m128i_i64[1] = 0;
        v42.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        sub_1D3AAD0(&v38, v11, v10, 0, v12, 0);
        v13 = (__m128)_mm_loadu_si128(&v38);
        v14 = (__m128)_mm_loadu_si128(&v39);
        v44 = v13;
        v45 = v14;
        if ( (v38.m128i_i32[0] & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1CFF3D0(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v44.m128_i32[2],
                                (_DWORD)a1,
                                v44.m128_i32[2] + 24 * v44.m128_i32[1],
                                a6,
                                a7) )
          return 1;
LABEL_11:
        v10 += 24;
        if ( a5 == v10 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v44) )
        break;
      v28 = &v42;
      if ( (unsigned __int8)sub_1CFEEE0(a1, (const __m128i *)&v44, &v42, a7, v13, v14) )
        return 1;
      v29 = *(unsigned int *)(a6 + 8);
      v30 = *(_QWORD *)a6;
      v31 = v29 + 1;
      v32 = (__m128i *)(*(_QWORD *)a6 + 32 * v29);
      if ( v31 > *(unsigned int *)(a6 + 12) )
      {
        v34 = a6 + 16;
        if ( v30 > (unsigned __int64)&v42 || v32 <= &v42 )
        {
          sub_2237220(a6, v34, v31, 32);
          v32 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
        }
        else
        {
          sub_2237220(a6, v34, v31, 32);
          v28 = (__m128i *)((char *)&v42 + *(_QWORD *)a6 - v30);
          v32 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
        }
      }
      v10 += 24;
      *v32 = _mm_loadu_si128(v28);
      v32[1] = _mm_loadu_si128(v28 + 1);
      ++*(_DWORD *)(a6 + 8);
      if ( a5 == v10 )
        return 0;
    }
    v40 = 0;
    v41 = 0;
    sub_1E4CF80(
      (unsigned int)&v46,
      *(_QWORD *)a1,
      (unsigned int)&v40,
      (unsigned int)&v41,
      v15,
      v16,
      v44.m128_i64[0],
      v44.m128_i64[1],
      v45.m128_i32[0],
      v45.m128_i64[1]);
    ptr[0] = v53;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v13.m128_u64 = sub_1E4C910(
                                *(_QWORD *)a1,
                                (unsigned int)ptr,
                                v17,
                                v18,
                                v19,
                                v20,
                                v46.m128i_i64[0],
                                v46.m128i_i64[1],
                                v47,
                                v48);
    v21 = *(_QWORD *)a1;
    v37 = v41;
    v49.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v22 = *(_DWORD *)(v21 + 12632);
    *(_DWORD *)(v21 + 12632) = 0;
    v49.m128i_i64[1] = 0;
    v51 = 0;
    v36 = v22;
    if ( (unsigned __int8)sub_1CFEEE0(a1, &v46, &v49, a7, v13, v14) )
      break;
    sub_1CB02D0((__int64)&v38, a1, v40, v37, v23, v24, v49.m128i_i32[0], v49.m128i_i64[1], v50, v51);
    v25 = _mm_loadu_si128(&v39);
    v42 = _mm_loadu_si128(&v38);
    v43 = v25;
    if ( (v38.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a6, &v42);
    v33 = ptr[0];
    *(_DWORD *)(v21 + 12632) = v36;
    if ( v33 == v53 )
      goto LABEL_11;
    free(v33);
    v10 += 24;
    if ( a5 == v10 )
      return 0;
  }
  v26 = ptr[0];
  *(_DWORD *)(v21 + 12632) = v36;
  if ( v26 != v53 )
    free(v26);
  return 1;
}
