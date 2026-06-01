__int64 __fastcall sub_401BD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  result = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 184));
  if ( (_BYTE)result )
    return sub_400520(a1, a3, v5, v6, v7, v8);
  return result;
}
