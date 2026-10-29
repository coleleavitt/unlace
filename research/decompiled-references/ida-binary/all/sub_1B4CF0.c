__int64 __fastcall sub_1B4CF0(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // eax
  bool v4; // dl
  __int64 v5; // rsi
  __int64 result; // rax

  v3 = QT::QListWidget::currentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 256) + 200LL));
  v4 = 1;
  v5 = 2165563904LL;
  if ( v3 <= 0x12 )
  {
    v5 = v3 - 2129403392;
    v4 = dword_5DFD80[v3] != -1;
  }
  result = *a2;
  if ( (_DWORD)result )
  {
    if ( v4 )
    {
      sub_524FF0(*(_QWORD *)(a1 + 288) + 40LL, v5, a2, 0);
      return sub_341530(*(QT::QWidget **)(a1 + 288));
    }
  }
  return result;
}
