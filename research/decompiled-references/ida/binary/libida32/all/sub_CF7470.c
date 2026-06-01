__int64 __fastcall sub_CF7470(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r13
  _BYTE v8[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_DFDA20(v2, 64);
  sub_DFF520(v9);
  v10 = *(_QWORD *)(v3 + 48);
  v11 = *(_DWORD *)(v3 + 56);
  sub_DFDA50(v2, 64);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  v5 = sub_DA6400(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    sub_DFFFB0(v8);
    sub_E00FC0(v8);
    v6 = sub_CEB200((__int64)v8);
    sub_DFF4A0(v6, v9);
    *(_QWORD *)(v6 + 48) = v10;
    *(_DWORD *)(v6 + 56) = v11;
  }
  sub_DFF560(v8);
  sub_DFF560(v9);
  return v5;
}

