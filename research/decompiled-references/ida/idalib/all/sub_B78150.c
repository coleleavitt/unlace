_QWORD *__fastcall sub_B78150(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( (*(_BYTE *)(a1 + 68) & 1) != 0 )
  {
    result = *(_QWORD **)(a1 + 72);
    *result = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = a2;
  }
  return result;
}
