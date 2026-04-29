bool __fastcall sub_1B1A0(__int64 a1, int a2)
{
  bool result; // al

  result = 0;
  if ( (_WORD)a2 )
  {
    if ( *(_WORD *)(a1 + 33017) >= (unsigned __int16)a2 )
      return netnode_altval(*(_QWORD *)(a1 + 33336), (unsigned int)(a2 << 16), 65) != 0;
  }
  return result;
}
