bool __fastcall sub_1436880(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx

  result = 0;
  if ( *(_DWORD *)(a1 + 1336) )
  {
    v2 = *(_QWORD *)(a1 + 56);
    result = 1;
    if ( *(char *)(v2 + 22) >= 0 )
      return *(_BYTE *)(v2 + 201) >> 5 != 0;
  }
  return result;
}
