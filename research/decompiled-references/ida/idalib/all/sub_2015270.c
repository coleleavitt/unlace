_BYTE *__fastcall sub_2015270(__int64 a1)
{
  _BYTE *result; // rax

  result = *(_BYTE **)(a1 + 120);
  if ( *(_BYTE *)(a1 + 137) )
    *result = *(_BYTE *)(a1 + 136);
  else
    *result = 0;
  return result;
}
