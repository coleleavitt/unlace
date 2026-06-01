unsigned __int64 __fastcall sub_497250(
        __int64 a1,
        const char *p_ptr,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _BYTE *id; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  __int64 (*v17)(); // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  char *v23; // rdx
  char *v24; // rbp
  char *v25; // rbx
  char *v26; // rax
  __int64 v27; // rdi
  void **v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // r13
  size_t v33; // r14
  __int64 v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  char *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 *v49; // rax
  __int64 v50; // rdi
  char *v51; // [rsp+0h] [rbp-508h] BYREF
  __int128 v52; // [rsp+8h] [rbp-500h]
  void *v53; // [rsp+20h] [rbp-4E8h] BYREF
  __int128 v54; // [rsp+28h] [rbp-4E0h]
  void *ptr; // [rsp+40h] [rbp-4C8h] BYREF
  char *s[2]; // [rsp+48h] [rbp-4C0h]
  __int64 v57; // [rsp+58h] [rbp-4B0h]
  __int128 v58; // [rsp+60h] [rbp-4A8h]
  __int64 v59; // [rsp+70h] [rbp-498h]
  __int128 v60; // [rsp+78h] [rbp-490h]
  __int128 v61; // [rsp+88h] [rbp-480h]
  __int64 v62; // [rsp+98h] [rbp-470h]
  __int128 v63; // [rsp+A0h] [rbp-468h]
  int v64; // [rsp+B0h] [rbp-458h]
  char v65[1032]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v66; // [rsp+4C8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v11 = QT::QAbstractItemView::model((QT::QAbstractItemView *)a1);
  v12 = *(_QWORD **)(v11 + 216);
  if ( !v12 )
    v12 = *(_QWORD **)(v11 + 208);
  id = (_BYTE *)dirtree_get_id(*v12);
  if ( !id || !*id )
  {
    QT::QWidget::windowTitle((QT::QWidget *)&v53);
    v29 = &v53;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&v53);
    v32 = s[0];
    a3 = 0;
    v51 = nullptr;
    v52 = 0;
    if ( s[0] )
    {
      v33 = strlen(s[0]);
      v34 = v33 + 1;
    }
    else
    {
      v32 = (char *)&QT::QByteArray::_empty;
      if ( !&QT::QByteArray::_empty )
      {
LABEL_29:
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v53 && !_InterlockedSub((volatile signed __int32 *)v53, 1u) )
          free(v53);
        if ( (unsigned __int64)v52 <= 1 )
        {
          if ( !under_debugger )
            interr(40803, v29, v30, v31, 0.0);
          BUG();
        }
        *(double *)a3.m128_u64 = qsnprintf(v65, 1024, "$ dirtree/%s", v51);
        v35 = QT::QAbstractItemView::model((QT::QAbstractItemView *)a1);
        v36 = *(_QWORD **)(v35 + 216);
        if ( !v36 )
          v36 = *(_QWORD **)(v35 + 208);
        p_ptr = v65;
        dirtree_set_id(*v36, v65, *(double *)a3.m128_u64);
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          *(double *)a3.m128_u64 = qfree(v51, v65);
        }
        goto LABEL_5;
      }
      v34 = 1;
      v33 = 0;
    }
    v29 = (void **)v32;
    v51 = (char *)qvector_reserve(&v51, 0, v34, 1);
    *(_QWORD *)&v52 = v34;
    memmove(v51, v32, v33);
    v51[v33] = 0;
    goto LABEL_29;
  }
LABEL_5:
  v14 = QT::QAbstractItemView::model((QT::QAbstractItemView *)a1);
  v15 = *(_QWORD **)(v14 + 216);
  if ( !v15 )
    v15 = *(_QWORD **)(v14 + 208);
  if ( (unsigned __int8)load_dirtree(*v15) )
  {
    v16 = *(_QWORD *)(a1 + 224);
    *(_DWORD *)(a1 + 236) |= 1u;
    ptr = nullptr;
    v57 = 0;
    v59 = 0;
    v62 = 0;
    v64 = 0;
    v53 = nullptr;
    *(_OWORD *)s = 0;
    v58 = 0;
    v60 = 0;
    v61 = -1;
    v63 = 0;
    v54 = 0;
    v17 = *(__int64 (**)())(*(_QWORD *)v16 + 16LL);
    if ( v17 != sub_429F10 )
    {
      p_ptr = (const char *)&v53;
      if ( ((unsigned __int8 (__fastcall *)(__int64, void **))v17)(v16, &v53) )
      {
        p_ptr = (const char *)&v53;
        if ( (unsigned __int8)sub_48D5C0((__int64 *)&ptr, (const char **)&v53, v44, v45, 0.0) )
        {
          *(_DWORD *)(a1 + 236) |= 2u;
          p_ptr = (const char *)&ptr;
          sub_4971D0((QT::QAbstractItemView *)a1, (__int64)&ptr, 0.0, NAN, a5);
        }
      }
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53, p_ptr);
      }
      v46 = v62;
      if ( v62 )
      {
        v47 = v63;
        if ( (_QWORD)v63 )
        {
          v48 = 0;
          do
          {
            v49 = (__int64 *)(v46 + 48 * v48);
            v50 = *v49;
            if ( *v49 )
            {
              v49[1] = 0;
              qfree(v50, p_ptr);
              v46 = v62;
            }
            ++v48;
          }
          while ( v47 != v48 );
        }
        *(_QWORD *)&v63 = 0;
        qfree(v46, p_ptr);
      }
    }
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59, p_ptr);
    }
    v18 = v57;
    if ( v57 )
    {
      v19 = v58;
      if ( (_QWORD)v58 )
      {
        v20 = 0;
        do
        {
          v21 = (__int64 *)(v18 + 24 * v20);
          v22 = *v21;
          if ( *v21 )
          {
            v21[1] = 0;
            qfree(v22, p_ptr);
            v18 = v57;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v58 = 0;
      qfree(v18, p_ptr);
    }
    v23 = (char *)ptr;
    if ( ptr )
    {
      v24 = s[0];
      if ( s[0] )
      {
        v25 = nullptr;
        do
        {
          v26 = &v23[40 * (_QWORD)v25];
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            *((_QWORD *)v26 + 1) = 0;
            qfree(v27, p_ptr);
            v23 = (char *)ptr;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      s[0] = nullptr;
      qfree(v23, p_ptr);
    }
  }
  else
  {
    QT::QWidget::windowTitle((QT::QWidget *)&v53);
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&v53);
    v43 = s[0];
    if ( !s[0] )
      v43 = (char *)&QT::QByteArray::_empty;
    sub_169700(
      (int)"Failed to load \"%s\"'s status\n",
      (__int64)v43,
      v37,
      v38,
      v39,
      v40,
      a3,
      a4,
      a5,
      a6,
      v41,
      v42,
      a9,
      a10,
      (char)v51);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v53 && !_InterlockedSub((volatile signed __int32 *)v53, 1u) )
      free(v53);
  }
  return v66 - __readfsqword(0x28u);
}
