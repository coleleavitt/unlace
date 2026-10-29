__int64 __fastcall sub_CF8E50(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 v9; // r13
  _BYTE v10[48]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v11[48]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  int v13; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 64);
  sub_DFF520(v11);
  v12 = *(_QWORD *)(v5 + 48);
  v13 = *(_DWORD *)(v5 + 56);
  sub_DFDA50(v4, 64);
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( (unsigned __int8)sub_DA4BF0(a1, a2, v6, 2) && (unsigned __int8)sub_DA5070(a1, a2, v6, 2) )
  {
    sub_DFF4E0(v10, *(_QWORD *)(v6 + 32), (unsigned int)(a3 + *(_DWORD *)v6), (unsigned int)(a3 + *(_DWORD *)v6));
    v7 = sub_DA8220(a1, a2, v10);
    if ( (_BYTE)v7 )
    {
      sub_E00FC0(v10);
      v9 = sub_CEB200((__int64)v10);
      sub_DFF5C0(v9, v11);
      *(_QWORD *)(v9 + 48) = v12;
      *(_DWORD *)(v9 + 56) = v13;
    }
    sub_DFF560(v10);
  }
  else
  {
    v7 = 0;
  }
  sub_DFF560(v11);
  return v7;
}

