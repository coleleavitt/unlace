__int64 __fastcall sub_7886C0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 265) || *(_DWORD *)a1 == 2 )
    return set_qerrno(2001, a2);
  if ( *(_DWORD *)a1 != 1 )
    return set_qerrno(2002, a2);
  *(_DWORD *)a1 = 2;
  return 0;
}

