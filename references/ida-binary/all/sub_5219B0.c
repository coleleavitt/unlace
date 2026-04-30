unsigned __int64 __fastcall sub_5219B0(QT::QTreeView *this)
{
  QT::QHeaderView *v2; // rbp
  int i; // ebx
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  v2 = (QT::QHeaderView *)QT::QTreeView::header(this);
  for ( i = 0; i < (int)QT::QHeaderView::count(v2); ++i )
  {
    v4 = QT::QHeaderView::sectionSize(v2, i);
    v5 = v13;
    LODWORD(v15) = v4;
    v6 = v14;
    if ( *((_QWORD *)&v14 + 1) < (unsigned __int64)(v14 + 1) )
    {
      v13 = qvector_reserve(&v13, v13, v14 + 1, 4);
      v5 = v13;
      v6 = v14;
    }
    *(_DWORD *)(v5 + 4 * v6) = v4;
    *(_QWORD *)&v14 = v14 + 1;
  }
  v7 = *((_QWORD *)this + 28);
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 48LL);
  if ( v8 != sub_51F0A0 )
    ((void (__fastcall *)(__int64, __int64 *))v8)(v7, &v13);
  v9 = (const char *)v2;
  v15 = 0;
  v16 = 0;
  sub_51A000((__int64)&v15, v2);
  v10 = *((_QWORD *)this + 28);
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 56LL);
  if ( v11 != sub_51F0B0 )
  {
    v9 = (const char *)&v15;
    ((void (__fastcall *)(__int64, __int64 *))v11)(v10, &v15);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v9);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v9);
  }
  return v17 - __readfsqword(0x28u);
}
