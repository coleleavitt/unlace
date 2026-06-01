unsigned __int64 __fastcall sub_1FE430(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __m128i v24; // xmm0
  int v25; // eax
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 *v28; // rcx
  __int64 v29; // r13
  _DWORD *v30; // rax
  _DWORD *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rax
  struct _Unwind_Exception *v48; // rbx
  __int64 *v49; // [rsp+10h] [rbp-E0h]
  __int32 v50; // [rsp+18h] [rbp-D8h]
  __int64 *v51; // [rsp+18h] [rbp-D8h]
  char v52; // [rsp+23h] [rbp-CDh] BYREF
  int v53; // [rsp+24h] [rbp-CCh] BYREF
  __int64 v54; // [rsp+28h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-C0h] BYREF
  __m128i v56; // [rsp+38h] [rbp-B8h] BYREF
  __m256i v57; // [rsp+50h] [rbp-A0h] BYREF
  int v58; // [rsp+70h] [rbp-80h]
  __int64 v59; // [rsp+78h] [rbp-78h]
  __m128i v60; // [rsp+80h] [rbp-70h] BYREF
  __m128i v61; // [rsp+90h] [rbp-60h]
  __int64 v62; // [rsp+A0h] [rbp-50h]
  __int64 v63; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v64; // [rsp+B8h] [rbp-38h]

  v4 = *(_BYTE *)(a1 + 664) == 0;
  v64 = __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_21;
  v6 = *(_QWORD *)(a1 + 424);
  v55 = 0;
  v56 = 0;
  if ( !v6 )
    goto LABEL_55;
  v7 = *(_DWORD *)(a1 + 416);
  v59 = 0;
  *(__m128i *)v57.m256i_i8 = _mm_loadu_si128((const __m128i *)(a1 + 384));
  v58 = v7;
  *(__m128i *)&v57.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(a1 + 400));
  v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = (unsigned int)sub_1F96C0((__int64 *)a1, (__int64)a2, v8, v9);
  v11 = v10;
  if ( v56.m128i_i64[1] < v10 )
  {
    v55 = qvector_reserve(&v55, v55, v10, 16);
LABEL_5:
    v50 = 0;
    do
    {
      v61.m128i_i64[0] = 0;
      a2 = (__m128i *)&v54;
      v53 = v50;
      v12 = *(_QWORD *)a1;
      v61.m128i_i64[1] = -1;
      v62 = 0;
      v63 = 0;
      v60 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __m128i *, __m256i *, _QWORD))(v12 + 680))(
             a1,
             &v54,
             &v60,
             &v57,
             0) )
      {
        a2 = nullptr;
        if ( (unsigned __int8)bookmarks_t_get(v54, 0, &v53, *(_QWORD *)(a1 + 728)) )
        {
          v13 = v56.m128i_i64[0];
          v14 = v55;
          if ( v56.m128i_i64[1] < (unsigned __int64)(v56.m128i_i64[0] + 1) )
          {
            v55 = qvector_reserve(&v55, v55, v56.m128i_i64[0] + 1, 16);
            v14 = v55;
            v13 = v56.m128i_i64[0];
          }
          a2 = (__m128i *)(16 * v13 + v14);
          a2->m128i_i64[0] = 0;
          a2->m128i_i32[2] = -1;
          ++v56.m128i_i64[0];
          a2->m128i_i64[0] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 40) + 16LL))(*(_QWORD *)(v54 + 40));
          a2->m128i_i32[2] = v50;
        }
      }
      if ( v63 )
        qfree(v63, a2->m128i_i8);
      ++v50;
    }
    while ( v11 != v50 );
    goto LABEL_14;
  }
  if ( (_DWORD)v10 )
    goto LABEL_5;
LABEL_14:
  v15 = v55;
  v16 = *(_QWORD *)(a1 + 640);
  *(_BYTE *)(a1 + 664) = 1;
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 648));
  v18 = _mm_loadu_si128(&v56);
  *(_QWORD *)(a1 + 640) = v15;
  v19 = v59;
  v55 = v16;
  *(__m128i *)(a1 + 648) = v18;
  v56 = v17;
  if ( v19 )
  {
    qfree(v19, a2->m128i_i8);
    v16 = v55;
  }
  if ( v16 )
  {
    v20 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] )
    {
      v21 = 0;
      do
      {
        v22 = v21 + 1;
        qfree(*(_QWORD *)(v16 + 16 * v21), a2->m128i_i8);
        v16 = v55;
        v21 = v22;
      }
      while ( v20 != v22 );
    }
    v56.m128i_i64[0] = 0;
    qfree(v16, a2->m128i_i8);
  }
