bool __fastcall sub_F79CB0(__int64 a1, __int64 a2)
{
  bool v2; // r12
  bool result; // al
  bool v4; // r12

  if ( a1 == a2 )
    return 0;
  v2 = sub_B98230((_QWORD *)a1, a2);
  if ( v2 != sub_B98230((_QWORD *)a2, a2) )
    return sub_B98230((_QWORD *)a1, a2);
  v4 = sub_B98360((_QWORD *)a1, a2);
  if ( v4 != sub_B98360((_QWORD *)a2, a2) )
    return sub_B98360((_QWORD *)a1, a2);
  result = (*(_BYTE *)(a1 + 28) & 0x7F) == 36;
  if ( result == ((*(_BYTE *)(a2 + 28) & 0x7F) == 36) )
    return 0;
  return result;
}
