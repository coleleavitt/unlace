unsigned __int64 __fastcall sub_4E88B0(_QWORD *a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbp
  volatile signed __int32 *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  QT::QPersistentModelIndex *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 i; // rbx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 *v21; // rax
  __int64 *v22; // r15
  const QT::QObject *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbp
  _QWORD *v26; // rbx
  void (__fastcall *v27)(__int64 *, void **, __m128i *, _QWORD, _QWORD, QT::QAbstractItemView *, __int64, __int64); // r12
  __int64 v28; // rax
  char *v29; // r12
  char *v30; // r13
  QT::QPersistentModelIndex *v31; // rdi
  _QWORD *v32; // [rsp+0h] [rbp-98h]
  _QWORD *v33; // [rsp+8h] [rbp-90h]
  QT::QAbstractItemView *v34; // [rsp+8h] [rbp-90h]
  _QWORD *v35; // [rsp+18h] [rbp-80h]
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v37; // [rsp+30h] [rbp-68h]
  __m128i v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v1 = a1;
  v2 = *a1;
  v3 = *(_QWORD *)(v2 + 1824);
  if ( v3 != -1 )
  {
    v21 = sub_4E07A0((_QWORD *)v2, v3);
    v2 = *v1;
    v22 = v21;
    if ( v21 )
    {
      if ( *(int *)(v2 + 1800) >= 0 && *(int *)(v2 + 1804) >= 0 )
      {
        if ( *(_QWORD *)(v2 + 1816) )
        {
          if ( *(_QWORD *)(v2 + 1792) )
          {
            v34 = *(QT::QAbstractItemView **)(v2 + 1792);
            v23 = (const QT::QObject *)QT::QAbstractItemView::model(v34);
            v24 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899F60, v23);
            v2 = *v1;
            v25 = v24;
            if ( v24 )
            {
              v26 = *(_QWORD **)(v2 + 1704);
              if ( &v26[4 * *(_QWORD *)(v2 + 1712)] != v26 )
              {
                v35 = &v26[4 * *(_QWORD *)(v2 + 1712)];
                do
                {
                  v37 = 0;
                  *(_OWORD *)ptr = 0;
                  v38 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
                  v39 = 0;
                  v27 = *(void (__fastcall **)(__int64 *, void **, __m128i *, _QWORD, _QWORD, QT::QAbstractItemView *, __int64, __int64))(*v22 + 72);
                  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 392LL))(v25);
                  v27(v22, ptr, &v38, *v26, 0, v34, *v1 + 1800LL, v28);
                  sub_4DE220((__int64 *)(*v1 + 1760LL), (__int64)v34, (__int64)ptr, &v38);
                  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                  {
                    v29 = (char *)ptr[1];
                    v30 = (char *)ptr[1] + 16 * v37;
                    if ( ptr[1] != v30 )
                    {
                      do
                      {
                        QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v29 + 8));
                        v31 = (QT::QPersistentModelIndex *)v29;
                        v29 += 16;
                        QT::QPersistentModelIndex::~QPersistentModelIndex(v31);
                      }
                      while ( v30 != v29 );
                    }
                    free(ptr[0]);
                  }
                  v26 += 4;
                }
                while ( v35 != v26 );
                v2 = *v1;
              }
            }
          }
        }
      }
    }
  }
  sub_4E7970((_QWORD *)(v2 + 1760), 1);
  v4 = (_QWORD *)*v1;
  v5 = *(_QWORD *)(*v1 + 1760LL);
  if ( v5 )
  {
    if ( v4[221] )
    {
      v32 = (_QWORD *)*v1;
      v6 = 0;
      v7 = 0;
      v33 = v1;
      v8 = v4[221];
      do
      {
        v9 = v5 + v6;
        v10 = *(volatile signed __int32 **)(v5 + v6 + 8);
        if ( v10 )
        {
          if ( !_InterlockedSub(v10, 1u) )
          {
            v11 = *(_QWORD *)(v9 + 16);
            v12 = v11 + 16LL * *(_QWORD *)(v9 + 24);
            while ( v12 != v11 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v11 + 8));
              v13 = (QT::QPersistentModelIndex *)v11;
              v11 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v13);
            }
            free(*(void **)(v9 + 8));
          }
          v5 = v32[220];
        }
        ++v7;
        v6 += 56;
      }
      while ( v8 != v7 );
      v4 = v32;
      v1 = v33;
    }
    v4[221] = 0;
    qfree(v5, (_BYTE *)&dword_0 + 1);
    v4[220] = 0;
    v4[222] = 0;
    v4 = (_QWORD *)*v1;
  }
  v14 = v4[213];
  if ( v14 )
  {
    v15 = v4[214];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = *(_QWORD *)(v14 + 32 * i);
        if ( v17 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          v14 = v4[213];
        }
      }
    }
    v4[214] = 0;
    qfree(v14, (_BYTE *)&dword_0 + 1);
    v4[213] = 0;
    v4[215] = 0;
    v4 = (_QWORD *)*v1;
  }
  v4[228] = -1;
  v18 = (_QWORD *)*v1;
  v18[225] = -1;
  v18[226] = 0;
  v18[227] = 0;
  *(_QWORD *)(*v1 + 1792LL) = 0;
  --*(_DWORD *)(*v1 + 1832LL);
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 96LL))(v19, v1[2], 1);
  return v40 - __readfsqword(0x28u);
}
