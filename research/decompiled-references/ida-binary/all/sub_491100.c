_BOOL8 __fastcall sub_491100(__int64 a1)
{
  __int64 v1; // rsi
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 200);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 8) )
      return (unsigned int)sub_4C3AE0(*(QT::QObject **)(a1 + 328)) - 1 <= 1;
  }
  return result;
}
