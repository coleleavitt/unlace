unsigned __int64 __fastcall sub_1B9EB10(__int64 *a1, __int64 a2, __int64 a3, __int32 *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r12
  __int32 *v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // r13
  __int64 v16; // rdx
  _BYTE *v17; // r8
  unsigned __int16 v18; // ax
  int v19; // eax
  _QWORD *v20; // rsi
  __int64 v21; // r12
  __int64 *v22; // r14
  __int64 v23; // r13
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm4
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int16 v35; // ax
  __int64 v36; // rax
  unsigned int v37; // r14d
  int v38; // ebp
  unsigned __int8 v39; // r15
  __int32 v40; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdi
  __m128i v46; // rax
  unsigned int v47; // r13d
  __int64 v48; // r14
  __int64 v49; // rdi
  __m128i si128; // xmm3
  int v51; // r15d
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  void **v56; // rax
  void **v57; // rdi
  unsigned __int64 v58; // r13
  _DWORD *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int32 *v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  __int64 v68; // rcx
  int v69; // ecx
  __int64 v70; // rsi
  __m128i v71; // [rsp+0h] [rbp-158h] BYREF
  void **v72; // [rsp+18h] [rbp-140h]
  void **v73; // [rsp+20h] [rbp-138h]
  __int32 *v74; // [rsp+28h] [rbp-130h]
  unsigned __int64 v75; // [rsp+30h] [rbp-128h]
  __int64 v76; // [rsp+38h] [rbp-120h]
  _BYTE *v77; // [rsp+40h] [rbp-118h]
  __int64 v78; // [rsp+48h] [rbp-110h]
  __int64 v79; // [rsp+50h] [rbp-108h] BYREF
  __int32 *v80; // [rsp+58h] [rbp-100h]
  __m128i v81; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v82; // [rsp+70h] [rbp-E8h] BYREF
  void *v83; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+88h] [rbp-D0h]
  _BYTE v85[32]; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-A8h] BYREF
  char v87; // [rsp+C0h] [rbp-98h] BYREF
  void *v88; // [rsp+E0h] [rbp-78h] BYREF
  __m128 v89; // [rsp+E8h] [rbp-70h]
  _BYTE v90[32]; // [rsp+F8h] [rbp-60h] BYREF
  int v91; // [rsp+118h] [rbp-40h]
  char v92; // [rsp+11Ch] [rbp-3Ch]

  v6 = a2;
  v80 = a4;
  v79 = a3;
  v8 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v9 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v12 = sub_1B8F630(
          a1,
          a2,
          *(_QWORD *)(v79 + 24),
          (__m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  sub_F6C520(*(_QWORD *)(v79 + 24));
  v16 = v79;
  v17 = v85;
  v73 = &v83;
  v84 = 0x400000000LL;
  v18 = *(_WORD *)(v79 + 18);
  v83 = v85;
  v19 = (v18 >> 3) & 0x7F;
  if ( v19 )
  {
    v78 = v15;
    v20 = &qword_18;
    v77 = (_BYTE *)v6;
    v21 = 24;
    v76 = 8LL * (unsigned int)(v19 - 1) + 32;
    v72 = ptr;
    v74 = (__int32 *)&v87;
    v75 = (unsigned __int64)&v81;
    while ( 1 )
    {
      v22 = *(__int64 **)&v80[(unsigned __int64)v21 / 4];
      v23 = *v22;
      if ( (*v22 & 0xF) != 0 )
      {
        v71.m128i_i64[0] = (__int64)(v22 + 1);
        a6 = _mm_loadh_ps((const double *)v71.m128i_i64);
        v71 = (__m128i)a6;
      }
      else
      {
        v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v71.m128i_i64[0] = (__int64)(v22 + 1);
        v25 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v26 = (__m128i)_mm_loadh_ps((const double *)v71.m128i_i64);
        v27 = *(_BYTE *)(v25 + 16) == 38;
        v71 = v26;
        if ( v27 )
        {
          v81 = v26;
          if ( v23 )
          {
            v43 = *v24;
            if ( *(_BYTE *)(*v24 + 16) != 38 )
              v43 = sub_F63050(*v24, v20, v24, v25);
            v44 = *(_QWORD *)(v43 + 32);
            v45 = *a1;
            ptr[0] = v74;
            ptr[1] = (void *)0x200000000LL;
            sub_1E4C960(v45, v44);
            v46.m128i_i64[0] = sub_1743190(v75);
            v47 = *(_DWORD *)(v43 + 20);
            v71 = v46;
            v82 = _mm_load_si128(&v71);
            sub_F6CE20(v82.m128i_i64);
            sub_F6CCB0(v82.m128i_i64, a5);
            v48 = *a1;
            v49 = v71.m128i_i64[0];
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v51 = *(_DWORD *)(*a1 + 12632);
            *(_DWORD *)(*a1 + 12632) = 0;
            v88 = v90;
            v89 = (__m128)si128;
            v91 = 0;
            v92 = 0;
            v52 = sub_F6C560(v49);
            if ( v52 > v89.m128_u64[0] )
              sub_1EA60C0(&v88);
            v55 = sub_1B8F630(a1, (__int64)&v88, v82.m128i_i64[0], (__m128i *)v82.m128i_i64[1], v53, v54, a5, a6);
            if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              v13 = 0;
              if ( v88 != v90 && v88 )
                operator delete[](v88);
              v56 = v72;
              v57 = (void **)ptr[0];
              *(_DWORD *)(v48 + 12632) = v51;
              if ( v57 != v56 + 2 )
                free(v57);
              goto LABEL_31;
            }
            v58 = sub_A781D0(*(_QWORD *)(*a1 + 248), v55, v47);
            sub_1EA6140(v77, v58, 4, 4);
            *v59 = *(_DWORD *)v81.m128i_i64[1];
            v20 = sub_18C0B80(&v88, *(_QWORD **)(*a1 + 248), v58, v60, v61, v62);
            sub_1745810((__int64)v73, (__int64)v20);
            if ( v88 != v90 && v88 )
              operator delete[](v88);
            *(_DWORD *)(v48 + 12632) = v51;
            if ( ptr[0] != v74 )
              free(ptr[0]);
            goto LABEL_16;
          }
        }
      }
      a5 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v91 = 0;
      v88 = v90;
      v89 = a5;
      v92 = 0;
      v28 = sub_F6C560(v23);
      if ( v28 > v89.m128_u64[0] )
        sub_1EA60C0(&v88);
      v31 = sub_1B8F630(a1, (__int64)&v88, v71.m128i_i64[0], (__m128i *)v71.m128i_i64[1], v29, v30, a5, a6);
      if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v13 = 0;
        if ( v88 && v88 != v90 )
          operator delete[](v88);
        goto LABEL_31;
      }
      v20 = v22;
      if ( v31 != v23 )
        v20 = sub_18C0B80(&v88, *(_QWORD **)(*a1 + 248), v31, v32, v33, v34);
      sub_1745810((__int64)v73, (__int64)v20);
      if ( v88 && v88 != v90 )
        operator delete[](v88);
LABEL_16:
      v21 += 8;
      if ( v76 == v21 )
      {
        v16 = v79;
        v15 = v78;
        v6 = (__int64)v77;
        v75 = (unsigned int)v84;
        v17 = v83;
        v35 = (*(_WORD *)(v79 + 18) >> 3) & 0x7F;
        goto LABEL_18;
      }
    }
  }
  v75 = 0;
  LOBYTE(v35) = 0;
