__int64 __fastcall sub_2128E20(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 856);
  if ( (_DWORD)result == -1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 40) + 152LL);
  return result;
}
