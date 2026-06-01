bool __fastcall sub_7AF790(__int64 a1)
{
  _QWORD *v1; // rdx
  bool result; // al

  v1 = *(_QWORD **)(a1 + 1736);
  result = 0;
  if ( *v1 )
  {
    result = 1;
    if ( !v1[1] )
      return *(_DWORD *)(v1[2] + 1620LL) == 0;
  }
  return result;
}
