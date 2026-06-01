__int64 __fastcall sub_D1C350(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  int v5; // r13d
  __int64 v6; // rbp
  unsigned int v8; // ebx
  _BYTE v9[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC8930(a1, a2, v6, 2) || !(unsigned __int8)sub_DC8DB0(a1, a2, v6, 2) )
    return 0;
  sub_E23220(v9, *(_QWORD *)(v6 + 32), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
  v8 = sub_DCBF60(a1, a2, v9);
  if ( (_BYTE)v8 )
  {
    sub_E24D00(v9);
    *(_DWORD *)sub_D0D3E0((__int64)v9) = v5;
  }
  sub_E232A0(v9);
  return v8;
}
