unsigned __int64 __fastcall sub_A520(
        unsigned __int64 *a1,
        __int64 a2,
        int a3,
        const char *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v11; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r9d
  size_t v23; // rax
  __int64 v24; // r13
  size_t v25; // r12
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __m128 v33; // xmm0
  void *v34; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rbx
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  unsigned __int64 v53; // r12
  __int64 v54; // rdi
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __int64 v57; // rdi
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r8
  int v60; // r9d
  int v61; // [rsp+8h] [rbp-B0h]
  int v62; // [rsp+8h] [rbp-B0h]
  int v63; // [rsp+10h] [rbp-A8h]
  void *v64; // [rsp+10h] [rbp-A8h]
  int v65; // [rsp+1Ch] [rbp-9Ch]
  __int64 v66; // [rsp+20h] [rbp-98h]
  __int64 v67; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+38h] [rbp-80h]
  int v69; // [rsp+40h] [rbp-78h] BYREF
  int v70; // [rsp+44h] [rbp-74h]
  __int64 v71; // [rsp+48h] [rbp-70h]
  void *v72; // [rsp+50h] [rbp-68h] BYREF
  __m128i v73; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v74; // [rsp+68h] [rbp-50h]
  unsigned __int64 v75; // [rsp+78h] [rbp-40h]

  v11 = a1[5];
  v75 = __readfsqword(0x28u);
  if ( a6 == -1 )
  {
    v59 = a1[9];
    v69 = a3;
    v15 = (__int64)(a1 + 4);
    v70 = v59;
    v60 = v59;
    if ( v11 )
    {
      v19 = a1 + 4;
      do
      {
LABEL_11:
        while ( 1 )
        {
          v20 = *(_QWORD *)(v11 + 16);
          v21 = *(_QWORD *)(v11 + 24);
          if ( *(_DWORD *)(v11 + 32) < a3 )
            break;
          v15 = v11;
          v11 = *(_QWORD *)(v11 + 16);
          if ( !v20 )
            goto LABEL_13;
        }
        v11 = *(_QWORD *)(v11 + 24);
      }
      while ( v21 );
LABEL_13:
      if ( (unsigned __int64 *)v15 != v19 && *(_DWORD *)(v15 + 32) <= a3 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
  v13 = a1 + 4;
  v14 = v11;
  v15 = (__int64)(a1 + 4);
  v16 = a1 + 4;
  if ( !v11 )
  {
    v59 = a1[9];
    v69 = a3;
    v70 = v59;
    v60 = v59;
LABEL_15:
    v63 = v60;
    v61 = v59;
    sub_A3B0(a1 + 3, v15, &v69);
    v60 = v63;
    LODWORD(v59) = v61;
LABEL_16:
    v62 = v60;
    set_import_ordinal(a2, (unsigned int)v59, a3);
    a1[9] += 4LL;
    v22 = v62;
    goto LABEL_18;
  }
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v14 + 16);
      v18 = *(_QWORD *)(v14 + 24);
      if ( *(_DWORD *)(v14 + 32) < a3 )
        break;
      v16 = (unsigned __int64 *)v14;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v17 )
        goto LABEL_7;
    }
    v14 = *(_QWORD *)(v14 + 24);
  }
  while ( v18 );
LABEL_7:
  if ( v13 == v16 || *((_DWORD *)v16 + 8) > a3 )
  {
    v15 = (__int64)v13;
    v59 = a1[9];
    v69 = a3;
    v19 = (unsigned __int64 *)v15;
    v70 = v59;
    v60 = v59;
    goto LABEL_11;
  }
  v22 = *((_DWORD *)v16 + 9);
