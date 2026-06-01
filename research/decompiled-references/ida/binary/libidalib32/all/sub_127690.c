__int64 __fastcall sub_127690(__int64 a1)
{
  __int64 ph; // rdx
  __int64 result; // rax

  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_1496D0(*(unsigned int *)(a1 + 84));
    return 1;
  }
  return result;
}

