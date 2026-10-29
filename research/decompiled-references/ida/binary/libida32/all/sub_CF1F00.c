__int64 __fastcall sub_CF1F00(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // r13
  __int64 v8; // rbp
  _DWORD v9[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v9);
  sub_DFDA50(v4, 48);
  if ( (unsigned __int8)sub_DA4BF0(a1, a2, v9, 2) && (unsigned __int8)sub_DA5070(a1, a2, v9, 2) )
  {
    sub_DFF4E0(v11, v10, (unsigned int)(a3 + v9[0]), (unsigned int)(a3 + v9[0]));
    v5 = sub_DA8420(a1, a2, v11, 0);
    if ( (_BYTE)v5 )
    {
      v7 = sub_CEB200((__int64)v11);
      v8 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
      sub_DFF4A0(v8, v7);
      *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 48);
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(v7 + 56);
    }
    sub_DFF560(v11);
  }
  else
  {
    v5 = 0;
  }
  sub_DFF560(v9);
  return v5;
}

