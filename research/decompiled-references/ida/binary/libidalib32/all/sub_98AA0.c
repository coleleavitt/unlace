__int64 __fastcall sub_98AA0(_DWORD *a1)
{
  __int64 result; // rax

  if ( dbg )
  {
    result = 5;
    if ( a1[14] == 4 )
    {
      if ( !*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL) )
        return result;
    }
    else if ( (*(_BYTE *)(dbg + 37LL) & 2) == 0 )
    {
      return result;
    }
  }
  if ( a1[10] || sub_982B0(a1[14], a1[13], a1[18]) )
    return 2 * ((unsigned __int8)sub_98930((__int64)a1, qword_251700, (__int64)"breakpoint") ^ 1u);
  else
    return 1;
}

