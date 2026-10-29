__int64 __fastcall sub_98B70(__int64 a1)
{
  __int64 result; // rax

  if ( dbg )
  {
    result = 5;
    if ( *(_DWORD *)(a1 + 64) == 4 )
    {
      if ( !*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL) )
        return result;
    }
    else if ( (*(_BYTE *)(dbg + 37LL) & 2) == 0 )
    {
      return result;
    }
  }
  if ( *(_DWORD *)(a1 + 44) || sub_98370(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 56), *(_DWORD *)(a1 + 80)) )
    return 2 * ((unsigned __int8)sub_98A00(a1, (const char *)xmmword_2528A0, "breakpoint") ^ 1u);
  else
    return 1;
}

