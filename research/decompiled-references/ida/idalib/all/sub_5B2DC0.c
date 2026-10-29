unsigned __int64 __fastcall sub_5B2DC0(_QWORD *a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rcx
  __int64 v3; // rdx
  void **v4; // rax
  unsigned __int64 *v5; // r12
  int encoding_qty; // eax
  int v7; // r13d
  int v8; // edx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rbx
  const char *encoding_name; // rax
  const char *v20; // r15
  size_t v21; // rax
  size_t v22; // r10
  void *v23; // rdi
  size_t v24; // rdx
  __int64 v25; // rax
  unsigned __int64 *v26; // rbp
  unsigned __int64 v27; // r13
  char *v28; // rdx
  __int64 i; // rbx
  char *v30; // rax
  void *v31; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  char *v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rbp
  __int64 v45; // rax
  void *v46; // rdi
  bool v47; // cf
  __int64 v48; // rsi
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rax
  char *v51; // rbx
  __int64 v52; // r15
  unsigned __int64 *v53; // rax
  __int64 v54; // rbp
  __int64 v55; // r12
  void **v56; // r15
  __int64 v57; // rdx
  void *v58; // rdi
  __int64 v59; // [rsp+0h] [rbp-140h]
  size_t v61; // [rsp+10h] [rbp-130h]
  size_t v62; // [rsp+10h] [rbp-130h]
  unsigned __int64 v63; // [rsp+10h] [rbp-130h]
  unsigned __int64 v64; // [rsp+10h] [rbp-130h]
  size_t v65; // [rsp+20h] [rbp-120h]
  unsigned __int64 v66; // [rsp+20h] [rbp-120h]
  __int64 v67; // [rsp+38h] [rbp-108h] BYREF
  __int128 v68; // [rsp+40h] [rbp-100h]
  __int64 v69; // [rsp+50h] [rbp-F0h]
  __int64 v70; // [rsp+58h] [rbp-E8h]
  __m128i v71; // [rsp+68h] [rbp-D8h] BYREF
  __m128i v72; // [rsp+78h] [rbp-C8h] BYREF
  _QWORD v73[2]; // [rsp+88h] [rbp-B8h] BYREF
  _BYTE v74[48]; // [rsp+98h] [rbp-A8h] BYREF
  char v75; // [rsp+C8h] [rbp-78h] BYREF
  void *ptr; // [rsp+E0h] [rbp-60h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-58h]
  __int64 v78; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v79; // [rsp+100h] [rbp-40h]

  v1.m128i_i64[0] = 0;
  v79 = __readfsqword(0x28u);
  v2 = a1[22];
  v3 = a1[1];
  v4 = (void **)v74;
  v73[0] = v3;
  v5 = (unsigned __int64 *)v74;
  v73[1] = v2;
  do
  {
    *v4 = nullptr;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != &ptr );
  ptr = nullptr;
  v78 = 0;
  v77 = 0;
  if ( v2 )
  {
    v59 = 0;
    while ( 1 )
    {
      switch_dbctx(*(int *)(v3 + 4 * v59 + 16));
      encoding_qty = get_encoding_qty(*(double *)v1.m128i_i64);
      v7 = encoding_qty;
      if ( encoding_qty > 1 )
        break;
LABEL_25:
      if ( (unsigned __int64)++v59 >= a1[22] )
        goto LABEL_27;
      v5 += 3;
      v3 = a1[1];
    }
    v8 = encoding_qty - 1;
    v9 = v5[1];
    v10 = *v5;
    v11 = encoding_qty - 1;
    if ( v11 == v9 )
    {
LABEL_17:
      v16 = 0;
      v17 = 1;
      while ( 1 )
      {
        v18 = v16 + v10;
        *(_DWORD *)(v18 + 24) = v17;
        encoding_name = (const char *)get_encoding_name(v17);
        v20 = encoding_name;
        if ( encoding_name && (v21 = strlen(encoding_name), (v22 = v21) != 0) )
        {
          v23 = *(void **)v18;
          v24 = v21 + 1;
          if ( *(_QWORD *)(v18 + 16) < v21 + 1 )
          {
            v65 = v21;
            v62 = v21 + 1;
            v25 = qvector_reserve(v18, *(_QWORD *)v18, v24, 1);
            v22 = v65;
            v24 = v62;
            *(_QWORD *)v18 = v25;
            v23 = (void *)v25;
          }
          *(_QWORD *)(v18 + 8) = v24;
          ++v17;
          v61 = v22;
          v16 += 40;
          memmove(v23, v20, v22);
          *(_BYTE *)(*(_QWORD *)v18 + v61) = 0;
          if ( v7 == v17 )
            goto LABEL_25;
        }
        else
        {
          ++v17;
          *(_QWORD *)(v18 + 8) = 0;
          v16 += 40;
          if ( v7 == v17 )
            goto LABEL_25;
        }
        v10 = *v5;
      }
    }
    v67 = 0;
    v69 = 0;
    v70 = -1;
    v68 = 0;
    if ( v8 < v9 )
    {
      v36 = v8;
      do
      {
        v37 = v10 + 40 * v36;
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *(_QWORD *)(v37 + 8) = 0;
          qfree(v38);
          v10 = *v5;
        }
        ++v36;
      }
      while ( v36 < v9 );
      goto LABEL_16;
    }
    v12 = v5[2];
    if ( (unsigned __int64)&v67 < v10 || (unsigned __int64)&v67 >= v10 + 40 * v12 )
    {
      if ( v12 < v8 )
      {
        v39 = qvector_reserve(v5, 0, v8, 40);
        v40 = v5[2];
        v41 = v5[1];
        v63 = v39;
        v5[2] = v12;
        v42 = (char *)*v5;
        v66 = v40;
        v43 = v41 - 1;
        if ( v43 >= 0 )
        {
          v44 = v39;
          do
          {
            v45 = *(_QWORD *)v42;
            v1 = _mm_loadu_si128((const __m128i *)(v42 + 8));
            *(_QWORD *)v42 = 0;
            *((_QWORD *)v42 + 2) = 0;
            *(_QWORD *)v44 = v45;
            *(__m128i *)(v44 + 8) = v1;
            *(_DWORD *)(v44 + 24) = *((_DWORD *)v42 + 6);
            *(_QWORD *)(v44 + 32) = *((_QWORD *)v42 + 4);
            v46 = *(void **)v42;
            if ( *(_QWORD *)v42 )
            {
              *((_QWORD *)v42 + 1) = 0;
              qfree(v46);
            }
            v42 += 40;
            v44 += 40;
            v47 = v43-- == 0;
          }
          while ( !v47 );
          v42 = (char *)*v5;
        }
        qfree(v42);
        v10 = v63;
        v9 = v5[1];
        *v5 = v63;
        v5[2] = v66;
      }
      if ( v9 >= v11 )
        goto LABEL_16;
      v1.m128i_i64[0] = 0;
      v33 = v10;
      v34 = 40 * v9;
      while ( 1 )
      {
        v35 = v34 + v33;
        ++v9;
        v34 += 40;
        *(_QWORD *)v35 = 0;
        *(_QWORD *)(v35 + 24) = 0;
        *(_QWORD *)(v35 + 32) = -1;
        *(_OWORD *)(v35 + 8) = 0;
        if ( v11 == v9 )
          break;
        v33 = *v5;
      }
    }
    else
    {
      if ( v12 < v8 )
      {
        v48 = qvector_reserve(v5, 0, v8, 40);
        v49 = v5[1];
        v50 = v5[2];
        v5[2] = v12;
        v51 = (char *)*v5;
        v64 = v50;
        v52 = v49 - 1;
        if ( v52 >= 0 )
        {
          v53 = v5;
          v54 = v48;
          v55 = v52;
          v56 = (void **)v53;
          do
          {
            v57 = *(_QWORD *)v51;
            v1 = _mm_loadu_si128((const __m128i *)(v51 + 8));
            *(_QWORD *)v51 = 0;
            *((_QWORD *)v51 + 2) = 0;
            *(_QWORD *)v54 = v57;
            *(__m128i *)(v54 + 8) = v1;
            *(_DWORD *)(v54 + 24) = *((_DWORD *)v51 + 6);
            *(_QWORD *)(v54 + 32) = *((_QWORD *)v51 + 4);
            v58 = *(void **)v51;
            if ( *(_QWORD *)v51 )
            {
              *((_QWORD *)v51 + 1) = 0;
              qfree(v58);
            }
            v51 += 40;
            v54 += 40;
            v47 = v55-- == 0;
          }
          while ( !v47 );
          v51 = (char *)*v56;
          v5 = (unsigned __int64 *)v56;
        }
        qfree(v51);
        v9 = v5[1];
        *v5 = v48;
        v10 = v48;
        v5[2] = v64;
      }
      if ( v9 >= v11 )
        goto LABEL_16;
      v1.m128i_i64[0] = 0;
      v13 = v10;
      v14 = 40 * v9;
      while ( 1 )
      {
        v15 = v14 + v13;
        ++v9;
        v14 += 40;
        *(_QWORD *)v15 = 0;
        *(_QWORD *)(v15 + 24) = 0;
        *(_QWORD *)(v15 + 32) = -1;
        *(_OWORD *)(v15 + 8) = 0;
        if ( v11 == v9 )
          break;
        v13 = *v5;
      }
    }
    v10 = *v5;
LABEL_16:
    v5[1] = v11;
    goto LABEL_17;
  }
