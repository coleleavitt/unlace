__int64 __fastcall sub_DE6F70(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DCC160(a1, a2, v2, 3);
  if ( !(_BYTE)v3 )
    return v3;
  if ( !(unsigned __int8)sub_E21C70(a1) && !*(_DWORD *)(v2 + 24) && sub_DB0AB0(v2) )
    return 0;
  if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x20) == 0 )
    return sub_CFEE20(a1, (__int64)a2);
  *(_BYTE *)sub_D0E7B0(v2) = 1;
  return v3;
}
