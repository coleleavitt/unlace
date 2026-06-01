bool __fastcall sub_1A0B820(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(unsigned int *)(a1 + 16);
  result = 0;
  if ( (_DWORD)v1 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 8) + 40 * v1 - 40) == 19;
  return result;
}
