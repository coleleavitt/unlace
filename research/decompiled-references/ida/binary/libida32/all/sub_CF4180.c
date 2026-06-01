__int64 __fastcall sub_CF4180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // esi
  _BYTE v11[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(unsigned __int8 *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v7 = (unsigned int)(*(_DWORD *)v6 + *(_DWORD *)(a3 + 8));
  sub_DFF4E0(v11, *(_QWORD *)(v6 + 32), v7, (unsigned int)v7);
  v8 = sub_B54430(*(_QWORD *)a3);
  if ( v8 <= 7 )
  {
    v9 = v5 & ((1 << v8) - 1);
    if ( ((unsigned __int8)(1 << (v8 - 1)) & (unsigned __int8)v5) != 0 )
      v9 |= -(1 << v8);
    LOBYTE(v5) = v9;
  }
  *(_BYTE *)sub_CE8890((__int64)v11) = v5;
  sub_DFFFB0(v11);
  sub_E00FC0(v11);
  sub_DFF560(v11);
  return 1;
}

