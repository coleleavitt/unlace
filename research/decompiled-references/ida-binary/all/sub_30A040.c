unsigned __int64 __fastcall sub_30A040(char *s, double a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  const char *path; // rbp
  __int64 v10; // rax
  const char *v11; // r14
  size_t v12; // rax
  double v13; // xmm0_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  size_t v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  double v26; // xmm0_8
  void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  QT::QWidget *v33; // rbp
  double v34; // xmm0_8
  void *v35; // rdx
  void **v36; // rbx
  void **v37; // rbp
  const char *file_ext; // rdi
  double v39; // xmm0_8
  size_t v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  void **v46; // rbp
  void **v47; // r14
  size_t v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  void *ptr[2]; // [rsp+10h] [rbp-10E8h] BYREF
  __int64 v55; // [rsp+20h] [rbp-10D8h]
  void *v56[2]; // [rsp+30h] [rbp-10C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-10B8h]
  void *v58[4]; // [rsp+50h] [rbp-10A8h] BYREF
  void *v59; // [rsp+70h] [rbp-1088h] BYREF
  void *v60; // [rsp+78h] [rbp-1080h]
  __int64 v61; // [rsp+80h] [rbp-1078h]
  __m128i v62[2]; // [rsp+90h] [rbp-1068h] BYREF
  char sa[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v64; // [rsp+10B8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited(a2) )
  {
    v55 = 0;
    *(_OWORD *)ptr = 0;
    QT::QString::fromUtf8(v62, 3, "IDA");
    sub_1D5280((__m128i *)ptr, v55, v62, v4, v5, v6);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v7, v8);
    if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
      free((void *)v62[0].m128i_i64[0]);
    path = (const char *)get_path(dword_8CD7E0 == 0);
    v10 = qbasename(path);
    v57 = 0;
    v11 = (const char *)v10;
    v12 = 0;
    *(_OWORD *)v56 = 0;
    if ( v11 )
      v12 = strlen(v11);
    v13 = QT::QString::fromUtf8(v62, v12, v11);
    sub_1D5280((__m128i *)v56, v57, v62, v14, v15, v16);
    if ( !v56[0] || *(int *)v56[0] > 1 )
      sub_1B21C0((__m128i *)v56, 0, 0, 0, v17, v18);
    if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
      free((void *)v62[0].m128i_i64[0]);
    if ( (!dword_8CD7E0 || (unsigned __int8)is_database_flag(8)) && get_root_filename(sa, 4096) > 0 )
    {
      file_ext = (const char *)get_file_ext(sa);
      if ( !file_ext || strcmp(file_ext, "idb") )
      {
        v39 = QT::QString::fromUtf8(v58, 4, "(%1)", v13);
        v40 = strlen(sa);
        v13 = QT::QString::fromUtf8(&v59, v40, sa, v39);
        QT::QString::arg(v62, v58, &v59, 0, 32, v13);
        sub_1D5280((__m128i *)v56, v57, v62, v41, v42, v43);
        if ( !v56[0] || *(int *)v56[0] > 1 )
          sub_1B21C0((__m128i *)v56, 0, 0, 0, v44, v45);
        if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
          free((void *)v62[0].m128i_i64[0]);
        if ( v59 && !_InterlockedSub((volatile signed __int32 *)v59, 1u) )
          free(v59);
        if ( v58[0] && !_InterlockedSub((volatile signed __int32 *)v58[0], 1u) )
          free(v58[0]);
      }
    }
    v19 = 0;
    if ( path )
      v19 = strlen(path);
    v20 = QT::QString::fromUtf8(v62, v19, path, v13);
    sub_1D5280((__m128i *)v56, v57, v62, v21, v22, v23);
    if ( !v56[0] || *(int *)v56[0] > 1 )
      sub_1B21C0((__m128i *)v56, 0, 0, 0, v24, v25);
    if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
      free((void *)v62[0].m128i_i64[0]);
    v26 = QT::QString::fromUtf8(&v59, 1, " ", v20);
    v27 = v60;
    if ( !v60 )
      v27 = &QT::QString::_empty;
    QT::QtPrivate::QStringList_join(v62, v56, v27, v61, v26);
    sub_1D5280((__m128i *)ptr, v55, v62, v28, v29, v30);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v31, v32);
    if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
      free((void *)v62[0].m128i_i64[0]);
    if ( v59 && !_InterlockedSub((volatile signed __int32 *)v59, 1u) )
      free(v59);
    if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    {
      v46 = (void **)v56[1];
      v47 = (void **)((char *)v56[1] + 24 * v57);
      if ( v56[1] != v47 )
      {
        do
        {
          if ( *v46 && !_InterlockedSub((volatile signed __int32 *)*v46, 1u) )
            free(*v46);
          v46 += 3;
        }
        while ( v47 != v46 );
      }
      free(v56[0]);
    }
    if ( s && *s )
    {
      v48 = strlen(s);
      QT::QString::fromUtf8(v62, v48, s);
      sub_1D5280((__m128i *)ptr, v55, v62, v49, v50, v51);
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_1B21C0((__m128i *)ptr, 0, 0, 0, v52, v53);
      if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
        free((void *)v62[0].m128i_i64[0]);
    }
    v33 = qword_8CD748;
    v34 = QT::QString::fromUtf8(&v59, 3, " - ");
    v35 = v60;
    if ( !v60 )
      v35 = &QT::QString::_empty;
    QT::QtPrivate::QStringList_join(v62, ptr, v35, v61, v34);
    QT::QWidget::setWindowTitle(v33, (const QT::QString *)v62);
    if ( v62[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v62[0].m128i_i64[0], 1u) )
      free((void *)v62[0].m128i_i64[0]);
    if ( v59 && !_InterlockedSub((volatile signed __int32 *)v59, 1u) )
      free(v59);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v36 = (void **)ptr[1];
      v37 = (void **)((char *)ptr[1] + 24 * v55);
      if ( ptr[1] != v37 )
      {
        do
        {
          if ( *v36 && !_InterlockedSub((volatile signed __int32 *)*v36, 1u) )
            free(*v36);
          v36 += 3;
        }
        while ( v37 != v36 );
      }
      free(ptr[0]);
    }
  }
  return v64 - __readfsqword(0x28u);
}
