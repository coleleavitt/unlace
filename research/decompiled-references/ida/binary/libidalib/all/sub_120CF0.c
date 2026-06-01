_BOOL8 sub_120CF0()
{
  __int64 ph; // rdx
  _BOOL8 result; // rax
  __int64 v2; // rax

  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    v2 = itext();
    return sub_149EA0(v2) == 0;
  }
  return result;
}

