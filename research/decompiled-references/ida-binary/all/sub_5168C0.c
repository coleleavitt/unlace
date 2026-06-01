__int64 __fastcall sub_5168C0(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __m128 v14; // xmm0
  unsigned __int64 v17; // r12
  const char *v18; // rsi
  __int64 v19; // rax
  const char *v20; // r12
  size_t v21; // rax
  size_t v22; // r13
  size_t v23; // rdx
  size_t v24; // rax
  const char *v25; // r12
  const void *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  const char *v34; // rsi
  size_t v35; // rdx
  size_t v36; // rax
  const char *v37; // rbx
  QT::QGuiApplication *v38; // rdi
  __int64 v39; // rdx
  const char *v40; // r12
  __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v45; // r8
  unsigned __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r13
  unsigned __int64 v51; // rdx
  size_t v52; // r10
  size_t v53; // r11
  QT::QGuiApplication *v54; // rsi
  QT::QGuiApplication *v55; // rsi
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rdx
  const char *v58; // r14
  void *v59; // rdi
  __int64 v60; // rax
  void *v61; // rdi
  size_t v62; // r14
  char v63; // [rsp-8h] [rbp-118h]
  unsigned __int8 v64; // [rsp+Fh] [rbp-101h]
  unsigned __int64 v65; // [rsp+10h] [rbp-100h]
  size_t v66; // [rsp+18h] [rbp-F8h]
  size_t v67; // [rsp+30h] [rbp-E0h]
  _BYTE v68[16]; // [rsp+38h] [rbp-D8h] BYREF
  _BYTE v69[16]; // [rsp+48h] [rbp-C8h] BYREF
  void *src; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v71; // [rsp+60h] [rbp-B0h]
  __int64 v72; // [rsp+78h] [rbp-98h] BYREF
  __int128 v73; // [rsp+80h] [rbp-90h]
  QT::QGuiApplication *v74; // [rsp+98h] [rbp-78h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-70h]
  void *ptr[11]; // [rsp+B8h] [rbp-58h] BYREF

  v14 = 0;
  ptr[3] = (void *)__readfsqword(0x28u);
  v71 = 0;
  src = nullptr;
  if ( a2 )
  {
    v17 = a2[1];
    if ( v17 > 1 )
    {
      v26 = (const void *)*a2;
      src = (void *)qvector_reserve(&src, 0, a2[1], 1);
      *(_QWORD *)&v71 = v17;
      memmove(src, v26, v17 - 1);
      *((char *)src + v17 - 1) = 0;
      v27 = v71;
      if ( (unsigned __int64)v71 > 1 )
        goto LABEL_8;
    }
  }
  v18 = "*.log";
  v19 = sub_17CD60(
          1u,
          (int)"*.log",
          (int)"Please select an output file",
          a12,
          a13,
          a14,
          (__m128)0LL,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v63);
  v20 = (const char *)v19;
  if ( !v19
    || (unsigned __int8)qfileexist(v19)
    && (v18 = "Cancel",
        (unsigned int)sub_22EDE0(
                        (int)"~O~verride",
                        (int)"Cancel",
                        0,
                        1,
                        (int)"HIDECANCEL\nFile %s already exists.\nDo you want to overwrite it?",
                        v20) != 1) )
  {
    LODWORD(v37) = 0;
    goto LABEL_39;
  }
  v21 = strlen(v20);
  v22 = v21;
  if ( !v21 )
  {
    *(_QWORD *)&v71 = 0;
    LOBYTE(v23) = 0;
    v24 = 0;
    v25 = &s1;
    goto LABEL_9;
  }
  v61 = src;
  v62 = v21 + 1;
  if ( *((_QWORD *)&v71 + 1) < v21 + 1 )
  {
    src = (void *)qvector_reserve(&src, src, v62, 1);
    v61 = src;
  }
  *(_QWORD *)&v71 = v62;
  memmove(v61, v20, v22);
  *((_BYTE *)src + v22) = 0;
  v27 = v71;
  if ( (_QWORD)v71 )
  {
LABEL_8:
    v24 = v27 - 1;
    v25 = (const char *)src;
    v23 = v24 >> 63;
  }
  else
  {
    LOBYTE(v23) = 0;
    v24 = 0;
    v25 = &s1;
  }
LABEL_9:
  if ( !v25 || (_BYTE)v23 )
  {
    v24 = 0;
    if ( v25 )
      v24 = strlen(v25);
  }
  *(double *)v14.m128_u64 = QT::QString::fromUtf8(ptr, v24, v25);
  QT::QFile::QFile((QT::QFile *)v68, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v64 = QT::QFile::open(v68, 18, *(double *)v14.m128_u64);
  if ( !v64 )
  {
    v34 = &s1;
    if ( (_QWORD)v71 )
      v34 = (const char *)src;
    sub_169630(
      (int)"Failed to save to log file: %s",
      (__int64)v34,
      v28,
      v29,
      v30,
      v31,
      v14,
      a4,
      a5,
      a6,
      v32,
      v33,
      a9,
      a10,
      v63);
  }
  QT::QTextStream::QTextStream(v69, v68);
  QT::QCursor::QCursor(ptr, (char *)&dword_0 + 3);
  QT::QGuiApplication::setOverrideCursor((QT::QGuiApplication *)ptr, (const QT::QCursor *)((char *)&dword_0 + 3));
  QT::QCursor::~QCursor((QT::QCursor *)ptr);
  v72 = 0;
  v73 = 0;
  sub_511E90(a1 + 40, &v72);
  v74 = nullptr;
  v75 = 0;
  if ( !(_QWORD)v73 )
    goto LABEL_19;
  v45 = v72;
  v46 = v73 - 1;
  v47 = v72 + 24 * v73;
  if ( v72 == v47 )
  {
    if ( (_QWORD)v73 == 1 )
      goto LABEL_19;
LABEL_66:
    v74 = (QT::QGuiApplication *)qvector_reserve(&v74, 0, v46, 1);
    v45 = v72;
    v46 = v75;
    v47 = v72 + 24 * v73;
    if ( v72 == v47 )
      goto LABEL_67;
    goto LABEL_50;
  }
  v48 = v72;
  do
  {
    v49 = *(_QWORD *)(v48 + 8);
    if ( v49 )
      v46 = v46 + v49 - 1;
    v48 += 24;
  }
  while ( v47 != v48 );
  if ( v46 )
    goto LABEL_66;
LABEL_50:
  v50 = v45;
  do
  {
    if ( v46 > 1 )
    {
      v55 = v74;
      v56 = v46 - 1;
      v57 = v46 + 1;
      if ( *((_QWORD *)&v75 + 1) < v46 + 1 )
      {
        v74 = (QT::QGuiApplication *)qvector_reserve(&v74, v74, v57, 1);
        v56 = v46 - 1;
        v55 = v74;
        v57 = v46 + 1;
      }
      *(_QWORD *)&v75 = v57;
      *((_BYTE *)v55 + v46) = 0;
      *((_BYTE *)v74 + v56) = 10;
      v46 = v75;
    }
    v51 = *(_QWORD *)(v50 + 8);
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v51 != 1 )
      {
        v53 = v51 - 1;
        if ( v46 )
        {
          --v46;
          v53 = v52 + v46;
          v51 += v46;
        }
        v54 = v74;
        if ( *((_QWORD *)&v75 + 1) < v51 )
        {
          v67 = v52;
          v66 = v53;
          v65 = v51;
          v74 = (QT::QGuiApplication *)qvector_reserve(&v74, v74, v51, 1);
          v52 = v67;
          v54 = v74;
          v53 = v66;
          v51 = v65;
        }
        *(_QWORD *)&v75 = v51;
        *((_BYTE *)v54 + v53) = 0;
        memcpy((char *)v74 + v46, *(const void **)v50, v52);
        v46 = v75;
      }
    }
    v50 += 24;
  }
  while ( v47 != v50 );
