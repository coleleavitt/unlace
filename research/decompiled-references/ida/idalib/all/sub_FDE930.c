__int64 __fastcall sub_FDE930(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 4) != 0 )
    return (unsigned int)(*(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) - 3);
  result = 0;
  if ( (v1 & 2) != 0 )
  {
    result = 1;
    if ( (*a1 & 3) != 2 )
      return (unsigned int)(*(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) - 3);
  }
  return result;
}
