__int64 __fastcall sub_3A2000(__int64 a1, __int64 a2)
{
  QT::QAbstractItemView *v2; // r12
  __int64 *v3; // r13
  __int64 v4; // rdx
  const char *v5; // rsi
  __int64 v6; // rdi
  __int64 Child_helper; // rax
  QT::QHeaderView *v9; // rbp
  QT::QHeaderView *v10; // rax
  QT::QHeaderView *v11; // r13
  int v12; // r14d
  int v13; // eax
  int v14; // r14d
  unsigned int v15; // ebp
  char v16; // r15
  int v17; // eax
  __int64 v18; // rsi
  char v19; // dl
  _QWORD *v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  void (__fastcall *v24)(_DWORD *, __int64, __int64, _QWORD, __int64 *); // r9
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 i; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // [rsp+Ch] [rbp-9Ch]
  _DWORD v33[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v34; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  __int128 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+50h] [rbp-58h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v2 = (QT::QAbstractItemView *)sub_49AD60(a1);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v18 = *(_QWORD *)(a2 + 8);
      v19 = 0;
      return sub_3A1E20(a1, v18, v19);
    case 2:
      v18 = *(_QWORD *)(a2 + 8);
      v19 = 1;
      return sub_3A1E20(a1, v18, v19);
    case 3:
      v3 = *(__int64 **)(a2 + 8);
      v35 = 0;
      v37 = -1;
      v36 = 0;
      v4 = v3[1];
      if ( v4 )
      {
        v35 = qvector_reserve(&v35, 0, v4, 8);
        v26 = *v3;
        for ( i = *v3 + 8 * v3[1]; i != v26; v26 += 8 )
        {
          v28 = sub_4A0BB0(a1, *(_QWORD *)(*(_QWORD *)v26 + 8LL), 0, 0);
          if ( v28 >= 0 )
          {
            v29 = sub_499340(*(_QWORD *)(a1 + 2472), v28, 0);
            if ( v29 != -1 )
            {
              v30 = v36;
              v31 = v35;
              if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
              {
                v35 = qvector_reserve(&v35, v35, v36 + 1, 8);
                v31 = v35;
                v30 = v36;
              }
              *(_QWORD *)(v31 + 8 * v30) = v29;
              *(_QWORD *)&v36 = v36 + 1;
            }
          }
        }
      }
      v5 = (const char *)&v35;
      sub_4A8920(a1, &v35, 1);
      v6 = v35;
      if ( v35 )
        goto LABEL_4;
      return v39 - __readfsqword(0x28u);
    case 4:
      v20 = *(_QWORD **)(a2 + 8);
      if ( v20 )
      {
        if ( *v20 < v20[1] && *(QT::QAbstractItemView **)(a1 + 2472) == v2 )
        {
          v21 = sub_4A0BB0(a1, *v20, 0, 0);
          v22 = sub_4A0BB0(a1, v20[1], 0, 0);
          if ( (v22 | v21) >= 0 )
          {
            v23 = QT::QAbstractItemView::model(v2);
            v24 = *(void (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 96LL);
            v35 = -1;
            v36 = 0u;
            v24(v33, v23, (v22 + v21) / 2, 0, &v35);
            if ( (v33[1] | v33[0]) >= 0 )
            {
              if ( v34 )
              {
                (*(void (__fastcall **)(QT::QAbstractItemView *, _DWORD *, __int64))(*(_QWORD *)v2 + 488LL))(v2, v33, 3);
                v25 = QT::QAbstractItemView::selectionModel(v2);
                (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v25 + 96LL))(v25, v33, 49);
              }
            }
          }
        }
      }
      return v39 - __readfsqword(0x28u);
    case 5:
      return sub_4A4600(a1, 0, 7, 0);
    case 8:
      Child_helper = QT::qt_qFindChild_helper(*(_QWORD *)(a2 + 16), 0, 0, &off_8974E0, 1);
      if ( Child_helper )
      {
        v9 = (QT::QHeaderView *)sub_49E160(Child_helper);
        sub_49DEA0(&v35, v9);
        v10 = (QT::QHeaderView *)sub_49E160(a1);
        v11 = v10;
        if ( v10 )
        {
          v12 = QT::QHeaderView::count(v10);
          v13 = v12 < (int)QT::QHeaderView::count(v9) ? QT::QHeaderView::count(v11) : QT::QHeaderView::count(v9);
          v14 = v13;
          if ( v13 > 0 )
          {
            v15 = 0;
            v32 = v13 - 1;
            do
            {
              v16 = sub_49E040(&v35, v15);
              QT::QHeaderView::setSectionHidden(v11, v15, v16 != 1);
              if ( v32 > (int)v15 && v16 )
              {
                v17 = sub_49E060(&v35, v15);
                QT::QHeaderView::resizeSection(v11, v15, v17);
              }
              ++v15;
            }
            while ( v14 != v15 );
          }
        }
        v5 = (const char *)*(unsigned int *)(a1 + 2376);
        sub_49E380(a1, v5, &v35, 7);
        if ( v37 )
        {
          v38 = 0;
          qfree(v37, v5);
        }
        v6 = v35;
        if ( v35 )
        {
LABEL_4:
          *(_QWORD *)&v36 = 0;
          qfree(v6, v5);
        }
      }
      break;
    default:
      return v39 - __readfsqword(0x28u);
  }
  return v39 - __readfsqword(0x28u);
}
