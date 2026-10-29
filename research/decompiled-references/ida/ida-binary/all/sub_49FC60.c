__int64 __fastcall sub_49FC60(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rax
  const char *v4; // rsi
  QT::QHeaderView *v5; // rax
  QT::QHeaderView *v6; // r13
  int v7; // r12d
  int v8; // r15d
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  const char *v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 2112);
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 40LL);
  v4 = (const char *)*(unsigned int *)(a1 + 2376);
  if ( v3 != chooser_persistence_helper_t__::vfunc_5 )
  {
    ((void (__fastcall *)(__int64, const char *))v3)(v2, v4);
    v4 = (const char *)*(unsigned int *)(a1 + 2376);
  }
  if ( *(char *)(a1 + 2008) < 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( (_DWORD)v4 == 2 )
      v5 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
    else
      v5 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
    v6 = v5;
    v7 = QT::QHeaderView::count(v5);
    v8 = 0;
    if ( v7 > 0 )
    {
      do
      {
        v9 = QT::QHeaderView::sectionSize(v6, v8);
        v10 = v19;
        v4 = (const char *)v18;
        if ( *((_QWORD *)&v19 + 1) < (unsigned __int64)(v19 + 1) )
        {
          v18 = qvector_reserve(&v18, v18, v19 + 1, 4);
          v4 = (const char *)v18;
          v10 = v19;
        }
        ++v8;
        *(_DWORD *)&v4[4 * v10] = v9;
        *(_QWORD *)&v19 = v19 + 1;
      }
      while ( v7 != v8 );
    }
    v11 = *(_QWORD *)(a1 + 2112);
    v12 = *(__int64 (**)())(*(_QWORD *)v11 + 48LL);
    if ( v12 != chooser_persistence_helper_t__::vfunc_6 )
    {
      v4 = (const char *)&v18;
      ((void (__fastcall *)(__int64, __int64 *))v12)(v11, &v18);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v4);
    }
    LODWORD(v4) = *(_DWORD *)(a1 + 2376);
  }
  v18 = 0;
  v19 = 0;
  if ( (_DWORD)v4 == 2 )
    v13 = (const char *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
  else
    v13 = (const char *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
  v14 = v13;
  sub_51A000(&v18, v13);
  v15 = *(_QWORD *)(a1 + 2112);
  v16 = *(__int64 (**)())(*(_QWORD *)v15 + 56LL);
  if ( v16 != chooser_persistence_helper_t__::vfunc_7 )
  {
    v14 = (const char *)&v18;
    ((void (__fastcall *)(__int64, __int64 *))v16)(v15, &v18);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v14);
  }
  return 1;
}