LABEL_27:
  v72 = 0u;
  v71 = 0;
  if ( sub_5A79F0 )
  {
    v71.m128i_i64[0] = (__int64)sub_5A79F0;
    v72 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B2F5D8), (__m128i)(unsigned __int64)sub_5A7830);
  }
  sub_5B0AE0(v73, &v71, 1);
  if ( v72.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
  sub_5AC7C0(v73, a1 + 19, 1);
  if ( ptr )
  {
    *(_QWORD *)&v77 = 0;
    qfree(ptr);
  }
  v26 = (unsigned __int64 *)&v75;
  do
  {
    if ( *v26 )
    {
      v27 = v26[1];
      if ( v27 )
      {
        v28 = (char *)*v26;
        for ( i = 0; i != v27; ++i )
        {
          v30 = &v28[40 * i];
          v31 = *(void **)v30;
          if ( *(_QWORD *)v30 )
          {
            *((_QWORD *)v30 + 1) = 0;
            qfree(v31);
            v28 = (char *)*v26;
          }
        }
      }
      else
      {
        v28 = (char *)*v26;
      }
      v26[1] = 0;
      qfree(v28);
    }
    v26 -= 3;
  }
  while ( v26 != &v72.m128i_u64[1] );
  return v79 - __readfsqword(0x28u);
}
