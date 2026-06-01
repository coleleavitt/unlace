__int64 __fastcall sub_D0D800(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // r12d
  _DWORD *v8; // r13
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v3 = a1[70];
  v4 = a1[154];
  a1[155] = *a3;
  sub_E21760(v3, 48);
  sub_E23260(savedregs);
  sub_E21790(v3, 48);
  v5 = sub_DCC160(a1 + 48, v4, savedregs, 4);
  if ( (_BYTE)v5 && ((v6 = v5, (unsigned __int8)sub_E21C70(a1 + 48)) || !(unsigned __int8)sub_DC7D30(savedregs)) )
  {
    v8 = (_DWORD *)sub_D0D3E0((__int64)savedregs);
    *(_DWORD *)sub_E216C0(a1[70], 8) = *v8;
    *(_DWORD *)sub_D0D3E0((__int64)savedregs) = *v8 - 1;
  }
  else
  {
    v6 = 0;
  }
  sub_E232A0(savedregs);
  return v6;
}
