bool __fastcall sub_1FB2220(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 *v5; // rdi

  v3 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v3 - 34) <= 5 )
  {
    if ( (*(_BYTE *)(a1 + 82) & 1) != 0
      || (*(_BYTE *)(a1 + 84) & 3) != 0
      || (unsigned __int8)sub_B8E180(a1 + 72)
      || !sub_1FB12E0(a1) )
    {
      return 0;
    }
    v3 = *(_BYTE *)(a1 + 28) & 0x7F;
  }
  if ( (unsigned int)(v3 - 40) <= 6 )
  {
    v5 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    {
      if ( (unsigned __int8)sub_B8E180(*v5) )
        return 0;
    }
    else if ( (unsigned __int8)sub_B8E180((unsigned __int64)v5) )
    {
      return 0;
    }
    if ( !sub_B73900(a1)
      && ((*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B || *(char *)(a1 + 97) >= 0)
      && !sub_9B48E0(a1)
      && (*(_BYTE *)(a1 + 96) & 0x18) == 0
      && !sub_B73BE0(a1) )
    {
      return sub_1FB11D0(a1, a2);
    }
    return 0;
  }
  return 1;
}
