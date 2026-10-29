__int64 __fastcall sub_5E5370(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = a1[16];
  if ( !v1 )
  {
    v1 = a1[17];
    if ( !v1 )
      v1 = a1[14];
  }
  if ( (*(_BYTE *)(v1 + 186) & 0x3F) != 0xD )
    return set_qerrno(10);
  v2 = a1[9];
  if ( v2 > 0xFFFFFFFE )
    return set_qerrno(7);
  *(_QWORD *)(v1 + 96) = v2;
  v4 = a1[16];
  if ( !v4 )
  {
    v4 = a1[17];
    if ( !v4 )
      v4 = a1[14];
  }
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x400000000LL) != 0 )
    return set_qerrno(66);
  *(_QWORD *)(v4 + 40) = v5 | 0x400000000LL;
  return 0;
}
