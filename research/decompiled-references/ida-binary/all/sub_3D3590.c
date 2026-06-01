QT::QStandardItemModel *__fastcall sub_3D3590(QT::QObject *a1, char a2)
{
  __int64 v4; // rdx
  const char **v5; // r12
  QT::QStandardItem *v6; // rax
  const char *v7; // rbp
  QT::QStandardItem *v8; // rbx
  size_t v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v16; // rdi
  unsigned int v17; // ebx
  QT::QStandardItem *v18; // rsi
  const char *v19; // rsi
  QT::QStandardItem *v20; // rbp
  size_t v21; // rax
  char *v22; // r13
  unsigned __int64 v23; // rcx
  double v24; // xmm0_8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  const char *v31; // rsi
  _WORD *v32; // rax
  char *v33; // rbp
  char *v34; // r13
  __int64 v35; // r12
  char *v36; // r8
  __int64 v37; // rsi
  void *v38; // rdi
  _BYTE *v39; // rax
  char *v40; // r12
  char *v41; // r13
  __int64 v42; // rbp
  char *v43; // r8
  __int64 v44; // rsi
  const char **v45; // r12
  QT::QStandardItem *v46; // rax
  const char *v47; // rbp
  QT::QStandardItem *v48; // rbx
  size_t v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r9
  char *v55; // rbp
  char *v56; // r13
  __int64 v57; // r12
  char *v58; // r8
  __int64 v59; // rsi
  QT::QStandardItemModel *v60; // [rsp+8h] [rbp-120h]
  unsigned int ordinal_limit; // [rsp+18h] [rbp-110h]
  unsigned int v62; // [rsp+20h] [rbp-108h]
  char *v63; // [rsp+20h] [rbp-108h]
  char *v64; // [rsp+20h] [rbp-108h]
  char *v65; // [rsp+20h] [rbp-108h]
  __int64 v67; // [rsp+38h] [rbp-F0h] BYREF
  char v68[8]; // [rsp+40h] [rbp-E8h] BYREF
  QT::QStandardItem *v69; // [rsp+48h] [rbp-E0h] BYREF
  char *s; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+58h] [rbp-D0h]
  QT::QStandardItem *v72; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v73; // [rsp+78h] [rbp-B0h]
  void *v74[4]; // [rsp+90h] [rbp-98h] BYREF
  void *ptr[4]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v76[24]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v77; // [rsp+E8h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  v60 = (QT::QStandardItemModel *)operator new(0x10u);
  QT::QStandardItemModel::QStandardItemModel(v60, a1);
  *(_QWORD *)v60 = &off_873CB8;
  if ( a2 )
  {
    v5 = (const char **)off_8692C0;
    do
    {
      v6 = (QT::QStandardItem *)operator new(0x10u);
      v7 = *v5;
      v8 = v6;
      v9 = 0;
      if ( *v5 )
        v9 = strlen(*v5);
      QT::QString::fromUtf8(v74, v9, v7);
      QT::QStandardItem::QStandardItem(v8, (const QT::QString *)v74);
      v72 = v8;
      memset(ptr, 0, 24);
      sub_3D32B0((int **)ptr, nullptr, (__int64 *)&v72, v10, v11, v12);
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_3D2ED0((__int64)ptr, 0, 0, 0, v13, v14);
      QT::QStandardItemModel::appendRow(v60, ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
        free(v74[0]);
      ++v5;
    }
    while ( v5 != (const char **)off_8692E0 );
    return v60;
  }
  v16 = nullptr;
  ordinal_limit = get_ordinal_limit(0, a1, v4, &off_873CB8);
  if ( ordinal_limit > 1 )
  {
    v17 = 1;
    while ( 1 )
    {
      v67 = 0;
      LOWORD(ptr[2]) = 257;
      ptr[1] = (void *)v17;
      ptr[0] = (void *)get_idati(v16);
      if ( (unsigned __int8)create_tinfo(&v67, 61, 189, ptr) )
        break;
LABEL_40:
      v16 = &v67;
      ++v17;
      clear_tinfo_t(&v67);
      if ( ordinal_limit == v17 )
        goto LABEL_69;
    }
    v30 = v67;
    s = nullptr;
    v71 = 0;
    if ( (v67 & 0x100) != 0 )
    {
      get_tinfo_pdata(&s, v67, 0);
      v30 = v67;
    }
    v72 = nullptr;
    v73 = 0;
    if ( get_tinfo_property(v30, 288) )
    {
      v18 = v72;
      if ( *((_QWORD *)&v73 + 1) <= 7u )
      {
        v72 = (QT::QStandardItem *)qvector_reserve(&v72, v72, 8, 1);
        v18 = v72;
      }
      *(_QWORD *)&v73 = 8;
      *(_DWORD *)v18 = 1701869940;
      *(_DWORD *)((char *)v18 + 3) = 1717920869;
      *((_BYTE *)v72 + 7) = 0;
      goto LABEL_21;
    }
    if ( (get_tinfo_property(v67, 2) & 0x3F) == 0xD )
    {
      v31 = nullptr;
      memset(ptr, 0, 24);
      v32 = (_WORD *)qvector_reserve(ptr, 0, 7, 1);
      ptr[0] = v32;
      ptr[1] = &byte_7;
      *(_DWORD *)v32 = 1970435187;
      v32[2] = 29795;
      *((_BYTE *)ptr[0] + 6) = 0;
      v33 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v34 = (char *)ptr[1] - 1;
        if ( ptr[1] != (char *)&dword_0 + 1 )
        {
          v35 = v73;
          v36 = (char *)ptr[1] - 1;
          if ( (_QWORD)v73 )
          {
            v35 = v73 - 1;
            v36 = &v34[v73 - 1];
            v33 = (char *)ptr[1] + v73 - 1;
          }
          v37 = (__int64)v72;
          if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)v33 )
          {
            v63 = v36;
            v72 = (QT::QStandardItem *)qvector_reserve(&v72, v72, v33, 1);
            v36 = v63;
            v37 = (__int64)v72;
          }
          *(_QWORD *)&v73 = v33;
          v36[v37] = 0;
          v31 = (const char *)ptr[0];
          memcpy((char *)v72 + v35, ptr[0], (size_t)v34);
        }
      }
      v38 = ptr[0];
      if ( !ptr[0] )
        goto LABEL_21;
    }
    else if ( (get_tinfo_property(v67, 2) & 0x3F) == 0x2D )
    {
      v31 = nullptr;
      memset(ptr, 0, 24);
      ptr[0] = (void *)qvector_reserve(ptr, 0, 5, 1);
      ptr[1] = &byte_5;
      strcpy((char *)ptr[0], "enum");
      v55 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v56 = (char *)ptr[1] - 1;
        if ( ptr[1] != (char *)&dword_0 + 1 )
        {
          v57 = v73;
          v58 = (char *)ptr[1] - 1;
          if ( (_QWORD)v73 )
          {
            v57 = v73 - 1;
            v58 = &v56[v73 - 1];
            v55 = (char *)ptr[1] + v73 - 1;
          }
          v59 = (__int64)v72;
          if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)v55 )
          {
            v64 = v58;
            v72 = (QT::QStandardItem *)qvector_reserve(&v72, v72, v55, 1);
            v58 = v64;
            v59 = (__int64)v72;
          }
          *(_QWORD *)&v73 = v55;
          v58[v59] = 0;
          v31 = (const char *)ptr[0];
          memcpy((char *)v72 + v57, ptr[0], (size_t)v56);
        }
      }
      v38 = ptr[0];
      if ( !ptr[0] )
        goto LABEL_21;
    }
    else
    {
      if ( (get_tinfo_property(v67, 2) & 0x3F) != 0x1D )
        goto LABEL_21;
      v31 = nullptr;
      memset(ptr, 0, 24);
      v39 = (_BYTE *)qvector_reserve(ptr, 0, 6, 1);
      ptr[0] = v39;
      ptr[1] = &byte_6;
      *(_DWORD *)v39 = 1869180533;
      v39[4] = 110;
      *((_BYTE *)ptr[0] + 5) = 0;
      v40 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v41 = (char *)ptr[1] - 1;
        if ( ptr[1] != (char *)&dword_0 + 1 )
        {
          v42 = v73;
          v43 = (char *)ptr[1] - 1;
          if ( (_QWORD)v73 )
          {
            v42 = v73 - 1;
            v43 = &v41[v73 - 1];
            v40 = (char *)ptr[1] + v73 - 1;
          }
          v44 = (__int64)v72;
          if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)v40 )
          {
            v65 = v43;
            v72 = (QT::QStandardItem *)qvector_reserve(&v72, v72, v40, 1);
            v43 = v65;
            v44 = (__int64)v72;
          }
          *(_QWORD *)&v73 = v40;
          v43[v44] = 0;
          v31 = (const char *)ptr[0];
          memcpy((char *)v72 + v42, ptr[0], (size_t)v41);
        }
      }
      v38 = ptr[0];
      if ( !ptr[0] )
        goto LABEL_21;
    }
    ptr[1] = nullptr;
    qfree(v38, v31);
