__int64 __fastcall sub_CF17A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  _QWORD *v7; // r13
  _DWORD v8[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  if ( (unsigned __int8)sub_DA4BF0(a1, a2, v8, 2) && (unsigned __int8)sub_DA5070(a1, a2, v8, 2) )
  {
    sub_DFF4E0(v10, v9, (unsigned int)(a3 + v8[0]), (unsigned int)(a3 + v8[0]));
    v5 = sub_DA8420(a1, a2, v10, 0);
    if ( (_BYTE)v5 )
    {
      v7 = (_QWORD *)sub_CE9C80((__int64)v10);
      *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = *v7;
    }
    sub_DFF560(v10);
  }
  else
  {
    v5 = 0;
  }
  sub_DFF560(v8);
  return v5;
}

