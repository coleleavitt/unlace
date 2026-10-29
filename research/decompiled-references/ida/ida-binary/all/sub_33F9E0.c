__int64 __fastcall sub_33F9E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 216) = a2;
  if ( *(_QWORD *)(a1 + 224) != a2 )
  {
    result = *(unsigned int *)(a1 + 408);
    *(_BYTE *)(a1 + 256) = 1;
    if ( !(_DWORD)result )
      return QT::QBasicTimer::start(a1 + 408, *(int *)(a1 + 404), a1);
  }
  return result;
}
