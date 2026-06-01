__int64 __fastcall sub_522AA0(QT::QAbstractItemView *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, void **); // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int i; // ebx
  size_t v13; // rax
  const char *v14; // r8
  size_t v15; // r9
  __int64 v16; // rax
  const char *v17; // r8
  __int64 *v18; // r15
  void *v19; // rdi
  __int64 v20; // r11
  QT::QHeaderView *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  const char *src; // [rsp+0h] [rbp-E8h]
  _BYTE *srcb; // [rsp+0h] [rbp-E8h]
  void *srca; // [rsp+0h] [rbp-E8h]
  int v34; // [rsp+Ch] [rbp-DCh]
  const char *v37; // [rsp+30h] [rbp-B8h]
  size_t v38; // [rsp+38h] [rbp-B0h]
  void *v39[4]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  char *s[2]; // [rsp+68h] [rbp-80h]
  _BYTE v42[40]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = QT::QAbstractItemView::model(a1);
  v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 128LL);
  ptr = (void *)-1LL;
  s[0] = nullptr;
  s[1] = nullptr;
  v34 = v5(v4, &ptr);
  if ( a2 )
  {
    v6 = a2[1];
    if ( v6 != v34 )
    {
      ptr = nullptr;
      *(_OWORD *)s = 0;
      if ( v34 < v6 )
      {
        v26 = v34;
        do
        {
          v27 = (__int64 *)(*a2 + 24 * v26);
          v28 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            qfree(v28, (const char *)&ptr);
          }
          ++v26;
        }
        while ( v26 < v6 );
        a2[1] = v34;
      }
      else
      {
        v7 = *a2;
        v8 = a2[2];
        if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v7 + 24 * v8 )
        {
          if ( v8 < v34 )
          {
            v29 = qvector_reserve(a2, v7, v34, 24);
            v6 = a2[1];
            *a2 = v29;
          }
          if ( v6 < v34 )
          {
            v9 = 24 * v6;
            do
            {
              ++v6;
              v10 = v9 + *a2;
              v9 += 24;
              *(_QWORD *)v10 = 0;
              *(_OWORD *)(v10 + 8) = 0;
            }
            while ( v6 != v34 );
          }
        }
        else
        {
          if ( v8 < v34 )
          {
            v30 = qvector_reserve(a2, v7, v34, 24);
            v6 = a2[1];
            *a2 = v30;
          }
          if ( v6 < v34 )
          {
            v24 = 24 * v6;
            do
            {
              ++v6;
              v25 = v24 + *a2;
              v24 += 24;
              *(_QWORD *)v25 = 0;
              *(_OWORD *)(v25 + 8) = 0;
            }
            while ( v6 != v34 );
          }
        }
        a2[1] = v34;
      }
    }
    if ( v34 > 0 )
    {
      v11 = 0;
      for ( i = 0; i != v34; ++i )
      {
        v16 = QT::QAbstractItemView::model(a1);
        (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v16 + 160LL))(v42, v16, i, 1, 0);
        QT::QVariant::toString((QT::QVariant *)v39);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v39);
        v17 = s[0];
        v18 = (__int64 *)(v11 + *a2);
        if ( (s[0] || (v17 = (const char *)&QT::QByteArray::_empty) != nullptr)
          && (src = v17, v13 = strlen(v17), v14 = src, (v15 = v13) != 0) )
        {
          v19 = (void *)*v18;
          v20 = v13 + 1;
          if ( v18[2] < v13 + 1 )
          {
            v38 = v13;
            v37 = src;
            srca = (void *)(v13 + 1);
            v23 = qvector_reserve(v18, *v18, v13 + 1, 1);
            v15 = v38;
            v14 = v37;
            *v18 = v23;
            v19 = (void *)v23;
            v20 = (__int64)srca;
          }
          v18[1] = v20;
          srcb = (_BYTE *)v15;
          memmove(v19, v14, v15);
          srcb[*v18] = 0;
        }
        else
        {
          v18[1] = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
          free(v39[0]);
        v11 += 24;
        QT::QVariant::~QVariant((QT::QVariant *)v42);
      }
    }
  }
  if ( a3 )
  {
    v21 = (QT::QHeaderView *)QT::QTreeView::header(a1);
    sub_4E2120((__int64)a1 + 304, a3, v21);
  }
  return v34;
}
