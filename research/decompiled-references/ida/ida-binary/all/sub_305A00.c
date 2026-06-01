__int64 __fastcall sub_305A00(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const QT::QString *a10)
{
  char *v11; // rbp
  size_t v12; // r14
  __int64 v13; // r15
  __int64 license_manager; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  const char *v16; // rsi
  char *v17; // rdx
  __int64 v18; // rcx
  char *v19; // r8
  void *v20; // rdi
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  void *v24; // rsi
  __int64 v25; // rdx
  char *v26; // rbx
  size_t v27; // rax
  size_t v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rsi
  char *v33; // r9
  char *v34; // r8
  const char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v48; // rdx
  __int64 v49; // rdx
  char *v50; // rax
  const char *v51; // rdx
  void *v52; // rdi
  size_t v53; // rdx
  __int64 v54; // rax
  char *v55; // [rsp+0h] [rbp-158h]
  char *v56; // [rsp+10h] [rbp-148h]
  char *v57; // [rsp+18h] [rbp-140h]
  void *ptr[4]; // [rsp+20h] [rbp-138h] BYREF
  void *v59; // [rsp+40h] [rbp-118h] BYREF
  __int128 v60; // [rsp+48h] [rbp-110h]
  __int64 v61; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v62; // [rsp+68h] [rbp-F0h]
  __int64 v63; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+88h] [rbp-D0h]
  void *v65; // [rsp+A0h] [rbp-B8h] BYREF
  char *v66[2]; // [rsp+A8h] [rbp-B0h]
  void *v67; // [rsp+C0h] [rbp-98h] BYREF
  char *s[2]; // [rsp+C8h] [rbp-90h]
  __int64 v69; // [rsp+D8h] [rbp-80h]
  __int128 v70; // [rsp+E0h] [rbp-78h]
  __int64 v71; // [rsp+F0h] [rbp-68h]
  __int128 v72; // [rsp+F8h] [rbp-60h]
  __int64 v73; // [rsp+108h] [rbp-50h]
  unsigned __int64 v74; // [rsp+118h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  QT::QCoreApplication::applicationFilePath((QT::QCoreApplication *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v67, (const QT::QString *)ptr);
  v11 = s[0];
  v59 = nullptr;
  v60 = 0;
  if ( s[0] )
  {
    v12 = strlen(s[0]);
    v13 = v12 + 1;
  }
  else
  {
    v11 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v13 = 1;
    v12 = 0;
  }
  v59 = (void *)qvector_reserve(&v59, 0, v13, 1);
  *(_QWORD *)&v60 = v13;
  memmove(v59, v11, v12);
  *((_BYTE *)v59 + v12) = 0;