LABEL_21:
    v19 = &s1;
    if ( (_QWORD)v73 )
      v19 = (const char *)v72;
    v62 = sub_47A0E0(QT::QCoreApplication::self, v19, "resources/widgets");
    v20 = (QT::QStandardItem *)operator new(0x10u);
    if ( (_QWORD)v71 )
    {
      v21 = v71 - 1;
      v22 = s;
      v23 = (unsigned __int64)(v71 - 1) >> 63;
    }
    else
    {
      LOBYTE(v23) = a2;
      v21 = 0;
      v22 = (char *)&s1;
    }
    if ( !v22 || (_BYTE)v23 )
    {
      v21 = 0;
      if ( v22 )
        v21 = strlen(v22);
    }
    v24 = QT::QString::fromUtf8(v74, v21, v22);
    (*(void (__fastcall **)(char *, _QWORD *, _QWORD, double))(*QT::QCoreApplication::self + 136LL))(
      v68,
      QT::QCoreApplication::self,
      v62,
      v24);
    QT::QStandardItem::QStandardItem(v20, (const QT::QIcon *)v68, (const QT::QString *)v74);
    v69 = v20;
    memset(ptr, 0, 24);
    sub_3D32B0((int **)ptr, nullptr, (__int64 *)&v69, v25, v26, v27);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_3D2ED0((__int64)ptr, 0, 0, 0, v28, v29);
    QT::QStandardItemModel::appendRow(v60, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QIcon::~QIcon((QT::QIcon *)v68);
    if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
      free(v74[0]);
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      v24 = qfree(v72, (const char *)ptr);
    }
    if ( s )
    {
      *(_QWORD *)&v71 = 0;
      qfree(s, (const char *)ptr, v24);
    }
    goto LABEL_40;
  }
