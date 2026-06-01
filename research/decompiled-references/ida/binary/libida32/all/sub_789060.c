__int64 __fastcall sub_789060(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_788C70(a1);
  if ( *(_BYTE *)(v2 + 265) || *(_DWORD *)v2 == 2 )
    return set_qerrno(2001, a2);
  if ( *(_DWORD *)v2 != 1 )
    return set_qerrno(2002, a2);
  *(_DWORD *)v2 = 2;
  return 0;
}

