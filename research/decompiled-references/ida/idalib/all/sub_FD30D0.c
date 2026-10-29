char __fastcall sub_FD30D0(__int64 a1, unsigned int a2)
{
  unsigned __int16 *v3; // rax

  if ( a2 > 0x233B )
    return *(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) & 7;
  v3 = sub_FD2C00(a2);
  if ( v3 )
    return v3[1] & 7 | (32 * ((*((_BYTE *)v3 + 3) & 0x40) != 0));
  else
    return 5;
}
