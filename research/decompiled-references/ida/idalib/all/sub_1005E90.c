__int64 __fastcall sub_1005E90(__int64 a1, __int64 a2)
{
  if ( a2 == 4 )
    return 2 * (unsigned int)(*(_DWORD *)a1 != 1701736302);
  if ( a2 == 6 && *(_DWORD *)a1 == 1651469415 && *(_WORD *)(a1 + 4) == 27745 )
    return 1;
  return 2;
}
