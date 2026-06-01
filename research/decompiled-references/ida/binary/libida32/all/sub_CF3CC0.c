__int64 __fastcall sub_CF3CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // r12d
  _BYTE *v6; // r13
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v7);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, v7, 3);
  if ( (_BYTE)v3 && ((v4 = v3, (unsigned __int8)sub_DFDF30(a1)) || !(unsigned __int8)sub_DA3FF0(v7)) )
  {
    v6 = (_BYTE *)sub_CE8AA0((__int64)v7);
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v6;
    *(_BYTE *)sub_CE8AA0((__int64)v7) = *v6 + 1;
  }
  else
  {
    v4 = 0;
  }
  sub_DFF560(v7);
  return v4;
}

