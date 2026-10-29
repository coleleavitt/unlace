__int64 __fastcall sub_CFB720(__int64 a1, __int64 a2)
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
  v3 = sub_DFDA20(v2, 64);
  sub_DFF520(v11);
  v12 = *(_QWORD *)(v3 + 48);
  v13 = *(_DWORD *)(v3 + 56);
  sub_DFDA50(v2, 64);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8220(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    if ( !v8[6] && v9 && v10 )
    {
      sub_E00FC0(v8);
      sub_DFFFB0(v8);
    }
    v6 = sub_CEB200((__int64)v8);
    sub_DFF5C0(v6, v11);
    *(_QWORD *)(v6 + 48) = v12;
    *(_DWORD *)(v6 + 56) = v13;
  }
  sub_DFF560(v8);
  sub_DFF560(v11);
  return v5;
}

