__int64 __fastcall sub_D15B30(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // r13
  __int64 v8; // rax
  _DWORD v9[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v9);
  sub_E21790(v4, 48);
  if ( (unsigned __int8)sub_DC8930(a1, a2, v9, 2) && (unsigned __int8)sub_DC8DB0(a1, a2, v9, 2) )
  {
    sub_E23220(v11, v10, (unsigned int)(a3 + v9[0]), (unsigned int)(a3 + v9[0]));
    v5 = sub_DCC160(a1, a2, v11, 0);
    if ( (_BYTE)v5 )
    {
      v7 = sub_D0EA30((__int64)v11);
      v8 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
      sub_E231E0(v8, v7);
    }
    sub_E232A0(v11);
  }
  else
  {
    v5 = 0;
  }
  sub_E232A0(v9);
  return v5;
}
