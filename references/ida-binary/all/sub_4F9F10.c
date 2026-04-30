__int64 __fastcall sub_4F9F10(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 408);
  if ( !v2 )
    return 0;
  if ( a2 <= 2 )
    return QT::QDialogButtonBox::button(v2, dword_6CD0C0[a2]);
  return QT::QDialogButtonBox::button(v2, 0);
}
