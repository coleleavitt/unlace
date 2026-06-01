__int64 __fastcall sub_CF0F60(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rbx
  _BYTE v9[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DA4BF0(a1, a2, v4, 2) || !(unsigned __int8)sub_DA5070(a1, a2, v4, 2) )
    return 0;
  sub_DFF4E0(v9, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
  v6 = sub_DA8420(a1, a2, v9, 0);
  if ( (_BYTE)v6 )
  {
    v7 = sub_CEB200((__int64)v9);
    v8 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
    sub_DFF4A0(v8, v7);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 48);
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v7 + 56);
  }
  sub_DFF560(v9);
  return v6;
}

