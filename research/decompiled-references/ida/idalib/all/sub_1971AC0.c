__int64 __fastcall sub_1971AC0(__int64 *a1, __int64 a2, __m128 a3, __m128 si128)
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
  _BYTE *v39; // rdi
  __int64 v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // [rsp+0h] [rbp-138h]
  __m128 v43; // [rsp+20h] [rbp-118h] BYREF
  int v44; // [rsp+34h] [rbp-104h]
  unsigned int v45; // [rsp+38h] [rbp-100h]
  unsigned int v46; // [rsp+3Ch] [rbp-FCh]
  unsigned __int64 v47; // [rsp+40h] [rbp-F8h]
  __int64 v48; // [rsp+48h] [rbp-F0h]
  __int64 v49; // [rsp+50h] [rbp-E8h] BYREF
  __m128i *v50; // [rsp+58h] [rbp-E0h]
  void *v51; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-D0h]
  _BYTE v53[32]; // [rsp+70h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v55[32]; // [rsp+A0h] [rbp-98h] BYREF
  void *v56; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v57; // [rsp+C8h] [rbp-70h]
  _BYTE v58[32]; // [rsp+D8h] [rbp-60h] BYREF
  int v59; // [rsp+F8h] [rbp-40h]
  char v60; // [rsp+FCh] [rbp-3Ch]

  v5 = v53;
  v52 = 0x400000000LL;
  v6 = *(_DWORD *)(a2 + 4);
  v51 = v53;
  if ( v6 )
  {
    v42 = 0;
    v48 = 8LL * (unsigned int)(v6 - 1) + 8;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v42 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
      v8 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v8 )
      {
        v18 = sub_F6C520(*(_QWORD *)(v8 + 32));
        v49 = *(_QWORD *)(v8 + 32);
        v19 = *a1;
        ptr[0] = v55;
        ptr[1] = (void *)0x200000000LL;
        v50 = (__m128i *)(v18 * ((v7 + 12 - (unsigned __int64)(v7 != -12)) / v18 + (v7 != -12)));
        sub_1E4C9B0(v19, v49, v50, ptr);
        v45 = *(_DWORD *)(v8 + 20);
        sub_F6CE20(&v49);
        sub_F6CCB0(&v49, a3);
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v20 = *(_DWORD *)(*a1 + 12632);
        v43.m128_u64[0] = *a1;
        *(_DWORD *)(v43.m128_u64[0] + 12632) = 0;
        v56 = v58;
        v57 = (__m128i)si128;
        v59 = 0;
        v60 = 0;
        v21 = *(_QWORD *)v7;
        v44 = v20;
        v22 = sub_F6C560(v21);
        if ( (unsigned __int64)v22 > v57.m128i_i64[0] )
          sub_1EA60C0(&v56);
        v25 = sub_193F4E0(a1, (__int64)&v56, v49, v50, v23, v24, a3, si128);
        if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v26 = *(_DWORD *)(v7 + 8),
              v47 = v25,
              v46 = v26,
              v27 = (unsigned int)sub_F6CE20(&v49),
              v28 = sub_F6CCB0(&v49, a3),
              v29 = sub_1E503F0(*a1, v47, (v27 << 32) | v28, v46, v45),
              v30 = v29,
              (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v17 = 1;
          if ( v56 && v56 != v58 )
            operator delete[](v56);
          v31 = ptr[0];
          *(_DWORD *)(v43.m128_u64[0] + 12632) = v44;
          if ( v31 != v55 )
            free(v31);
          goto LABEL_21;
        }
        sub_1EA6140(&v56, v29, 4, 4);
        *v33 = *(_DWORD *)(v7 + 8);
        v34 = v57.m128i_i64[0] - v57.m128i_i64[1];
        v38 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v30, v57.m128i_i32[0] - v57.m128i_i32[2], v35, v36, v37);
        memcpy(v38 + 1, (char *)v56 + v57.m128i_i64[1], v34);
        sub_1745810((__int64)&v51, (__int64)v38);
        if ( v56 && v56 != v58 )
          operator delete[](v56);
        v39 = ptr[0];
        *(_DWORD *)(v43.m128_u64[0] + 12632) = v44;
        if ( v39 != v55 )
          free(v39);
      }
      else
      {
        v9 = *(_QWORD *)v7;
        v59 = 0;
        v56 = v58;
        v57 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v60 = 0;
        v10 = sub_F6C560(v9);
        if ( (unsigned __int64)v10 > v57.m128i_i64[0] )
          sub_1EA60C0(&v56);
        v43.m128_u64[0] = v7 + 8;
        a3 = _mm_loadh_ps((const double *)v43.m128_u64);
        v43 = a3;
        v13 = sub_193F4E0(a1, (__int64)&v56, a3.m128_i64[0], (__m128i *)a3.m128_u64[1], v11, v12, a3, si128);
        if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v17 = 1;
          if ( v56 && v56 != v58 )
            operator delete[](v56);
          goto LABEL_21;
        }
        if ( v13 == *(_QWORD *)v7 )
        {
          sub_1745810((__int64)&v51, v7);
        }
        else
        {
          v41 = sub_18C0B80(&v56, *(_QWORD **)(*a1 + 248), v13, v14, v15, v16);
          sub_1745810((__int64)&v51, (__int64)v41);
        }
        if ( v56 != v58 && v56 )
          operator delete[](v56);
      }
      v42 += 8;
      if ( v48 == v42 )
      {
        v5 = v51;
        v40 = (unsigned int)v52;
        goto LABEL_31;
      }
    }
  }
  v40 = 0;
LABEL_31:
  v17 = sub_1E8F560(
          *a1,
          (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3),
          *(unsigned int *)(a2 + 16),
          v5,
          v40,
          *(unsigned int *)(a2 + 20));
LABEL_21:
  if ( v51 != v53 )
    free(v51);
  return v17;
}
