__int64 __fastcall sub_5E4790(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // al

  if ( !(unsigned __int8)getinf_flag(3, 4) )
    return set_qerrno(47);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = *(_BYTE *)(v2 + 186);
  if ( (v3 & 0x3F) != 0 )
    return set_qerrno(66);
  *(_BYTE *)(v2 + 186) = v3 | 0x28;
  return 0;
}
