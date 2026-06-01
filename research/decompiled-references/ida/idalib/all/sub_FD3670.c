char __fastcall sub_FD3670(__int64 a1, unsigned int a2)
{
  char result; // al
  unsigned __int16 *v3; // rdx

  if ( a2 > 0x233B )
    return (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) & 7u) > 3;
  v3 = sub_FD2C00(a2);
  result = 1;
  if ( v3 )
    return (v3[1] & 7u) > 3;
  return result;
}
