__int64 __fastcall sub_D14CA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rbx
  _BYTE v9[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC8930(a1, a2, v4, 2) || !(unsigned __int8)sub_DC8DB0(a1, a2, v4, 2) )
    return 0;
  sub_E23220(v9, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_DCC160(a1, a2, v9, 0);
  if ( (_BYTE)v6 )
  {
    v7 = sub_D0EF40((__int64)v9);
    v8 = sub_E216C0(*(_QWORD *)(a1 + 176), 64);
    sub_E231E0(v8, v7);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 48);
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v7 + 56);
  }
  sub_E232A0(v9);
  return v6;
}
