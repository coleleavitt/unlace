__int64 __fastcall sub_D22870(__int64 a1, __int64 a2, __int64 *a3, int a4)
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
  v8 = sub_DCA720(a1, a2, v7 + 40);
  if ( !(_BYTE)v8 )
    return 0;
  sub_E23220(
    v13,
    *(_QWORD *)(v7 + 72),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v7 + 40)));
  v10 = sub_D22760(*(_QWORD *)(a1 + 176));
  v11 = sub_B78170(*a3);
  LOBYTE(v12) = v10;
  if ( v11 <= 7 )
  {
    v12 = v10 & ((1 << v11) - 1);
    if ( ((unsigned __int8)(1 << (v11 - 1)) & (unsigned __int8)v10) != 0 )
      LOBYTE(v12) = v12 | -(char)(1 << v11);
  }
  *(_BYTE *)sub_D0C5D0((__int64)v13) = v12;
  sub_E24D00(v13);
  sub_E232A0(v13);
  return v8;
}
