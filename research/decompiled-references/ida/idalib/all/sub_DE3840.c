__int64 __fastcall sub_DE3840(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // rax
  _DWORD v7[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v7);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v7, 0);
  if ( (_BYTE)v3 )
  {
    if ( v7[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = sub_D0EA30((__int64)v7);
      v6 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
      sub_E231E0(v6, v5);
    }
  }
  sub_E232A0(v7);
  return v3;
}
