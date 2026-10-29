__int64 __fastcall sub_19D1890(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // dx
  __int64 result; // rax
  _WORD *v5; // rax
  unsigned __int16 v6; // dx

  v2 = sub_BFBAE0(a2);
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( v3 == 39 )
  {
    v5 = (_WORD *)sub_BFB9F0(*(_QWORD *)(v2 + 16));
    v6 = *v5 & 0x1FF;
    if ( v6 == 62 )
    {
      return 2;
    }
    else if ( v6 <= 0x3Eu )
    {
      result = 2;
      if ( v6 != 40 )
        return (unsigned int)(v6 != 52) + 2;
    }
    else if ( v6 == 79 )
    {
      return (unsigned int)(((v5[1] >> 3) & 0x7Fu) - 27 > 1) + 2;
    }
    else
    {
      result = 2;
      if ( v6 != 115 )
        return (unsigned int)(v6 != 78) + 2;
    }
  }
  else if ( v3 <= 0x27u )
  {
    result = 4;
    if ( v3 != 29 )
      return 5 * (unsigned int)(v3 != 38) + 1;
  }
  else
  {
    result = 0;
    if ( v3 != 42 )
      return (unsigned int)(v3 != 117) + 5;
  }
  return result;
}
