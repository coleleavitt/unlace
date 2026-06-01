__int64 __fastcall sub_6EECC0(
        __m128i *a1,
        _Unwind_Word a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 *v16; // r12
  __int64 *v17; // rdi
  _DWORD *v18; // rax
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // r15
  __int64 *v24; // rdi
  int v26; // r8d
  int v27; // r9d
  __int64 i; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // esi
  int v33; // edi
  __int64 v34; // rdx
  unsigned int v35; // r15d
  const double *v36; // rcx
  unsigned int v37; // r15d
  unsigned int v38; // edx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rdi
  const double *v43; // rcx
  __int64 v44; // rax
  const double *v45; // [rsp-150h] [rbp-158h]
  const double *v46; // [rsp-150h] [rbp-158h]
  int v47; // [rsp-144h] [rbp-14Ch]
  _DWORD *v49; // [rsp-128h] [rbp-130h]
  __int64 v50; // [rsp-120h] [rbp-128h] BYREF
  _DWORD *v51; // [rsp-118h] [rbp-120h] BYREF
  __m128i v52; // [rsp-110h] [rbp-118h] BYREF
  __int64 v53; // [rsp-100h] [rbp-108h] BYREF
  __int64 v54; // [rsp-F8h] [rbp-100h]
  __int64 v55; // [rsp-F0h] [rbp-F8h]
  __int64 v56; // [rsp-E8h] [rbp-F0h]
  struct _Unwind_Exception v57; // [rsp-E0h] [rbp-E8h] BYREF
  _Unwind_Word *p_private_1; // [rsp-C0h] [rbp-C8h]
  __int64 (__fastcall **v59)(); // [rsp-B8h] [rbp-C0h]
  __int64 v60; // [rsp-A8h] [rbp-B0h]
  void *v61; // [rsp-A0h] [rbp-A8h]
  __int64 v62; // [rsp-90h] [rbp-98h]
  void *v63; // [rsp-88h] [rbp-90h]
  __int64 (__fastcall **v64)(); // [rsp-80h] [rbp-88h]
  __int64 v65; // [rsp-70h] [rbp-78h]
  void *v66; // [rsp-68h] [rbp-70h]
  __int64 v67; // [rsp-58h] [rbp-60h]
  void *v68; // [rsp-50h] [rbp-58h]
  __int64 v69[2]; // [rsp-48h] [rbp-50h] BYREF
  char v70; // [rsp-38h] [rbp-40h]

  v12 = _mm_loadl_epi64(a1);
  v13 = _mm_unpacklo_epi64((__m128i)a2, v12);
  *(__m128i *)&v57.exception_class = v13;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v60 = 0;
  v57.private_1 = (_Unwind_Word)&off_1C4E7B8;
  v61 = nullptr;
  v57.private_2 = a2;
  p_private_1 = &v57.private_1;
  v62 = 0;
  v65 = 0;
  v59 = &off_1C62200;
  v63 = nullptr;
  v64 = &off_1C62200;
  v66 = nullptr;
  v67 = 0;
  v68 = nullptr;
  v69[1] = 0;
  v70 = 1;
  v69[0] = v12.m128i_i64[0];
  sub_2FCDE0(a5);
  sub_2FCDE0(a5 + 2);
  v14 = (__int64 *)a5[4];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[2 * v15];
      do
      {
        v17 = v14;
        v14 += 2;
        sub_2334C0(v17);
      }
      while ( v14 != v16 );
      v14 = (__int64 *)a5[4];
    }
    *((_DWORD *)v14 - 1) = 0;
  }
  sub_2FCDE0(a5 + 5);
  sub_2FCDE0(a5 + 7);
  sub_2FCDE0(a5 + 9);
  sub_2FCDE0(a5 + 11);
  sub_2FCDE0(a5 + 13);
  sub_2FCDE0(a1[71].m128i_i64);
  v18 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  v49 = v18;
  if ( !v18 )
    goto LABEL_12;
  if ( *v18 != 5 || v18[1] )
  {
    v49 = nullptr;
LABEL_12:
    v19 = 0;
    goto LABEL_13;
  }
  v50 = 0;
  v51 = nullptr;
  v20 = sub_6E8740(a1->m128i_i64, &v57, a3, a4, &v50, &v51, (__int64)a5, 0);
  v19 = v50;
  v49 = v51;
  if ( !(_BYTE)v20 )
    goto LABEL_14;
  if ( v50 )
  {
    for ( i = v50; v50 + 16LL * *(unsigned int *)(v50 - 4) != i; i += 16 )
    {
      v29 = *(_QWORD *)(i + 8);
      if ( v29 && *(_DWORD *)(v29 - 4) > 3u )
      {
        v49 = v51;
        goto LABEL_13;
      }
    }
    v49 = v51;
    if ( a1[1].m128i_i8[8] )
    {
LABEL_39:
      v30 = *(unsigned int *)(v19 - 4);
      v31 = 0;
      v32 = 0;
      if ( (_DWORD)v30 )
      {
        v33 = v47;
        do
        {
          v34 = *(_QWORD *)(v19 + 16 * v31 + 8);
          if ( v34 && *(_DWORD *)(v34 - 4) == 3 )
          {
            ++v32;
            if ( v49[v31] == 2 )
            {
              v35 = 0;
              goto LABEL_53;
            }
            v33 = v31;
          }
          ++v31;
        }
        while ( v30 != v31 );
        v35 = 0;
        if ( v32 == 1 )
        {
          do
          {
            v50 = v19;
            v51 = v49;
            sub_6EC8D0(a1, v33, v35++, &v50, &v51, (__int64)a5);
          }
          while ( v35 < *(_DWORD *)(v19 - 4) );
          goto LABEL_50;
        }
        do
        {
LABEL_53:
          v50 = v19;
          v51 = v49;
          sub_6ED6C0(
            a1->m128i_i64,
            v35++,
            &v50,
            &v51,
            (__int64)a5,
            *(double *)v12.m128i_i64,
            *(double *)v13.m128i_i64,
            a8,
            a9);
        }
        while ( v35 < *(_DWORD *)(v19 - 4) );
      }
      goto LABEL_50;
    }
    v36 = (const double *)(v50 + 8);
    v53 = 0;
    v37 = 0;
    v55 = 1;
    v38 = *(_DWORD *)(v50 - 4);
    v54 = 0;
    v56 = 0;
    if ( v38 )
    {
      do
      {
        v39 = *(_QWORD *)v36;
        if ( *(_QWORD *)v36 )
        {
          if ( *(_DWORD *)(v39 - 4) > 2u )
            goto LABEL_66;
          if ( *(_DWORD *)(v39 - 4) == 2 )
          {
            v45 = v36;
            if ( !(unsigned __int8)sub_6DFA90((__int64)a1, *(_QWORD *)(v39 + 8), (__int64)&v53) )
            {
LABEL_66:
              sub_25A130((char *)&v53);
              goto LABEL_39;
            }
            v42 = a1[1].m128i_i64[0];
            v43 = v45;
            if ( !v42 )
            {
              sub_16669E0(&a1->m128i_u64[1]);
              v42 = a1[1].m128i_i64[0];
              v43 = v45;
            }
            v46 = v43;
            v44 = sub_166A700(v42, (unsigned int)&v53, 0, (_DWORD)v43, v40, v41);
            v12 = (__m128i)_mm_loadh_ps(v46 - 1);
            v52 = v12;
            sub_6DE2E0((__int64 **)&v52, v44);
            v38 = *(_DWORD *)(v19 - 4);
            v36 = v46;
          }
        }
        ++v37;
        v36 += 2;
      }
      while ( v37 < v38 );
    }
    sub_25A130((char *)&v53);
LABEL_13:
    v20 = 0;
    goto LABEL_14;
  }
  if ( !a1[1].m128i_i8[8] )
  {
    v53 = 0;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    sub_25A130((char *)&v53);
    goto LABEL_13;
  }
LABEL_50:
  v50 = v19;
  v51 = v49;
  sub_6E50B0(a1->m128i_i64, &v50, &v51, (__int64)a5, v26, v27);
LABEL_14:
  sub_2334C0(v69);
  v64 = &off_1C62200;
  if ( v68 )
    sub_186B220(v68);
  if ( v66 )
    sub_186B220(v66);
  v59 = &off_1C62200;
  if ( v63 )
    sub_186B220(v63);
  if ( v61 )
    sub_186B220(v61);
  sub_6DE2A0(v57.exception_class, (__int64)v57.exception_cleanup);
  if ( v49 )
    sub_186B220(v49 - 2);
  if ( v19 )
  {
    v21 = *(unsigned int *)(v19 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = (__int64 *)v19;
      v23 = v19 + 16 * v21;
      do
      {
        v24 = v22;
        v22 += 2;
        sub_2B4F40(v24);
      }
      while ( (__int64 *)v23 != v22 );
    }
    sub_186B220((void *)(v19 - 8));
  }
  return v20;
}

