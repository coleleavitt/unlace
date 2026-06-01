__int64 __fastcall quick_filter_input_t__::vfunc_5(QT::QLineEdit *a1, __int64 a2)
{
  int v2; // r8d
  _DWORD *v3; // rdx
  int v4; // eax

  v2 = *(unsigned __int16 *)(a2 + 8);
  if ( (unsigned int)(v2 - 6) > 1 )
    return QT::QLineEdit::event(a1, (QT::QEvent *)a2);
  v3 = &unk_6CD330;
  v4 = 0x1000000;
  while ( *(_DWORD *)(a2 + 64) != v4 )
  {
    v4 = v3[1];
    ++v3;
    if ( !v4 )
      return QT::QLineEdit::event(a1, (QT::QEvent *)a2);
  }
  *(_BYTE *)(a2 + 12) = 1;
  if ( v2 == 6 )
    sub_54BC90(a1, a2, v3);
  return 1;
}
