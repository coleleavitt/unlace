__int64 __fastcall sub_CF8810(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int v8; // ebx
  _BYTE v9[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DA4BF0(a1, a2, v6, 2) || !(unsigned __int8)sub_DA5070(a1, a2, v6, 2) )
    return 0;
  sub_DFF4E0(v9, *(_QWORD *)(v6 + 32), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
  v8 = sub_DA8220(a1, a2, v9);
  if ( (_BYTE)v8 )
  {
    sub_E00FC0(v9);
    *(_QWORD *)sub_CE9E90((__int64)v9) = v5;
  }
  sub_DFF560(v9);
  return v8;
}

