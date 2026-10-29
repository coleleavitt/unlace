unsigned __int64 __fastcall sub_2DBCA0(QT::QWidget *this, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r12d
  QT::QWidget *v11; // r13
  int v12; // eax
  __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rax
  bool v19; // r14
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v5 = QT::QAbstractItemView::model(this);
  v6 = *(_DWORD **)(v5 + 96);
  v7 = &v6[*(_QWORD *)(v5 + 104)];
  if ( v6 == v7 )
    return v22 - __readfsqword(0x28u);
  while ( (~*v6 & 0x50000) != 0 )
  {
    if ( v7 == ++v6 )
      return v22 - __readfsqword(0x28u);
  }
  v8 = QT::QWidget::palette(this);
  v9 = QT::QPalette::brush(v8, 4, 9);
  v10 = __ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)(*(_QWORD *)v9 + 8LL))), 8);
  v11 = qword_8CF010;
  v12 = *((_DWORD *)a3 + 16);
  if ( !qword_8CF010 )
  {
    if ( v12 != -1 )
      goto LABEL_7;
    v18 = a3[2];
    if ( (v18 & 0x10004) != 0 )
      goto LABEL_8;
    if ( (v18 & 0x80u) == 0LL )
    {
      segtype(*a3);
      goto LABEL_8;
    }
    v19 = 0;
    goto LABEL_28;
  }
  if ( v12 != -1 )
  {
LABEL_7:
    *(_DWORD *)(a2 + 8) = v12;
    goto LABEL_8;
  }
  v14 = a3[2];
  v11 = *((QT::QWidget **)qword_8CF010 + 87);
  if ( (v14 & 0x10000) == 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      if ( v11 )
      {
        v15 = (char *)v11 + 40;
        v16 = 2165563904LL;
LABEL_15:
        v17 = sub_524F80(v15, v16, 0);
        v12 = sub_518CA0(v10, v17);
        goto LABEL_7;
      }
      goto LABEL_8;
    }
    v19 = v11 != nullptr;
    if ( (v14 & 0x80u) == 0LL )
    {
      v20 = *a3;
      goto LABEL_24;
    }
LABEL_28:
    v20 = calc_thunk_func_target(a3, &v21);
    if ( v20 == -1 )
      v20 = v21;
LABEL_24:
    if ( (unsigned __int8)segtype(v20) == 1 && v19 )
    {
      v15 = (char *)v11 + 40;
      v16 = 2165563909LL;
      goto LABEL_15;
    }
    goto LABEL_8;
  }
  if ( v11 )
  {
    v15 = (char *)v11 + 40;
    v16 = 2165563910LL;
    goto LABEL_15;
  }
LABEL_8:
  if ( (get_aflags(*a3) & 0x2000000) != 0 )
    *(_DWORD *)(a2 + 4) |= 1u;
  return v22 - __readfsqword(0x28u);
}
