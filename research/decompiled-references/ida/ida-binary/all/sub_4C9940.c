unsigned __int64 __fastcall sub_4C9940(QT::QApplication *this, QT::QWidget *a2, _BYTE *a3, unsigned int a4)
{
  __int64 v4; // rax
  QT::QApplication *v8; // rdi
  const QT::QWidget *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rax
  __int64 **i; // r12
  QT::QApplication *v19; // rdi
  void (__fastcall *v20)(__int64, char); // rax
  int v21; // eax
  __int64 v23; // rax
  _QWORD v24[3]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int8 v25; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a2 )
    return v28 - __readfsqword(0x28u);
  v4 = *((_QWORD *)this + 1);
  ++dword_8D1D3C;
  v8 = (QT::QApplication *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(v4 + 16));
  if ( !v8 )
    v8 = this;
  sub_5492C0(v8, a2, a3);
  v9 = (const QT::QWidget *)QT::QApplication::focusWidget(v8);
  if ( (unsigned __int8)QT::QWidget::isAncestorOf(a2, v9) )
  {
    v10 = sub_4CE740(a2);
    if ( v10 )
      sub_4D2750(v10, (_DWORD)a2, v11, v12, v13, v14);
  }
  v24[0] = &DockArea::closeTree;
  v24[1] = this;
  v24[2] = a3;
  v25 = 1;
  v27 = 0;
  *(_OWORD *)ptr = 0;
  sub_4CF380(v24, a2);
  v17 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_1C92D0((__int64)ptr, 0, 0, 0, v15, v16);
    v17 = (int *)ptr[0];
  }
  for ( i = (__int64 **)ptr[1]; ; ++i )
  {
    if ( !v17 || *v17 > 1 )
      sub_1C92D0((__int64)ptr, 0, 0, 0, v15, v16);
    if ( i == (__int64 **)((char *)ptr[1] + 8 * v27) )
      break;
    sub_4C97F0(this, *i, 0.0);
    v17 = (int *)ptr[0];
  }
  v19 = (QT::QApplication *)QT::QMetaObject::cast(
                              (QT::QMetaObject *)&off_898320,
                              *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL));
  if ( !v19 )
    v19 = this;
  sub_549330(v19, ptr, a4);
  v20 = *(void (__fastcall **)(__int64, char))(*(_QWORD *)a3 + 16LL);
  if ( v20 == IRendererUpdateModel__::vfunc_2 )
    a3[12] = v25;
  else
    v20((__int64)a3, v25);
  v24[0] = &DockArea::closeTree;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v21 = dword_8D1D3C;
    if ( dword_8D1D3C > 0 )
    {
LABEL_23:
      dword_8D1D3C = v21 - 1;
      if ( v21 != 1 )
        return v28 - __readfsqword(0x28u);
    }
  }
  else
  {
    v21 = dword_8D1D3C;
    if ( dword_8D1D3C > 0 )
      goto LABEL_23;
  }
  v23 = sub_47A690((__int64)QT::QCoreApplication::self);
  if ( v23 )
    sub_4C9440(v23, 0.0);
  return v28 - __readfsqword(0x28u);
}