LABEL_4:
  if ( v67 && !_InterlockedSub((volatile signed __int32 *)v67, 1u) )
    free(v67);
  v61 = 0;
  v62 = 0;
  license_manager = get_license_manager();
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)license_manager + 40LL);
  if ( v15 == sub_178B50 )
    v16 = (const char *)(license_manager + 40);
  else
    v16 = (const char *)v15(license_manager);
  v67 = nullptr;
  *(_OWORD *)s = 0;
  if ( (unsigned __int8)build_license_source_plugin_options(&v67, v16) )
  {
    v49 = v62;
    v16 = (const char *)v61;
    if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
    {
      v61 = qvector_reserve(&v61, v61, v62 + 1, 24);
      v49 = v62;
      v16 = (const char *)v61;
    }
    v50 = (char *)&v16[24 * v49];
    *(_QWORD *)v50 = 0;
    *(_OWORD *)(v50 + 8) = 0;
    *(_QWORD *)&v62 = v62 + 1;
    v20 = *(void **)v50;
    *(_QWORD *)v50 = v67;
    *((char **)v50 + 1) = s[0];
    v17 = s[1];
    *((char **)v50 + 2) = s[1];
    v67 = v20;
    s[1] = nullptr;
  }
  else
  {
    v20 = v67;
  }
  if ( v20 )
  {
    s[0] = nullptr;
    qfree(v20, v16);
  }
  v67 = off_50;
  v21 = (char *)&s1;
  v70 = -1;
  LODWORD(s[0]) = 0;
  v69 = 0;
  v71 = -1;
  v73 = 0;
  v72 = 0;
  if ( (_QWORD)v60 )
    v21 = (char *)v59;
  s[1] = v21;
  if ( a10 )
  {
    v22 = v62;
    v23 = v61;
    if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
    {
      v61 = qvector_reserve(&v61, v61, v62 + 1, 24);
      v22 = v62;
      v23 = v61;
    }
    v11 = (char *)(v23 + 24 * v22);
    v24 = a10;
    *(_QWORD *)v11 = 0;
    *(_OWORD *)(v11 + 8) = 0;
    *(_QWORD *)&v62 = v62 + 1;
    QT::QString::toUtf8_helper((QT::QString *)&v65, a10);
    v26 = v66[0];
    if ( (v66[0] || (v26 = (char *)&QT::QByteArray::_empty) != nullptr) && (v27 = strlen(v26), (v28 = v27) != 0) )
    {
      v52 = *(void **)v11;
      v53 = v27 + 1;
      if ( *((_QWORD *)v11 + 2) < v27 + 1 )
      {
        v55 = (char *)(v27 + 1);
        v54 = qvector_reserve(v11, *(_QWORD *)v11, v53, 1);
        *(_QWORD *)v11 = v54;
        v53 = (size_t)v55;
        v52 = (void *)v54;
      }
      *((_QWORD *)v11 + 1) = v53;
      v24 = v26;
      memmove(v52, v26, v28);
      *(_BYTE *)(*(_QWORD *)v11 + v28) = 0;
    }
    else
    {
      *((_QWORD *)v11 + 1) = 0;
    }
    if ( v65 && !_InterlockedSub((volatile signed __int32 *)v65, 1u) )
    {
      free(v65);
      quote_cmdline_arg(v11, v24, v48);
    }
    else
    {
      quote_cmdline_arg(v11, v24, v25);
    }
  }
  v63 = 0;
  v64 = 0;
  if ( !(_QWORD)v62 )
    goto LABEL_45;
  v29 = v61;
  v17 = (char *)(v62 - 1);
  v30 = v61 + 24 * v62;
  if ( v61 == v30 )
  {
    if ( (_QWORD)v62 != 1 )
      goto LABEL_76;
LABEL_45:
    v32 = 0;
    goto LABEL_46;
  }
  v31 = v61;
  do
  {
    v18 = *(_QWORD *)(v31 + 8);
    if ( v18 )
      v17 = &v17[v18 - 1];
    v31 += 24;
  }
  while ( v31 != v30 );
  v32 = 0;
  if ( v17 )
  {
LABEL_76:
    v63 = qvector_reserve(&v63, 0, v17, 1);
    v32 = v63;
    v29 = v61;
    v30 = v61 + 24 * v62;
    if ( v30 == v61 )
      goto LABEL_46;
    goto LABEL_41;
  }
  do
  {
LABEL_41:
    v11 = (char *)v64;
    if ( (unsigned __int64)v64 > 1 )
    {
      v34 = (char *)(v64 - 1);
      if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
      {
        v55 = (char *)(v64 - 1);
        v63 = qvector_reserve(&v63, v32, v64 + 1, 1);
        v34 = v55;
        v32 = v63;
      }
      *(_QWORD *)&v64 = v11 + 1;
      v11[v32] = 0;
      v19 = &v34[v63];
      *v19 = 32;
      v32 = v63;
    }
    v17 = *(char **)(v29 + 8);
    if ( v17 )
    {
      v19 = v17 - 1;
      if ( v17 != (_BYTE *)&dword_0 + 1 )
      {
        v11 = (char *)v64;
        v33 = v17 - 1;
        if ( (_QWORD)v64 )
        {
          v11 = (char *)(v64 - 1);
          v33 = &v19[v64 - 1];
          v17 += v64 - 1;
        }
        if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)v17 )
        {
          v57 = v33;
          v56 = v19;
          v55 = v17;
          v63 = qvector_reserve(&v63, v32, v17, 1);
          v33 = v57;
          v32 = v63;
          v19 = v56;
          v17 = v55;
        }
        *(_QWORD *)&v64 = v17;
        v33[v32] = 0;
        memcpy(&v11[v63], *(const void **)v29, (size_t)v19);
        v32 = v63;
      }
    }
    v29 += 24;
  }
  while ( v30 != v29 );
LABEL_46:
  v69 = v32;
  v35 = (const char *)&v65;
  LODWORD(s[0]) |= 0x400u;
  v65 = nullptr;
  *(_OWORD *)v66 = 0;
  v36 = sub_479A00(&v67, &v65, v17, v18, v19);
  LOBYTE(v11) = v36 != 0;
  if ( !v36 )
  {
    v51 = &s1;
    if ( v66[0] )
      v51 = (const char *)v65;
    v35 = s[1];
    sub_169700(
      (int)"failed to launch %s: %s\n",
      (__int64)s[1],
      (__int64)v51,
      v37,
      v38,
      v39,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v40,
      v41,
      a7,
      a8,
      (char)v55);
  }
  if ( v65 )
  {
    v66[0] = nullptr;
    qfree(v65, v35);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63, v35);
  }
  v42 = v61;
  if ( v61 )
  {
    v43 = v62;
    if ( (_QWORD)v62 )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 24 * v44);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v46, v35);
          v42 = v61;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v42, v35);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59, v35);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return (unsigned int)v11;
}
