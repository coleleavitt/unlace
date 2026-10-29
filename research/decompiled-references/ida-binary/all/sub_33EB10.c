unsigned __int64 __fastcall sub_33EB10(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  result = *a2;
  if ( *a2 >= *(_QWORD *)(a1 + 184) && result < *(_QWORD *)(a1 + 192) )
  {
    result = *(unsigned int *)(a1 + 408);
    *(_BYTE *)(a1 + 256) = 1;
    if ( !(_DWORD)result )
      return QT::QBasicTimer::start(a1 + 408, *(int *)(a1 + 404), a1);
  }
  return result;
}
