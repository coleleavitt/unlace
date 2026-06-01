__int64 __fastcall sub_CEBB0(__int64 a1)
{
  void *v1; // rax

  v1 = qword_252758;
  if ( !qword_252758 )
    return 4294967291LL;
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 0x20) != 0 )
    return 4294967292LL;
  *(_QWORD *)qword_252758 = a1;
  return sub_CDCF0((__int64)v1, 18);
}

