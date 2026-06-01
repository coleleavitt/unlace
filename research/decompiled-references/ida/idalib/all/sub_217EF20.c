bool __fastcall sub_217EF20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    return *(_DWORD *)(a2 + 4) != 8;
  return result;
}
