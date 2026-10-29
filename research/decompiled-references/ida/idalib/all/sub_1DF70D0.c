__int64 __fastcall sub_1DF70D0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r13
  __m128i v18; // xmm2
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm1
  int v22; // eax
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // r14
  unsigned int *v27; // rax
  int v28; // esi
  __int128 v29; // xmm4
  char v30; // dl
  __int64 v31; // rdi
  int v32; // ebx
  __int16 v33; // ax
  __m128 v34; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v35; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __m128i v37; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+40h] [rbp-88h]
  __int128 v39; // [rsp+50h] [rbp-78h]
  __int64 v40; // [rsp+60h] [rbp-68h]
  __int128 v41; // [rsp+70h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-48h]
  __int128 v43; // [rsp+90h] [rbp-38h]

  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 )
  {
    v15 = sub_1DD3CF0((__int64)a1, *(_QWORD *)(a2 + 16), *(void **)(a2 + 24), 0, 0);
    v17 = v16;
    if ( !v15 )
      return 1;
  }
  else
  {
    v17 = 0;
  }
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v19 = *(_QWORD *)(a2 + 48);
  v20 = *(_QWORD *)(a2 + 32);
  v37 = v18;
  v38 = v19;
  if ( v20 )
  {
    sub_1DD8C40(&v35, (__int64)a1, &v37, a3, a4, v20, a13, a14);
    a6 = _mm_loadu_si128(&v35);
    v20 = v35.m128i_i64[0];
    v37 = a6;
    v38 = v36;
    if ( !v35.m128i_i64[0] )
      return 1;
  }
  if ( *(_DWORD *)(*a1 + 12632)
    || *(_QWORD *)(a2 + 16) != v15
    || *(_QWORD *)(a2 + 24) != v17
    || (v25 = a2, v20 != *(_QWORD *)(a2 + 32)) )
  {
    v34.m128_u64[0] = v17;
    v41 = 0;
    *(_OWORD *)ptr = 0;
    v21 = _mm_loadh_ps((const double *)v34.m128_u64);
    v43 = 0;
    v34 = v21;
    sub_15AB8B0((__int64)&v41, v15, v17);
    v22 = sub_19A47C0(*a1, 0, (int)&v41, &v37);
    if ( v22 == 1 )
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    else
    {
      if ( v22 > 1 )
      {
        if ( v22 == 2 )
        {
          v27 = sub_1DF70C0(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v21, v18, a6, v23, v24, a9, a10);
          if ( v27 == (unsigned int *)((char *)&dword_0 + 1) )
          {
LABEL_17:
            v25 = 1;
            if ( !HIDWORD(ptr[1]) )
              return v25;
            goto LABEL_18;
          }
          v28 = *(_DWORD *)(a2 + 8);
          v29 = (__int128)_mm_load_si128(&v37);
          v30 = *(_BYTE *)(a2 + 12);
          v31 = *a1;
          v40 = v38;
          v39 = v29;
          v25 = sub_1C37830(
                  v31,
                  v28,
                  v30,
                  v34.m128_i64[0],
                  v34.m128_i64[1],
                  (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL,
                  v29,
                  v38);
LABEL_12:
          if ( !HIDWORD(ptr[1]) )
            return v25;
LABEL_18:
          free(ptr[0]);
          return v25;
        }
        v25 = 1;
        if ( v22 == 3 )
          goto LABEL_12;
LABEL_16:
        v25 = (__int64)sub_1DF70C0(a1, *(unsigned int **)(a2 + 56), (__m128)0LL, v21, v18, a6, v23, v24, a9, a10);
        if ( v25 == 1 )
          goto LABEL_17;
        goto LABEL_12;
      }
      if ( v22 || *(_BYTE *)(a2 + 12) )
        goto LABEL_16;
    }
    v32 = *(_DWORD *)(a2 + 8);
    v25 = sub_EEE9A0(8, *(_QWORD **)(*a1 + 248), 8u);
    v33 = *(_WORD *)v25 & 0xFE00;
    LOBYTE(v33) = -18;
    *(_WORD *)v25 = v33;
    if ( unk_2CD7484 )
      sub_EE9B50(238);
    *(_BYTE *)(v25 + 1) &= ~2u;
    *(_DWORD *)(v25 + 4) = v32;
    goto LABEL_12;
  }
  return v25;
}