LABEL_67:
  if ( v46 )
  {
    v36 = v46 - 1;
    v37 = (const char *)v74;
    v35 = v36 >> 63;
    goto LABEL_20;
  }
LABEL_19:
  LOBYTE(v35) = 0;
  v36 = 0;
  v37 = &s1;
LABEL_20:
  if ( !v37 || (_BYTE)v35 )
  {
    v36 = 0;
    if ( v37 )
      v36 = strlen(v37);
  }
  *(double *)v14.m128_u64 = QT::QString::fromUtf8(ptr, v36, v37);
  v18 = (const char *)ptr;
  QT::QTextStream::operator<<(v69, ptr, *(double *)v14.m128_u64);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v38 = v74;
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    *(double *)v14.m128_u64 = qfree(v74, (const char *)ptr);
  }
  QT::QGuiApplication::restoreOverrideCursor(v38);
  v39 = v72;
  if ( v72 )
  {
    v40 = (const char *)v73;
    if ( (_QWORD)v73 )
    {
      v37 = nullptr;
      do
      {
        v41 = (__int64 *)(v39 + 24LL * (_QWORD)v37);
        v42 = *v41;
        if ( *v41 )
        {
          v41[1] = 0;
          *(double *)v14.m128_u64 = qfree(v42, (const char *)ptr, *(double *)v14.m128_u64);
          v39 = v72;
        }
        ++v37;
      }
      while ( v40 != v37 );
    }
    *(_QWORD *)&v73 = 0;
    *(double *)v14.m128_u64 = qfree(v39, (const char *)ptr, *(double *)v14.m128_u64);
  }
  QT::QTextStream::~QTextStream((QT::QTextStream *)v69);
  QT::QFile::~QFile((QT::QFile *)v68);
  LOBYTE(v37) = v64 & (a2 != nullptr);
  if ( (_BYTE)v37 )
  {
    v43 = v71;
    if ( (unsigned __int64)v71 > 1 )
    {
      v58 = (const char *)src;
      v59 = (void *)*a2;
      if ( a2[2] < (unsigned __int64)v71 )
      {
        v60 = qvector_reserve(a2, *a2, v71, 1);
        *a2 = v60;
        v59 = (void *)v60;
      }
      a2[1] = v43;
      v18 = v58;
      memmove(v59, v58, v43 - 1);
      *(_BYTE *)(*a2 + v43 - 1) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  else
  {
    LODWORD(v37) = v64;
  }
LABEL_39:
  if ( src )
  {
    *(_QWORD *)&v71 = 0;
    qfree(src, v18, *(double *)v14.m128_u64);
  }
  return (unsigned int)v37;
}
