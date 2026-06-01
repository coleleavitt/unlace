__int64 __fastcall sub_1DAF6F0(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned int *v11; // rax
  unsigned __int64 *v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rbx
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  double v30; // xmm4_8
  double v31; // xmm5_8
  unsigned __int64 v32; // rax
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int32 v36; // esi
  int v37; // ecx
  __m128i v38; // xmm1
  __int64 v39; // rdi
  __int32 v40; // r8d
  __int32 v41; // r10d
  unsigned int *v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  __m128 v45; // xmm0
  unsigned __int64 v46; // [rsp+0h] [rbp-138h]
  __int64 v47; // [rsp+0h] [rbp-138h]
  __m128i v48; // [rsp+10h] [rbp-128h] BYREF
  __int64 v49; // [rsp+20h] [rbp-118h]
  __m128i v50; // [rsp+30h] [rbp-108h] BYREF
  __int64 v51; // [rsp+40h] [rbp-F8h]
  __m128 v52; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+78h] [rbp-C0h]
  _BYTE v56[184]; // [rsp+80h] [rbp-B8h] BYREF

  v55 = 0x1000000000LL;
  v11 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v56;
  if ( !v11 )
  {
    v23 = 0;
    v24 = v55;
    goto LABEL_30;
  }
  v12 = (unsigned __int64 *)(v11 + 4);
  v13 = *v11;
  v46 = v13;
  v14 = (__int64)&v11[2 * v13 + 4];
  if ( v13 <= 0x10 )
  {
    if ( v12 == (unsigned __int64 *)v14 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v12 )
      {
        v21 = (unsigned int)v55;
        v22 = (unsigned int)v55 + 1LL;
        if ( v22 > HIDWORD(v55) )
        {
          sub_2237220(&ptr, v56, v22, 8);
          v21 = (unsigned int)v55;
        }
        ++v12;
        *((_QWORD *)ptr + v21) = 0;
        LODWORD(v55) = v55 + 1;
        if ( v12 == (unsigned __int64 *)v14 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), *(_DWORD *)(*v12 + 8));
      v18 = sub_1DAC690(a1, *v12, v15, v16, v17, a3, a4, a5);
      sub_1AF3B30(*(__int64 **)(*a1 + 760));
      if ( v18 )
      {
        v19 = (unsigned int)v55;
        v20 = (unsigned int)v55 + 1LL;
        if ( v20 > HIDWORD(v55) )
        {
          sub_2237220(&ptr, v56, v20, 8);
          v19 = (unsigned int)v55;
        }
        *((_QWORD *)ptr + v19) = v18;
        LODWORD(v55) = v55 + 1;
      }
      ++v12;
    }
    while ( v12 != (unsigned __int64 *)v14 );
  }
  else
  {
    sub_2237220(&ptr, v56, v13, 8);
    if ( v12 != (unsigned __int64 *)v14 )
      goto LABEL_10;
  }
LABEL_14:
  v11 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v11 )
  {
LABEL_16:
    v23 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v11 + 8) || !*(_QWORD *)&v11[2 * *v11 + 4 + 2 * (unsigned __int64)v11[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), a2->m128i_u32[2], 0);
  v27 = *a1;
  sub_1C36400(*a1, 0);
  v32 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v32 <= 0x3D )
  {
    v42 = (unsigned int *)a2[1].m128i_i64[1];
    v34 = v42[1] + (unsigned __int64)*v42;
    v35 = *(_QWORD *)&v42[2 * v34 + 4];
    v43 = 0x2000004000000081LL;
    if ( _bittest64(&v43, v32) )
      goto LABEL_36;
  }
  else
  {
    v33 = (unsigned int *)a2[1].m128i_i64[1];
    v34 = *v33;
    v35 = *(_QWORD *)&v33[2 * v34 + 4 + 2 * v33[1]];
  }
  while ( (*(_WORD *)v35 & 0x1FF) == 0xFA )
    v35 = *(_QWORD *)(v35 + 8LL * *(unsigned int *)(v35 + 8) + 32);
LABEL_36:
  v44 = sub_1DAD2E0(a1, (unsigned __int16 *)v35, nullptr, a3, a4, a5, a6, v30, v31, a9, a10, v34, v28, v29);
  if ( v44 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v44 = sub_1B87850(*(_QWORD *)(*a1 + 760), v44 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  sub_1C36470(v27);
  v23 = sub_1B14300(*(__int64 **)(*a1 + 760), v44, (__int64 *)ptr, (unsigned int)v55, a3, a4);
  if ( v23 == 1 )
    goto LABEL_18;
LABEL_17:
  v24 = v55;
  if ( (unsigned int)v55 != v46 )
  {
LABEL_18:
    v25 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v36 = a2->m128i_i32[2];
  v50.m128i_i32[2] = 0;
  v50.m128i_i64[0] = 0;
  v51 = 0;
  if ( v36 == 11 )
  {
    v47 = v23;
    v45 = (__m128)_mm_loadu_si128(a2 + 2);
    v53 = a2[3].m128i_i64[0];
    v52 = v45;
    v50 = (__m128i)v45;
    v51 = v53;
    sub_1D9B710(&v48, a1, &v50, v45, a4);
    v36 = a2->m128i_i32[2];
    v24 = v55;
    v50 = _mm_loadu_si128(&v48);
    v23 = v47;
    v51 = v49;
  }
  v37 = 103;
  if ( (unsigned int)(v36 - 9) <= 1 )
    v37 = a2[2].m128i_i32[0];
  v38 = _mm_load_si128(&v50);
  v39 = *a1;
  v40 = a2->m128i_i32[3];
  v41 = a2[1].m128i_i32[0];
  v53 = v51;
  v52 = (__m128)v38;
  v25 = sub_1B69230(
          *(_QWORD *)(v39 + 760),
          v36,
          (unsigned int)&v52,
          v37,
          (_DWORD)ptr,
          v24,
          v23 & 0xFFFFFFFFFFFFFFFELL,
          v40,
          v41);
LABEL_19:
  if ( ptr != v56 )
    free(ptr);
  return v25;
}
