__int64 __fastcall sub_55C940(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)result )
    return *(_BYTE *)(a2 + 28) == 0 ? 1 : 3;
  return result;
}
