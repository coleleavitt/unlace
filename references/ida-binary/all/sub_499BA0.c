QT::QMimeData *__fastcall sub_499BA0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  QT::QAbstractItemView *v6; // r12
  __int64 v9; // rax
  __int64 *v10; // r13
  const char *v11; // rdx
  __int64 v12; // rsi
  int *v13; // r15
  int *i; // rbp
  int v15; // r8d
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  QT::QMimeData *v18; // rbx
  double v19; // xmm0_8
  _DWORD *v20; // rdi
  QT::QAbstractItemView *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // rsi
  int v27; // [rsp+4h] [rbp-134h]
  void *v28; // [rsp+18h] [rbp-120h]
  __int64 v29; // [rsp+27h] [rbp-111h] BYREF
  char v30; // [rsp+2Fh] [rbp-109h]
  void *v31; // [rsp+30h] [rbp-108h] BYREF
  __int64 rank; // [rsp+38h] [rbp-100h]
  _DWORD *v33; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-F0h]
  void *ptr[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+70h] [rbp-C8h]
  void *v37; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+88h] [rbp-B0h]
  __int64 v39; // [rsp+90h] [rbp-A8h]
  _BYTE v40[32]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE *v41; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-70h]
  __int128 v43; // [rsp+D8h] [rbp-60h]
  __int128 v44; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_DWORD *)(v5 + 2376) != 1 )
    return nullptr;
  v6 = *(QT::QAbstractItemView **)(v5 + 2384);
  v9 = QT::QAbstractItemView::model(v6);
  v10 = *(__int64 **)(v9 + 216);
  if ( !v10 )
    v10 = *(__int64 **)(v9 + 208);
  v42 = 0;
  v41 = nullptr;
  v43 = -1;
  v44 = -1;
  if ( !(unsigned __int8)sub_4956F0(v6, (__int64 *)&v41, 3, NAN, a4, a5) )
  {
    v26 = v41;
    if ( *((_QWORD *)&v42 + 1) <= 1u )
    {
      v41 = (_BYTE *)qvector_reserve(&v41, v41, 2, 1);
      v26 = v41;
    }
    *(_QWORD *)&v42 = 2;
    *v26 = 47;
    v41[1] = 0;
  }
  v11 = &s1;
  if ( (_QWORD)v42 )
    v11 = v41;
  v12 = *v10;
  v37 = (void *)-1LL;
  LOBYTE(v38) = 0;
  dirtree_resolve_path(&v37, v12, v11, NAN);
  v34 = 0;
  v28 = v37;
  v33 = nullptr;
  v36 = 0;
  *(_OWORD *)ptr = 0;
  QT::QDataStream::QDataStream(v40, ptr, 2, 0.0);
  v13 = *(int **)(a2 + 8);
  for ( i = &v13[6 * *(_QWORD *)(a2 + 16)]; i != v13; v13 += 6 )
  {
    v15 = *v13;
    v16 = &v33[v34];
    if ( v33 != v16 )
    {
      v17 = v33;
      while ( v15 != *v17 )
      {
        if ( v16 == ++v17 )
          goto LABEL_24;
      }
      if ( v17 != v16 )
        continue;
    }
LABEL_24:
    if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
    {
      v27 = *v13;
      v25 = qvector_reserve(&v33, v33, v34 + 1, 4);
      v15 = v27;
      v33 = (_DWORD *)v25;
      v16 = (_DWORD *)(v25 + 4 * v34);
    }
    *v16 = v15;
    v22 = *(QT::QAbstractItemView **)(a1 + 24);
    *(_QWORD *)&v34 = v34 + 1;
    QT::QAbstractItemView::model(v22);
    v23 = *((_QWORD *)v13 + 1);
    if ( v23 != -1 )
    {
      v24 = sub_4A0960(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), v23, 0);
      if ( v24 != -1 )
      {
        v29 = v24;
        rank = -1;
        v31 = v28;
        v30 = 0;
        rank = dirtree_get_rank(*v10, v28, &v29);
        v37 = (void *)-1LL;
        v38 = 0;
        v39 = 0;
        sub_48C8A0((__int64)v40, v10, &v31, (__int64)&v37, 0);
      }
    }
  }
  v18 = (QT::QMimeData *)operator new(0x10u);
  QT::QMimeData::QMimeData(v18);
  v19 = QT::QString::fromUtf8(&v37, 19, "treewidget/x-inodes");
  QT::QMimeData::setData(v18, (const QT::QString *)&v37, (const QT::QByteArray *)ptr);
  if ( v37 && !_InterlockedSub((volatile signed __int32 *)v37, 1u) )
    free(v37);
  QT::QDataStream::~QDataStream((QT::QDataStream *)v40);
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v20 = v33;
    if ( !v33 )
      goto LABEL_21;
    goto LABEL_20;
  }
  free(ptr[0]);
  v20 = v33;
  if ( v33 )
  {
LABEL_20:
    *(_QWORD *)&v34 = 0;
    v19 = qfree(v20, (const char *)&v37, v19);
  }
LABEL_21:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41, (const char *)&v37, v19);
  }
  return v18;
}
