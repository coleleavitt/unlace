__int64 __fastcall sub_11E900(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rsi

  if ( *(_BYTE *)a2 != 4 || (v4 = *(_DWORD **)(a2 + 8), *a1 = 0, a1[1] = 0, !sub_11E880(a1, v4, 0)) )
  {
    a1[1] = a2;
    *a1 = 0;
  }
  return 1;
}
