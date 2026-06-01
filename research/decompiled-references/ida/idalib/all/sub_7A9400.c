__int64 __fastcall sub_7A9400(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_7A9010(a1);
  if ( *(_BYTE *)(v1 + 265) || *(_DWORD *)v1 == 2 )
    return set_qerrno(2001);
  if ( *(_DWORD *)v1 != 1 )
    return set_qerrno(2002);
  *(_DWORD *)v1 = 2;
  return 0;
}
