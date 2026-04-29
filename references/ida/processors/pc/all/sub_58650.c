__int64 __fastcall sub_58650(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int16 v6; // ax

  v6 = *(_WORD *)(a2 + 24);
  if ( v6 > 0x104u )
  {
    if ( v6 <= 0x108u )
    {
      if ( v6 > 0x106u )
        goto LABEL_8;
    }
    else if ( v6 == 604 )
    {
      goto LABEL_8;
    }
LABEL_11:
    if ( (unsigned __int8)sub_6B2B0(a2, 2) && (unsigned __int8)sub_236C0(a2, a2 + 40) )
    {
      *a3 = 1;
      *a4 = 0;
      return 1;
    }
    return 0;
  }
  if ( v6 <= 0x102u )
  {
    if ( v6 == 143 )
    {
      *a3 = 0;
      *a4 = -1;
      return 1;
    }
    goto LABEL_11;
  }
LABEL_8:
  if ( (unsigned __int8)sub_236C0(a2, a2 + 80) )
  {
    *a3 = 0;
    *a4 = 1;
    return 1;
  }
  return 0;
}
