bool __fastcall sub_1011C60(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  bool result; // al

  v2 = sub_108BB40(a1, *a2, a2[1]);
  v3 = v2;
  *(_DWORD *)(a1 + 512) = v2;
  result = 0;
  if ( (_DWORD)v3 )
    return (unsigned int)sub_108B850(a1, v3) == 1;
  return result;
}

