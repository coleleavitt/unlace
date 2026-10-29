__int64 __fastcall sub_B309A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LODWORD(result) = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result == -1 )
    return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
  result = (unsigned int)result;
  if ( a2 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)result) )
    return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
  return result;
}

