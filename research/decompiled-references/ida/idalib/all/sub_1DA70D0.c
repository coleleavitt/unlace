__int64 __fastcall sub_1DA70D0(__int64 *a1, __int64 a2, __m128 a3, __m128 si128)
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
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // [rsp+8h] [rbp-130h]
  __m128 v50; // [rsp+20h] [rbp-118h] BYREF
  _BYTE *v51; // [rsp+30h] [rbp-108h]
  unsigned int v52; // [rsp+38h] [rbp-100h]
  unsigned int v53; // [rsp+3Ch] [rbp-FCh]
  unsigned __int64 v54; // [rsp+40h] [rbp-F8h]
  __int64 v55; // [rsp+48h] [rbp-F0h]
  __int64 v56; // [rsp+50h] [rbp-E8h] BYREF
  const __m128i *v57; // [rsp+58h] [rbp-E0h]
  void *v58; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-D0h]
  _BYTE v60[32]; // [rsp+70h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v62[32]; // [rsp+A0h] [rbp-98h] BYREF
  void *v63; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v64; // [rsp+C8h] [rbp-70h]
  _BYTE v65[32]; // [rsp+D8h] [rbp-60h] BYREF
  int v66; // [rsp+F8h] [rbp-40h]
  char v67; // [rsp+FCh] [rbp-3Ch]

  v5 = a2;
  v6 = v60;
  v59 = 0x400000000LL;
  v7 = *(_DWORD *)(a2 + 4);
  v58 = v60;
  if ( v7 )
  {
    v49 = 0;
    v8 = 0;
    v55 = 8LL * (unsigned int)(v7 - 1) + 8;
    v51 = v62;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v49 + a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v10 )
      {
        v19 = sub_F6C520(*(_QWORD *)(v10 + 32));
        v56 = *(_QWORD *)(v10 + 32);
        v20 = *a1;
        ptr[0] = v51;
        ptr[1] = (void *)0x200000000LL;
        v57 = (const __m128i *)(v19 * ((v9 + 12 - (unsigned __int64)(v9 != -12)) / v19 + (v9 != -12)));
        sub_1E4C9B0(v20, v56, v57, ptr);
        v52 = *(_DWORD *)(v10 + 20);
        sub_F6CE20(&v56);
        sub_F6CCB0(&v56, a3);
        v21 = *a1;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v22 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v64 = (__m128i)si128;
        v50.m128_i32[0] = v22;
        v66 = 0;
        v67 = 0;
        v63 = v65;
        v23 = sub_F6C560(*(_QWORD *)v9);
        if ( (unsigned __int64)v23 > v64.m128i_i64[0] )
          sub_1EA60C0(&v63);
        v26 = sub_1D97F40(a1, (__int64)&v63, v56, v57, v24, v25, a3, si128);
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0
          || (v27 = *(_DWORD *)(v9 + 8),
              v54 = v26,
              v53 = v27,
              v28 = (unsigned int)sub_F6CE20(&v56),
              v29 = sub_F6CCB0(&v56, a3),
              v30 = sub_1E503F0(*a1, v54, (v28 << 32) | v29, v53, v52),
              v31 = v30,
              (v30 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v5 = 1;
          if ( v63 && v63 != v65 )
            operator delete[](v63);
          v32 = ptr[0];
          *(_DWORD *)(v21 + 12632) = v50.m128_i32[0];
          if ( v32 != v62 )
            free(v32);
LABEL_21:
          v6 = v58;
          goto LABEL_22;
        }
        sub_1EA6140(&v63, v30, 4, 4);
        *v34 = *(_DWORD *)(v9 + 8);
        v35 = v64.m128i_i64[0] - v64.m128i_i64[1];
        v39 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v31, v64.m128i_i32[0] - v64.m128i_i32[2], v36, v37, v38);
        memcpy(v39 + 1, (char *)v63 + v64.m128i_i64[1], v35);
        v40 = (unsigned int)v59;
        v41 = (unsigned int)v59 + 1LL;
        if ( v41 > HIDWORD(v59) )
        {
          sub_2237220(&v58, v60, v41, 8);
          v40 = (unsigned int)v59;
        }
        *((_QWORD *)v58 + v40) = v39;
        LODWORD(v59) = v59 + 1;
        if ( v63 && v63 != v65 )
          operator delete[](v63);
        v42 = ptr[0];
        *(_DWORD *)(v21 + 12632) = v50.m128_i32[0];
        if ( v42 != v51 )
          free(v42);
        v8 = 1;
      }
      else
      {
        v11 = *(_QWORD *)v9;
        v66 = 0;
        v67 = 0;
        v64 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v63 = v65;
        v12 = sub_F6C560(v11);
        if ( (unsigned __int64)v12 > v64.m128i_i64[0] )
          sub_1EA60C0(&v63);
        v50.m128_u64[0] = v9 + 8;
        a3 = _mm_loadh_ps((const double *)v50.m128_u64);
        v50 = a3;
        v15 = sub_1D97F40(a1, (__int64)&v63, a3.m128_i64[0], (const __m128i *)a3.m128_u64[1], v13, v14, a3, si128);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v5 = 1;
          if ( v63 && v63 != v65 )
            operator delete[](v63);
          goto LABEL_21;
        }
        if ( v15 == *(_QWORD *)v9 )
        {
          v47 = (unsigned int)v59;
          v48 = (unsigned int)v59 + 1LL;
          if ( v48 > HIDWORD(v59) )
          {
            sub_2237220(&v58, v60, v48, 8);
            v47 = (unsigned int)v59;
          }
          *((_QWORD *)v58 + v47) = v9;
          LODWORD(v59) = v59 + 1;
        }
        else
        {
          v43 = v64.m128i_i64[0] - v64.m128i_i64[1];
          v44 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v15, v64.m128i_i32[0] - v64.m128i_i32[2], v16, v17, v18);
          memcpy(v44 + 1, (char *)v63 + v64.m128i_i64[1], v43);
          v45 = (unsigned int)v59;
          v46 = (unsigned int)v59 + 1LL;
          if ( v46 > HIDWORD(v59) )
          {
            sub_2237220(&v58, v60, v46, 8);
            v45 = (unsigned int)v59;
          }
          v8 = 1;
          *((_QWORD *)v58 + v45) = v44;
          LODWORD(v59) = v59 + 1;
        }
        if ( v63 && v63 != v65 )
          operator delete[](v63);
      }
      v49 += 8;
      if ( v55 == v49 )
      {
        v6 = v58;
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
           (unsigned int)v59,
           *(unsigned int *)(a2 + 20));
    goto LABEL_21;
  }
LABEL_22:
  if ( v6 != v60 )
    free(v6);
  return v5;
}
