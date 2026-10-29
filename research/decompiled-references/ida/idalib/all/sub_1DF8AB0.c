__int64 __fastcall sub_1DF8AB0(
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
  __m128i **v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  double v34; // xmm4_8
  double v35; // xmm5_8
  unsigned __int64 v36; // rax
  unsigned int *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int32 v40; // esi
  int v41; // ecx
  __m128i v42; // xmm1
  __int64 v43; // rdi
  __int32 v44; // r8d
  __int32 v45; // r10d
  unsigned int *v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __m128 v49; // xmm0
  unsigned __int64 v50; // [rsp+0h] [rbp-138h]
  __int64 v51; // [rsp+0h] [rbp-138h]
  __m128i v52; // [rsp+10h] [rbp-128h] BYREF
  __int64 v53; // [rsp+20h] [rbp-118h]
  __m128i v54; // [rsp+30h] [rbp-108h] BYREF
  __int64 v55; // [rsp+40h] [rbp-F8h]
  __m128 v56; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-C0h]
  _BYTE v60[184]; // [rsp+80h] [rbp-B8h] BYREF

  v59 = 0x1000000000LL;
  v14 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v60;
  if ( !v14 )
  {
    v27 = 0;
    v28 = (unsigned int)v59;
    goto LABEL_30;
  }
  v15 = (__m128i **)(v14 + 4);
  v16 = *v14;
  v50 = v16;
  v17 = (__int64)&v14[2 * v16 + 4];
  if ( v16 <= 0x10 )
  {
    if ( v15 == (__m128i **)v17 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v15 )
      {
        v25 = (unsigned int)v59;
        v26 = (unsigned int)v59 + 1LL;
        if ( v26 > HIDWORD(v59) )
        {
          sub_2237220(&ptr, v60, v26, 8);
          v25 = (unsigned int)v59;
        }
        ++v15;
        *((_QWORD *)ptr + v25) = 0;
        LODWORD(v59) = v59 + 1;
        if ( v15 == (__m128i **)v17 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v15)->m128i_i32[2]);
      v22 = sub_1DF2370(a1, *v15, v18, v19, v20, v21, a3, a4, a5);
      sub_1AF3B30(*(__int64 **)(*a1 + 760));
      if ( v22 )
      {
        v23 = (unsigned int)v59;
        v24 = (unsigned int)v59 + 1LL;
        if ( v24 > HIDWORD(v59) )
        {
          sub_2237220(&ptr, v60, v24, 8);
          v23 = (unsigned int)v59;
        }
        *((_QWORD *)ptr + v23) = v22;
        LODWORD(v59) = v59 + 1;
      }
      ++v15;
    }
    while ( v15 != (__m128i **)v17 );
  }
  else
  {
    sub_2237220(&ptr, v60, v16, 8);
    if ( v15 != (__m128i **)v17 )
      goto LABEL_10;
  }
LABEL_14:
  v14 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v14 )
  {
LABEL_16:
    v27 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v14 + 8) || !*(_QWORD *)&v14[2 * *v14 + 4 + 2 * (unsigned __int64)v14[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), a2->m128i_u32[2], 0);
  v31 = *a1;
  sub_1C36400(*a1, 0);
  v36 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v36 <= 0x3D )
  {
    v46 = (unsigned int *)a2[1].m128i_i64[1];
    v38 = v46[1] + (unsigned __int64)*v46;
    v39 = *(_QWORD *)&v46[2 * v38 + 4];
    v47 = 0x2000004000000081LL;
    if ( _bittest64(&v47, v36) )
      goto LABEL_36;
  }
  else
  {
    v37 = (unsigned int *)a2[1].m128i_i64[1];
    v38 = *v37;
    v39 = *(_QWORD *)&v37[2 * v38 + 4 + 2 * v37[1]];
  }
  while ( (*(_WORD *)v39 & 0x1FF) == 0xFA )
    v39 = *(_QWORD *)(v39 + 8LL * *(unsigned int *)(v39 + 8) + 32);
LABEL_36:
  v48 = sub_1DF6720(a1, (_WORD *)v39, nullptr, a3, a4, a5, a6, v34, v35, a9, a10, v38, v32, v33);
  if ( v48 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v48 = sub_1B87850(*(_QWORD *)(*a1 + 760), v48 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  sub_1C36470(v31);
  v27 = sub_1B14300(*(__int64 **)(*a1 + 760), v48, (__int64 *)ptr, (unsigned int)v59, a3, a4);
  if ( v27 == 1 )
    goto LABEL_18;
LABEL_17:
  v28 = (unsigned int)v59;
  if ( (unsigned int)v59 != v50 )
  {
LABEL_18:
    v29 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v40 = a2->m128i_i32[2];
  v54.m128i_i32[2] = 0;
  v54.m128i_i64[0] = 0;
  v55 = 0;
  if ( v40 == 11 )
  {
    v51 = v27;
    v49 = (__m128)_mm_loadu_si128(a2 + 2);
    v57 = a2[3].m128i_i64[0];
    v56 = v49;
    v54 = (__m128i)v49;
    v55 = v57;
    sub_1DD8C40(&v52, (__int64)a1, &v54, v49, a4, v57, a13, v28);
    v40 = a2->m128i_i32[2];
    LODWORD(v28) = v59;
    v54 = _mm_loadu_si128(&v52);
    v27 = v51;
    v55 = v53;
  }
  v41 = 103;
  if ( (unsigned int)(v40 - 9) <= 1 )
    v41 = a2[2].m128i_i32[0];
  v42 = _mm_load_si128(&v54);
  v43 = *a1;
  v44 = a2->m128i_i32[3];
  v45 = a2[1].m128i_i32[0];
  v57 = v55;
  v56 = (__m128)v42;
  v29 = sub_1B69230(
          *(_QWORD *)(v43 + 760),
          v40,
          (unsigned int)&v56,
          v41,
          (_DWORD)ptr,
          v28,
          v27 & 0xFFFFFFFFFFFFFFFELL,
          v44,
          v45);
LABEL_19:
  if ( ptr != v60 )
    free(ptr);
  return v29;
}
