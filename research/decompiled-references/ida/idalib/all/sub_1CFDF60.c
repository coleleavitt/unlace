_QWORD *__fastcall sub_1CFDF60(
        __int64 **a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        double a7,
        __m128 a8)
{
  __m128 si128; // xmm0
  char v13; // al
  unsigned __int64 v14; // rax
  __int32 v15; // edx
  __int64 *v16; // rdi
  unsigned __int32 v17; // esi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __m128 v22; // xmm0
  char v23; // al
  __int64 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r8
  _DWORD *v27; // rbp
  _QWORD *v28; // r13
  size_t v29; // r12
  _QWORD *v30; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  int v36; // eax
  _DWORD *v37; // rdx
  _DWORD *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __m128i *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdi
  __m128 v51; // [rsp+0h] [rbp-1D8h] BYREF
  int v52; // [rsp+10h] [rbp-1C8h]
  _QWORD *v53; // [rsp+18h] [rbp-1C0h]
  __int64 v54; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v55; // [rsp+28h] [rbp-1B0h] BYREF
  __m128 v56; // [rsp+30h] [rbp-1A8h] BYREF
  void *v57; // [rsp+40h] [rbp-198h] BYREF
  __m128i v58; // [rsp+48h] [rbp-190h]
  _DWORD v59[9]; // [rsp+58h] [rbp-180h] BYREF
  char v60; // [rsp+7Ch] [rbp-15Ch]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v62; // [rsp+88h] [rbp-150h]
  _DWORD v63[64]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v64; // [rsp+190h] [rbp-48h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v59[8] = 0;
  v58 = (__m128i)si128;
  v57 = v59;
  v60 = 0;
  v13 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v13 == 49 )
  {
    ptr = (void *)sub_1CE66D0(
                    a1,
                    a6,
                    *(_QWORD *)(a2 + 32),
                    a3->m128i_i32[0],
                    a4,
                    a5,
                    *(double *)si128.m128_u64,
                    *(double *)a8.m128_u64,
                    1);
    if ( sub_F22B30(&ptr) )
      goto LABEL_9;
    v51.m128_u64[0] = (unsigned __int64)a3;
    v51 = _mm_loadh_ps((const double *)v51.m128_u64);
    v26 = sub_1CFFF60(a1, &v57, v51.m128_u64[0], v51.m128_u64[1], ptr);
    v25 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  if ( v13 != 22 )
  {
    v26 = sub_1CF4B60((__int64 *)a1, (__int64)&v57, a2, a3, a5, (__int64)a6, si128, a8);
    v25 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(a2 + 40);
  v15 = a3[1].m128i_i32[0];
  LODWORD(ptr) = 0;
  v16 = *a1;
  v63[3] = v15;
  if ( v14 >= 0xFFFFFFFFFFFFFFD3LL )
    v14 = 0;
  v63[2] = v15;
  v55 = 0;
  v17 = a3[1].m128i_u32[1];
  v62 = v14;
  v53 = &v55;
  sub_1CE5E60(v16, nullptr, a6, v17, (__int64)&ptr, a4, *(double *)si128.m128_u64, *(double *)a8.m128_u64, 0, &v55, 1);
  v51.m128_u64[0] = (unsigned __int64)&v56;
  sub_F22A90(&v56, v55);
  v54 = v56.m128_u64[0];
  if ( sub_F22B30(&v54) )
    goto LABEL_9;
  v18 = v51.m128_u64[0];
  v19 = v51.m128_u64[0];
  v51.m128_u64[0] = (unsigned __int64)a3;
  v55 = v54;
  v20 = *(unsigned int *)(a2 + 20);
  ptr = v63;
  v62 = 0x800000000LL;
  v21 = a3[1].m128i_i64[1];
  v22 = _mm_loadh_ps((const double *)v51.m128_u64);
  v56 = v22;
  v64 = v21;
  v23 = sub_1CFFC30(a1, v19, 0, v18, v20, &ptr);
  v25 = nullptr;
  v26 = 0;
  if ( !v23 )
  {
    v32 = (_QWORD *)sub_F22F70(v53);
    if ( v32 )
    {
      v35 = sub_AB7A80(
              (_QWORD *)(*a1)[31],
              (unsigned __int8)(*(_WORD *)(v56.m128_u64[0] + 18) >> 3),
              v32,
              (const __m128i *)ptr,
              v62);
      v36 = *(_DWORD *)(v35 + 20);
      v51.m128_u64[0] = v35;
      sub_1EA6140(&v57, v35, (unsigned int)(8 * v36 + 32), 8);
      v38 = v37;
      *v37 = *(_DWORD *)v56.m128_u64[1];
      v42 = sub_15AB9E0((__int64)a6, (_QWORD *)(*a1)[31], (__int64)v37, v39, v40, v41);
      v26 = v51.m128_u64[0];
      if ( !v42 )
        v43 = 0;
      *((_QWORD *)v38 + 1) = v43;
      v44 = v56.m128_u64[1];
      *((_QWORD *)v38 + 2) = *(_QWORD *)(v56.m128_u64[1] + 16);
      v38[6] = *(_DWORD *)(v44 + 24);
      v38[7] = *(_DWORD *)(v44 + 28);
      v45 = 0;
      v46 = (unsigned int)(v62 - 1);
      if ( (_DWORD)v62 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v38[2 * v45 + 8] = *((_QWORD *)ptr + 4 * v45 + 3);
          if ( v45 == v46 )
            break;
          ++v45;
        }
      }
      v25 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v47 = sub_1CDD580(
              (__int64)*a1,
              v55,
              *(_DWORD *)(v56.m128_u64[1] + 16),
              (__int64)&ptr,
              v22,
              a8,
              v33,
              v34,
              v51.m128_i64[0],
              v51.m128_i32[2],
              v52,
              (char)v53,
              v54,
              v55);
      v26 = v47;
      v25 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v53 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
        v51.m128_u64[0] = v47;
        sub_18CD120((__int64)&v57, v47);
        v26 = v51.m128_u64[0];
        v25 = v53;
        v49 = 0;
        *v48 = _mm_loadu_si128((const __m128i *)(v56.m128_u64[1] + 16));
        v50 = (unsigned int)(v62 - 1);
        if ( (_DWORD)v62 )
        {
          while ( 1 )
          {
            v48[1].m128i_i64[v49] = *((_QWORD *)ptr + 4 * v49 + 3);
            if ( v49 == v50 )
              break;
            ++v49;
          }
        }
      }
    }
  }
  if ( ptr == v63 )
  {
LABEL_11:
    if ( !v25 )
      goto LABEL_9;
LABEL_12:
    v29 = v58.m128i_i64[0] - v58.m128i_i64[1];
    v30 = sub_A81BC0((_QWORD *)(*a1)[31], v26, v58.m128i_i32[0] - v58.m128i_i32[2], (__int64)v25, v26, v24);
    v27 = v57;
    v28 = v30;
    memcpy(v30 + 1, (char *)v57 + v58.m128i_i64[1], v29);
    goto LABEL_13;
  }
  v53 = v25;
  v51.m128_u64[0] = v26;
  free(ptr);
  v25 = v53;
  v26 = v51.m128_u64[0];
  if ( v53 )
    goto LABEL_12;
LABEL_9:
  v27 = v57;
  v28 = nullptr;
LABEL_13:
  if ( v27 != v59 && v27 )
    operator delete[](v27);
  return v28;
}
