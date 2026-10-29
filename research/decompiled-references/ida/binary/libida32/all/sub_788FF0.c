__int64 __fastcall sub_788FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_788C70(a1);
  if ( *(_BYTE *)(v2 + 265) )
    return set_qerrno(2000, a2);
  if ( *(_DWORD *)v2 == 3 )
    return set_qerrno(2016, a2);
  *(_BYTE *)(v2 + 265) = 1;
  return 0;
}

