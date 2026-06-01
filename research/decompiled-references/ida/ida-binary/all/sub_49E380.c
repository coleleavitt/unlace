void __fastcall sub_49E380(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  QT::QTreeView *v6; // rdi
  QT::QHeaderView *i; // r12
  QT::QHeaderView *v9; // r13
  QT::QHeaderView *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  QT::QHeaderView *v13; // r14
  _BOOL8 (__fastcall *v14)(__int64); // rax
  bool v15; // al
  int v16; // r13d
  bool v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  QT::QHeaderView *v21; // r13
  unsigned int v22; // r15d
  bool v23; // dl
  _BOOL8 (__fastcall *v24)(__int64); // rax
  bool v25; // al
  int v26; // r14d
  bool v27; // r15
  int v28; // eax
  int v29; // eax
  QT::QHeaderView *v30; // r13
  int v31; // eax
  QT::QHeaderView *v32; // r15
  char v33; // dl
  int v34; // eax
  __int64 v35; // r15
  unsigned __int64 v36; // r13
  char v37; // dl
  int v38; // eax
  QT::QObject *v39; // r15
  char v40; // dl
  const QT::QObject *v41; // rsi
  QT::QTreeView *v42; // rdi
  const QT::QObject *v43; // rsi
  QT::QTreeView *v44; // rdi
  QT::QTableView *v45; // rax
  QT::QTableView *v46; // rax
  int v47; // [rsp+8h] [rbp-40h]
  QT::QObject *v48; // [rsp+8h] [rbp-40h]

  v6 = *(QT::QTreeView **)(a1 + 2384);
  if ( v6 )
  {
    LOBYTE(i) = a4;
    v9 = (QT::QHeaderView *)QT::QTreeView::header(v6);
    v10 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
    v13 = v10;
    if ( v9 )
    {
      if ( v10 )
      {
        *(_DWORD *)(a1 + 2008) |= 0x10u;
        if ( (_DWORD)a2 == 1 )
        {
          v22 = 0;
          v47 = QT::QHeaderView::count(v9);
          if ( v47 > 0 )
          {
            do
            {
              a2 = v22;
              v23 = v22++ != 0;
              QT::QHeaderView::setSectionHidden(v9, a2, v23);
            }
            while ( v47 != v22 );
          }
          if ( ((unsigned __int8)i & 4) != 0 )
          {
            v38 = QT::QHeaderView::count(v13);
            if ( v38 > 0 )
            {
              v39 = nullptr;
              v48 = (QT::QObject *)v38;
              while ( 1 )
              {
                a2 = (unsigned int)v39;
                if ( (unsigned __int64)v39 >= *(_QWORD *)(a3 + 8) )
                  break;
                v40 = *((_BYTE *)v39 + *(_QWORD *)a3);
                v39 = (QT::QObject *)((char *)v39 + 1);
                QT::QHeaderView::setSectionHidden(v13, a2, v40 != 1);
                if ( v39 == v48 )
                  goto LABEL_24;
              }
              if ( !under_debugger )
                goto LABEL_54;
              goto LABEL_83;
            }
          }
LABEL_24:
          if ( ((unsigned __int8)i & 1) != 0 )
          {
            QT::QTreeView::setSortingEnabled(*(QT::QTreeView **)(a1 + 2384), 0);
            QT::QHeaderView::setSectionsClickable(v9, 0);
            a2 = 0;
            QT::QHeaderView::setSortIndicatorShown(v9, 0);
          }
          if ( ((unsigned __int8)i & 2) != 0 )
          {
            v29 = QT::QHeaderView::count(v13);
            if ( v29 > 0 )
            {
              v30 = (QT::QHeaderView *)v29;
              i = nullptr;
              while ( (unsigned __int64)i < *(_QWORD *)(a3 + 8) )
              {
                if ( *((_BYTE *)i + *(_QWORD *)a3) )
                {
                  a2 = (unsigned int)i;
                  QT::QHeaderView::resizeSection(v13, (int)i, *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4LL * (_QWORD)i));
                }
                i = (QT::QHeaderView *)((char *)i + 1);
                if ( i == v30 )
                  goto LABEL_27;
              }
              if ( !under_debugger )
                goto LABEL_54;
              goto LABEL_83;
            }
          }
        }
        else
        {
          if ( (_DWORD)a2 != 2 )
          {
            if ( (_DWORD)a2 )
            {
              if ( !under_debugger )
                interr(41067, a2, v11, v12, a5);
              goto LABEL_83;
            }
            if ( ((unsigned __int8)i & 4) != 0 )
              goto LABEL_55;
LABEL_8:
            if ( ((unsigned __int8)i & 1) != 0 )
            {
              v14 = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL);
              if ( v14 == sub_49AD80 )
                v15 = (*(_BYTE *)(*(_QWORD *)(a1 + 2392) + 15LL) & 0x20) == 0;
              else
                v15 = v14(a1);
              v16 = *(_DWORD *)(a3 + 48);
              v17 = v16 >= 0;
              if ( v15 )
              {
                v43 = *(const QT::QObject **)(a1 + 2472);
                v44 = (QT::QTreeView *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTreeView::staticMetaObject, v43);
                if ( v44 )
                {
                  QT::QTreeView::setSortingEnabled(v44, v17);
                  QT::QHeaderView::setSectionsClickable(v13, 1);
                }
                else
                {
                  v46 = (QT::QTableView *)QT::QMetaObject::cast(
                                            (QT::QMetaObject *)&QT::QTableView::staticMetaObject,
                                            v43);
                  if ( v46 )
                    QT::QTableView::setSortingEnabled(v46, v17);
                }
              }
              a2 = v16 >= 0;
              QT::QHeaderView::setSortIndicatorShown(v13, v17);
              if ( v16 >= 0 )
              {
                a2 = *(unsigned int *)(a3 + 48);
                QT::QHeaderView::setSortIndicator(v13, a2, *(unsigned __int8 *)(a3 + 52));
              }
            }
            if ( ((unsigned __int8)i & 2) != 0 )
            {
              v18 = QT::QHeaderView::count(v13);
              if ( v18 > 0 )
              {
                v21 = (QT::QHeaderView *)v18;
                i = nullptr;
                while ( (unsigned __int64)i < *(_QWORD *)(a3 + 8) )
                {
                  if ( *((_BYTE *)i + *(_QWORD *)a3) )
                  {
                    a2 = (unsigned int)i;
                    QT::QHeaderView::resizeSection(v13, (int)i, *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4LL * (_QWORD)i));
                  }
                  i = (QT::QHeaderView *)((char *)i + 1);
                  if ( i == v21 )
                    goto LABEL_27;
                }
                if ( !under_debugger )
                  goto LABEL_54;
                goto LABEL_83;
              }
            }
            goto LABEL_27;
          }
          if ( ((unsigned __int8)i & 4) != 0 )
          {
            v31 = QT::QHeaderView::count(v9);
            if ( v31 > 0 )
            {
              v32 = (QT::QHeaderView *)v31;
              v13 = nullptr;
              while ( 1 )
              {
                a2 = (unsigned int)v13;
                if ( (unsigned __int64)v13 >= *(_QWORD *)(a3 + 8) )
                  break;
                v33 = *((_BYTE *)v13 + *(_QWORD *)a3);
                v13 = (QT::QHeaderView *)((char *)v13 + 1);
                QT::QHeaderView::setSectionHidden(v9, a2, v33 != 1);
                if ( v13 == v32 )
                  goto LABEL_30;
              }
              if ( !under_debugger )
              {
LABEL_54:
                do
                {
                  v10 = (QT::QHeaderView *)interr(41064, a2, v19, v20, a5);
LABEL_55:
                  v34 = QT::QHeaderView::count(v10);
                  if ( v34 <= 0 )
                    goto LABEL_8;
                  v35 = v34;
                  v36 = 0;
                  while ( 1 )
                  {
                    a2 = (unsigned int)v36;
                    if ( v36 >= *(_QWORD *)(a3 + 8) )
                      break;
                    v37 = *(_BYTE *)(*(_QWORD *)a3 + v36++);
                    QT::QHeaderView::setSectionHidden(v13, a2, v37 != 1);
                    if ( v36 == v35 )
                      goto LABEL_8;
                  }
LABEL_59:
                  ;
                }
                while ( !under_debugger );
              }
LABEL_83:
              BUG();
            }
          }
LABEL_30:
          if ( ((unsigned __int8)i & 1) != 0 )
          {
            v24 = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL);
            if ( v24 == sub_49AD80 )
              v25 = (*(_BYTE *)(*(_QWORD *)(a1 + 2392) + 15LL) & 0x20) == 0;
            else
              v25 = v24(a1);
            v26 = *(_DWORD *)(a3 + 48);
            v27 = v26 >= 0;
            if ( v25 )
            {
              v41 = *(const QT::QObject **)(a1 + 2384);
              v42 = (QT::QTreeView *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTreeView::staticMetaObject, v41);
              if ( v42 )
              {
                QT::QTreeView::setSortingEnabled(v42, v27);
                QT::QHeaderView::setSectionsClickable(v9, 1);
              }
              else
              {
                v45 = (QT::QTableView *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTableView::staticMetaObject, v41);
                if ( v45 )
                  QT::QTableView::setSortingEnabled(v45, v27);
              }
            }
            a2 = v26 >= 0;
            QT::QHeaderView::setSortIndicatorShown(v9, v27);
            if ( v26 >= 0 )
            {
              a2 = *(unsigned int *)(a3 + 48);
              QT::QHeaderView::setSortIndicator(v9, a2, *(unsigned __int8 *)(a3 + 52));
            }
          }
          if ( ((unsigned __int8)i & 2) != 0 )
          {
            v28 = QT::QHeaderView::count(v9);
            if ( v28 > 0 )
            {
              v13 = (QT::QHeaderView *)v28;
              for ( i = nullptr; i != v13; i = (QT::QHeaderView *)((char *)i + 1) )
              {
                if ( (unsigned __int64)i >= *(_QWORD *)(a3 + 8) )
                  goto LABEL_59;
                if ( *((_BYTE *)i + *(_QWORD *)a3) )
                {
                  a2 = (unsigned int)i;
                  QT::QHeaderView::resizeSection(v9, (int)i, *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4LL * (_QWORD)i));
                }
              }
            }
          }
        }
LABEL_27:
        *(_DWORD *)(a1 + 2008) &= ~0x10u;
      }
    }
  }
}
