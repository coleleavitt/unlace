__int64 __fastcall sub_1DADC40(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128 v17; // xmm1
  int v18; // eax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // r14
  unsigned int *v23; // rax
  int v24; // esi
  __int128 v25; // xmm4
  char v26; // dl
  __int64 v27; // rdi
  int v28; // ebx
  __int16 v29; // ax
  __m128 v30; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v31; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __m128i v33; // [rsp+30h] [rbp-98h] BYREF
  __int64 v34; // [rsp+40h] [rbp-88h]
  __int128 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+70h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-48h]
  __int128 v39; // [rsp+90h] [rbp-38h]

  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 )
  {
    v11 = sub_1D9F590((__int64)a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
    v13 = v12;
    if ( !v11 )
      return 1;
  }
  else
  {
    v13 = 0;
  }
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v15 = *(_QWORD *)(a2 + 48);
  v16 = *(_QWORD *)(a2 + 32);
  v33 = v14;
  v34 = v15;
  if ( v16 )
  {
    sub_1D9B710(&v31, a1, &v33, a3, a4);
    a6 = _mm_loadu_si128(&v31);
    v16 = v31.m128i_i64[0];
    v33 = a6;
    v34 = v32;
    if ( !v31.m128i_i64[0] )
      return 1;
  }
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 16) != v11
    || *(_QWORD *)(a2 + 24) != v13
    || (v21 = a2, v16 != *(_QWORD *)(a2 + 32)) )
  {
    v30.m128_u64[0] = v13;
    v37 = 0;
    *(_OWORD *)ptr = 0;
    v17 = _mm_loadh_ps((const double *)v30.m128_u64);
    v39 = 0;
    v30 = v17;
    sub_15AB8B0((__int64)&v37, v11, v13);
    v18 = sub_19A47C0(*a1, 0, (int)&v37, &v33);
    if ( v18 == 1 )
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    else
    {
      if ( v18 > 1 )
      {
        if ( v18 == 2 )
        {
          v23 = sub_1DADC30(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v17, v14, a6, v19, v20, a9, a10);
          if ( v23 == (unsigned int *)((char *)&dword_0 + 1) )
          {
LABEL_17:
            v21 = 1;
            if ( !HIDWORD(ptr[1]) )
              return v21;
            goto LABEL_18;
          }
          v24 = *(_DWORD *)(a2 + 8);
          v25 = (__int128)_mm_load_si128(&v33);
          v26 = *(_BYTE *)(a2 + 12);
          v27 = *a1;
          v36 = v34;
          v35 = v25;
          v21 = sub_1C37830(
                  v27,
                  v24,
                  v26,
                  v30.m128_i64[0],
                  v30.m128_i64[1],
                  (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL,
                  v25,
                  v34);
LABEL_12:
          if ( !HIDWORD(ptr[1]) )
            return v21;
LABEL_18:
          free(ptr[0]);
          return v21;
        }
        v21 = 1;
        if ( v18 == 3 )
          goto LABEL_12;
LABEL_16:
        v21 = (__int64)sub_1DADC30(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v17, v14, a6, v19, v20, a9, a10);
        if ( v21 == 1 )
          goto LABEL_17;
        goto LABEL_12;
      }
      if ( v18 || *(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    v28 = *(_DWORD *)(a2 + 8);
    v21 = sub_EEE9A0(8, *(_QWORD **)(*a1 + 248), 8u);
    v29 = *(_WORD *)v21 & 0xFE00;
    LOBYTE(v29) = -18;
    *(_WORD *)v21 = v29;
    if ( unk_2CD7484 )
      sub_EE9B50(238);
    *(_BYTE *)(v21 + 1) &= ~2u;
    *(_DWORD *)(v21 + 4) = v28;
    goto LABEL_12;
  }
  return v21;
}
