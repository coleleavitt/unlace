_QWORD *__fastcall sub_1C8ED80(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128 si128; // xmm0
  char v12; // al
  unsigned __int64 v13; // rax
  __int32 v14; // edx
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 *v21; // r9
  unsigned __int64 v22; // r8
  _DWORD *v23; // rbp
  _QWORD *v24; // r13
  size_t v25; // r12
  _QWORD *v26; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // r8
  int v30; // eax
  _DWORD *v31; // rdx
  _DWORD *v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __m128i *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  __m128 v45; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 *v46; // [rsp+18h] [rbp-1C0h]
  __int64 v47; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v48; // [rsp+28h] [rbp-1B0h] BYREF
  __m128 v49; // [rsp+30h] [rbp-1A8h] BYREF
  void *v50; // [rsp+40h] [rbp-198h] BYREF
  __m128i v51; // [rsp+48h] [rbp-190h]
  _DWORD v52[9]; // [rsp+58h] [rbp-180h] BYREF
  char v53; // [rsp+7Ch] [rbp-15Ch]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v55; // [rsp+88h] [rbp-150h]
  _DWORD v56[64]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v57; // [rsp+190h] [rbp-48h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v52[8] = 0;
  v51 = (__m128i)si128;
  v50 = v52;
  v53 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v12 == 49 )
  {
    ptr = (void *)sub_1C7A940(a1, a6, *(_QWORD *)(a2 + 32), a3->m128i_i32[0], a4, a5, 1u);
    if ( sub_F22B30(&ptr) )
      goto LABEL_9;
    v45.m128_u64[0] = (unsigned __int64)a3;
    v45 = _mm_loadh_ps((const double *)v45.m128_u64);
    v22 = sub_1C91030(a1, &v50, v45.m128_u64[0], v45.m128_u64[1], ptr);
    v21 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  if ( v12 != 22 )
  {
    v22 = sub_1C892C0(a1, (__int64)&v50, a2, a3, a5, a6, si128, a8);
    v21 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  v13 = *(_QWORD *)(a2 + 40);
  v14 = a3[1].m128i_i32[0];
  LODWORD(ptr) = 0;
  v15 = *a1;
  v56[3] = v14;
  if ( v13 >= 0xFFFFFFFFFFFFFFD3LL )
    v13 = 0;
  v56[2] = v14;
  v48 = 0;
  v55 = v13;
  v46 = &v48;
  sub_1CE5E60(v15, 0, (__int64)&v48, 1);
  v45.m128_u64[0] = (unsigned __int64)&v49;
  sub_F22A90(&v49, v48);
  v47 = v49.m128_u64[0];
  if ( sub_F22B30(&v47) )
    goto LABEL_9;
  v16 = v45.m128_u64[0];
  v45.m128_u64[0] = (unsigned __int64)a3;
  v48 = v47;
  v17 = *(unsigned int *)(a2 + 20);
  ptr = v56;
  v55 = 0x800000000LL;
  v18 = a3[1].m128i_i64[1];
  v49 = _mm_loadh_ps((const double *)v45.m128_u64);
  v57 = v18;
  v19 = sub_1C90BD0(a1, &v49, 0, v16, v17, &ptr, a3);
  v21 = nullptr;
  v22 = 0;
  if ( !v19 )
  {
    v28 = (_QWORD *)sub_F22F70(v46);
    if ( v28 )
    {
      v29 = sub_AB7A80(
              *(_QWORD **)(*a1 + 248),
              (unsigned __int8)(*(_WORD *)(v49.m128_u64[0] + 18) >> 3),
              v28,
              (const __m128i *)ptr,
              v55);
      v30 = *(_DWORD *)(v29 + 20);
      v45.m128_u64[0] = v29;
      sub_1EA6140(&v50, v29, (unsigned int)(8 * v30 + 32), 8);
      v32 = v31;
      *v31 = *(_DWORD *)v49.m128_u64[1];
      v36 = sub_15AB9E0(a6, *(_QWORD **)(*a1 + 248), (__int64)v31, v33, v34, v35);
      v22 = v45.m128_u64[0];
      if ( !v36 )
        v37 = 0;
      *((_QWORD *)v32 + 1) = v37;
      v38 = v49.m128_u64[1];
      *((_QWORD *)v32 + 2) = *(_QWORD *)(v49.m128_u64[1] + 16);
      v32[6] = *(_DWORD *)(v38 + 24);
      v32[7] = *(_DWORD *)(v38 + 28);
      v39 = 0;
      v20 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v55 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v32[2 * v39 + 8] = *((_QWORD *)ptr + 4 * v39 + 3);
          if ( v20 == v39 )
            break;
          ++v39;
        }
      }
      v21 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v40 = sub_1CDD580(*a1, v48, *(unsigned int *)(v49.m128_u64[1] + 16), &ptr);
      v22 = v40;
      v21 = (__int64 *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v40 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v41 = *(_DWORD *)(v40 + 20);
        v46 = v21;
        v45.m128_u64[0] = v22;
        sub_1EA6140(&v50, v22, (unsigned int)(8 * v41 + 16), 8);
        v22 = v45.m128_u64[0];
        v21 = v46;
        v43 = 0;
        *v42 = _mm_loadu_si128((const __m128i *)(v49.m128_u64[1] + 16));
        v20 = (unsigned int)v55;
        v44 = (unsigned int)(v55 - 1);
        if ( (_DWORD)v55 )
        {
          while ( 1 )
          {
            v42[1].m128i_i64[v43] = *((_QWORD *)ptr + 4 * v43 + 3);
            v20 = v43 + 1;
            if ( v43 == v44 )
              break;
            ++v43;
          }
        }
      }
    }
  }
  if ( ptr == v56 )
  {
LABEL_11:
    if ( !v21 )
      goto LABEL_9;
LABEL_12:
    v25 = v51.m128i_i64[0] - v51.m128i_i64[1];
    v26 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v22, v51.m128i_i32[0] - v51.m128i_i32[2], v20, v22, (__int64)v21);
    v23 = v50;
    v24 = v26;
    memcpy(v26 + 1, (char *)v50 + v51.m128i_i64[1], v25);
    goto LABEL_13;
  }
  v46 = v21;
  v45.m128_u64[0] = v22;
  free(ptr);
  v21 = v46;
  v22 = v45.m128_u64[0];
  if ( v46 )
    goto LABEL_12;
LABEL_9:
  v23 = v50;
  v24 = nullptr;
LABEL_13:
  if ( v23 != v52 && v23 )
    operator delete[](v23);
  return v24;
}
