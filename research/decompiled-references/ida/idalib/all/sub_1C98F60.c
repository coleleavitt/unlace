__int64 __fastcall sub_1C98F60(__int64 *a1, __int64 a2, __m128 a3, __m128 si128)
{
  _BYTE *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r13
  _BYTE *v31; // rdi
  _DWORD *v33; // rdx
  size_t v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  _BYTE *v41; // rdi
  __int64 v42; // r8
  size_t v43; // rbx
  _QWORD *v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-138h]
  __m128 v48; // [rsp+20h] [rbp-118h] BYREF
  int v49; // [rsp+34h] [rbp-104h]
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

  v5 = v58;
  v57 = 0x400000000LL;
  v6 = *(_DWORD *)(a2 + 4);
  v56 = v58;
  if ( v6 )
  {
    v47 = 0;
    v53 = 8LL * (unsigned int)(v6 - 1) + 8;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v47 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
      v8 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v8 )
      {
        v18 = sub_F6C520(*(_QWORD *)(v8 + 32));
        v54 = *(_QWORD *)(v8 + 32);
        v19 = *a1;
        ptr[0] = v60;
        ptr[1] = (void *)0x200000000LL;
        v55 = (const __m128i *)(v18 * ((v7 + 12 - (unsigned __int64)(v7 != -12)) / v18 + (v7 != -12)));
        sub_1E4C9B0(v19, v54, v55, ptr);
        v50 = *(_DWORD *)(v8 + 20);
        sub_F6CE20(&v54);
        sub_F6CCB0(&v54, a3);
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v20 = *(_DWORD *)(*a1 + 12632);
        v48.m128_u64[0] = *a1;
        *(_DWORD *)(v48.m128_u64[0] + 12632) = 0;
        v61 = v63;
        v62 = (__m128i)si128;
        v64 = 0;
        v65 = 0;
        v21 = *(_QWORD *)v7;
        v49 = v20;
        v22 = sub_F6C560(v21);
        if ( (unsigned __int64)v22 > v62.m128i_i64[0] )
          sub_1EA60C0(&v61);
        v25 = sub_1C892C0(a1, (__int64)&v61, v54, v55, v23, v24, a3, si128);
        if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v26 = *(_DWORD *)(v7 + 8),
              v52 = v25,
              v51 = v26,
              v27 = (unsigned int)sub_F6CE20(&v54),
              v28 = sub_F6CCB0(&v54, a3),
              v29 = sub_1E503F0(*a1, v52, (v27 << 32) | v28, v51, v50),
              v30 = v29,
              (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v17 = 1;
          if ( v61 && v61 != v63 )
            operator delete[](v61);
          v31 = ptr[0];
          *(_DWORD *)(v48.m128_u64[0] + 12632) = v49;
          if ( v31 != v60 )
            free(v31);
          goto LABEL_21;
        }
        sub_1EA6140(&v61, v29, 4, 4);
        *v33 = *(_DWORD *)(v7 + 8);
        v34 = v62.m128i_i64[0] - v62.m128i_i64[1];
        v38 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v30, v62.m128i_i32[0] - v62.m128i_i32[2], v35, v36, v37);
        memcpy(v38 + 1, (char *)v61 + v62.m128i_i64[1], v34);
        v39 = (unsigned int)v57;
        v40 = (unsigned int)v57 + 1LL;
        if ( v40 > HIDWORD(v57) )
        {
          sub_2237220(&v56, v58, v40, 8);
          v39 = (unsigned int)v57;
        }
        *((_QWORD *)v56 + v39) = v38;
        LODWORD(v57) = v57 + 1;
        if ( v61 && v61 != v63 )
          operator delete[](v61);
        v41 = ptr[0];
        *(_DWORD *)(v48.m128_u64[0] + 12632) = v49;
        if ( v41 != v60 )
          free(v41);
      }
      else
      {
        v9 = *(_QWORD *)v7;
        v64 = 0;
        v61 = v63;
        v62 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v65 = 0;
        v10 = sub_F6C560(v9);
        if ( (unsigned __int64)v10 > v62.m128i_i64[0] )
          sub_1EA60C0(&v61);
        v48.m128_u64[0] = v7 + 8;
        a3 = _mm_loadh_ps((const double *)v48.m128_u64);
        v48 = a3;
        v13 = sub_1C892C0(a1, (__int64)&v61, a3.m128_i64[0], (const __m128i *)a3.m128_u64[1], v11, v12, a3, si128);
        if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v17 = 1;
          if ( v61 && v61 != v63 )
            operator delete[](v61);
          goto LABEL_21;
        }
        if ( v13 == *(_QWORD *)v7 )
        {
          sub_1745810((__int64)&v56, v7);
        }
        else
        {
          v43 = v62.m128i_i64[0] - v62.m128i_i64[1];
          v44 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v13, v62.m128i_i32[0] - v62.m128i_i32[2], v14, v15, v16);
          memcpy(v44 + 1, (char *)v61 + v62.m128i_i64[1], v43);
          v45 = (unsigned int)v57;
          v46 = (unsigned int)v57 + 1LL;
          if ( v46 > HIDWORD(v57) )
          {
            sub_2237220(&v56, v58, v46, 8);
            v45 = (unsigned int)v57;
          }
          *((_QWORD *)v56 + v45) = v44;
          LODWORD(v57) = v57 + 1;
        }
        if ( v61 != v63 && v61 )
          operator delete[](v61);
      }
      v47 += 8;
      if ( v53 == v47 )
      {
        v5 = v56;
        v42 = (unsigned int)v57;
        goto LABEL_33;
      }
    }
  }
  v42 = 0;
LABEL_33:
  v17 = sub_1E8F560(
          *a1,
          (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3),
          *(unsigned int *)(a2 + 16),
          v5,
          v42,
          *(unsigned int *)(a2 + 20));
LABEL_21:
  if ( v56 != v58 )
    free(v56);
  return v17;
}
