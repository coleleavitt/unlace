__int64 __fastcall sub_D1D360(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v7);
  sub_E21790(v2, 48);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DCBF60(a1, a2, v3);
  if ( (_BYTE)v4 )
  {
    if ( !*(_DWORD *)(v3 + 24) && *(_QWORD *)(v3 + 32) && *(_DWORD *)(v3 + 40) )
    {
      sub_E24D00(v3);
      sub_E23CF0(v3);
    }
    v5 = sub_D0EA30(v3);
    sub_E23300(v5, v7);
  }
  sub_E232A0(v7);
  return v4;
}
