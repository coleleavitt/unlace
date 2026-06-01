_DWORD *__fastcall sub_D1220(_DWORD *a1)
{
  if ( *a1 )
  {
    if ( (a1[1] & 2) == 0 )
    {
      sub_D0EB0((__int64)a1);
      if ( !(unsigned int)decode_insn() )
        a1[5] = -1;
      a1[1] |= 2u;
    }
    return a1 + 3;
  }
  else
  {
    a1[5] = -1;
    return a1 + 3;
  }
}