LABEL_69:
  QT::QPixmap::QPixmap((QT::QPixmap *)&v72, 16, 16);
  QT::QColor::QColor(v76, 19);
  QT::QPixmap::fill((QT::QPixmap *)&v72, (const QT::QColor *)v76);
  QT::QIcon::QIcon((QT::QIcon *)&v69, (const QT::QPixmap *)&v72);
  v45 = (const char **)off_8692E0;
  do
  {
    v46 = (QT::QStandardItem *)operator new(0x10u);
    v47 = *v45;
    v48 = v46;
    v49 = 0;
    if ( *v45 )
      v49 = strlen(*v45);
    QT::QString::fromUtf8(v74, v49, v47);
    QT::QStandardItem::QStandardItem(v48, (const QT::QIcon *)&v69, (const QT::QString *)v74);
    s = (char *)v48;
    memset(ptr, 0, 24);
    sub_3D32B0((int **)ptr, nullptr, (__int64 *)&s, v50, v51, v52);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_3D2ED0((__int64)ptr, 0, 0, 0, v53, v54);
    QT::QStandardItemModel::appendRow(v60, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v74[0] && !_InterlockedSub((volatile signed __int32 *)v74[0], 1u) )
      free(v74[0]);
    ++v45;
  }
  while ( v45 != (const char **)off_869700 );
  QT::QIcon::~QIcon((QT::QIcon *)&v69);
  QT::QPixmap::~QPixmap((QT::QPixmap *)&v72);
  return v60;
}