LABEL_18:
  v69 = v22;
  v71 = a6;
  v72 = nullptr;
  v73 = 0;
  if ( a4 )
  {
    v23 = strlen(a4);
    v24 = v23 + 1;
    v25 = v23;
    v72 = (void *)qvector_reserve(&v72, 0, v23 + 1, 1);
    v73.m128i_i64[0] = v24;
    memmove(v72, a4, v25);
    *((_BYTE *)v72 + v25) = 0;
  }
  v26 = a1[1];
  v27 = *a1;
  v74 = __PAIR64__(a5, a3);
  v28 = a1[2];
  v29 = v26 + 1;
  if ( (unsigned __int64)&v69 < v27 || (unsigned __int64)&v69 >= v27 + 48 * v28 )
  {
    if ( v28 < v29 )
    {
      v38 = qvector_reserve(a1, 0, v26 + 1, 48);
      v39 = a1[1];
      v40 = a1[2];
      v27 = v38;
      a1[2] = v28;
      v41 = *a1;
      v42 = v39 - 1;
      if ( v42 >= 0 )
      {
        v43 = v38;
        do
        {
          *(_DWORD *)v43 = *(_DWORD *)v41;
          *(_QWORD *)(v43 + 8) = *(_QWORD *)(v41 + 8);
          v44 = *(_QWORD *)(v41 + 16);
          v45 = _mm_loadu_si128((const __m128i *)(v41 + 24));
          *(_QWORD *)(v41 + 16) = 0;
          *(_QWORD *)(v43 + 16) = v44;
          *(__m128i *)(v43 + 24) = v45;
          v46 = *(_QWORD *)(v41 + 40);
          *(_QWORD *)(v41 + 32) = 0;
          *(_QWORD *)(v43 + 40) = v46;
          v47 = *(_QWORD *)(v41 + 16);
          if ( v47 )
          {
            *(_QWORD *)(v41 + 24) = 0;
            qfree(v47);
          }
          v41 += 48LL;
          v43 += 48;
          v48 = v42-- == 0;
        }
        while ( !v48 );
        v41 = *a1;
      }
      qfree(v41);
      *a1 = v27;
      v26 = a1[1];
      a1[2] = v40;
    }
    v36 = v27 + 48 * v26;
    *(_DWORD *)v36 = v69;
    *(_QWORD *)(v36 + 8) = v71;
    v37 = _mm_loadu_si128(&v73);
    *(_QWORD *)(v36 + 16) = v72;
    *(__m128i *)(v36 + 24) = v37;
    *(_QWORD *)(v36 + 40) = v74;
    ++a1[1];
  }
  else
  {
    v65 = v69;
    v66 = v71;
    v30 = v72;
    v72 = nullptr;
    v64 = v30;
    v31 = v73.m128i_i64[1];
    v73 = 0;
    v67 = v31;
    if ( v28 < v29 )
    {
      v27 = qvector_reserve(a1, 0, v26 + 1, 48);
      v49 = a1[1];
      v50 = a1[2];
      a1[2] = v28;
      v51 = *a1;
      v68 = v50;
      v52 = v49 - 1;
      if ( v52 >= 0 )
      {
        v53 = v27;
        do
        {
          *(_DWORD *)v53 = *(_DWORD *)v51;
          *(_QWORD *)(v53 + 8) = *(_QWORD *)(v51 + 8);
          v54 = *(_QWORD *)(v51 + 16);
          v55 = _mm_loadu_si128((const __m128i *)(v51 + 24));
          *(_QWORD *)(v51 + 16) = 0;
          *(_QWORD *)(v53 + 16) = v54;
          *(__m128i *)(v53 + 24) = v55;
          v56 = *(_QWORD *)(v51 + 40);
          *(_QWORD *)(v51 + 32) = 0;
          *(_QWORD *)(v53 + 40) = v56;
          v57 = *(_QWORD *)(v51 + 16);
          if ( v57 )
          {
            *(_QWORD *)(v51 + 24) = 0;
            qfree(v57);
          }
          v51 += 48LL;
          v53 += 48LL;
          v48 = v52-- == 0;
        }
        while ( !v48 );
        v51 = *a1;
      }
      qfree(v51);
      v58 = v68;
      v26 = a1[1];
      *a1 = v27;
      a1[2] = v58;
    }
    v32 = v27 + 48 * v26;
    v33 = _mm_loadh_ps((const double *)&v67);
    *(_DWORD *)v32 = v65;
    *(_DWORD *)(v32 + 40) = a3;
    *(_QWORD *)(v32 + 8) = v66;
    *(_DWORD *)(v32 + 44) = a5;
    *(_QWORD *)(v32 + 16) = v64;
    *(__m128 *)(v32 + 24) = v33;
    v34 = v72;
    ++a1[1];
    if ( v34 )
    {
      v73.m128i_i64[0] = 0;
      qfree(v34);
    }
  }
  return v75 - __readfsqword(0x28u);
}
