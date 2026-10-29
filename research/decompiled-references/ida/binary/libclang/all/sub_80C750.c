_WORD *__fastcall sub_80C750(_WORD *a1)
{
  _WORD *result; // rax
  unsigned __int16 v2; // dx
  _WORD *v3; // rdi

  result = a1 + 20;
  v2 = *a1 & 0x1FF;
  if ( v2 <= 0x56u )
  {
    result = a1 + 12;
    v3 = a1 + 24;
    if ( v2 > 0x50u )
      return v3;
  }
  return result;
}

