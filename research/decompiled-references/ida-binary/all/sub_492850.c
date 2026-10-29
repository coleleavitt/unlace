__int64 __fastcall sub_492850(
        QT::QAbstractItemView *this,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  _QWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (*v18)(); // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  char *v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rbx
  char *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  void *v41; // rsi
  volatile signed __int32 *v42; // rax
  _QWORD v43[4]; // [rsp+0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v45; // [rsp+28h] [rbp-D0h]
  __int64 v46; // [rsp+38h] [rbp-C0h]
  void **v47; // [rsp+40h] [rbp-B8h]
  void *v48; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+58h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-90h]
  __int128 v51; // [rsp+70h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-78h]
  __int128 v53; // [rsp+88h] [rbp-70h]
  __int128 v54; // [rsp+98h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-50h]
  __int128 v56; // [rsp+B0h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v58; // [rsp+C8h] [rbp-30h]

  v58 = __readfsqword(0x28u);
  v9 = QT::QAbstractItemView::model(this);
  v10 = *(_QWORD **)(v9 + 216);
  v11 = v9;
  if ( v10 )
  {
    delete_dirtree(*v10);
    operator delete(v10, 8u);
  }
  *(_QWORD *)(v11 + 216) = 0;
  v12 = QT::QAbstractItemView::model(this);
  v13 = *(_QWORD **)(v12 + 216);
  if ( !v13 )
    v13 = *(_QWORD **)(v12 + 208);
  v14 = save_dirtree(*v13);
  if ( (_BYTE)v14 )
  {
    *(_QWORD *)&v45 = this;
    v48 = nullptr;
    v50 = 0;
    v52 = 0;
    v55 = 0;
    v57 = 16;
    ptr = dirtree_widget_qmodel_visitor_t___vtable;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    v54 = -1;
    v56 = 0;
    *((_QWORD *)&v45 + 1) = QT::QAbstractItemView::model(this);
    v15 = QT::QAbstractItemView::model(this);
    v16 = *(_QWORD *)(v15 + 216);
    if ( !v16 )
      v16 = *(_QWORD *)(v15 + 208);
    v46 = v16;
    ptr = base_dirtree_widget_t::collect_tree_state;
    v43[1] = 0xFFFFFFFF00000000LL;
    v47 = &v48;
    v43[0] = 0;
    v43[2] = *((_QWORD *)&v45 + 1);
    sub_48A940((_QWORD **)&ptr, (__int64)v43);
    ptr = nullptr;
    v45 = 0;
    sub_48CD60((__int64 *)&v48, (__int64)&ptr);
    v17 = *((_QWORD *)this + 28);
    v18 = *(__int64 (**)())(*(_QWORD *)v17 + 40LL);
    if ( v18 != sub_429F20 )
      ((void (__fastcall *)(__int64, void **))v18)(v17, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v45 = 0;
      qfree(ptr, (const char *)&ptr);
    }
    v19 = v55;
    if ( v55 )
    {
      v20 = v56;
      if ( (_QWORD)v56 )
      {
        v21 = 0;
        do
        {
          v22 = (__int64 *)(v19 + 48 * v21);
          v23 = *v22;
          if ( *v22 )
          {
            v22[1] = 0;
            qfree(v23, (const char *)&ptr);
            v19 = v55;
          }
          ++v21;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v56 = 0;
      qfree(v19, (const char *)&ptr);
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52, (const char *)&ptr);
    }
    v24 = v50;
    if ( v50 )
    {
      v25 = v51;
      if ( (_QWORD)v51 )
      {
        v26 = 0;
        do
        {
          v27 = (__int64 *)(v24 + 24 * v26);
          v28 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            qfree(v28, (const char *)&ptr);
            v24 = v50;
          }
          ++v26;
        }
        while ( v25 != v26 );
      }
      *(_QWORD *)&v51 = 0;
      qfree(v24, (const char *)&ptr);
    }
    v29 = (char *)v48;
    if ( v48 )
    {
      v30 = v49;
      if ( (_QWORD)v49 )
      {
        v31 = 0;
        do
        {
          v32 = &v29[40 * v31];
          v33 = *(_QWORD *)v32;
          if ( *(_QWORD *)v32 )
          {
            *((_QWORD *)v32 + 1) = 0;
            qfree(v33, (const char *)&ptr);
            v29 = (char *)v48;
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v49 = 0;
      qfree(v29, (const char *)&ptr);
    }
  }
  else
  {
    QT::QWidget::windowTitle((QT::QWidget *)&ptr);
    QT::QString::toUtf8_helper((QT::QString *)&v48, (const QT::QString *)&ptr);
    v41 = (void *)v49;
    if ( !(_QWORD)v49 )
      v41 = &QT::QByteArray::_empty;
    sub_169700(
      (int)"Failed to save \"%s\"'s status\n",
      (__int64)v41,
      v35,
      v36,
      v37,
      v38,
      a2,
      a3,
      a4,
      a5,
      v39,
      v40,
      a8,
      a9,
      v43[0]);
    if ( v48 && !_InterlockedSub((volatile signed __int32 *)v48, 1u) )
    {
      free(v48);
      v42 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        return v14;
    }
    else
    {
      v42 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        return v14;
    }
    if ( !_InterlockedSub(v42, 1u) )
      free(ptr);
  }
  return v14;
}
