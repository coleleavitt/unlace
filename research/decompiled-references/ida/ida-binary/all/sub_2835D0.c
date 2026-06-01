__int64 __fastcall sub_2835D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a2 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 152LL))(a1, 0, 1);
  result = *(unsigned int *)(a2 + 20);
  if ( *(_DWORD *)(a2 + 28) != (_DWORD)result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 152LL))(a1, 0, 1);
  return result;
}
