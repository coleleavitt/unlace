__int64 __fastcall sub_D1F460(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r13
  _DWORD v8[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+20h] [rbp-78h]
  int v10; // [rsp+28h] [rbp-70h]
  _BYTE v11[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 64);
  sub_E23260(v11);
  v12 = *(_QWORD *)(v3 + 48);
  v13 = *(_DWORD *)(v3 + 56);
  sub_E21790(v2, 64);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v8);
  sub_E21790(v4, 48);
  v5 = sub_DCBF60(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    if ( !v8[6] && v9 && v10 )
    {
      sub_E24D00(v8);
      sub_E23CF0(v8);
    }
    v6 = sub_D0EF40((__int64)v8);
    sub_E23300(v6, v11);
    *(_QWORD *)(v6 + 48) = v12;
    *(_DWORD *)(v6 + 56) = v13;
  }
  sub_E232A0(v8);
  sub_E232A0(v11);
  return v5;
}