LABEL_21:
  if ( *(_BYTE *)(a1 + 696) )
    return v64 - __readfsqword(0x28u);
  v23 = *(_QWORD *)(a1 + 648);
  v55 = 0;
  v56 = 0;
  if ( v23 )
  {
    a2 = nullptr;
    v55 = qvector_reserve(&v55, 0, v23, 16);
  }
  v6 = *(_QWORD *)(a1 + 424);
  if ( !v6 )
  {
    sub_1E69C0(0.0, 0, (__int64)a2, v23, a4);
LABEL_55:
    v48 = (struct _Unwind_Exception *)sub_1E69C0(0.0, v6, (__int64)a2, a3, a4);
    sub_1FE3E0(&v55, a2->m128i_i8);
    _Unwind_Resume(v48);
  }
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 384));
  v25 = *(_DWORD *)(a1 + 416);
  v63 = 0;
  v60 = v24;
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 400));
  LODWORD(v62) = v25;
  v61 = v26;
  v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v27 = v63;
  v28 = *(__int64 **)(a1 + 640);
  v49 = &v28[2 * *(_QWORD *)(a1 + 648)];
  if ( v49 != v28 )
  {
    v51 = *(__int64 **)(a1 + 640);
    while ( 1 )
    {
      v29 = *v51;
      if ( v27 )
      {
        qfree(v27, a2->m128i_i8);
        v63 = 0;
      }
      if ( v29 )
        v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      a2 = &v60;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, __int64))(*(_QWORD *)a1 + 688LL))(a1, &v60, 1) )
      {
        v30 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        v31 = v30;
        if ( v30[2] == -1 )
        {
          memset(&v57, 0, 24);
          v53 = 0;
          (*(void (__fastcall **)(_DWORD *, __m256i *, int *, char *, __int64 *, _QWORD, __int64))(*(_QWORD *)v30 + 88LL))(
            v30,
            &v57,
            &v53,
            &v52,
            &v54,
            *(_QWORD *)(a1 + 728),
            0x7FFFFFFF);
          v31[2] = v53;
          v32 = v57.m256i_i64[0];
          if ( v57.m256i_i64[0] )
          {
            v33 = v57.m256i_i64[1];
            if ( v57.m256i_i64[1] )
            {
              v34 = 0;
              do
              {
                v35 = (__int64 *)(v32 + 24 * v34);
                v36 = *v35;
                if ( *v35 )
                {
                  v35[1] = 0;
                  qfree(v36, v57.m256i_i8);
                  v32 = v57.m256i_i64[0];
                }
                ++v34;
              }
              while ( v33 != v34 );
            }
            v57.m256i_i64[1] = 0;
            qfree(v32, v57.m256i_i8);
          }
        }
        v37 = v56.m128i_i64[0];
        v38 = v55;
        if ( v56.m128i_i64[1] < (unsigned __int64)(v56.m128i_i64[0] + 1) )
        {
          v55 = qvector_reserve(&v55, v55, v56.m128i_i64[0] + 1, 16);
          v38 = v55;
          v37 = v56.m128i_i64[0];
        }
        a2 = (__m128i *)(16 * v37 + v38);
        a2->m128i_i64[0] = 0;
        a2->m128i_i32[2] = -1;
        ++v56.m128i_i64[0];
        a2->m128i_i64[0] = (__int64)v31;
        a2->m128i_i32[2] = *((_DWORD *)v51 + 2);
      }
      v51 += 2;
      if ( v49 == v51 )
        break;
      v27 = v63;
    }
  }
  v39 = v55;
  v40 = *(_QWORD *)(a1 + 672);
  *(_BYTE *)(a1 + 696) = 1;
  v41 = _mm_loadu_si128(&v56);
  v42 = _mm_loadu_si128((const __m128i *)(a1 + 680));
  *(_QWORD *)(a1 + 672) = v39;
  *(__m128i *)(a1 + 680) = v41;
  v55 = v40;
  v56 = v42;
  sub_459B70(a1 + 624);
  if ( v63 )
    *(double *)v42.m128i_i64 = qfree(v63, a2->m128i_i8);
  v43 = v55;
  if ( v55 )
  {
    v44 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] )
    {
      v45 = 0;
      do
      {
        v46 = v45++;
        *(double *)v42.m128i_i64 = qfree(*(_QWORD *)(v43 + 16 * v46), a2->m128i_i8, *(double *)v42.m128i_i64);
        v43 = v55;
      }
      while ( v44 != v45 );
    }
    v56.m128i_i64[0] = 0;
    qfree(v43, a2->m128i_i8, *(double *)v42.m128i_i64);
  }
  return v64 - __readfsqword(0x28u);
}
