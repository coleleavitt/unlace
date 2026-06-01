__int64 __fastcall sub_CFACA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD v7[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v7);
  sub_DFDA50(v4, 48);
  v5 = sub_DA8220(a1, a2, v7);
  if ( (_BYTE)v5 )
  {
    if ( !v7[6] && v8 && v9 )
    {
      sub_E00FC0(v7);
      sub_DFFFB0(v7);
    }
    *(_BYTE *)sub_CE8AA0((__int64)v7) = v3;
  }
  sub_DFF560(v7);
  return v5;
}

