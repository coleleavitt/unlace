_QWORD *__fastcall sub_1DD3870(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
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
  __int64 v19; // r8
  __int64 v20; // rax
  __m128 v21; // xmm0
  char v22; // al
  __int64 v23; // rcx
  __int64 *v24; // r9
  __int64 v25; // r8
  _DWORD *v26; // rbp
  _QWORD *v27; // r13
  size_t v28; // r12
  _QWORD *v29; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // r8
  int v35; // eax
  _DWORD *v36; // rdx
  _DWORD *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  int v46; // eax
  __m128i *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __m128 v50; // [rsp+0h] [rbp-1D8h] BYREF
  int v51; // [rsp+10h] [rbp-1C8h]
  __int64 *v52; // [rsp+18h] [rbp-1C0h]
  __int64 v53; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v54; // [rsp+28h] [rbp-1B0h] BYREF
  __m128 v55; // [rsp+30h] [rbp-1A8h] BYREF
  void *v56; // [rsp+40h] [rbp-198h] BYREF
  __m128i v57; // [rsp+48h] [rbp-190h]
  _DWORD v58[9]; // [rsp+58h] [rbp-180h] BYREF
  char v59; // [rsp+7Ch] [rbp-15Ch]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v61; // [rsp+88h] [rbp-150h]
  _DWORD v62[64]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v63; // [rsp+190h] [rbp-48h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v58[8] = 0;
  v57 = (__m128i)si128;
  v56 = v58;
  v59 = 0;
  v13 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v13 == 49 )
  {
    ptr = (void *)sub_1DD84F0((_DWORD)a1, (_DWORD)a6, *(_QWORD *)(a2 + 32), a3->m128i_i32[0], a4, a5, 1);
    if ( sub_F22B30(&ptr) )
      goto LABEL_9;
    v50.m128_u64[0] = (unsigned __int64)a3;
    v50 = _mm_loadh_ps((const double *)v50.m128_u64);
    v25 = sub_1DE7220(a1, &v56, v50.m128_u64[0], v50.m128_u64[1], ptr);
    v24 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  if ( v13 != 22 )
  {
    v25 = sub_1DCE820(a1, (__int64)&v56, a2, a3, si128, a8, a5, (__int64)a6);
    v24 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(a2 + 40);
  v15 = a3[1].m128i_i32[0];
  LODWORD(ptr) = 0;
  v16 = (__int64 *)*a1;
  v62[3] = v15;
  if ( v14 >= 0xFFFFFFFFFFFFFFD3LL )
    v14 = 0;
  v62[2] = v15;
  v54 = 0;
  v17 = a3[1].m128i_u32[1];
  v61 = v14;
  v52 = &v54;
  sub_1CE5E60(v16, nullptr, a6, v17, (__int64)&ptr, a4, *(double *)si128.m128_u64, *(double *)a8.m128_u64, 0, &v54, 1);
  v50.m128_u64[0] = (unsigned __int64)&v55;
  sub_F22A90(&v55, v54);
  v53 = v55.m128_u64[0];
  if ( sub_F22B30(&v53) )
    goto LABEL_9;
  v18 = v50.m128_u64[0];
  v50.m128_u64[0] = (unsigned __int64)a3;
  v54 = v53;
  v19 = *(unsigned int *)(a2 + 20);
  ptr = v62;
  v61 = 0x800000000LL;
  v20 = a3[1].m128i_i64[1];
  v21 = _mm_loadh_ps((const double *)v50.m128_u64);
  v55 = v21;
  v63 = v20;
  v22 = sub_1DE7CC0(a1, &v55, 0, v18, v19, &ptr);
  v24 = nullptr;
  v25 = 0;
  if ( !v22 )
  {
    v31 = (_QWORD *)sub_F22F70(v52);
    if ( v31 )
    {
      v34 = sub_AB7A80(
              *(_QWORD **)(*a1 + 248),
              (unsigned __int8)(*(_WORD *)(v55.m128_u64[0] + 18) >> 3),
              v31,
              (const __m128i *)ptr,
              v61);
      v35 = *(_DWORD *)(v34 + 20);
      v50.m128_u64[0] = v34;
      sub_1EA6140(&v56, v34, (unsigned int)(8 * v35 + 32), 8);
      v37 = v36;
      *v36 = *(_DWORD *)v55.m128_u64[1];
      v41 = sub_15AB9E0((__int64)a6, *(_QWORD **)(*a1 + 248), (__int64)v36, v38, v39, v40);
      v25 = v50.m128_u64[0];
      if ( !v41 )
        v42 = 0;
      *((_QWORD *)v37 + 1) = v42;
      v43 = v55.m128_u64[1];
      *((_QWORD *)v37 + 2) = *(_QWORD *)(v55.m128_u64[1] + 16);
      v37[6] = *(_DWORD *)(v43 + 24);
      v37[7] = *(_DWORD *)(v43 + 28);
      v44 = 0;
      v23 = (unsigned int)(v61 - 1);
      if ( (_DWORD)v61 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v37[2 * v44 + 8] = *((_QWORD *)ptr + 4 * v44 + 3);
          if ( v23 == v44 )
            break;
          ++v44;
        }
      }
      v24 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v45 = sub_1CDD580(
              *a1,
              v54,
              *(_DWORD *)(v55.m128_u64[1] + 16),
              (__int64)&ptr,
              v21,
              a8,
              v32,
              v33,
              v50.m128_i64[0],
              v50.m128_i32[2],
              v51,
              (char)v52,
              v53,
              v54);
      v25 = v45;
      v24 = (__int64 *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v45 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v46 = *(_DWORD *)(v45 + 20);
        v52 = v24;
        v50.m128_u64[0] = v25;
        sub_1EA6140(&v56, v25, (unsigned int)(8 * v46 + 16), 8);
        v25 = v50.m128_u64[0];
        v24 = v52;
        v48 = 0;
        *v47 = _mm_loadu_si128((const __m128i *)(v55.m128_u64[1] + 16));
        v23 = (unsigned int)v61;
        v49 = (unsigned int)(v61 - 1);
        if ( (_DWORD)v61 )
        {
          while ( 1 )
          {
            v47[1].m128i_i64[v48] = *((_QWORD *)ptr + 4 * v48 + 3);
            v23 = v48 + 1;
            if ( v48 == v49 )
              break;
            ++v48;
          }
        }
      }
    }
  }
  if ( ptr == v62 )
  {
LABEL_11:
    if ( !v24 )
      goto LABEL_9;
LABEL_12:
    v28 = v57.m128i_i64[0] - v57.m128i_i64[1];
    v29 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v25, v57.m128i_i32[0] - v57.m128i_i32[2], v23, v25, (__int64)v24);
    v26 = v56;
    v27 = v29;
    memcpy(v29 + 1, (char *)v56 + v57.m128i_i64[1], v28);
    goto LABEL_13;
  }
  v52 = v24;
  v50.m128_u64[0] = v25;
  free(ptr);
  v24 = v52;
  v25 = v50.m128_u64[0];
  if ( v52 )
    goto LABEL_12;
LABEL_9:
  v26 = v56;
  v27 = nullptr;
LABEL_13:
  if ( v26 != v58 && v26 )
    operator delete[](v26);
  return v27;
}
