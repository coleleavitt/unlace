bool __fastcall sub_11EC80(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  int i; // edx

  if ( a2 == a1 + 32 )
  {
    result = 0;
    if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(_BYTE *)(a1 + 32) && *(_DWORD *)a1 != 2 )
      return (unsigned int)(*(_DWORD *)a1 - 65) > 1;
  }
  else if ( a2 == a1 + 48 )
  {
    result = 0;
    if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(_BYTE *)(a1 + 48) )
      return (unsigned int)(*(_DWORD *)a1 - 1) > 1;
  }
  else if ( a2 == a1 + 64 )
  {
    return sub_11EBC0((unsigned int *)a1);
  }
  else
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 64) == 8 )
    {
      v3 = *(_QWORD *)(a1 + 72);
      v4 = *(_QWORD *)(v3 + 32);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v3 + 24);
        v6 = 0;
        for ( i = 0; i < v4; v6 = ++i )
        {
          if ( a2 == v5 + 80 * v6 )
            return (get_tinfo_property(*(_QWORD *)(a2 + 24), 2) & 0xF) == 9;
        }
        return 0;
      }
    }
  }
  return result;
}
