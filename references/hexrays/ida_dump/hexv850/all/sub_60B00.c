__int64 __fastcall sub_60B00(_QWORD *a1, unsigned int *a2)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = *a2; ; --i )
  {
    result = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))*a1)(*a1, i, 1);
    if ( (_DWORD)result != -1 )
      break;
  }
  return result;
}
