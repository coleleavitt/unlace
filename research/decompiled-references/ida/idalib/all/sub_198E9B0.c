__int64 __fastcall sub_198E9B0(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  unsigned int v9; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdx
  const __m128i *v13; // roff
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // xmm2
  _BYTE *v29; // rdi
  _BYTE *v31; // rdi
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+2Ch] [rbp-11Ch]
  __m128i v37; // [rsp+30h] [rbp-118h] BYREF
  __m128i v38; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-F0h] BYREF
  int v40; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v41; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v42; // [rsp+70h] [rbp-D8h]
  __m128 v43; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+90h] [rbp-B8h]
  __int64 v45; // [rsp+98h] [rbp-B0h]
  __m128i v46; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-98h]
  __int64 v48; // [rsp+B8h] [rbp-90h]
  __m128i v49; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __int64 v51; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v53[88]; // [rsp+F0h] [rbp-58h] BYREF

  v9 = 0;
  if ( a2 == a6 )
    goto LABEL_12;
  do
  {
    do
    {
      v11 = a2[1];
      v41 = (__m128i)(0xFFFFFFFE00000000LL & v41.m128i_u64[0]);
      v42.m128i_i64[1] = 0;
      v12 = *(_QWORD *)(v11 + 8LL * v9 + 32);
      v13 = (const __m128i *)(*a2 + 24LL * v9 + 48);
      v14 = (__m128)_mm_loadu_si128(v13);
      v43 = v14;
      v15 = v13[1].m128i_i64[0];
      v45 = v12;
      v44 = v15;
      if ( (v14.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_198DB80(
                                a1,
                                a1,
                                v43.m128_i64[1],
                                (__int64)a1,
                                v43.m128_u64[1] + 24LL * v43.m128_u32[1],
                                a8,
                                0) )
          return 1;
LABEL_10:
        ++v9;
        continue;
      }
      if ( sub_F1D570((__int64)&v43) )
      {
        v39 = 0;
        v18 = *a1;
        v40 = 0;
        sub_1E4CF80(
          (unsigned int)&v46,
          v18,
          (unsigned int)&v39,
          (unsigned int)&v40,
          v16,
          v17,
          v43.m128_i64[0],
          v43.m128_i64[1],
          v44,
          v45);
        v19 = *a1;
        ptr[0] = v53;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v14.m128_u64 = sub_1E4C910(
                                    v19,
                                    (unsigned int)ptr,
                                    v20,
                                    v21,
                                    v22,
                                    v23,
                                    v46.m128i_i64[0],
                                    v46.m128i_i64[1],
                                    v47,
                                    v48);
        v24 = *a1;
        v36 = v40;
        v25 = *(_DWORD *)(*a1 + 12632);
        v49.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        *(_DWORD *)(v24 + 12632) = 0;
        v49.m128i_i64[1] = 0;
        v51 = 0;
        v35 = v25;
        if ( (unsigned __int8)sub_198D5F0(a1, &v46, &v49, 0, v14, a4)
          || (sub_18BC3D0((__int64)&v37, a1, v39, v36, v26, v27, v49.m128i_i32[0], v49.m128i_i64[1], v50, v51),
              a4 = (__m128)_mm_loadu_si128(&v37),
              v28 = _mm_loadu_si128(&v38),
              v41 = (__m128i)a4,
              v42 = v28,
              (v37.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v29 = ptr[0];
          *(_DWORD *)(v24 + 12632) = v35;
          if ( v29 != v53 )
            free(v29);
          return 1;
        }
        sub_17429A0(a8, &v41);
        v31 = ptr[0];
        *(_DWORD *)(v24 + 12632) = v35;
        if ( v31 == v53 )
          goto LABEL_10;
        free(v31);
        ++v9;
      }
      else
      {
        if ( (unsigned __int8)sub_198D5F0(a1, (const __m128i *)&v43, &v41, 0, v14, a4) )
          return 1;
        ++v9;
        sub_17429A0(a8, &v41);
      }
    }
    while ( a2 != a6 );
LABEL_12:
    ;
  }
  while ( v9 != a7 );
  return 0;
}
