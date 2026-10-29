__int64 __fastcall sub_D1EAB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD v7[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v7);
  sub_E21790(v4, 48);
  v5 = sub_DCBF60(a1, a2, v7);
  if ( (_BYTE)v5 )
  {
    if ( !v7[6] && v8 && v9 )
    {
      sub_E24D00(v7);
      sub_E23CF0(v7);
    }
    *(_WORD *)sub_D0CBD0((__int64)v7) = v3;
  }
  sub_E232A0(v7);
  return v5;
}
