__int64 __fastcall sub_157D0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v4 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v4 > 0x70000021 )
  {
    if ( (_DWORD)v4 == 1879048352 )
    {
      if ( *(_BYTE *)(a1 + 389) )
        return 0;
    }
    else if ( (unsigned int)v4 > 0x700000A0 )
    {
      if ( (unsigned int)(v4 - 2147480608) <= 1 )
        return 0;
    }
    else if ( (_DWORD)v4 == 1879048320 && *(_BYTE *)(a1 + 388) )
    {
      return 0;
    }
  }
  else if ( (unsigned int)v4 > 0x6FFFFFFF )
  {
    v5 = 0x34000183FLL;
    if ( _bittest64(&v5, v4) )
      return 0;
    if ( (_DWORD)v4 == 1879048198 )
    {
      sub_155D0(a1, *(_QWORD *)(a2 + 24), 0, a4);
      return 0;
    }
    if ( (_DWORD)v4 == 1879048205 )
    {
      sub_155D0(a1, *(_QWORD *)(a2 + 24), 1, a4);
      return 0;
    }
  }
  if ( (debug & 0x10) == 0 )
    return a3;
  sub_E950((__int64)"Unsupported or unknown section type 0x%X, skipped\n", v4);
  return a3;
}
