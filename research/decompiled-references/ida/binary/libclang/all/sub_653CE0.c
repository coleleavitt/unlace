void __fastcall sub_653CE0(
        __int64 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v9; // rdx
  const char *v10; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm4
  __m128 v19; // xmm1
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdi
  int v24; // esi
  __m128i v25; // xmm6
  char *v26; // rax
  _BYTE *v27; // rdi
  char *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  char v36; // al
  int v37; // esi
  __int64 v38; // rdi
  __m128i v39; // xmm5
  __m128i v40; // xmm7
  void *v41[2]; // [rsp+18h] [rbp-2A8h] BYREF
  const char *v42; // [rsp+28h] [rbp-298h]
  __int64 v43; // [rsp+30h] [rbp-290h]
  _BYTE *v44; // [rsp+38h] [rbp-288h]
  _QWORD *v45; // [rsp+40h] [rbp-280h]
  __m128i *v46; // [rsp+48h] [rbp-278h]
  void **v47; // [rsp+50h] [rbp-270h]
  char v48; // [rsp+67h] [rbp-259h] BYREF
  _BYTE v49[32]; // [rsp+68h] [rbp-258h] BYREF
  __m128i v50; // [rsp+88h] [rbp-238h] BYREF
  __int64 v51; // [rsp+98h] [rbp-228h]
  __int64 v52[4]; // [rsp+A8h] [rbp-218h] BYREF
  __int64 v53[4]; // [rsp+C8h] [rbp-1F8h] BYREF
  void *v54[2]; // [rsp+E8h] [rbp-1D8h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-1C8h] BYREF
  __m128i v56; // [rsp+108h] [rbp-1B8h] BYREF
  __int64 v57; // [rsp+118h] [rbp-1A8h]
  void *v58; // [rsp+148h] [rbp-178h] BYREF
  __m128i si128; // [rsp+150h] [rbp-170h]
  _BYTE v60[136]; // [rsp+160h] [rbp-160h] BYREF
  void *ptr[3]; // [rsp+1E8h] [rbp-D8h] BYREF
  _BYTE v62[192]; // [rsp+200h] [rbp-C0h] BYREF

  if ( ((*(_BYTE *)(a2 + 28) + 80) & 0x7Fu) <= 1 )
    return;
  v9 = 0;
  v10 = &byte_3B9466E;
  v12 = a2;
  v13 = *(_QWORD *)(a2 + 40);
  if ( (v13 & 7) == 0 )
  {
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v14;
    if ( v14 )
    {
      v15 = *(unsigned int **)(v14 + 16);
      v9 = *v15;
      v10 = (const char *)(v15 + 4);
    }
  }
  v42 = v10;
  v43 = v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v44 = v60;
  v58 = v60;
  sub_11240B0(a2, &v58);
  sub_CAE550(v49, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
  v16 = sub_6B37C0(*a1);
  if ( v16
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v35 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v35) != 0)
    && (v36 = *(_BYTE *)(v35 + 74), (v36 & 4) != 0)
    && (v36 & 1) != 0
    && (v16 = sub_6B37C0(*a1)) != 0
    || (a2 = v12, (v16 = sub_6F4910(*a1, v12, 0)) != 0) )
  {
    v17 = sub_6BB140(*a1, a2);
    sub_AA92F0(&v56, v16, *(_QWORD *)(*a1 + 2152), v17);
    v18 = _mm_load_si128(&v56);
    v16 = v57;
    memset(ptr, 0, sizeof(ptr));
    v57 = 0;
    *(__m128i *)v41 = v18;
    v56 = 0;
    sub_646A80((__int64 *)ptr);
    sub_646A80(v56.m128i_i64);
  }
  else
  {
    *(_OWORD *)v41 = 0;
  }
  v19 = (__m128)_mm_load_si128((const __m128i *)v41);
  v20 = _mm_movehl_ps(a9, v19).m128_u64[0];
  sub_FD2D70(v52, v12);
  sub_FCD270(v53, v12);
  v21 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
    v21 = *(_QWORD *)v21;
  v22 = *(_BYTE *)(v21 + 8) & 0x7F;
  if ( (unsigned int)(v22 - 57) > 2 )
  {
    if ( (unsigned int)(v22 - 56) > 3 )
      goto LABEL_23;
    v23 = *a1;
    v24 = *(_DWORD *)(v12 + 24);
    v45 = (_QWORD *)a1[1];
    if ( *(_BYTE *)(v21 + 9) >> 5 == 2 )
    {
      LOBYTE(v54[0]) = sub_63DE20(v23, v24);
      sub_766420(ptr, v12);
      v46 = &v56;
      sub_63E5A0((__int64)&v56, (__int64)a1, v12);
      v40 = _mm_load_si128((const __m128i *)v41);
      v51 = v16;
      v50 = v40;
      v26 = (char *)sub_6527C0(
                      v45,
                      (__int64)v58,
                      si128.m128i_i64[0],
                      (__int64)v42,
                      v43,
                      v46->m128i_i64,
                      (__int64)v49,
                      (__int64)ptr,
                      v50.m128i_i64,
                      v52,
                      v53,
                      (char *)v54);
      v27 = ptr[0];
      if ( v26 )
        goto LABEL_13;
    }
    else
    {
      LOBYTE(v54[0]) = sub_63DE20(v23, v24);
      sub_766420(ptr, v12);
      v46 = &v56;
      sub_63E5A0((__int64)&v56, (__int64)a1, v12);
      v25 = _mm_load_si128((const __m128i *)v41);
      v51 = v16;
      v50 = v25;
      v26 = (char *)sub_653250(
                      v45,
                      (__int64)v58,
                      si128.m128i_i64[0],
                      (__int64)v42,
                      v43,
                      v46->m128i_i64,
                      (__int64)v49,
                      (__int64)ptr,
                      v50.m128i_i64,
                      v52,
                      v53,
                      (char *)v54);
      v27 = ptr[0];
      if ( v26 )
      {
LABEL_13:
        if ( v27 != v62 )
        {
          v41[0] = v26;
          free(v27);
          v26 = (char *)v41[0];
        }
        v28 = v26 + 368;
        goto LABEL_16;
      }
    }
    if ( v27 == v62 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v47 = v54;
  sub_643500((__int64 *)v54, v12);
  v37 = *(_DWORD *)(v12 + 24);
  v38 = *a1;
  v45 = (_QWORD *)a1[1];
  v48 = sub_63DE20(v38, v37);
  sub_766420(ptr, v12);
  v46 = &v56;
  sub_63E5A0((__int64)&v56, (__int64)a1, v12);
  v39 = _mm_load_si128((const __m128i *)v41);
  v51 = v16;
  v50 = v39;
  v28 = (char *)sub_651DD0(
                  v45,
                  (__int64)v58,
                  si128.m128i_i64[0],
                  (__int64)v42,
                  v43,
                  v46->m128i_i64,
                  (__int64)v49,
                  (__int64)ptr,
                  v50.m128i_i64,
                  v52,
                  v53,
                  (__int64)v47,
                  &v48);
  if ( v28 )
    v28 += 368;
  if ( ptr[0] != v62 )
  {
    v41[0] = v28;
    free(ptr[0]);
    v28 = (char *)v41[0];
  }
  if ( v54[0] != &v55 )
  {
    v41[0] = v28;
    operator delete(v54[0], v55 + 1);
    v28 = (char *)v41[0];
  }
  if ( !v28 )
    goto LABEL_23;
LABEL_16:
  v29 = *(_QWORD *)(v12 + 48);
  v41[0] = v28;
  v30 = sub_B0D8A0(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL));
  ptr[0] = v62;
  *(__m128i *)&ptr[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  sub_11240B0(v30, ptr);
  v31 = sub_FC8D80(a1[1], ptr[0], ptr[1]);
  v32 = v31;
  if ( !v31 )
    goto LABEL_21;
  v33 = *(_DWORD *)(v31 + 356);
  if ( v33 > 5 )
  {
    if ( v33 - 9 > 3 )
      goto LABEL_21;
  }
  else if ( v33 <= 2 )
  {
    goto LABEL_21;
  }
  if ( *(_BYTE *)(v32 + 392) )
  {
    sub_FC8C80(v41[0], v32 + 368);
    sub_FC9490(a1[1], v32);
  }
LABEL_21:
  v27 = ptr[0];
  if ( ptr[0] != v62 )
LABEL_22:
    free(v27);
LABEL_23:
  v34 = v19.m128_u64[0];
  sub_6441A0(v53);
  sub_6441A0(v52);
  if ( v19.m128_u64[0] != v20 )
  {
    do
    {
      if ( *(_QWORD *)v34 != v34 + 16 )
        operator delete(*(void **)v34, *(_QWORD *)(v34 + 16) + 1LL);
      v34 += 80;
    }
    while ( v20 != v34 );
  }
  if ( v19.m128_u64[0] )
    operator delete((void *)v19.m128_u64[0], v16 - v19.m128_u64[0]);
  if ( v58 != v44 )
    free(v58);
}

