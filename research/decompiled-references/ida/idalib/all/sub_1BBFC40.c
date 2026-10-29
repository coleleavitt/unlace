__int64 __fastcall sub_1BBFC40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  _BYTE *v6; // rdi
  int v7; // eax
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r15
  __m128i si128; // xmm2
  __int32 v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r13
  _BYTE *v31; // rdi
  _DWORD *v33; // rdx
  size_t v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r13
  _BYTE *v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-150h]
  __m128i v42; // [rsp+20h] [rbp-138h] BYREF
  __m128 v43; // [rsp+30h] [rbp-128h] BYREF
  _BYTE *v44; // [rsp+40h] [rbp-118h]
  unsigned int v45; // [rsp+4Ch] [rbp-10Ch]
  unsigned __int64 v46; // [rsp+50h] [rbp-108h]
  __int64 v47; // [rsp+58h] [rbp-100h]
  __m128 v48; // [rsp+60h] [rbp-F8h] BYREF
  __m128 v49; // [rsp+70h] [rbp-E8h] BYREF
  void *v50; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+88h] [rbp-D0h]
  _BYTE v52[32]; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v54[32]; // [rsp+C0h] [rbp-98h] BYREF
  void *v55; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v56; // [rsp+E8h] [rbp-70h]
  _BYTE v57[32]; // [rsp+F8h] [rbp-60h] BYREF
  int v58; // [rsp+118h] [rbp-40h]
  char v59; // [rsp+11Ch] [rbp-3Ch]

  v5 = a2;
  v6 = v52;
  v51 = 0x400000000LL;
  v7 = *(_DWORD *)(a2 + 4);
  v50 = v52;
  if ( v7 )
  {
    v42.m128i_i8[0] = 0;
    v41 = 0;
    v47 = 8LL * (unsigned int)(v7 - 1) + 8;
    v44 = v54;
    while ( 1 )
    {
      v8 = *(__int64 **)(v41 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
      v9 = *v8;
      if ( (*v8 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v9 )
      {
        v42.m128i_i64[0] = (__int64)(v8 + 1);
        v48 = _mm_loadh_ps((const double *)v42.m128i_i64);
        v18.m128i_i64[0] = sub_1743190((__int64)&v48);
        v19 = *a1;
        v42 = v18;
        a3 = (__m128)_mm_load_si128(&v42);
        ptr[0] = v44;
        v49 = a3;
        ptr[1] = (void *)0x200000000LL;
        sub_1E4C9B0(v19, a3.m128_u64[0], a3.m128_u64[1], ptr);
        v43.m128_i32[0] = *(_DWORD *)(v48.m128_u64[0] + 20);
        sub_F6CE20((__int64 *)&v49);
        sub_F6CCB0((__int64 *)&v49, a3);
        v20 = *a1;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v22 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v56 = si128;
        v42.m128i_i32[0] = v22;
        v55 = v57;
        v58 = 0;
        v59 = 0;
        v23 = sub_F6C560(*v8);
        if ( (unsigned __int64)v23 > v56.m128i_i64[0] )
          sub_1EA60C0(&v55);
        v26 = sub_1BB10D0(a1, (__int64)&v55, v49.m128_i64[0], (__m128i *)v49.m128_u64[1], v24, v25, a3, a4);
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v46 = v26,
              v45 = *(_DWORD *)v48.m128_u64[1],
              v27 = (unsigned int)sub_F6CE20((__int64 *)&v49),
              v28 = sub_F6CCB0((__int64 *)&v49, a3),
              v29 = sub_1E503F0(*a1, v46, (v27 << 32) | v28, v45, v43.m128_u32[0]),
              v30 = v29,
              (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v5 = 1;
          if ( v55 && v55 != v57 )
            operator delete[](v55);
          v31 = ptr[0];
          *(_DWORD *)(v20 + 12632) = v42.m128i_i32[0];
          if ( v31 != v54 )
            free(v31);
LABEL_21:
          v6 = v50;
          goto LABEL_22;
        }
        sub_1EA6140(&v55, v29, 4, 4);
        *v33 = *(_DWORD *)v48.m128_u64[1];
        v34 = v56.m128i_i64[0] - v56.m128i_i64[1];
        v38 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v30, v56.m128i_i32[0] - v56.m128i_i32[2], v35, v36, v37);
        memcpy(v38 + 1, (char *)v55 + v56.m128i_i64[1], v34);
        sub_1745810((__int64)&v50, (__int64)v38);
        if ( v55 && v55 != v57 )
          operator delete[](v55);
        v39 = ptr[0];
        *(_DWORD *)(v20 + 12632) = v42.m128i_i32[0];
        if ( v39 != v44 )
          free(v39);
        v42.m128i_i8[0] = 1;
      }
      else
      {
        v10 = *v8;
        v58 = 0;
        v55 = v57;
        v56 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v59 = 0;
        v11 = sub_F6C560(v10);
        if ( (unsigned __int64)v11 > v56.m128i_i64[0] )
          sub_1EA60C0(&v55);
        v43.m128_u64[0] = (unsigned __int64)(v8 + 1);
        a4 = _mm_loadh_ps((const double *)v43.m128_u64);
        v43 = a4;
        v14 = sub_1BB10D0(a1, (__int64)&v55, a4.m128_i64[0], (__m128i *)a4.m128_u64[1], v12, v13, a3, a4);
        if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v5 = 1;
          if ( v55 != v57 && v55 )
            operator delete[](v55);
          goto LABEL_21;
        }
        if ( v14 == *v8 )
        {
          sub_1745810((__int64)&v50, (__int64)v8);
        }
        else
        {
          v40 = sub_18C0B80(&v55, *(_QWORD **)(*a1 + 248), v14, v15, v16, v17);
          sub_1745810((__int64)&v50, (__int64)v40);
          v42.m128i_i8[0] = 1;
        }
        if ( v55 && v55 != v57 )
          operator delete[](v55);
      }
      v41 += 8;
      if ( v41 == v47 )
      {
        v6 = v50;
        goto LABEL_33;
      }
    }
  }
  v42.m128i_i8[0] = 0;
LABEL_33:
  if ( *(_DWORD *)(*a1 + 12632) || v42.m128i_i8[0] )
  {
    v5 = sub_1E8F560(
           *a1,
           (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3),
           *(unsigned int *)(a2 + 16),
           v6,
           (unsigned int)v51,
           *(unsigned int *)(a2 + 20));
    goto LABEL_21;
  }
LABEL_22:
  if ( v6 != v52 )
    free(v6);
  return v5;
}
