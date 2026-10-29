__int64 __fastcall sub_524FF0(__int64 a1, __int64 a2, QT::QColor *a3, unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = a4;
  result = (unsigned int)__ROR4__(_byteswap_ulong(QT::QColor::rgba(a3)), 8);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * (a2 + 2165563904LL * v4 - 2165563904LL)) = result;
  return result;
}
