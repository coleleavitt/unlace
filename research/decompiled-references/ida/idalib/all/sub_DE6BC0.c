__int64 __fastcall sub_DE6BC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // r12d
  _BYTE *v5; // r13
  _DWORD v6[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v6);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v6, 3);
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)sub_E21C70(a1) || v6[6] || !sub_DB0AB0((__int64)v6) )
    {
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x20) != 0 )
      {
        v5 = (_BYTE *)sub_D0E7B0((__int64)v6);
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v5;
        *(_BYTE *)sub_D0E7B0((__int64)v6) = 1;
      }
      else
      {
        v3 = sub_CFEE20(a1, (__int64)a2);
      }
    }
    else
    {
      v3 = 0;
    }
  }
  sub_E232A0(v6);
  return v3;
}
