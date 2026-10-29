bool __fastcall dbgreg_place_t__::vfunc_10(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  bool result; // al
  int v4; // eax
  unsigned __int64 v5; // rsi

  v2 = a2[1];
  if ( *a2 == v2 )
    return 1;
  result = 0;
  if ( a1[3] == *(_DWORD *)(v2 - 56) && a1[4] == *(_DWORD *)(v2 - 52) )
  {
    v4 = a1[5];
    v5 = *(int *)(v2 - 12);
    if ( v4 >= 0 )
      v4 /= (int)v5;
    return *(_DWORD *)(v2 - 48) + (unsigned int)((v5 + *(_QWORD *)(v2 - 32) - 1) / v5) - 1 == v4 + *(_DWORD *)(v2 - 48);
  }
  return result;
}
