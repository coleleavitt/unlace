__int64 __fastcall sub_491EE0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // r15d
  unsigned __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r14
  const char *v21; // r15
  __int64 v22; // rsi
  char *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  char *v26; // rax
  const char *v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r14
  const char *v31; // rsi
  const char *v32; // rdx
  __int64 v33; // rdx
  char v34; // r15
  void *v35; // rdx
  const char *v36; // rsi
  __int64 v37; // rdx
  bool v38; // zf
  const char *v39; // rdx
  __int64 v40; // rsi
  const char *v41; // rsi
  unsigned __int8 v42; // al
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  char v50; // [rsp+0h] [rbp-168h]
  __int64 v51; // [rsp+8h] [rbp-160h]
  const char *v52; // [rsp+8h] [rbp-160h]
  volatile signed __int32 *v53; // [rsp+8h] [rbp-160h]
  __int64 v54; // [rsp+10h] [rbp-158h]
  unsigned int v55; // [rsp+10h] [rbp-158h]
  __int64 v56; // [rsp+18h] [rbp-150h]
  __int64 v57; // [rsp+18h] [rbp-150h]
  __int64 v58; // [rsp+30h] [rbp-138h] BYREF
  __int64 v59; // [rsp+38h] [rbp-130h]
  void *v60[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v61; // [rsp+50h] [rbp-118h]
  const char *v62; // [rsp+60h] [rbp-108h] BYREF
  __int128 v63; // [rsp+68h] [rbp-100h]
  const char *v64; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v65; // [rsp+88h] [rbp-E0h]
  const char *v66; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-C0h]
  __int64 v68; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-A0h]
  __int64 v70; // [rsp+D0h] [rbp-98h]
  void *v71[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-78h]
  _BYTE v73[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v74; // [rsp+128h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( a4 != 2 || *(int *)a2 < 0 || *(int *)(a2 + 4) < 0 || !*(_QWORD *)(a2 + 16) )
    return 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( HIDWORD(v15) == 0xFFFFFFFF )
  {
    v58 = -1;
    v59 = (unsigned int)v15;
    if ( !(_DWORD)v15 )
      goto LABEL_9;
    return 0;
  }
  v58 = HIDWORD(*(_QWORD *)(a2 + 8));
  v59 = (unsigned int)v15;
LABEL_9:
  QT::QVariant::toString((QT::QVariant *)v60);
  if ( !v61 )
    goto LABEL_70;
  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64, _QWORD))(*a1 + 144LL))(v73, a1, a2, 0);
  QT::QVariant::toString((QT::QVariant *)v71);
  if ( v72 != v61 )
  {
    if ( v71[0] && !_InterlockedSub((volatile signed __int32 *)v71[0], 1u) )
      free(v71[0]);
    QT::QVariant::~QVariant((QT::QVariant *)v73);
    goto LABEL_15;
  }
  v53 = (volatile signed __int32 *)v71[0];
  v34 = QT::QtPrivate::equalStrings(v72, v60[1], v72, v71[1]);
  if ( v53 && !_InterlockedSub(v53, 1u) )
    free(v71[0]);
  QT::QVariant::~QVariant((QT::QVariant *)v73);
  if ( v34 )
  {
LABEL_70:
    if ( v60[0] && !_InterlockedSub((volatile signed __int32 *)v60[0], 1u) )
      free(v60[0]);
    return 0;
  }
