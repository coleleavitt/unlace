char __fastcall sub_ACF410(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = sub_ACDF50(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 32));
  if ( result )
  {
    result = 0;
    if ( ((*(_WORD *)(a2 + 18) >> 6) & 7) == ((*(_WORD *)(a3 + 18) >> 6) & 7) )
      return ((*(_BYTE *)(a3 + 18) >> 3) & 7) == ((*(_BYTE *)(a2 + 18) >> 3) & 7);
  }
  return result;
}

