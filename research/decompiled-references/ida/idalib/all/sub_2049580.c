bool __fastcall sub_2049580(__int64 *a1, int a2)
{
  __int64 v2; // rdx
  bool result; // al
  __int64 v4; // rsi

  v2 = *a1;
  result = 0;
  if ( *a1 )
  {
    v4 = (unsigned int)(a2 + 1);
    if ( (unsigned int)v4 < *(_DWORD *)(v2 + 8) )
      return *(_QWORD *)(v2 + 8 * v4 + 48) != 0;
  }
  return result;
}
