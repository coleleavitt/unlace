_DWORD *__fastcall sub_2016760(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 120);
  if ( *(_BYTE *)(a1 + 140) )
    *result = *(_DWORD *)(a1 + 136);
  else
    *result = 0;
  return result;
}
