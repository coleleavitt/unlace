__int64 __fastcall sub_2B51A0(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( (_DWORD)result == 1 )
    return sub_1F4880(*(QT::QAbstractScrollArea **)(*(_QWORD *)a1 + 16LL), 0);
  if ( (_DWORD)result == 2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)a1 + 152LL))(*(_QWORD *)a1, 0, 0);
  return result;
}
