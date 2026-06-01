__int64 __fastcall sub_5C7340(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 208) )
    return set_qerrno(66, a2);
  *(_DWORD *)(a1 + 208) = 4;
  return 0;
}

