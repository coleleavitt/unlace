__int64 __fastcall sub_DE6CB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  _BYTE *v5; // rbx
  _DWORD v6[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v6);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v6, 4);
  if ( !(_BYTE)v3 )
    goto LABEL_2;
  v3 = sub_E21C70(a1);
  if ( !(_BYTE)v3 && !v6[6] && sub_DB0AB0((__int64)v6) )
    goto LABEL_2;
  if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x20) == 0 )
  {
    v3 = sub_CFEE20(a1, (__int64)a2);
LABEL_2:
    sub_E232A0(v6);
    return v3;
  }
  v5 = (_BYTE *)sub_D0E7B0((__int64)v6);
  *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v5;
  return sub_DE6D80();
}