LABEL_18:
  v77 = v17;
  v36 = 2LL * (unsigned __int8)v35;
  v37 = v80[2];
  v38 = v80[1];
  v39 = *(_BYTE *)(v16 + 19) >> 2;
  LODWORD(v76) = v80[3];
  v40 = *v80;
  v74 = &v80[v36 + 6];
  v71.m128i_i32[0] = v40;
  v72 = (void **)(v16 + v36 * 4 + 48);
  v41 = sub_F6CCB0(&v79, a5);
  v42 = sub_1A8CD60(
          *(__int64 **)(*a1 + 736),
          v15,
          v41,
          v71.m128i_u32[0],
          (__int64)v77,
          v75,
          a5,
          v38,
          v37,
          v72,
          v39,
          (int)v74,
          v39,
          v76,
          1,
          1u);
  v13 = v42;
  if ( (v42 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v63 = sub_1EA6140(
            v6,
            v42,
            8 * ((4 * ((*(_BYTE *)(v42 + 19) >> 2) + 2 * ((*(_WORD *)(v42 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8,
            8);
    v65 = v80;
    v66 = v79;
    *(_BYTE *)(v64 + 16) = 1;
    *(_DWORD *)v64 = *v65;
    if ( ((*(_WORD *)(v66 + 18) >> 3) & 0x7F) != 0 )
    {
      v67 = 8LL * (((*(_WORD *)(v66 + 18) >> 3) & 0x7Fu) - 1) + 8;
      v68 = 0;
      do
      {
        *(_QWORD *)(v64 + v68 + 24) = *(_QWORD *)((char *)v83 + v68);
        v68 += 8;
      }
      while ( v68 != v67 );
      v66 = v79;
      v65 = v80;
    }
    *(_DWORD *)(v64 + 4) = v65[1];
    *(_DWORD *)(v64 + 8) = v65[2];
    v69 = *(_BYTE *)(v66 + 19) >> 2;
    if ( *(_BYTE *)(v66 + 19) >> 2 )
    {
      v70 = 0;
      do
      {
        v70 += 4;
        *(_DWORD *)(v70 + v64 + (*(_WORD *)(v63 + 18) & 0x3F8) + 20) = *(__int32 *)((char *)v65
                                                                                  + (*(_WORD *)(v66 + 18) & 0x3F8)
                                                                                  + v70
                                                                                  + 20);
      }
      while ( 4LL * (unsigned int)(v69 - 1) + 4 != v70 );
    }
    *(_DWORD *)(v64 + 12) = v65[3];
  }
  else
  {
    v13 = 0;
  }
LABEL_31:
  if ( v83 != v73 + 2 )
    free(v83);
  return v13;
}
