__int64 __fastcall sub_CEAC80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  v4 = sub_DFDF30(a1);
  if ( !(_BYTE)v4 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_DA3FF0(a3) )
      return v5;
  }
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) != 0 )
  {
    v5 = 1;
    *(_BYTE *)sub_CEAA70(a3) = 1;
    return v5;
  }
  return sub_CDB0E0(a1, a2);
}

