__int64 __fastcall sub_CD600(__int64 a1)
{
  void *v1; // rax

  v1 = qword_2515B0;
  if ( !qword_2515B0 )
    return 4294967291LL;
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 0x20) != 0 )
    return 4294967292LL;
  *(_QWORD *)qword_2515B0 = a1;
  return sub_CC780((__int64)v1, 18);
}

