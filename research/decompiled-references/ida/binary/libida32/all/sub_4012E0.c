__int64 __fastcall sub_4012E0(__m128i *a1, _DWORD *a2, size_t a3, size_t a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r15
  _DWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbx
  void **v13; // r13
  void *v14; // rdi
  void *v15; // rdi
  int *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // r11
  int *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // r14
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void **v31; // rbp
  __int64 v32; // r12
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // rdx
  _DWORD *v36; // rdi
  __m128i si128; // xmm3
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __m128i v42; // xmm3
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm3
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rbp
  void *v49; // rdi
  void *v50; // rdi
  int v51; // [rsp+0h] [rbp-D8h]
  int v52[2]; // [rsp+8h] [rbp-D0h]
  _DWORD *v53; // [rsp+10h] [rbp-C8h]
  void **v54; // [rsp+10h] [rbp-C8h]
  int v55; // [rsp+18h] [rbp-C0h]
  int *v56; // [rsp+18h] [rbp-C0h]
  int v57[4]; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v58; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v59; // [rsp+40h] [rbp-98h] BYREF
  __int64 v60; // [rsp+50h] [rbp-88h]
  int v61; // [rsp+58h] [rbp-80h]
  __m128i v62; // [rsp+60h] [rbp-78h]
  __m128i v63; // [rsp+70h] [rbp-68h]
  __m128i v64; // [rsp+80h] [rbp-58h]
  __int64 v65; // [rsp+90h] [rbp-48h]
  int v66[2]; // [rsp+98h] [rbp-40h]
  int v67; // [rsp+A0h] [rbp-38h]
  int v68; // [rsp+A8h] [rbp-30h]
  int v69; // [rsp+B0h] [rbp-28h]
  int v70; // [rsp+B8h] [rbp-20h]
  int v71; // [rsp+C0h] [rbp-18h]
  int v72; // [rsp+C8h] [rbp-10h]
  __int64 v73; // [rsp+D0h] [rbp-8h]

  v52[0] = a3;
  *(_QWORD *)v66 = __readfsqword(0x28u);
  *a2 = 0;
  if ( !a4 )
  {
    set_error_data(0, 0, a3, 0, a5, a6);
    return 4294967289LL;
  }
  v6 = a1->m128i_u64[1];
  if ( a4 <= v6 )
    v6 = a4;
  v8 = v6;
  if ( a3 >= v6 )
  {
    set_error_data(0, a3, a3, a4, a5, a6);
    return 4294967289LL;
  }
  v9 = a2;
  if ( (a1[3].m128i_i8[4] & 0x10) != 0 )
  {
    memset(v57, 0, sizeof(v57));
    v56 = v57;
    sub_4010A0((__int64)v57, a1, a3, a4, a5, a6);
    v20 = *(_QWORD *)&v57[2];
    LODWORD(v54) = v57[0];
    v21 = 56 * v8 - 56;
    while ( 1 )
    {
      v22 = a1[2].m128i_i64[0];
      --v8;
      if ( v22 )
      {
        v23 = (int *)a1[1].m128i_i64[1];
        v24 = 0;
        v25 = 0;
        v17 = v23;
        while ( 1 )
        {
          v18 = *v17;
          v26 = v25;
          v25 += v18;
          if ( v8 >= v26 && v8 < v25 )
            break;
          ++v24;
          ++v17;
          if ( v22 == v24 )
            goto LABEL_20;
        }
        if ( v8 == v26 && (_DWORD)v18 != 1 )
        {
          si128 = _mm_load_si128((const __m128i *)v57);
          v38 = _mm_loadu_si128(a1);
          v39 = a1[3].m128i_i64[0];
          v40 = v60;
          v41 = si128.m128i_i64[0];
          *a1 = si128;
          v42 = _mm_load_si128(&v58);
          v43 = _mm_loadu_si128(a1 + 1);
          v65 = v39;
          v44 = _mm_loadu_si128(a1 + 2);
          a1[1] = v42;
          v45 = _mm_load_si128(&v59);
          v60 = v39;
          a1[3].m128i_i64[0] = v40;
          a1[2] = v45;
          v46 = *(_QWORD *)(v41 + 56 * v8 + 48);
          *(__m128i *)v57 = v38;
          v62 = v38;
          v63 = v43;
          v64 = v44;
          v58 = v43;
          v59 = v44;
          set_error_data(0, v46, v41, v40, v18, v19);
          if ( v23 )
            qfree(v23);
          if ( v38.m128i_i64[0] )
          {
            v47 = v38.m128i_i64[0];
            v48 = 0;
            if ( v38.m128i_i64[1] )
            {
              do
              {
                v49 = *(void **)(v47 + 24);
                if ( v49 )
                {
                  *(_QWORD *)(v47 + 32) = 0;
                  qfree(v49);
                }
                v50 = *(void **)v47;
                if ( *(_QWORD *)v47 )
                {
                  *(_QWORD *)(v47 + 8) = 0;
                  qfree(v50);
                }
                ++v48;
                v47 += 56;
              }
              while ( v48 != v38.m128i_i64[1] );
            }
            qfree((void *)v38.m128i_i64[0]);
          }
          return 4294967276LL;
        }
        v35 = 4 * v24;
        *v17 = v18 - 1;
        v36 = (_DWORD *)(v35 + a1[1].m128i_i64[1]);
        if ( !*v36 )
          memmove(v36, v36 + 1, 4 * a1[2].m128i_i64[0]-- - 4 - v35);
      }
LABEL_20:
      sub_51F050(
        (int)a2,
        (int)a1,
        v8,
        (int)v17,
        v18,
        v19,
        v51,
        v52[0],
        (int)v54,
        (int)v56,
        v57[0],
        v57[2],
        v58.m128i_i32[0],
        v58.m128i_i32[2],
        v59.m128i_i32[0],
        (void *)v59.m128i_i64[1],
        v60,
        v61,
        v62.m128i_i32[0],
        v62.m128i_i32[2],
        v63.m128i_i32[0],
        v63.m128i_i32[2],
        v64.m128i_i32[0],
        v64.m128i_i32[2],
        v65,
        v66[0],
        v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v27 = v21 + a1->m128i_i64[0];
      v28 = *(void **)(v27 + 24);
      if ( v28 )
      {
        *(_QWORD *)(v27 + 32) = 0;
        qfree(v28);
      }
      v29 = *(void **)v27;
      if ( *(_QWORD *)v27 )
      {
        *(_QWORD *)(v27 + 8) = 0;
        qfree(v29);
      }
      v21 -= 56;
      memmove((void *)v27, (const void *)(v27 + 56), a1->m128i_i64[0] + 56 * a1->m128i_i64[1] - v27 - 56);
      --a1->m128i_i64[1];
      if ( *(_QWORD *)v52 >= v8 )
      {
        v30 = (void *)v58.m128i_i64[1];
        a1[3].m128i_i8[4] |= 0x10u;
        if ( v30 )
          qfree(v30);
        v31 = v54;
        if ( v54 )
        {
          v32 = 0;
          if ( v20 )
          {
            do
            {
              v33 = v31[3];
              if ( v33 )
              {
                v31[4] = nullptr;
                qfree(v33);
              }
              v34 = *v31;
              if ( *v31 )
              {
                v31[1] = nullptr;
                qfree(v34);
              }
              ++v32;
              v31 += 7;
            }
            while ( v20 != v32 );
          }
          qfree(v54);
        }
        goto LABEL_13;
      }
    }
  }
  LODWORD(v53) = (_DWORD)a2;
  v10 = 56 * v6 - 56;
  do
  {
    --v8;
    v11 = v10 + 56;
    sub_51F050(
      (int)v53,
      (int)a1,
      v8,
      a4,
      a5,
      a6,
      v51,
      v52[0],
      (int)v53,
      v55,
      v57[0],
      v57[2],
      v58.m128i_i32[0],
      v58.m128i_i32[2],
      v59.m128i_i32[0],
      (void *)v59.m128i_i64[1],
      v60,
      v61,
      v62.m128i_i32[0],
      v62.m128i_i32[2],
      v63.m128i_i32[0],
      v63.m128i_i32[2],
      v64.m128i_i32[0],
      v64.m128i_i32[2],
      v65,
      v66[0],
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v12 = a1->m128i_i64[0];
    v13 = (void **)(a1->m128i_i64[0] + v10);
    v14 = v13[3];
    if ( v14 )
    {
      v13[4] = nullptr;
      qfree(v14);
    }
    v15 = *v13;
    if ( *v13 )
    {
      v13[1] = nullptr;
      qfree(v15);
    }
    v10 -= 56;
    memmove(v13, (const void *)(v12 + v11), a1->m128i_i64[0] + 56 * a1->m128i_i64[1] - (_QWORD)v13 - 56);
    --a1->m128i_i64[1];
  }
  while ( v8 != *(_QWORD *)v52 );
  v9 = v53;
LABEL_13:
  *v9 = 7;
  return 0;
}

