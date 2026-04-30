void __fastcall sub_404840(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // r14
  __int16 v12; // r13
  __int32 v13; // r15d
  bool v14; // cl
  __int64 v15; // rax
  bool v16; // cl
  void **v17; // r12
  __int64 v18; // rsi
  void **v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int32 v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __m128i *v30; // rax
  __int64 v31; // rsi
  __m128i v32; // xmm1
  __m128i *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r8
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i *v38; // rbp
  __m128i v39; // xmm1
  __int64 v40; // rdx
  volatile signed __int32 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int32 v51; // eax
  __m128i v52; // [rsp+0h] [rbp-98h] BYREF
  bool v53; // [rsp+1Fh] [rbp-79h]
  void **v54; // [rsp+20h] [rbp-78h] BYREF
  void **v55; // [rsp+28h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v57; // [rsp+40h] [rbp-58h]
  __int16 v58; // [rsp+48h] [rbp-50h]
  __int32 v59; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v60; // [rsp+58h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v9 = a1->m128i_i64[0];
  if ( a1->m128i_i64[0] && *(int *)v9 <= 1 )
  {
    if ( a1[1].m128i_i64[0] == a2 )
    {
      v20 = a1->m128i_i64[1];
      v21 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( a2 != *(_QWORD *)(v9 + 8) - ((__int64)(v20 - v21) >> 5) )
      {
        v47 = a3->m128i_i64[0];
        a3->m128i_i64[0] = 0;
        v48 = v20 + 32 * a2;
        *(_QWORD *)v48 = v47;
        v49 = a3->m128i_i64[1];
        a3->m128i_i64[1] = 0;
        *(_QWORD *)(v48 + 8) = v49;
        v50 = a3[1].m128i_i64[0];
        a3[1].m128i_i64[0] = 0;
        *(_QWORD *)(v48 + 16) = v50;
        LOWORD(v50) = a3[1].m128i_i16[4];
        v51 = a3[1].m128i_i32[3];
        *(_WORD *)(v48 + 24) = v50;
        *(_DWORD *)(v48 + 28) = v51;
        v27 = a1[1].m128i_i64[0] + 1;
        goto LABEL_13;
      }
      if ( a2 )
        goto LABEL_3;
    }
    else
    {
      if ( a2 )
        goto LABEL_3;
      v20 = a1->m128i_i64[1];
      v21 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    }
    if ( v21 == v20 )
      goto LABEL_3;
    v22 = a3->m128i_i64[0];
    a3->m128i_i64[0] = 0;
    *(_QWORD *)(v20 - 32) = v22;
    v23 = a3->m128i_i64[1];
    a3->m128i_i64[1] = 0;
    *(_QWORD *)(v20 - 24) = v23;
    v24 = a3[1].m128i_i64[0];
    a3[1].m128i_i64[0] = 0;
    *(_QWORD *)(v20 - 16) = v24;
    LOWORD(v24) = a3[1].m128i_i16[4];
    v25 = a3[1].m128i_i32[3];
    *(_WORD *)(v20 - 8) = v24;
    *(_DWORD *)(v20 - 4) = v25;
    v26 = a1[1].m128i_i64[0];
    a1->m128i_i64[1] -= 32;
    v27 = v26 + 1;
LABEL_13:
    a1[1].m128i_i64[0] = v27;
    return;
  }
LABEL_3:
  si128 = _mm_loadu_si128(a3);
  v11 = a3[1].m128i_i64[0];
  a3[1].m128i_i64[0] = 0;
  *a3 = 0;
  v12 = a3[1].m128i_i16[4];
  v13 = a3[1].m128i_i32[3];
  v14 = a1[1].m128i_i64[0] != 0;
  v57 = v11;
  v58 = v12;
  v15 = a1->m128i_i64[0];
  v59 = v13;
  *(__m128i *)ptr = si128;
  v16 = a2 == 0 && v14;
  if ( v16 )
  {
    if ( !v15 || *(int *)v15 > 1 )
      goto LABEL_37;
    v17 = (void **)a1->m128i_i64[1];
    v45 = (v15 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (__int64)((__int64)v17 - v45) > 0 )
      goto LABEL_38;
    a5 = *(_QWORD *)(v15 + 8);
    v18 = a1[1].m128i_i64[0];
    v42 = (__int64)(a1->m128i_i64[1] - v45) >> 5;
    if ( a5 - v18 - v42 <= 0 || a5 <= 3 * v18 )
    {
LABEL_37:
      v52 = si128;
      sub_3FAE80(a1, 1, 1, 0, a5, a6);
      v17 = (void **)a1->m128i_i64[1];
      si128 = _mm_load_si128(&v52);
      goto LABEL_38;
    }
    v46 = (a5 - v18 - 1) / 2;
    if ( v46 < 0 )
      v46 = 0;
    v19 = (void **)a1->m128i_i64[1];
    v43 = v46 + 1;
LABEL_27:
    v44 = v43 - v42;
    v17 = &v19[4 * v44];
    if ( v18 && v19 != v17 && v19 && v17 )
    {
      v53 = v16;
      v52 = si128;
      if ( v17 >= v19 )
      {
        v54 = &v17[4 * v18];
        v55 = &v19[4 * v18];
        sub_4045E0(&v55, v18, &v54);
        v16 = v53;
        si128 = _mm_load_si128(&v52);
      }
      else
      {
        sub_4043E0(v19, v18, &v19[4 * v44]);
        si128 = _mm_load_si128(&v52);
        v16 = v53;
      }
    }
    a1->m128i_i64[1] = (__int64)v17;
    if ( !v16 )
      goto LABEL_7;
LABEL_38:
    *(v17 - 2) = (void *)v11;
    *((_WORD *)v17 - 4) = v12;
    *((_DWORD *)v17 - 1) = v13;
    *((__m128i *)v17 - 2) = si128;
    a1->m128i_i64[1] -= 32;
    ++a1[1].m128i_i64[0];
    return;
  }
  if ( !v15 )
  {
    v52 = si128;
    sub_3FAE80(a1, 0, 1, 0, a5, a6);
    v19 = (void **)a1->m128i_i64[1];
    v18 = a1[1].m128i_i64[0];
    si128 = _mm_load_si128(&v52);
    goto LABEL_16;
  }
  if ( *(int *)v15 <= 1 )
  {
    v19 = (void **)a1->m128i_i64[1];
    a5 = *(_QWORD *)(v15 + 8);
    v18 = a1[1].m128i_i64[0];
    a6 = a1->m128i_i64[1] - ((v15 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    v42 = a6 >> 5;
    if ( a5 - v18 - (a6 >> 5) > 0 )
      goto LABEL_16;
    if ( a6 > 0 )
    {
      a5 *= 2;
      if ( 3 * v18 < a5 )
      {
        v43 = 0;
        goto LABEL_27;
      }
    }
  }
  sub_3FAE80(a1, 0, 1, 0, a5, a6);
  v17 = (void **)a1->m128i_i64[1];
LABEL_7:
  v18 = a1[1].m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)ptr);
  v19 = v17;
  v11 = v57;
  v12 = v58;
  v13 = v59;
LABEL_16:
  v28 = v18 + 1;
  v29 = a2 + 1 - v18;
  v30 = (__m128i *)&v19[4 * v18];
  if ( v18 - a2 <= 0 && v29 )
  {
    v30[1].m128i_i64[0] = v11;
    v30[1].m128i_i16[4] = v12;
    v30[1].m128i_i32[3] = v13;
    *v30 = si128;
    a1->m128i_i64[1] = (__int64)v19;
    a1[1].m128i_i64[0] = v28;
  }
  else
  {
    v31 = v30[-1].m128i_i64[0];
    v32 = _mm_loadu_si128(v30 - 2);
    v30[-1].m128i_i64[0] = 0;
    v30[-2] = 0;
    v30[1].m128i_i64[0] = v31;
    LOWORD(v31) = v30[-1].m128i_i16[4];
    *v30 = v32;
    v30[1].m128i_i16[4] = v31;
    v30[1].m128i_i32[3] = v30[-1].m128i_i32[3];
    if ( v29 )
    {
      v33 = &v30[2 * v29];
      do
      {
        v34 = v30[-1].m128i_i64[0];
        v35 = v30[-3].m128i_i64[0];
        v30 -= 2;
        v36 = _mm_loadu_si128(v30);
        v37 = _mm_loadu_si128(v30 - 2);
        v30[-1].m128i_i64[0] = v34;
        LOWORD(v34) = v30[-1].m128i_i16[4];
        *v30 = v37;
        v30[1].m128i_i16[4] = v34;
        LODWORD(v34) = v30[-1].m128i_i32[3];
        v30[-2] = v36;
        v30[1].m128i_i64[0] = v35;
        v30[1].m128i_i32[3] = v34;
      }
      while ( v33 != v30 );
    }
    v38 = (__m128i *)&v19[4 * a2];
    v39 = _mm_loadu_si128(v38);
    v40 = v38[1].m128i_i64[0];
    v38[1].m128i_i16[4] = v12;
    v41 = (volatile signed __int32 *)v38->m128i_i64[0];
    v38[1].m128i_i64[0] = v11;
    v38[1].m128i_i32[3] = v13;
    *v38 = si128;
    v57 = v40;
    a1->m128i_i64[1] = (__int64)v19;
    a1[1].m128i_i64[0] = v28;
    *(__m128i *)ptr = v39;
    if ( v41 )
    {
      if ( !_InterlockedSub(v41, 1u) )
        free(ptr[0]);
    }
  }
}
