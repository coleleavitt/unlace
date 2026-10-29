__int64 __fastcall sub_DB2340(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbp
  _QWORD v10[3]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+28h] [rbp-30h]

  sub_E05460(v10, *(_QWORD *)(a1 + 168), a3);
  v3 = sub_DA5E00(a1, a2, (__int64)v10, 0);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 176);
    v6 = v10[0];
    v7 = v12;
    if ( !v11 && *(_BYTE *)(sub_CDA220((__int64)v10) + 60) && v13 == v6 )
      v8 = v7 + v13 + 72;
    else
      v8 = v7 + v6 + 40;
    v9 = sub_DFD980(v5, 64);
    sub_DFF4A0(v9, v8);
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(v8 + 48);
    *(_DWORD *)(v9 + 56) = *(_DWORD *)(v8 + 56);
  }
  sub_DFF560(v10);
  return v3;
}

