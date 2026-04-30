__int64 __fastcall sub_4D10D0(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  __int64 v10; // rax
  int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+Ch] [rbp-4Ch] BYREF
  void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 104);
  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QSplitter::sizes((QT::QSplitter *)ptr);
  if ( *(_BYTE *)(a3 + 44) )
  {
    QT::QWidget::setAttribute(a3, 16, 1, v6, v7, v8);
    v9 = 0;
  }
  else
  {
    if ( (unsigned int)QT::QSplitter::orientation(*(QT::QSplitter **)(a1 + 104)) == 2 )
      v9 = QT::QWidget::baseSize((QT::QWidget *)a3) >> 32;
    else
      v9 = QT::QWidget::baseSize((QT::QWidget *)a3);
    if ( !v9 )
    {
      v10 = QT::QWidget::layout((QT::QWidget *)a3);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 112LL))(v10, v4);
      v11 = QT::QSplitter::orientation(*(QT::QSplitter **)(a1 + 104));
      v12 = *(_DWORD **)(a3 + 32);
      if ( v11 == 2 )
        v9 = v12[8] + 1 - v12[6];
      else
        v9 = v12[7] + 1 - v12[5];
    }
  }
  if ( (int)QT::QSplitter::count(*(QT::QSplitter **)(a1 + 104)) <= a2 )
    a2 = QT::QSplitter::count(*(QT::QSplitter **)(a1 + 104));
  QT::QSplitter::insertWidget(*(QT::QSplitter **)(a1 + 104), a2, (QT::QWidget *)a3);
  v19 = v9;
  sub_2EDC10((int **)ptr, (int *)a2, &v19, v13, v14, v15);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_187120((__int64)ptr, 0, 0, 0, v16, v17);
  QT::QSplitter::setSizes(*(_QWORD *)(a1 + 104), ptr);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 104LL))(a3, *(_BYTE *)(a3 + 44) ^ 1u);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return (unsigned int)a2;
}
