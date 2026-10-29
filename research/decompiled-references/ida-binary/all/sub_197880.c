__int64 __fastcall sub_197880(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi

  result = sub_478CF0();
  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 2584) & 2) == 0 )
    return sub_482660(QT::QCoreApplication::self + 2, v2, 1);
  return result;
}
