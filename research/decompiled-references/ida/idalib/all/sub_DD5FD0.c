__int64 __fastcall sub_DD5FD0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+28h] [rbp-30h]

  sub_E291A0(v10, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_DC9B40(a1, a2, (__int64)v10, 0);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 176);
    v6 = v12;
    v7 = v10[0];
    if ( !v11 && *(_BYTE *)(sub_CFDF60((__int64)v10) + 60) && v13 == v7 )
      v8 = v6 + v13 + 72;
    else
      v8 = v6 + v7 + 40;
    v9 = sub_E216C0(v5, 48);
    sub_E231E0(v9, v8);
  }
  sub_E232A0(v10);
  return v3;
}
