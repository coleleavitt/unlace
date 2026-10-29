_BYTE *__fastcall sub_9FD0E0(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax

  result = sub_9FD050(a1, a2);
  *(_BYTE *)(a1 + 104) = 0;
  if ( !*(_BYTE *)(a2 + 104) )
  {
    *(_BYTE *)(a1 + 144) = 0;
    if ( !*(_BYTE *)(a2 + 144) )
      return result;
    return sub_9FB050(a1 + 112, a2 + 112);
  }
  result = sub_9FB050(a1 + 72, a2 + 72);
  *(_BYTE *)(a1 + 144) = 0;
  if ( *(_BYTE *)(a2 + 144) )
    return sub_9FB050(a1 + 112, a2 + 112);
  return result;
}

