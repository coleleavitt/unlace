__int64 __fastcall sub_5137F0(__int64 a1)
{
  unsigned int v1; // ebp

  v1 = *(unsigned __int8 *)(a1 + 152);
  if ( (_BYTE)v1
    && dword_8D23A0 > 0
    && *(char *)(*(_QWORD *)(QT::QAbstractScrollArea::verticalScrollBar((QT::QAbstractScrollArea *)a1) + 32LL) + 9LL) < 0 )
  {
    LOBYTE(v1) = *(unsigned int *)(a1 + 116) >= (unsigned __int64)(*(_QWORD *)(a1 + 64) - 1LL);
  }
  return v1;
}
