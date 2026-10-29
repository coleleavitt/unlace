_QWORD *__fastcall sub_198C690(
        __int64 *a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128 si128; // xmm0
  char v13; // al
  unsigned __int64 v14; // rax
  __int32 v15; // edx
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // r9
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r8
  _DWORD *v25; // rbp
  _QWORD *v26; // r13
  size_t v27; // r12
  _QWORD *v28; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // r8
  int v32; // eax
  _DWORD *v33; // rdx
  _DWORD *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128i *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __m128 v47; // [rsp+0h] [rbp-1D8h] BYREF
  _QWORD *v48; // [rsp+18h] [rbp-1C0h]
  __int64 v49; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-1B0h] BYREF
  __m128 v51; // [rsp+30h] [rbp-1A8h] BYREF
  void *v52; // [rsp+40h] [rbp-198h] BYREF
  __m128i v53; // [rsp+48h] [rbp-190h]
  _DWORD v54[9]; // [rsp+58h] [rbp-180h] BYREF
  char v55; // [rsp+7Ch] [rbp-15Ch]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v57; // [rsp+88h] [rbp-150h]
  _DWORD v58[64]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v59; // [rsp+190h] [rbp-48h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v54[8] = 0;
  v53 = (__m128i)si128;
  v52 = v54;
  v55 = 0;
  v13 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v13 == 49 )
  {
    ptr = (void *)sub_18CBF50(a1, a6, *(_QWORD *)(a2 + 32), a3->m128i_i32[0], a4, a5, 1u);
    if ( sub_F22B30(&ptr) )
      goto LABEL_9;
    v47.m128_u64[0] = (unsigned __int64)a3;
    v47 = _mm_loadh_ps((const double *)v47.m128_u64);
    v24 = sub_198E440(a1, &v52, v47.m128_u64[0], v47.m128_u64[1], ptr);
    v23 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  if ( v13 != 22 )
  {
    v24 = sub_1986980(a1, (__int64)&v52, a2, a3, a5, a6, si128, a8);
    v23 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  v14 = *(_QWORD *)(a2 + 40);
  v15 = a3[1].m128i_i32[0];
  LODWORD(ptr) = 0;
  v16 = *a1;
  v58[3] = v15;
  if ( v14 >= 0xFFFFFFFFFFFFFFD3LL )
    v14 = 0;
  v58[2] = v15;
  v50 = 0;
  v57 = v14;
  v48 = &v50;
  sub_1CE5E60(v16, 0, (__int64)&v50, 1);
  v47.m128_u64[0] = (unsigned __int64)&v51;
  sub_F22A90(&v51, v50);
  v49 = v51.m128_u64[0];
  if ( sub_F22B30(&v49) )
    goto LABEL_9;
  v17 = v47.m128_u64[0];
  v18 = v47.m128_u64[0];
  v47.m128_u64[0] = (unsigned __int64)a3;
  v50 = v49;
  v19 = *(unsigned int *)(a2 + 20);
  ptr = v58;
  v57 = 0x800000000LL;
  v20 = a3[1].m128i_i64[1];
  v51 = _mm_loadh_ps((const double *)v47.m128_u64);
  v59 = v20;
  v21 = sub_198E9B0(a1, v18, 0, v17, v19, &ptr, a3);
  v23 = nullptr;
  v24 = 0;
  if ( !v21 )
  {
    v30 = (_QWORD *)sub_F22F70(v48);
    if ( v30 )
    {
      v31 = sub_AB7A80(
              *(_QWORD **)(*a1 + 248),
              (unsigned __int8)(*(_WORD *)(v51.m128_u64[0] + 18) >> 3),
              v30,
              (const __m128i *)ptr,
              v57);
      v32 = *(_DWORD *)(v31 + 20);
      v47.m128_u64[0] = v31;
      sub_1EA6140(&v52, v31, (unsigned int)(8 * v32 + 32), 8);
      v34 = v33;
      *v33 = *(_DWORD *)v51.m128_u64[1];
      v38 = sub_15AB9E0(a6, *(_QWORD **)(*a1 + 248), (__int64)v33, v35, v36, v37);
      v24 = v47.m128_u64[0];
      if ( !v38 )
        v39 = 0;
      *((_QWORD *)v34 + 1) = v39;
      v40 = v51.m128_u64[1];
      *((_QWORD *)v34 + 2) = *(_QWORD *)(v51.m128_u64[1] + 16);
      v34[6] = *(_DWORD *)(v40 + 24);
      v34[7] = *(_DWORD *)(v40 + 28);
      v41 = 0;
      v42 = (unsigned int)(v57 - 1);
      if ( (_DWORD)v57 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v34[2 * v41 + 8] = *((_QWORD *)ptr + 4 * v41 + 3);
          if ( v41 == v42 )
            break;
          ++v41;
        }
      }
      v23 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v43 = sub_1CDD580(*a1, v50, *(unsigned int *)(v51.m128_u64[1] + 16), &ptr);
      v24 = v43;
      v23 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v43 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v48 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
        v47.m128_u64[0] = v43;
        sub_18CD120((__int64)&v52, v43);
        v24 = v47.m128_u64[0];
        v23 = v48;
        v45 = 0;
        *v44 = _mm_loadu_si128((const __m128i *)(v51.m128_u64[1] + 16));
        v46 = (unsigned int)(v57 - 1);
        if ( (_DWORD)v57 )
        {
          while ( 1 )
          {
            v44[1].m128i_i64[v45] = *((_QWORD *)ptr + 4 * v45 + 3);
            if ( v45 == v46 )
              break;
            ++v45;
          }
        }
      }
    }
  }
  if ( ptr == v58 )
  {
LABEL_11:
    if ( !v23 )
      goto LABEL_9;
LABEL_12:
    v27 = v53.m128i_i64[0] - v53.m128i_i64[1];
    v28 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v24, v53.m128i_i32[0] - v53.m128i_i32[2], (__int64)v23, v24, v22);
    v25 = v52;
    v26 = v28;
    memcpy(v28 + 1, (char *)v52 + v53.m128i_i64[1], v27);
    goto LABEL_13;
  }
  v48 = v23;
  v47.m128_u64[0] = v24;
  free(ptr);
  v23 = v48;
  v24 = v47.m128_u64[0];
  if ( v48 )
    goto LABEL_12;
LABEL_9:
  v25 = v52;
  v26 = nullptr;
LABEL_13:
  if ( v25 != v54 && v25 )
    operator delete[](v25);
  return v26;
}
