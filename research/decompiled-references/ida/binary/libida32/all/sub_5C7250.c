__int64 __fastcall sub_5C7250(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 212) == 2 )
  {
    if ( (unsigned int)set_qerrno(63, a2) )
      return 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 1;
  }
  if ( *(_DWORD *)(a1 + 208) )
    return set_qerrno(66, a2);
  *(_DWORD *)(a1 + 208) = 2;
  return 0;
}

