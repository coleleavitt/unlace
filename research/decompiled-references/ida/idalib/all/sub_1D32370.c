__int64 __fastcall sub_1D32370(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int *v14; // rax
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v30; // rbp
  __int64 v31; // r8
  __int64 v32; // r9
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned __int64 v35; // rax
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int32 v39; // esi
  int v40; // ecx
  __m128i v41; // xmm1
  __int64 v42; // rdi
  __int32 v43; // r8d
  __int32 v44; // r10d
  unsigned int *v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  __m128 v48; // xmm0
  unsigned __int64 v49; // [rsp+0h] [rbp-138h]
  __int64 v50; // [rsp+0h] [rbp-138h]
  __m128i v51; // [rsp+10h] [rbp-128h] BYREF
  __int64 v52; // [rsp+20h] [rbp-118h]
  __m128i v53; // [rsp+30h] [rbp-108h] BYREF
  __int64 v54; // [rsp+40h] [rbp-F8h]
  __m128 v55; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-C0h]
  _BYTE v59[184]; // [rsp+80h] [rbp-B8h] BYREF

  v58 = 0x1000000000LL;
  v14 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v59;
  if ( !v14 )
  {
    v26 = 0;
    v27 = (unsigned int)v58;
    goto LABEL_30;
  }
  v15 = (unsigned __int64 *)(v14 + 4);
  v16 = *v14;
  v49 = v16;
  v17 = (__int64)&v14[2 * v16 + 4];
  if ( v16 <= 0x10 )
  {
    if ( v15 == (unsigned __int64 *)v17 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v15 )
      {
        v24 = (unsigned int)v58;
        v25 = (unsigned int)v58 + 1LL;
        if ( v25 > HIDWORD(v58) )
        {
          sub_2237220(&ptr, v59, v25, 8);
          v24 = (unsigned int)v58;
        }
        ++v15;
        *((_QWORD *)ptr + v24) = 0;
        LODWORD(v58) = v58 + 1;
        if ( v15 == (unsigned __int64 *)v17 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), *(_DWORD *)(*v15 + 8));
      v21 = sub_1D2EE10(a1, *v15, v18, v19, v20, a3, a4, a5);
      sub_1AF3B30(*(__int64 **)(*a1 + 760));
      if ( v21 )
      {
        v22 = (unsigned int)v58;
        v23 = (unsigned int)v58 + 1LL;
        if ( v23 > HIDWORD(v58) )
        {
          sub_2237220(&ptr, v59, v23, 8);
          v22 = (unsigned int)v58;
        }
        *((_QWORD *)ptr + v22) = v21;
        LODWORD(v58) = v58 + 1;
      }
      ++v15;
    }
    while ( v15 != (unsigned __int64 *)v17 );
  }
  else
  {
    sub_2237220(&ptr, v59, v16, 8);
    if ( v15 != (unsigned __int64 *)v17 )
      goto LABEL_10;
  }
LABEL_14:
  v14 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v14 )
  {
LABEL_16:
    v26 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v14 + 8) || !*(_QWORD *)&v14[2 * *v14 + 4 + 2 * (unsigned __int64)v14[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), a2->m128i_u32[2], 0);
  v30 = *a1;
  sub_1C36400(*a1, 0);
  v35 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v35 <= 0x3D )
  {
    v45 = (unsigned int *)a2[1].m128i_i64[1];
    v37 = v45[1] + (unsigned __int64)*v45;
    v38 = *(_QWORD *)&v45[2 * v37 + 4];
    v46 = 0x2000004000000081LL;
    if ( _bittest64(&v46, v35) )
      goto LABEL_36;
  }
  else
  {
    v36 = (unsigned int *)a2[1].m128i_i64[1];
    v37 = *v36;
    v38 = *(_QWORD *)&v36[2 * v37 + 4 + 2 * v36[1]];
  }
  while ( (*(_WORD *)v38 & 0x1FF) == 0xFA )
    v38 = *(_QWORD *)(v38 + 8LL * *(unsigned int *)(v38 + 8) + 32);
LABEL_36:
  v47 = sub_1D2FA60(a1, (unsigned __int16 *)v38, nullptr, a3, a4, a5, a6, v33, v34, a9, a10, v37, v31, v32);
  if ( v47 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v47 = sub_1B87850(*(_QWORD *)(*a1 + 760), v47 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  sub_1C36470(v30);
  v26 = sub_1B14300(*(__int64 **)(*a1 + 760), v47, (__int64 *)ptr, (unsigned int)v58, a3, a4);
  if ( v26 == 1 )
    goto LABEL_18;
LABEL_17:
  v27 = (unsigned int)v58;
  if ( (unsigned int)v58 != v49 )
  {
LABEL_18:
    v28 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v39 = a2->m128i_i32[2];
  v53.m128i_i32[2] = 0;
  v53.m128i_i64[0] = 0;
  v54 = 0;
  if ( v39 == 11 )
  {
    v50 = v26;
    v48 = (__m128)_mm_loadu_si128(a2 + 2);
    v56 = a2[3].m128i_i64[0];
    v55 = v48;
    v53 = (__m128i)v48;
    v54 = v56;
    sub_1D204A0(&v51, a1, &v53, v48, a4, v56, a13, v27);
    v39 = a2->m128i_i32[2];
    LODWORD(v27) = v58;
    v53 = _mm_loadu_si128(&v51);
    v26 = v50;
    v54 = v52;
  }
  v40 = 103;
  if ( (unsigned int)(v39 - 9) <= 1 )
    v40 = a2[2].m128i_i32[0];
  v41 = _mm_load_si128(&v53);
  v42 = *a1;
  v43 = a2->m128i_i32[3];
  v44 = a2[1].m128i_i32[0];
  v56 = v54;
  v55 = (__m128)v41;
  v28 = sub_1B69230(
          *(_QWORD *)(v42 + 760),
          v39,
          (unsigned int)&v55,
          v40,
          (_DWORD)ptr,
          v27,
          v26 & 0xFFFFFFFFFFFFFFFELL,
          v43,
          v44);
LABEL_19:
  if ( ptr != v59 )
    free(ptr);
  return v28;
}
