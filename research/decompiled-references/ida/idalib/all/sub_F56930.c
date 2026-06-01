unsigned __int64 __fastcall sub_F56930(__int64 a1)
{
  __int64 v2; // rax

  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 || !(unsigned int)sub_F56710(a1) )
    return a1 & 0xFFFFFFFFFFFFFFF0LL;
  v2 = 0x800000038LL;
  if ( (*(_BYTE *)(a1 + 17) & 2) == 0 )
    v2 = 8LL * ((unsigned int)sub_F56710(a1) - 1) + 64;
  return *(_QWORD *)(a1 + v2);
}
