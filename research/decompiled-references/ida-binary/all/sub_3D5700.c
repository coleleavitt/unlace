__int64 __fastcall sub_3D5700(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 2;
  if ( *(_WORD *)(a3 + 24) == 3 )
  {
    *((_DWORD *)QT::QCoreApplication::self + 163) = *(_QWORD *)(a3 + 32);
    return 0;
  }
  return result;
}
