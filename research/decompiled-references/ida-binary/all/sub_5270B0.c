unsigned __int64 __fastcall sub_5270B0(QT::QWidget *a1, __int64 a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // esi
  int v7; // eax
  _DWORD v8[6]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a3 )
    return QT::QWidget::scroll(a1, 0, a3);
  v4 = *(_DWORD *)(a2 + 12);
  v5 = *((_QWORD *)a1 + 4);
  v8[0] = 0;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(v5 + 28) - *(_DWORD *)(v5 + 20);
  v8[3] = v4;
  v8[1] = v6;
  v8[2] = v7;
  QT::QWidget::update(a1, v8);
  return v9 - __readfsqword(0x28u);
}
