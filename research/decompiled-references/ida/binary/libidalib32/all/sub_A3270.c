__int64 sub_A3270()
{
  if ( !dbg || *(_DWORD *)(dbg + 16LL) == 12 )
    return 0;
  if ( *(char *)(dbg + 34LL) >= 0 && !sub_C4D00((unsigned int)dword_251408) )
    return 0;
  sub_A30B0(2);
  return (unsigned __int8)sub_A2160(2u);
}

