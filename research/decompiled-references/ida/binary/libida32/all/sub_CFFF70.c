__int64 __fastcall sub_CFFF70(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  char v6; // al
  __int64 v7; // rbp
  unsigned int v8; // r12d
  int v10; // r13d
  unsigned int v11; // eax
  int v12; // ebx
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v7 = *(_QWORD *)(a1 + 400);
  if ( v6 && !*(_DWORD *)(v7 + 24) )
    return 0;
  v8 = sub_DA69E0(a1, a2, v7 + 40);
  if ( !(_BYTE)v8 )
    return 0;
  sub_DFF4E0(
    v13,
    *(_QWORD *)(v7 + 72),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)));
  v10 = sub_CFFE60(*(_QWORD *)(a1 + 176));
  v11 = sub_B54430(*a3);
  v12 = v10;
  if ( v11 <= 0x1F )
  {
    v12 = v10 & ((1 << v11) - 1);
    if ( (v10 & (1 << (v11 - 1))) != 0 )
      v12 |= -(1 << v11);
  }
  *(_DWORD *)sub_CE9490((__int64)v13) = v12;
  sub_E00FC0(v13);
  sub_DFF560(v13);
  return v8;
}

