__int64 __fastcall sub_D14130(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  _BYTE *v7; // r12
  _BYTE v8[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC8930(a1, a2, v4, 2) || !(unsigned __int8)sub_DC8DB0(a1, a2, v4, 2) )
    return 0;
  sub_E23220(v8, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_DCC160(a1, a2, v8, 0);
  if ( (_BYTE)v6 )
  {
    v7 = (_BYTE *)sub_D0C5D0((__int64)v8);
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v7;
  }
  sub_E232A0(v8);
  return v6;
}