LABEL_15:
  v17 = (_QWORD *)a1[26];
  v63 = 0;
  v62 = nullptr;
  dirtree_get_abspath_by_cursor(&v62, *v17, &v58, 0);
  v18 = *(_QWORD *)a1[26];
  v68 = -1;
  LOBYTE(v69) = 0;
  dirtree_resolve_cursor(&v68, v18, &v58);
  v64 = nullptr;
  v65 = 0;
  if ( (_BYTE)v69 )
  {
    v19 = 14;
    v20 = 13;
    v21 = "Rename folder";
  }
  else
  {
    v19 = 12;
    v20 = 11;
    v21 = "Rename item";
  }
  v22 = 0;
  v51 = v19;
  v23 = (char *)qvector_reserve(&v64, 0, v19, 1);
  v64 = v23;
  v24 = (unsigned __int64)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)&v65 = v51;
  *(_QWORD *)v23 = *(_QWORD *)v21;
  v25 = *(_QWORD *)&v21[v20 - 8];
  *(_QWORD *)&v23[v20 - 8] = v25;
  v26 = &v23[-v24];
  v27 = (const char *)(v21 - v26);
  v28 = (v20 + (_DWORD)v26) & 0xFFFFFFF8;
  if ( v28 >= 8 )
  {
    v29 = v28 & 0xFFFFFFF8;
    LODWORD(v25) = 0;
    do
    {
      v22 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 8);
      *(_QWORD *)(v24 + v22) = *(_QWORD *)&v27[v22];
    }
    while ( (unsigned int)v25 < v29 );
  }
  v64[v20] = 0;
  v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned __int64, const char *))(QT::QCoreApplication::self[2]
                                                                                              + 88LL))(
          QT::QCoreApplication::self + 2,
          v22,
          v25,
          v24,
          v27);
  v31 = &s1;
  if ( (_QWORD)v65 )
    v31 = v64;
  v52 = (const char *)(*(__int64 (__fastcall **)(__int64, const char *, const char *))(*(_QWORD *)v30 + 88LL))(
                        v30,
                        v31,
                        v31);
  v32 = &s1;
  v66 = nullptr;
  v67 = 0;
  if ( (_QWORD)v63 )
    v32 = v62;
  v12 = sub_48E680((void **)&v66, nullptr, v32);
  v33 = 1;
  if ( (_BYTE)v12 )
  {
    v70 = 0;
    QT::QString::toUtf8_helper((QT::QString *)v71, (const QT::QString *)v60);
    v35 = v71[1];
    if ( !v71[1] )
      v35 = &QT::QByteArray::_empty;
    v36 = &s1;
    if ( (_QWORD)v67 )
      v36 = v66;
    v68 = 0;
    v69 = 0;
    sub_48E5C0(&v68, v36, v35, 0);
    v37 = v69;
    v54 = v68;
    if ( v71[0] && !_InterlockedSub((volatile signed __int32 *)v71[0], 1u) )
    {
      v56 = v37;
      free(v71[0]);
      v37 = v56;
    }
    v38 = v37 == 0;
    v39 = &s1;
    if ( !v38 )
      v39 = (const char *)v54;
    v40 = *(_QWORD *)a1[26];
    LOBYTE(v71[1]) = 0;
    v57 = (__int64)v39;
    v71[0] = (void *)-1LL;
    dirtree_resolve_path(v71, v40, v39, 0.0);
    if ( v71[0] == (void *)-1LL )
    {
      v41 = &s1;
      if ( (_QWORD)v63 )
        v41 = v62;
      v42 = dirtree_rename(*(_QWORD *)a1[26], v41, v57);
      v43 = v42;
      if ( !v42 )
      {
        v33 = 0;
LABEL_62:
        v44 = v54;
        if ( v54 )
        {
          v55 = v33;
          qfree(v44, v41);
          v33 = v55;
        }
        goto LABEL_25;
      }
    }
    else
    {
      v43 = 1;
    }
    v45 = dirtree_errstr(v43);
    v41 = &s1;
    if ( (_QWORD)v63 )
      v41 = v62;
    sub_169700(
      (int)"Cannot rename \"%s\" to \"%s\": %s\n",
      (__int64)v41,
      v57,
      v45,
      v46,
      v47,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v48,
      v49,
      a11,
      a12,
      v50);
    v33 = 1;
    v12 = 0;
    goto LABEL_62;
  }
LABEL_25:
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v30 + 96LL))(v30, v52, v33);
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66, v52);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, v52);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v52);
  }
  if ( v60[0] && !_InterlockedSub((volatile signed __int32 *)v60[0], 1u) )
    free(v60[0]);
  if ( !(_BYTE)v12 )
    return 0;
  *(_OWORD *)v71 = 0;
  v72 = 0;
  QT::QAbstractItemModel::dataChanged(a1, a2, a2, v71);
  if ( v71[0] && !_InterlockedSub((volatile signed __int32 *)v71[0], 1u) )
    free(v71[0]);
  return v12;
}
