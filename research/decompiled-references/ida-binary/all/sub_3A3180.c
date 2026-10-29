unsigned __int64 __fastcall sub_3A3180(QT::QWidget *this, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 v9; // rdi
  _QWORD *func; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  QT::QWidget *v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  bool v21; // r14
  __int64 v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_49AFB0();
  if ( !(unsigned __int8)sub_4A0660(this, &stru_50000) )
    return v24 - __readfsqword(0x28u);
  v6 = *((_QWORD *)this + 299);
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 56LL);
  if ( v7 == addon_chooser_t__::vfunc_7 )
    return v24 - __readfsqword(0x28u);
  v9 = ((__int64 (__fastcall *)(__int64, __int64))v7)(v6, a3);
  if ( v9 == -1 )
    return v24 - __readfsqword(0x28u);
  func = (_QWORD *)get_func(v9);
  if ( !func )
    return v24 - __readfsqword(0x28u);
  v11 = QT::QWidget::palette(this);
  v12 = QT::QPalette::brush(v11, 4, 9);
  v13 = __ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)(*(_QWORD *)v12 + 8LL))), 8);
  v14 = qword_8CF010;
  v15 = *((_DWORD *)func + 16);
  if ( !qword_8CF010 )
  {
    if ( v15 != -1 )
      goto LABEL_8;
    v16 = func[2];
    if ( (v16 & 0x10004) != 0 )
      goto LABEL_9;
    if ( (v16 & 0x80u) == 0LL )
    {
      segtype(*func);
      goto LABEL_9;
    }
    v21 = 0;
    goto LABEL_28;
  }
  if ( v15 != -1 )
  {
LABEL_8:
    *(_DWORD *)(a2 + 8) = v15;
    goto LABEL_9;
  }
  v17 = func[2];
  v14 = *((QT::QWidget **)qword_8CF010 + 87);
  if ( (v17 & 0x10000) != 0 )
  {
    if ( v14 )
    {
      v18 = (char *)v14 + 40;
      v19 = 2165563910LL;
LABEL_18:
      v20 = sub_524F80(v18, v19, 0);
      v15 = sub_518CA0(v13, v20);
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  if ( (v17 & 4) == 0 )
  {
    v21 = v14 != nullptr;
    if ( (v17 & 0x80u) == 0LL )
    {
      v22 = *func;
      goto LABEL_24;
    }
LABEL_28:
    v22 = calc_thunk_func_target(func, &v23);
    if ( v22 == -1 )
      v22 = v23;
LABEL_24:
    if ( (unsigned __int8)segtype(v22) == 1 && v21 )
    {
      v18 = (char *)v14 + 40;
      v19 = 2165563909LL;
      goto LABEL_18;
    }
    goto LABEL_9;
  }
  if ( v14 )
  {
    v18 = (char *)v14 + 40;
    v19 = 2165563904LL;
    goto LABEL_18;
  }
LABEL_9:
  if ( (get_aflags(*func) & 0x2000000) != 0 )
    *(_DWORD *)(a2 + 4) |= 1u;
  return v24 - __readfsqword(0x28u);
}
