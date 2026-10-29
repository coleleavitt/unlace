__int64 __fastcall sub_7A9390(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_7A9010(a1);
  if ( *(_BYTE *)(v1 + 265) )
    return set_qerrno(2000);
  if ( *(_DWORD *)v1 == 3 )
    return set_qerrno(2016);
  *(_BYTE *)(v1 + 265) = 1;
  return 0;
}
