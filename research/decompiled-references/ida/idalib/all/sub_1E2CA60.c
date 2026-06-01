__int64 __fastcall sub_1E2CA60(__int64 *a1, __int64 a2, __m128 a3, __m128 si128)
{
  __int64 v5; // rbp
  _BYTE *v6; // rdi
  int v7; // eax
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r15
  __int32 v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  _BYTE *v32; // rdi
  _DWORD *v34; // rdx
  size_t v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  _BYTE *v42; // rdi
  size_t v43; // rbx
  _QWORD *v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // [rsp+8h] [rbp-130h]
  __m128 v48; // [rsp+20h] [rbp-118h] BYREF
  _BYTE *v49; // [rsp+30h] [rbp-108h]
  unsigned int v50; // [rsp+38h] [rbp-100h]
  unsigned int v51; // [rsp+3Ch] [rbp-FCh]
  unsigned __int64 v52; // [rsp+40h] [rbp-F8h]
  __int64 v53; // [rsp+48h] [rbp-F0h]
  __int64 v54; // [rsp+50h] [rbp-E8h] BYREF
  const __m128i *v55; // [rsp+58h] [rbp-E0h]
  void *v56; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-D0h]
  _BYTE v58[32]; // [rsp+70h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v60[32]; // [rsp+A0h] [rbp-98h] BYREF
  void *v61; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v62; // [rsp+C8h] [rbp-70h]
  _BYTE v63[32]; // [rsp+D8h] [rbp-60h] BYREF
  int v64; // [rsp+F8h] [rbp-40h]
  char v65; // [rsp+FCh] [rbp-3Ch]

  v5 = a2;
  v6 = v58;
  v57 = 0x400000000LL;
  v7 = *(_DWORD *)(a2 + 4);
  v56 = v58;
  if ( v7 )
  {
    v47 = 0;
    v8 = 0;
    v53 = 8LL * (unsigned int)(v7 - 1) + 8;
    v49 = v60;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v47 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v10 )
      {
        v19 = sub_F6C520(*(_QWORD *)(v10 + 32));
        v54 = *(_QWORD *)(v10 + 32);
        v20 = *a1;
        ptr[0] = v49;
        ptr[1] = (void *)0x200000000LL;
        v55 = (const __m128i *)(v19 * ((v9 + 12 - (unsigned __int64)(v9 != -12)) / v19 + (v9 != -12)));
        sub_1E4C9B0(v20, v54, v55, ptr);
        v50 = *(_DWORD *)(v10 + 20);
        sub_F6CE20(&v54);
        sub_F6CCB0(&v54, a3);
        v21 = *a1;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v22 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v62 = (__m128i)si128;
        v48.m128_i32[0] = v22;
        v64 = 0;
        v65 = 0;
        v61 = v63;
        v23 = sub_F6C560(*(_QWORD *)v9);
        if ( (unsigned __int64)v23 > v62.m128i_i64[0] )
          sub_1EA60C0(&v61);
        v26 = sub_1E1DA60(a1, &v61, v54, v55, v24, v25, a3, si128);
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v27 = *(_DWORD *)(v9 + 8),
              v52 = v26,
              v51 = v27,
              v28 = (unsigned int)sub_F6CE20(&v54),
              v29 = sub_F6CCB0(&v54, a3),
              v30 = sub_1E503F0(*a1, v52, (v28 << 32) | v29, v51, v50),
              v31 = v30,
              (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v5 = 1;
          if ( v61 && v61 != v63 )
            operator delete[](v61);
          v32 = ptr[0];
          *(_DWORD *)(v21 + 12632) = v48.m128_i32[0];
          if ( v32 != v60 )
            free(v32);
LABEL_21:
          v6 = v56;
          goto LABEL_22;
        }
        sub_1EA6140(&v61, v30, 4, 4);
        *v34 = *(_DWORD *)(v9 + 8);
        v35 = v62.m128i_i64[0] - v62.m128i_i64[1];
        v39 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v31, v62.m128i_i32[0] - v62.m128i_i32[2], v36, v37, v38);
        memcpy(v39 + 1, (char *)v61 + v62.m128i_i64[1], v35);
        v40 = (unsigned int)v57;
        v41 = (unsigned int)v57 + 1LL;
        if ( v41 > HIDWORD(v57) )
        {
          sub_2237220(&v56, v58, v41, 8);
          v40 = (unsigned int)v57;
        }
        *((_QWORD *)v56 + v40) = v39;
        LODWORD(v57) = v57 + 1;
        if ( v61 && v61 != v63 )
          operator delete[](v61);
        v42 = ptr[0];
        *(_DWORD *)(v21 + 12632) = v48.m128_i32[0];
        if ( v42 != v49 )
          free(v42);
        v8 = 1;
      }
      else
      {
        v11 = *(_QWORD *)v9;
        v64 = 0;
        v65 = 0;
        v62 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v61 = v63;
        v12 = sub_F6C560(v11);
        if ( (unsigned __int64)v12 > v62.m128i_i64[0] )
          sub_1EA60C0(&v61);
        v48.m128_u64[0] = v9 + 8;
        a3 = _mm_loadh_ps((const double *)v48.m128_u64);
        v48 = a3;
        v15 = sub_1E1DA60(a1, &v61, a3.m128_i64[0], (const __m128i *)a3.m128_u64[1], v13, v14, a3, si128);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v5 = 1;
          if ( v61 && v61 != v63 )
            operator delete[](v61);
          goto LABEL_21;
        }
        if ( v15 == *(_QWORD *)v9 )
        {
          sub_1745810((__int64)&v56, v9);
        }
        else
        {
          v43 = v62.m128i_i64[0] - v62.m128i_i64[1];
          v44 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v15, v62.m128i_i32[0] - v62.m128i_i32[2], v16, v17, v18);
          memcpy(v44 + 1, (char *)v61 + v62.m128i_i64[1], v43);
          v45 = (unsigned int)v57;
          v46 = (unsigned int)v57 + 1LL;
          if ( v46 > HIDWORD(v57) )
          {
            sub_2237220(&v56, v58, v46, 8);
            v45 = (unsigned int)v57;
          }
          v8 = 1;
          *((_QWORD *)v56 + v45) = v44;
          LODWORD(v57) = v57 + 1;
        }
        if ( v61 && v61 != v63 )
          operator delete[](v61);
      }
      v47 += 8;
      if ( v53 == v47 )
      {
        v6 = v56;
        goto LABEL_35;
      }
    }
  }
  v8 = 0;
LABEL_35:
  if ( *(_DWORD *)(*a1 + 12632) || v8 )
  {
    v5 = sub_1E8F560(
           *a1,
           (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3),
           *(unsigned int *)(a2 + 16),
           v6,
           (unsigned int)v57,
           *(unsigned int *)(a2 + 20));
    goto LABEL_21;
  }
LABEL_22:
  if ( v6 != v58 )
    free(v6);
  return v5;
}
