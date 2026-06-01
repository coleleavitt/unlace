__int64 __fastcall sub_CF7170(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars30[88]; // [rsp+30h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(_0);
  sub_DFDA50(v4, 48);
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v6 = sub_DA5070(a1, a2, v5, 2);
  if ( (_BYTE)v6 )
  {
    sub_DFF4E0(vars30, *(_QWORD *)(v5 + 32), (unsigned int)(a3 + *(_DWORD *)v5), (unsigned int)(a3 + *(_DWORD *)v5));
    v7 = sub_CEACF0((__int64)vars30);
    sub_DFF5C0(v7, _0);
    sub_DFFFB0(vars30);
    sub_E00FC0(vars30);
    sub_DFF560(vars30);
  }
  sub_DFF560(_0);
  return v6;
}

