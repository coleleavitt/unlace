_QWORD *__fastcall sub_176EA10(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  unsigned __int64 v10; // rax
  __int32 v11; // edx
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rcx
  __int64 *v18; // r9
  unsigned __int64 v19; // r8
  _DWORD *v20; // rbp
  _QWORD *v21; // r13
  size_t v22; // r12
  _QWORD *v23; // rax
  _QWORD *v25; // rax
  unsigned __int64 v26; // r8
  int v27; // eax
  _DWORD *v28; // rdx
  _DWORD *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __m128i *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  __m128 v42; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 *v43; // [rsp+18h] [rbp-1C0h]
  __int64 v44; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-1B0h] BYREF
  __m128 v46; // [rsp+30h] [rbp-1A8h] BYREF
  void *v47; // [rsp+40h] [rbp-198h] BYREF
  __m128i si128; // [rsp+48h] [rbp-190h]
  _DWORD v49[9]; // [rsp+58h] [rbp-180h] BYREF
  char v50; // [rsp+7Ch] [rbp-15Ch]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __int64 v52; // [rsp+88h] [rbp-150h]
  _DWORD v53[64]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v54; // [rsp+190h] [rbp-48h]

  v49[8] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v47 = v49;
  v50 = 0;
  v9 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v9 == 49 )
  {
    ptr = (void *)sub_17475E0(a1, a6, *(_QWORD *)(a2 + 32), a3->m128i_i32[0], a4, a5, 1u);
    if ( sub_F22B30(&ptr) )
      goto LABEL_9;
    v42.m128_u64[0] = (unsigned __int64)a3;
    v42 = _mm_loadh_ps((const double *)v42.m128_u64);
    v19 = sub_1770560(a1, &v47, v42.m128_u64[0], v42.m128_u64[1], ptr);
    v18 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  if ( v9 != 22 )
  {
    v19 = sub_17687F0(a1, (__int64)&v47, a2, a3, a5, a6);
    v18 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(a2 + 40);
  v11 = a3[1].m128i_i32[0];
  LODWORD(ptr) = 0;
  v12 = *a1;
  v53[3] = v11;
  if ( v10 >= 0xFFFFFFFFFFFFFFD3LL )
    v10 = 0;
  v53[2] = v11;
  v45 = 0;
  v52 = v10;
  v43 = &v45;
  sub_1CE5E60(v12, 0, (__int64)&v45, 1);
  v42.m128_u64[0] = (unsigned __int64)&v46;
  sub_F22A90(&v46, v45);
  v44 = v46.m128_u64[0];
  if ( sub_F22B30(&v44) )
    goto LABEL_9;
  v13 = v42.m128_u64[0];
  v42.m128_u64[0] = (unsigned __int64)a3;
  v45 = v44;
  v14 = *(unsigned int *)(a2 + 20);
  ptr = v53;
  v52 = 0x800000000LL;
  v15 = a3[1].m128i_i64[1];
  v46 = _mm_loadh_ps((const double *)v42.m128_u64);
  v54 = v15;
  v16 = sub_1770BB0(a1, &v46, 0, v13, v14, &ptr, a3);
  v18 = nullptr;
  v19 = 0;
  if ( !v16 )
  {
    v25 = (_QWORD *)sub_F22F70(v43);
    if ( v25 )
    {
      v26 = sub_AB7A80(
              *(_QWORD **)(*a1 + 248),
              (unsigned __int8)(*(_WORD *)(v46.m128_u64[0] + 18) >> 3),
              v25,
              (const __m128i *)ptr,
              v52);
      v27 = *(_DWORD *)(v26 + 20);
      v42.m128_u64[0] = v26;
      sub_1EA6140(&v47, v26, (unsigned int)(8 * v27 + 32), 8);
      v29 = v28;
      *v28 = *(_DWORD *)v46.m128_u64[1];
      v33 = sub_15AB9E0(a6, *(_QWORD **)(*a1 + 248), (__int64)v28, v30, v31, v32);
      v19 = v42.m128_u64[0];
      if ( !v33 )
        v34 = 0;
      *((_QWORD *)v29 + 1) = v34;
      v35 = v46.m128_u64[1];
      *((_QWORD *)v29 + 2) = *(_QWORD *)(v46.m128_u64[1] + 16);
      v29[6] = *(_DWORD *)(v35 + 24);
      v29[7] = *(_DWORD *)(v35 + 28);
      v36 = 0;
      v17 = (unsigned int)(v52 - 1);
      if ( (_DWORD)v52 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v29[2 * v36 + 8] = *((_QWORD *)ptr + 4 * v36 + 3);
          if ( v17 == v36 )
            break;
          ++v36;
        }
      }
      v18 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v37 = sub_1CDD580(*a1, v45, *(unsigned int *)(v46.m128_u64[1] + 16), &ptr);
      v19 = v37;
      v18 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v38 = *(_DWORD *)(v37 + 20);
        v43 = v18;
        v42.m128_u64[0] = v19;
        sub_1EA6140(&v47, v19, (unsigned int)(8 * v38 + 16), 8);
        v19 = v42.m128_u64[0];
        v18 = v43;
        v40 = 0;
        *v39 = _mm_loadu_si128((const __m128i *)(v46.m128_u64[1] + 16));
        v17 = (unsigned int)v52;
        v41 = (unsigned int)(v52 - 1);
        if ( (_DWORD)v52 )
        {
          while ( 1 )
          {
            v39[1].m128i_i64[v40] = *((_QWORD *)ptr + 4 * v40 + 3);
            v17 = v40 + 1;
            if ( v40 == v41 )
              break;
            ++v40;
          }
        }
      }
    }
  }
  if ( ptr == v53 )
  {
LABEL_11:
    if ( !v18 )
      goto LABEL_9;
LABEL_12:
    v22 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v23 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v19, si128.m128i_i32[0] - si128.m128i_i32[2], v17, v19, (__int64)v18);
    v20 = v47;
    v21 = v23;
    memcpy(v23 + 1, (char *)v47 + si128.m128i_i64[1], v22);
    goto LABEL_13;
  }
  v43 = v18;
  v42.m128_u64[0] = v19;
  free(ptr);
  v18 = v43;
  v19 = v42.m128_u64[0];
  if ( v43 )
    goto LABEL_12;
LABEL_9:
  v20 = v47;
  v21 = nullptr;
LABEL_13:
  if ( v20 != v49 && v20 )
    operator delete[](v20);
  return v21;
}
