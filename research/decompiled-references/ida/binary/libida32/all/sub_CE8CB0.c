__int64 __fastcall sub_CE8CB0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // r12d
  _BYTE *v8; // r13
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v3 = a1[70];
  v4 = a1[154];
  a1[155] = *a3;
  sub_DFDA20(v3, 48);
  sub_DFF520(savedregs);
  sub_DFDA50(v3, 48);
  v5 = sub_DA8420(a1 + 48, v4, savedregs, 3);
  if ( (_BYTE)v5 && ((v6 = v5, (unsigned __int8)sub_DFDF30(a1 + 48)) || !(unsigned __int8)sub_DA3FF0(savedregs)) )
  {
    v8 = (_BYTE *)sub_CE8AA0((__int64)savedregs);
    *(_BYTE *)sub_DFD980(a1[70], 8) = *v8;
    *(_BYTE *)sub_CE8AA0((__int64)savedregs) = *v8 + 1;
  }
  else
  {
    v6 = 0;
  }
  sub_DFF560(savedregs);
  return v6;
}

