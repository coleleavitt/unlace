__int64 __fastcall sub_434EE0(
        const char *src,
        const char *a2,
        __int64 a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int8 (*v17)(void); // rax
  const char *file_ext; // rax
  __m256i *v19; // rsi
  const char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __m128 v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __int64 v34; // r8
  const char *v35; // rax
  unsigned int v36; // eax
  const char *v38; // rax
  const char *v39; // rax
  const char *v40; // rbx
  double v41; // xmm0_8
  unsigned int v42; // eax
  unsigned int v43; // eax
  double v44; // xmm4_8
  double v45; // xmm5_8
  __int64 v46; // [rsp-8h] [rbp-128h]
  char v47; // [rsp+0h] [rbp-120h]
  size_t na; // [rsp+10h] [rbp-110h]
  const char *n; // [rsp+10h] [rbp-110h]
  char *s1; // [rsp+18h] [rbp-108h]
  char *s1a; // [rsp+18h] [rbp-108h]
  unsigned int s1b; // [rsp+18h] [rbp-108h]
  unsigned int v54; // [rsp+24h] [rbp-FCh]
  __int64 v55; // [rsp+28h] [rbp-F8h]
  char v56; // [rsp+3Eh] [rbp-E2h] BYREF
  char v57; // [rsp+3Fh] [rbp-E1h] BYREF
  __m256i v58; // [rsp+40h] [rbp-E0h] BYREF
  char v59; // [rsp+60h] [rbp-C0h]
  const void *v60; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+78h] [rbp-A8h]
  const char *v62; // [rsp+88h] [rbp-98h]
  __int128 v63; // [rsp+90h] [rbp-90h]
  __int64 (__fastcall **v64)(); // [rsp+A0h] [rbp-80h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-78h]
  __int128 v66; // [rsp+B0h] [rbp-70h]
  __int64 v67; // [rsp+C0h] [rbp-60h]
  __int128 v68; // [rsp+C8h] [rbp-58h]
  __int64 v69; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v70; // [rsp+E8h] [rbp-38h]

  v54 = (unsigned int)a2;
  v70 = __readfsqword(0x28u);
  v14 = sub_426230(src, a2);
  v15 = sub_417080((__int64)v14);
  v16 = *(_QWORD *)(v15 + 8);
  v55 = v15;
  if ( !v16 )
    return 0;
  v17 = *(unsigned __int8 (**)(void))(*(_QWORD *)v16 + 480LL);
  if ( (char *)v17 != (char *)sub_178B60 )
  {
    if ( v17() )
      return 0;
  }
  v65 = 0;
  v66 = 0;
  v64 = &local_site_t___vtable;
  v67 = 0;
  v69 = 0;
  v68 = 0;
  sub_417360((__int64)v14, &v64);
  file_ext = (const char *)get_file_ext(src);
  if ( !file_ext )
  {
    v39 = (const char *)get_file_ext(a3);
    v40 = v39;
    if ( v39 )
    {
      v19 = (__m256i *)"idb";
      if ( !strcasecmp(v39, "idb") )
        goto LABEL_30;
      v19 = (__m256i *)"i64";
      if ( !strcasecmp(v40, "i64") )
        goto LABEL_30;
    }
    goto LABEL_38;
  }
  v19 = (__m256i *)"idb";
  s1 = (char *)file_ext;
  if ( !strcasecmp(file_ext, "idb") )
  {
    v20 = (const char *)get_file_ext(a3);
    if ( v20 )
    {
      s1a = (char *)v20;
      if ( !strcasecmp(v20, "idb") )
        goto LABEL_8;
      v19 = (__m256i *)"i64";
      if ( !strcasecmp(s1a, "i64") )
        goto LABEL_8;
    }
    goto LABEL_30;
  }
  v19 = (__m256i *)"i64";
  s1b = strcasecmp(s1, "i64");
  v38 = (const char *)get_file_ext(a3);
  if ( !v38
    || (v19 = (__m256i *)"idb", n = v38, strcasecmp(v38, "idb")) && (v19 = (__m256i *)"i64", strcasecmp(n, "i64")) )
  {
    if ( !s1b )
      goto LABEL_30;
LABEL_38:
    v41 = 0.0;
    v61 = 0;
    memset(&v58, 0, 24);
    v60 = nullptr;
    v42 = (*(__int64 (__fastcall **)(_QWORD, __m256i *, char *, _QWORD, __int64 (__fastcall ***)(), const char *, _QWORD))(**(_QWORD **)(v55 + 8) + 456LL))(
            *(_QWORD *)(v55 + 8),
            &v58,
            &v56,
            0,
            &v64,
            src,
            v54);
    if ( v42 )
    {
      v19 = (__m256i *)"Path #1:";
      sub_4168C0(v42, (__int64)"Path #1:");
      v30 = 0;
    }
    else
    {
      v43 = (*(__int64 (__fastcall **)(_QWORD, const void **, char *, _QWORD, __int64 (__fastcall ***)(), __int64, _QWORD))(**(_QWORD **)(v55 + 8) + 456LL))(
              *(_QWORD *)(v55 + 8),
              &v60,
              &v57,
              0,
              &v64,
              a3,
              a4);
      if ( v43 )
      {
        v19 = (__m256i *)"Path #2:";
        sub_4168C0(v43, (__int64)"Path #2:");
        v30 = 0;
      }
      else
      {
        v19 = &v58;
        v30 = sub_434A50(1, v58.m256i_i8, &v60, v56, v57, 0, 0.0, a6, a7, a8, v44, v45, a11, a12, 0, 0, 0);
      }
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      v41 = qfree(v60, v19->m256i_i8);
    }
    if ( v58.m256i_i64[0] )
    {
      v58.m256i_i64[1] = 0;
      qfree(v58.m256i_i64[0], v19->m256i_i8, v41);
    }
    goto LABEL_31;
  }
  v24 = s1b;
  if ( !s1b )
  {
LABEL_8:
    v60 = nullptr;
    v27 = 0;
    v62 = nullptr;
    memset(&v58, 0, 24);
    v61 = 0;
    v63 = 0;
    if ( src )
    {
      na = strlen(src);
      v58.m256i_i64[0] = qvector_reserve(&v58, 0, na + 1, 1);
      v58.m256i_i64[1] = na + 1;
      memmove((void *)v58.m256i_i64[0], src, na);
      *(_BYTE *)(v58.m256i_i64[0] + na) = 0;
    }
    v19 = (__m256i *)&v60;
    v30 = sub_417670((__int64)v14, (__int64)&v60, 1, (__int64)&v58, 0, nullptr, 0, 0);
    v34 = v46;
    if ( v58.m256i_i64[0] )
    {
      v58.m256i_i64[1] = 0;
      *(double *)v27.m128_u64 = qfree(v58.m256i_i64[0], (const char *)&v60, v28, v29, v46);
    }
    if ( (_BYTE)v30 )
    {
      memset(&v58.m256i_u64[1], 0, 24);
      v58.m256i_i64[0] = (__int64)ida_ui_proxy_t___vtable;
      v35 = &::s1;
      v59 = 0;
      if ( (_QWORD)v63 )
        v35 = v62;
      v19 = (__m256i *)&v64;
      v36 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(), const char *, _QWORD, __int64, _QWORD, const char *, __m256i *))(**(_QWORD **)(v55 + 8) + 432LL))(
              *(_QWORD *)(v55 + 8),
              &v64,
              src,
              v54,
              a3,
              a4,
              v35,
              &v58);
      if ( v36 )
      {
        v19 = (__m256i *)"Failed to diff";
        sub_416980(v36, (__int64)"Failed to diff");
      }
      v58.m256i_i64[0] = (__int64)ida_ui_proxy_t___vtable;
      if ( v58.m256i_i64[1] )
      {
        v58.m256i_i64[2] = 0;
        qfree(v58.m256i_i64[1], v19->m256i_i8);
      }
    }
    else
    {
      sub_169630(
        (int)"Cannot find a DIFF association for this file extension",
        (__int64)&v60,
        v28,
        v29,
        v34,
        v31,
        v27,
        a6,
        a7,
        a8,
        v32,
        v33,
        a11,
        a12,
        v47);
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62, v19->m256i_i8);
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60, v19->m256i_i8);
    }
    goto LABEL_31;
  }
LABEL_30:
  sub_169630(
    (int)"Cannot compare database to non-database",
    (__int64)v19,
    v21,
    v22,
    v23,
    v24,
    (__m128)0LL,
    a6,
    a7,
    a8,
    v25,
    v26,
    a11,
    a12,
    v47);
  v30 = 0;
LABEL_31:
  v64 = &local_site_t___vtable;
  v69 = 0;
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, v19->m256i_i8);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65, v19->m256i_i8);
  }
  return v30;
}
