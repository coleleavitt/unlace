__int64 __fastcall sub_D240(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  unsigned __int64 *v8; // rax
  __int64 v9; // rsi
  unsigned __int64 *v10; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rax
  char *v16; // r14
  size_t v17; // r13
  char *v18; // rsi
  __int64 *v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rsi
  unsigned __int64 v26; // r12
  __int64 v27; // rdx
  const char *v28; // rsi
  unsigned int v29; // ebp
  const char *p_src; // rsi
  __int64 v32; // rcx
  __int64 v33; // r8
  size_t v34; // r9
  unsigned __int64 v35; // rdx
  __int64 *v36; // rdi
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  const char *v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  size_t v42; // r14
  __int64 v43; // r12
  size_t v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rbx
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  int v49; // r12d
  __int64 v50; // rbx
  char *v51; // rax
  char *v52; // r14
  size_t v53; // rax
  size_t v54; // r15
  size_t v55; // rbx
  const char *v56; // rsi
  unsigned __int64 v57; // rbx
  size_t v58; // r15
  __int64 v59; // r14
  size_t v60; // r9
  __int64 v61; // rsi
  const char *v62; // rsi
  unsigned __int64 v63; // r14
  size_t v64; // r15
  __int64 v65; // r8
  size_t v66; // r10
  __int64 v67; // rsi
  __int64 v68; // rbx
  unsigned __int64 v69; // r12
  __m128i v70; // xmm0
  __int64 v71; // rdx
  __m128i v72; // xmm1
  __int64 v73; // r8
  size_t v74; // r10
  __int64 v75; // rsi
  struct _Unwind_Exception *v76; // rbx
  unsigned __int64 v77; // [rsp+0h] [rbp-E8h]
  size_t v78; // [rsp+0h] [rbp-E8h]
  size_t v79; // [rsp+0h] [rbp-E8h]
  size_t v80; // [rsp+0h] [rbp-E8h]
  __int64 v82; // [rsp+18h] [rbp-D0h]
  __int64 v83; // [rsp+18h] [rbp-D0h]
  size_t v84; // [rsp+18h] [rbp-D0h]
  __int64 v85; // [rsp+20h] [rbp-C8h]
  size_t v86; // [rsp+28h] [rbp-C0h]
  char *v87; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v88; // [rsp+38h] [rbp-B0h]
  __int64 v89; // [rsp+50h] [rbp-98h] BYREF
  __m128i v90; // [rsp+58h] [rbp-90h] BYREF
  void *src; // [rsp+70h] [rbp-78h] BYREF
  __int128 v92; // [rsp+78h] [rbp-70h]
  void *v93; // [rsp+90h] [rbp-58h] BYREF
  __int128 v94; // [rsp+98h] [rbp-50h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-40h]

  v6 = 0;
  v8 = (unsigned __int64 *)a1[2];
  v9 = a1[3];
  v10 = &v8[v9];
  v95 = __readfsqword(0x28u);
  v12 = *(_QWORD *)(a3 + 8);
  if ( v9 * 8 )
  {
    do
    {
      if ( v12 < *v8 )
        break;
      ++v8;
      ++v6;
    }
    while ( v8 != v10 );
  }
  v13 = *(unsigned int *)(a3 + 28);
  v88 = 0;
  v87 = nullptr;
  sub_C600((__int64)a1, (__int64)&v87, v6, v13, a5, a6);
  v14 = (char *)&unk_1A378;
  if ( (_QWORD)v88 )
    v14 = v87;
  v15 = sub_BA60(*v14);
  v90 = 0;
  v89 = 0;
  v16 = v15;
  v17 = strlen(v15);
  LOBYTE(v77) = v17 + 1;
  v18 = v16;
  v19 = (__int64 *)qvector_reserve(&v89, 0, v17 + 1, 1);
  v89 = (__int64)v19;
  v20 = 2;
  v90.m128i_i64[0] = v17 + 1;
  memmove(v19, v18, v17);
  *(_BYTE *)(v89 + v17) = 0;
  v24 = v90.m128i_i64[0];
  if ( v90.m128i_i64[0] )
  {
    v20 = v90.m128i_i64[0] + 1;
    v24 = v90.m128i_i64[0] - 1;
  }
  v25 = v89;
  if ( v90.m128i_i64[1] < v20 )
  {
    v19 = &v89;
    v89 = qvector_reserve(&v89, v89, v20, 1);
    v25 = v89;
  }
  v90.m128i_i64[0] = v20;
  v26 = v6 - 1;
  *(_BYTE *)(v25 + v24) = 32;
  *(_BYTE *)(v89 + v24 + 1) = 0;
  v27 = *(unsigned int *)(a3 + 16);
  src = nullptr;
  v92 = 0;
  if ( v26 >= a1[7] )
    sub_BBD0((__int64)v19, v25, v27, v21, v22, v23, v77);
  v28 = *(const char **)(a1[6] + 8 * v26);
  if ( !(unsigned __int8)sub_C8C0((__int64)&src, (__int64)v28, v27, 0x55u) )
    goto LABEL_13;
  p_src = (const char *)&src;
  sub_C1C0(&v93, (__int64)&src);
  v35 = v94;
  if ( (_QWORD)v94 )
  {
    v34 = v94 - 1;
    if ( (_QWORD)v94 != 1 )
    {
      v73 = v90.m128i_i64[0];
      v74 = v94 - 1;
      if ( v90.m128i_i64[0] )
      {
        v73 = v90.m128i_i64[0] - 1;
        v74 = v34 + v90.m128i_i64[0] - 1;
        v35 = v94 + v90.m128i_i64[0] - 1;
      }
      v75 = v89;
      if ( v90.m128i_i64[1] < v35 )
      {
        v86 = v74;
        v85 = v73;
        v84 = v94 - 1;
        v77 = v35;
        v89 = qvector_reserve(&v89, v89, v35, 1);
        v74 = v86;
        v75 = v89;
        v73 = v85;
        v34 = v84;
        v35 = v77;
      }
      v90.m128i_i64[0] = v35;
      *(_BYTE *)(v75 + v74) = 0;
      p_src = (const char *)v93;
      memcpy((void *)(v73 + v89), v93, v34);
    }
  }
  v36 = (__int64 *)v93;
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree(v93, p_src, v35, v32, v33, v34);
  }
  v37 = v90.m128i_i64[0];
  v38 = 2;
  if ( v90.m128i_i64[0] )
  {
    v38 = v90.m128i_i64[0] + 1;
    v37 = v90.m128i_i64[0] - 1;
  }
  v39 = (const char *)v89;
  if ( v90.m128i_i64[1] < v38 )
  {
    v36 = &v89;
    v82 = v37;
    v77 = v38;
    v89 = qvector_reserve(&v89, v89, v38, 1);
    v37 = v82;
    v39 = (const char *)v89;
    v38 = v77;
  }
  v90.m128i_i64[0] = v38;
  v39[v37] = 46;
  *(_BYTE *)(v89 + v37 + 1) = 0;
  v40 = *(unsigned int *)(a3 + 20);
  if ( v26 >= a1[7] )
  {
    v76 = (struct _Unwind_Exception *)sub_BBD0((__int64)v36, (int)v39, v40, v32, v37, v34, v77);
    if ( v89 )
    {
      v90.m128i_i64[0] = 0;
      qfree(v89, v39);
    }
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      qfree(v87, v39);
    }
    _Unwind_Resume(v76);
  }
  v28 = *(const char **)(a1[6] + 8 * v26);
  v29 = sub_C8C0((__int64)&src, (__int64)v28, v40, 0x4Eu);
  if ( (_BYTE)v29 )
  {
    sub_BB40(&src);
    v41 = v92;
    if ( (_QWORD)v92 )
    {
      v42 = v92 - 1;
      if ( (_QWORD)v92 != 1 )
      {
        v43 = v90.m128i_i64[0];
        v44 = v92 - 1;
        if ( v90.m128i_i64[0] )
        {
          v43 = v90.m128i_i64[0] - 1;
          v44 = v42 + v90.m128i_i64[0] - 1;
          v41 = v92 + v90.m128i_i64[0] - 1;
        }
        v45 = v89;
        if ( v90.m128i_i64[1] < v41 )
        {
          v80 = v44;
          v89 = qvector_reserve(&v89, v89, v41, 1);
          v44 = v80;
          v45 = v89;
        }
        v90.m128i_i64[0] = v41;
        *(_BYTE *)(v45 + v44) = 0;
        memcpy((void *)(v43 + v89), src, v42);
      }
    }
    v46 = v90.m128i_i64[0];
    v47 = 2;
    if ( v90.m128i_i64[0] )
    {
      v47 = v90.m128i_i64[0] + 1;
      v46 = v90.m128i_i64[0] - 1;
    }
    v48 = v89;
    if ( v90.m128i_i64[1] < v47 )
    {
      v89 = qvector_reserve(&v89, v89, v47, 1);
      v48 = v89;
    }
    v90.m128i_i64[0] = v47;
    v49 = 1;
    *(_BYTE *)(v48 + v46) = 40;
    *(_BYTE *)(v89 + v46 + 1) = 0;
    v50 = 1;
    if ( (unsigned __int64)v88 > 1 )
    {
      while ( v87[v50] )
      {
        v51 = sub_BA60(v87[v50]);
        v93 = nullptr;
        v52 = v51;
        v94 = 0;
        v53 = strlen(v51);
        v54 = v53 + 1;
        v55 = v53;
        v56 = v52;
        v93 = (void *)qvector_reserve(&v93, 0, v53 + 1, 1);
        *(_QWORD *)&v94 = v54;
        memmove(v93, v52, v55);
        *((_BYTE *)v93 + v55) = 0;
        v57 = v94;
        if ( (_QWORD)v94 )
        {
          v58 = v94 - 1;
          if ( (_QWORD)v94 != 1 )
          {
            v59 = v90.m128i_i64[0];
            v60 = v94 - 1;
            if ( v90.m128i_i64[0] )
            {
              v59 = v90.m128i_i64[0] - 1;
              v60 = v58 + v90.m128i_i64[0] - 1;
              v57 = v94 + v90.m128i_i64[0] - 1;
            }
            v61 = v89;
            if ( v90.m128i_i64[1] < v57 )
            {
              v78 = v60;
              v89 = qvector_reserve(&v89, v89, v57, 1);
              v60 = v78;
              v61 = v89;
            }
            v90.m128i_i64[0] = v57;
            *(_BYTE *)(v61 + v60) = 0;
            v56 = (const char *)v93;
            memcpy((void *)(v59 + v89), v93, v58);
          }
        }
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree(v93, v56);
        }
        v50 = ++v49;
        if ( !v87[v49] )
          goto LABEL_44;
        v62 = nullptr;
        v94 = 0;
        v93 = nullptr;
        v93 = (void *)qvector_reserve(&v93, 0, 3, 1);
        *(_QWORD *)&v94 = 3;
        strcpy((char *)v93, ", ");
        v63 = v94;
        if ( (_QWORD)v94 )
        {
          v64 = v94 - 1;
          if ( (_QWORD)v94 != 1 )
          {
            v65 = v90.m128i_i64[0];
            v66 = v94 - 1;
            if ( v90.m128i_i64[0] )
            {
              v65 = v90.m128i_i64[0] - 1;
              v66 = v64 + v90.m128i_i64[0] - 1;
              v63 = v94 + v90.m128i_i64[0] - 1;
            }
            v67 = v89;
            if ( v90.m128i_i64[1] < v63 )
            {
              v79 = v66;
              v83 = v65;
              v89 = qvector_reserve(&v89, v89, v63, 1);
              v65 = v83;
              v67 = v89;
              v66 = v79;
            }
            v90.m128i_i64[0] = v63;
            *(_BYTE *)(v67 + v66) = 0;
            v62 = (const char *)v93;
            memcpy((void *)(v65 + v89), v93, v64);
          }
        }
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree(v93, v62);
          if ( v49 >= (unsigned __int64)v88 )
            break;
        }
        else
        {
LABEL_44:
          if ( v49 >= (unsigned __int64)v88 )
            break;
        }
      }
    }
    v68 = v90.m128i_i64[0];
    v69 = 2;
    if ( v90.m128i_i64[0] )
    {
      v69 = v90.m128i_i64[0] + 1;
      v68 = v90.m128i_i64[0] - 1;
    }
    v28 = (const char *)v89;
    if ( v90.m128i_i64[1] < v69 )
    {
      v89 = qvector_reserve(&v89, v89, v69, 1);
      v28 = (const char *)v89;
    }
    v90.m128i_i64[0] = v69;
    v28[v68] = 41;
    *(_BYTE *)(v89 + v68 + 1) = 0;
    v70 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v71 = v89;
    v72 = _mm_loadu_si128(&v90);
    v89 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v71;
    *(__m128i *)(a2 + 8) = v72;
    v90 = v70;
  }
  else
  {
LABEL_13:
    v29 = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v92 = 0;
    qfree(src, v28);
  }
  if ( v89 )
  {
    v90.m128i_i64[0] = 0;
    qfree(v89, v28);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87, v28);
  }
  return v29;
}
