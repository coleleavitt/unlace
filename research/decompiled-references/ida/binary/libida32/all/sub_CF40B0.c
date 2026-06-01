__int64 __fastcall sub_CF40B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbp
  _BYTE v8[48]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_DFDA20(v2, 64);
  sub_DFF520(v8);
  v9 = *(_QWORD *)(v3 + 48);
  v10 = *(_DWORD *)(v3 + 56);
  sub_DFDA50(v2, 64);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA6400(a1, a2, v4);
  if ( (_BYTE)v5 )
  {
    sub_DFFFB0(v4);
    sub_E00FC0(v4);
    v6 = sub_CEB200(v4);
    sub_DFF4A0(v6, v8);
    *(_QWORD *)(v6 + 48) = v9;
    *(_DWORD *)(v6 + 56) = v10;
  }
  sub_DFF560(v8);
  return v5;
}

