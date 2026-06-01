__int64 __fastcall sub_3109C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = QT::QMimeData::hasUrls(*(QT::QMimeData **)(a2 + 56));
  if ( (_BYTE)result )
  {
    result = *(unsigned int *)(a2 + 48);
    *(_BYTE *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 44) = result;
  }
  return result;
}
