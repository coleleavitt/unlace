bool __fastcall sub_10359A0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  bool result; // al

  v2 = sub_10AF880(a1, *a2, a2[1]);
  v3 = v2;
  *(_DWORD *)(a1 + 512) = v2;
  result = 0;
  if ( (_DWORD)v3 )
    return (unsigned int)sub_10AF590(a1, v3) == 1;
  return result;
}
