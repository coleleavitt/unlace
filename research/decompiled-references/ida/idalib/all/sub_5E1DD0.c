__int64 __fastcall sub_5E1DD0(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v1 + 44) & 4) == 0 )
    return set_qerrno(11);
  *(_QWORD *)(v1 + 104) = 8LL * *(_QWORD *)(a1 + 72);
  return 0;
}
