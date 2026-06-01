__int64 __fastcall sites_chooser_t__::vfunc_10(
        _QWORD *a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __m128i si128; // xmm0
  __int64 v19; // rdi
  unsigned int v20; // r14d
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  double v24; // xmm4_8
  double v25; // xmm5_8
  char v26; // al
  __int64 v27; // rdi
  char v28; // r14
  unsigned int v29; // r15d
  const void *v31; // r15
  void *v32; // rax
  const void *v33; // r8
  void *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // r14
  const char *v37; // rdx
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 *v39; // rdi
  __int64 v40; // rax
  __int64 (*v41)(); // rcx
  unsigned int v42; // eax
  void *v43; // r8
  __int64 v44; // rdx
  __m128i v45; // xmm0
  void *v46; // rcx
  __int64 v47; // rax
  void *v48; // rdx
  void **v49; // rax
  __m128i v50; // xmm0
  void *v51; // rcx
  void *v52; // rdx
  __m128i v53; // xmm0
  __m128i v54; // xmm0
  __int64 v55; // r8
  const char *v56; // rdx
  __int64 (__fastcall *v57)(__int64); // rax
  __int64 *v58; // rdi
  __int64 v59; // rax
  __int64 (*v60)(void); // rcx
  __int64 v61; // rdi
  char v62; // al
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  __int64 v67; // rax
  char v68; // al
  __m128i v69; // [rsp+0h] [rbp-1D0h] BYREF
  __m128i v70; // [rsp+10h] [rbp-1C0h] BYREF
  void *v71; // [rsp+20h] [rbp-1B0h]
  void *v72; // [rsp+28h] [rbp-1A8h]
  void *v73; // [rsp+30h] [rbp-1A0h]
  void *v74; // [rsp+38h] [rbp-198h]
  void *v75; // [rsp+40h] [rbp-190h]
  const char *v76; // [rsp+48h] [rbp-188h] BYREF
  __int128 v77; // [rsp+50h] [rbp-180h]
  void *v78; // [rsp+60h] [rbp-170h] BYREF
  __int128 v79; // [rsp+68h] [rbp-168h]
  __int64 v80; // [rsp+78h] [rbp-158h]
  __int128 v81; // [rsp+80h] [rbp-150h]
  void *dest; // [rsp+90h] [rbp-140h] BYREF
  __int128 v83; // [rsp+98h] [rbp-138h]
  __int64 v84; // [rsp+A8h] [rbp-128h]
  void *v85; // [rsp+B8h] [rbp-118h] BYREF
  __int128 v86; // [rsp+C0h] [rbp-110h]
  void *v87; // [rsp+D0h] [rbp-100h]
  __int128 v88; // [rsp+D8h] [rbp-F8h]
  void *v89; // [rsp+E8h] [rbp-E8h]
  __int128 v90; // [rsp+F0h] [rbp-E0h]
  void *src; // [rsp+100h] [rbp-D0h]
  __int128 v92; // [rsp+108h] [rbp-C8h]
  void *v93; // [rsp+118h] [rbp-B8h]
  __int64 v94; // [rsp+128h] [rbp-A8h] BYREF
  __int128 v95; // [rsp+130h] [rbp-A0h]
  void *v96; // [rsp+188h] [rbp-48h]
  unsigned __int64 v97; // [rsp+190h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  v77 = 0;
  v76 = nullptr;
  v78 = nullptr;
  v80 = 0;
  dest = nullptr;
  v84 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v12 = sub_426230(a1, (const char *)a2);
  v13 = sub_4170C0(v12);
  if ( (void **)v13 != &v78 )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 > 1 )
    {
      v33 = *(const void **)v13;
      v34 = v78;
      if ( *((_QWORD *)&v79 + 1) < v14 )
      {
        v69.m128i_i64[0] = (__int64)v33;
        v34 = (void *)qvector_reserve(&v78, v78, v14, 1);
        v78 = v34;
        v33 = (const void *)v69.m128i_i64[0];
      }
      *(_QWORD *)&v79 = v14;
      memmove(v34, v33, v14 - 1);
      *((char *)v78 + v14 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v79 = 0;
    }
  }
  v15 = sub_416E60(v12);
  if ( (void **)v15 != &dest )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 > 1 )
    {
      v31 = *(const void **)v15;
      v32 = dest;
      if ( *((_QWORD *)&v83 + 1) < v16 )
      {
        v32 = (void *)qvector_reserve(&dest, dest, v16, 1);
        dest = v32;
      }
      *(_QWORD *)&v83 = v16;
      memmove(v32, v31, v16 - 1);
      *((char *)dest + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v83 = 0;
    }
  }
  v95 = 0;
  v94 = 0;
  v17 = qvector_reserve(&v94, 0, 24, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDA30);
  v94 = v17;
  *(_QWORD *)&v95 = 24;
  *(__m128i *)v17 = si128;
  *(_QWORD *)(v17 + 15) = 0x6174616420657469LL;
  *(_BYTE *)(v94 + 23) = 0;
  v19 = sub_426230(&v94, nullptr);
  v20 = (unsigned __int8)sub_4170D0(v19);
  v21 = sub_426230(v19, nullptr);
  v22 = (_QWORD *)sub_417080(v21);
  v23 = v20;
  v26 = sub_422C80(v22, v20, (__int64)&v94, (char *)&v76, *(double *)si128.m128i_i64, a4, a5, a6, v24, v25, a9, a10);
  v27 = v94;
  v28 = v26;
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    *(double *)si128.m128i_i64 = qfree(v94, (const char *)v23);
  }
  v29 = 0;
  if ( v28 )
  {
    v35 = sub_426230(v27, (const char *)v23, *(double *)si128.m128i_i64);
    si128.m128i_i64[0] = 0;
    v36 = (_QWORD *)sub_417080(v35);
    v85 = nullptr;
    v87 = nullptr;
    v37 = &s1;
    v89 = nullptr;
    src = nullptr;
    v93 = nullptr;
    v86 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v38 = *(__int64 (__fastcall **)(__int64))(*v36 + 184LL);
    if ( (_QWORD)v77 )
      v37 = v76;
    if ( v38 != vault_with_events_t__::vfunc_23 )
    {
      v42 = ((__int64 (__fastcall *)(_QWORD *, void **, const char *))v38)(v36, &v85, v37);
LABEL_31:
      if ( !v42 )
      {
        v71 = nullptr;
        v69.m128i_i64[0] = v86;
        if ( (_QWORD)v86 )
        {
          v71 = (void *)qalloc_or_throw(v86);
          memcpy(v71, v85, v69.m128i_u64[0]);
        }
        v72 = nullptr;
        v69.m128i_i64[1] = v88;
        if ( (_QWORD)v88 )
        {
          v72 = (void *)qalloc_or_throw(v88);
          memcpy(v72, v87, v69.m128i_u64[1]);
        }
        v73 = nullptr;
        v70.m128i_i64[0] = v90;
        if ( (_QWORD)v90 )
        {
          v73 = (void *)qalloc_or_throw(v90);
          memcpy(v73, v89, v70.m128i_u64[0]);
        }
        v74 = nullptr;
        v70.m128i_i64[1] = v92;
        if ( (_QWORD)v92 )
        {
          v74 = (void *)qalloc_or_throw(v92);
          memcpy(v74, src, v70.m128i_u64[1]);
        }
        v43 = v93;
        v44 = a1[43];
        v23 = a1[42];
        v96 = v93;
        if ( a1[44] < (unsigned __int64)(v44 + 1) )
        {
          v75 = v93;
          v63 = qvector_reserve(a1 + 42, v23, v44 + 1, 104);
          a1[42] = v63;
          v44 = a1[43];
          v23 = v63;
          v43 = v75;
        }
        v45 = _mm_loadl_epi64(&v69);
        v46 = v71;
        v47 = 13 * v44;
        v48 = v72;
        v49 = (void **)(v23 + 8 * v47);
        *(__m128i *)(v49 + 1) = _mm_unpacklo_epi64(v45, v45);
        v50 = _mm_loadl_epi64((const __m128i *)&v69.m128i_u64[1]);
        *v49 = v46;
        v51 = v73;
        v49[3] = v48;
        v52 = v74;
        *((__m128i *)v49 + 2) = _mm_unpacklo_epi64(v50, v50);
        v53 = _mm_loadl_epi64(&v70);
        v49[6] = v51;
        v49[9] = v52;
        *(__m128i *)(v49 + 7) = _mm_unpacklo_epi64(v53, v53);
        v54 = _mm_loadl_epi64((const __m128i *)&v70.m128i_u64[1]);
        v49[12] = v43;
        si128 = _mm_unpacklo_epi64(v54, v54);
        *((__m128i *)v49 + 5) = si128;
        v55 = a1[43];
        a1[43] = v55 + 1;
        if ( v55 )
        {
LABEL_50:
          v61 = *a2;
          if ( *a2 )
          {
            a2[1] = 0;
            v69.m128i_i64[0] = v55;
            *(double *)si128.m128i_i64 = qfree(v61, (const char *)v23);
            *a2 = 0;
            v55 = v69.m128i_i64[0];
            a2[2] = 0;
          }
          if ( v55 < 0 )
            goto LABEL_53;
          goto LABEL_69;
        }
        v56 = &s1;
        v57 = *(__int64 (__fastcall **)(__int64))(*v36 + 192LL);
        if ( (_QWORD)v77 )
          v56 = v76;
        if ( v57 == sub_415C30 )
        {
          v58 = (__int64 *)v36[1];
          if ( !v58 )
          {
            v23 = *a2;
            if ( !*a2 )
            {
              v64 = a2[1];
              v65 = a2[2];
              v55 = 0;
              v94 = 0;
              v66 = v64 + 1;
              goto LABEL_70;
            }
            a2[1] = 0;
            *(double *)si128.m128i_i64 = qfree(v23, (const char *)v23, v56);
            *a2 = 0;
            v55 = 0;
            a2[2] = 0;
LABEL_69:
            v64 = a2[1];
            v94 = v55;
            v23 = *a2;
            v65 = a2[2];
            v66 = v64 + 1;
LABEL_70:
            if ( v65 < v66 )
            {
              v69.m128i_i64[0] = v55;
              v67 = qvector_reserve(a2, v23, v66, 8);
              *a2 = v67;
              v23 = v67;
              v55 = v69.m128i_i64[0];
              v64 = a2[1];
            }
            *(_QWORD *)(v23 + 8 * v64) = v55;
            ++a2[1];
LABEL_53:
            v29 = 1;
LABEL_54:
            if ( src )
            {
              *(_QWORD *)&v92 = 0;
              *(double *)si128.m128i_i64 = qfree(src, (const char *)v23);
            }
            if ( v89 )
            {
              *(_QWORD *)&v90 = 0;
              *(double *)si128.m128i_i64 = qfree(v89, (const char *)v23, *(double *)si128.m128i_i64);
            }
            if ( v87 )
            {
              *(_QWORD *)&v88 = 0;
              *(double *)si128.m128i_i64 = qfree(v87, (const char *)v23, *(double *)si128.m128i_i64);
            }
            if ( v85 )
            {
              *(_QWORD *)&v86 = 0;
              *(double *)si128.m128i_i64 = qfree(v85, (const char *)v23, *(double *)si128.m128i_i64);
            }
            goto LABEL_10;
          }
          v59 = *v58;
          v23 = (unsigned __int64)sub_178B60;
          v60 = *(__int64 (**)(void))(*v58 + 480);
          if ( v60 != sub_178B60 )
          {
            v69.m128i_i64[0] = (__int64)v56;
            v68 = v60();
            v56 = (const char *)v69.m128i_i64[0];
            if ( v68 )
              goto LABEL_49;
            v58 = (__int64 *)v36[1];
            v59 = *v58;
          }
          v23 = (unsigned __int64)&v85;
          (*(void (__fastcall **)(__int64 *, void **, const char *, _QWORD))(v59 + 160))(v58, &v85, v56, 0);
        }
        else
        {
          v23 = (unsigned __int64)&v85;
          ((void (__fastcall *)(_QWORD *, void **, const char *, _QWORD))v57)(v36, &v85, v56, 0);
        }
LABEL_49:
        v55 = a1[43] - 1LL;
        goto LABEL_50;
      }
LABEL_64:
      v23 = (unsigned __int64)"Failed to retrieve the new site";
      sub_4168C0(v42, (__int64)"Failed to retrieve the new site");
      v29 = 0;
      goto LABEL_54;
    }
    v39 = (__int64 *)v36[1];
    if ( v39 )
    {
      v40 = *v39;
      v41 = *(__int64 (**)())(*v39 + 480);
      if ( v41 == sub_178B60 )
      {
LABEL_30:
        v42 = (*(__int64 (__fastcall **)(__int64 *, void **, const char *))(v40 + 152))(v39, &v85, v37);
        goto LABEL_31;
      }
      v69.m128i_i64[0] = (__int64)v37;
      v62 = v41();
      v37 = (const char *)v69.m128i_i64[0];
      if ( !v62 )
      {
        v39 = (__int64 *)v36[1];
        v40 = *v39;
        goto LABEL_30;
      }
    }
    v42 = 52;
    goto LABEL_64;
  }
LABEL_10:
  if ( dest )
  {
    *(_QWORD *)&v83 = 0;
    *(double *)si128.m128i_i64 = qfree(dest, (const char *)v23, *(double *)si128.m128i_i64);
  }
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    *(double *)si128.m128i_i64 = qfree(v80, (const char *)v23, *(double *)si128.m128i_i64);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    *(double *)si128.m128i_i64 = qfree(v78, (const char *)v23, *(double *)si128.m128i_i64);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76, (const char *)v23, *(double *)si128.m128i_i64);
  }
  return v29;
}
