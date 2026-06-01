void __fastcall sub_66B300(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rdx
  const char *v7; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  __m128 v18; // xmm5
  __m128 v19; // xmm1
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  int v22; // esi
  bool v23; // al
  int v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm2
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  void **v34; // rbp
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rbp
  void **v38; // rbx
  void **v39; // rdi
  __int64 i; // rbx
  unsigned int *v41; // rcx
  __int64 v42; // rax
  char v43; // al
  void *v44[2]; // [rsp+0h] [rbp-2B8h] BYREF
  unsigned __int64 *v45; // [rsp+18h] [rbp-2A0h]
  const char *v46; // [rsp+20h] [rbp-298h]
  __int64 v47; // [rsp+28h] [rbp-290h]
  __int64 *v48; // [rsp+30h] [rbp-288h]
  __int64 *v49; // [rsp+38h] [rbp-280h]
  _BYTE *v50; // [rsp+40h] [rbp-278h]
  __int64 *v51; // [rsp+48h] [rbp-270h]
  _BYTE *v52; // [rsp+50h] [rbp-268h]
  __m128i *v53; // [rsp+58h] [rbp-260h]
  bool v54; // [rsp+6Fh] [rbp-249h] BYREF
  _BYTE v55[32]; // [rsp+70h] [rbp-248h] BYREF
  __m128i v56; // [rsp+90h] [rbp-228h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-218h]
  void *v58; // [rsp+B0h] [rbp-208h] BYREF
  void **v59; // [rsp+B8h] [rbp-200h]
  __int64 v60; // [rsp+C0h] [rbp-1F8h]
  void *v61; // [rsp+D0h] [rbp-1E8h] BYREF
  void **v62; // [rsp+D8h] [rbp-1E0h]
  __int64 v63; // [rsp+E0h] [rbp-1D8h]
  _BYTE v64[64]; // [rsp+F0h] [rbp-1C8h] BYREF
  __m128i v65; // [rsp+130h] [rbp-188h] BYREF
  __int128 v66; // [rsp+140h] [rbp-178h]
  __int128 v67; // [rsp+150h] [rbp-168h]
  __int64 v68; // [rsp+160h] [rbp-158h]
  void *ptr[2]; // [rsp+170h] [rbp-148h] BYREF
  __int64 v70; // [rsp+180h] [rbp-138h]
  char v71; // [rsp+188h] [rbp-130h] BYREF
  void *v72; // [rsp+1E0h] [rbp-D8h] BYREF
  __m128i v73; // [rsp+1E8h] [rbp-D0h]
  _BYTE v74[192]; // [rsp+1F8h] [rbp-C0h] BYREF

  v6 = 0;
  v7 = &byte_3B9466E;
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = v11;
    if ( v11 )
    {
      v41 = *(unsigned int **)(v11 + 16);
      v6 = *v41;
      v7 = (const char *)(v41 + 4);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v46 = v7;
  v47 = v6;
  v73 = si128;
  v50 = v74;
  v72 = v74;
  sub_11240B0(a2, &v72);
  v13 = *(unsigned int *)(a2 + 24);
  v14 = *(_QWORD *)(*a1 + 2152LL);
  v52 = v55;
  sub_CAE550(v55, v14, v13, 1);
  v15 = a2;
  v16 = sub_6B37C0(*a1);
  if ( v16
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v42 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v15 = v42) != 0)
    && (v43 = *(_BYTE *)(v42 + 74), (v43 & 4) != 0)
    && (v43 & 1) != 0
    && (v16 = sub_6B37C0(*a1)) != 0
    || (v15 = a2, (v16 = sub_6F4910(*a1, a2, 0)) != 0) )
  {
    v17 = sub_6BB140(*a1, v15);
    v53 = &v65;
    sub_AA92F0(&v65, v16, *(_QWORD *)(*a1 + 2152LL), v17);
    si128.m128i_i64[0] = 0;
    a6 = (__m128)_mm_load_si128(&v65);
    v16 = v66;
    *(_OWORD *)ptr = 0;
    v70 = 0;
    *(_QWORD *)&v66 = 0;
    *(__m128 *)v44 = a6;
    v65 = 0;
    sub_646A80((__int64 *)ptr);
    sub_646A80(v65.m128i_i64);
  }
  else
  {
    v53 = &v65;
    *(_OWORD *)v44 = 0;
  }
  v19 = (__m128)_mm_load_si128((const __m128i *)v44);
  v48 = (__int64 *)&v58;
  v20 = _mm_movehl_ps(v18, v19).m128_u64[0];
  sub_FD74A0(&v58, a2);
  v49 = (__int64 *)&v61;
  sub_FCD270(&v61, a2);
  v21 = *(_QWORD *)(a2 + 88);
  v51 = (__int64 *)v64;
  sub_63E460((__int64)v64, (__int64)a1, v21);
  v22 = *(_DWORD *)(a2 + 24);
  v45 = (unsigned __int64 *)a1[1];
  v23 = 0;
  if ( v22 )
  {
    v24 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v23 = v24 != 3 && v24 != 0;
  }
  v54 = v23;
  sub_766420(ptr, a2);
  v25 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v25 = (_QWORD *)*v25;
  if ( v25 && (v26 = sub_79A2E0(v25)) != 0 && (*(_BYTE *)(v26 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)v53, (__int64)a1, v26);
  }
  else
  {
    v68 = 0;
    si128.m128i_i64[0] = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
  }
  v27 = _mm_load_si128((const __m128i *)v44);
  v57 = v16;
  v56 = v27;
  v44[0] = (void *)sub_650A60(
                     v45,
                     (__int64)v72,
                     v73.m128i_i64[0],
                     (__int64)v46,
                     v47,
                     v53->m128i_i64,
                     (__int64)v52,
                     (__int64)ptr,
                     v56.m128i_i64,
                     v48,
                     v49,
                     v51,
                     (char *)&v54);
  if ( ptr[0] != &v71 )
    free(ptr[0]);
  v28 = sub_79C190(a2 + 48);
  if ( v28 )
  {
    while ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x10 )
    {
      v29 = *(_QWORD *)(v28 + 8);
      v28 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v29 <= 7 )
      {
        v28 = 0;
        break;
      }
    }
  }
  sub_6696E0(a1, v28, *(double *)si128.m128i_i64, *(double *)v19.m128_u64, v27, a6);
  v30 = sub_79C190(a2 + 48);
  if ( v30 )
  {
    while ( (*(_BYTE *)(v30 + 28) & 0x7F) != 0x49 )
    {
      v31 = *(_QWORD *)(v30 + 8);
      v30 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v31 <= 7 )
      {
        v30 = 0;
        break;
      }
    }
  }
  sub_667A20(a1, v30);
  v32 = sub_79C190(a2 + 48);
  if ( v32 )
  {
    while ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0x30 )
    {
      v33 = *(_QWORD *)(v32 + 8);
      v32 = v33 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v33 <= 7 )
      {
        v32 = 0;
        break;
      }
    }
  }
  sub_64D440(a1, v32, 0);
  sub_63E860(
    (__int64)a1,
    (__int64)v44[0],
    *(__int64 **)(a2 + 104),
    (__int64 *)(*(_QWORD *)(a2 + 104) + 8LL * *(unsigned int *)(a2 + 112)));
  v34 = v62;
  v35 = (void **)v61;
  if ( v62 != v61 )
  {
    do
    {
      v36 = (void **)v35[5];
      if ( v36 != v35 + 7 )
        operator delete(v36, (unsigned __int64)v35[7] + 1);
      if ( *v35 != v35 + 2 )
        operator delete(*v35, (unsigned __int64)v35[2] + 1);
      v35 += 10;
    }
    while ( v34 != v35 );
    v35 = (void **)v61;
  }
  if ( v35 )
    operator delete(v35, v63 - (_QWORD)v35);
  v37 = v59;
  v38 = (void **)v58;
  if ( v59 != v58 )
  {
    do
    {
      v39 = (void **)v38[5];
      if ( v39 != v38 + 7 )
        operator delete(v39, (unsigned __int64)v38[7] + 1);
      if ( *v38 != v38 + 2 )
        operator delete(*v38, (unsigned __int64)v38[2] + 1);
      v38 += 10;
    }
    while ( v37 != v38 );
    v38 = (void **)v58;
  }
  if ( v38 )
    operator delete(v38, v60 - (_QWORD)v38);
  for ( i = v19.m128_u64[0]; i != v20; i += 80 )
  {
    if ( *(_QWORD *)i != i + 16 )
      operator delete(*(void **)i, *(_QWORD *)(i + 16) + 1LL);
  }
  if ( v19.m128_u64[0] )
    operator delete((void *)v19.m128_u64[0], v16 - v19.m128_u64[0]);
  if ( v72 != v50 )
    free(v72);
}

