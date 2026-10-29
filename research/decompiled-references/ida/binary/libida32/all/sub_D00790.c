__int64 __fastcall sub_D00790(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  char v6; // al
  __int64 v7; // rbp
  unsigned int v8; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rbx
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
  v10 = sub_D00680(*(_QWORD *)(a1 + 176));
  v11 = sub_B54430(*a3);
  v12 = v10;
  if ( v11 <= 0x3F )
  {
    v12 = v10 & ((1LL << v11) - 1);
    if ( (v10 & (1LL << ((unsigned __int8)v11 - 1))) != 0 )
      v12 |= -(1LL << v11);
  }
  *(_QWORD *)sub_CE9C80((__int64)v13) = v12;
  sub_E00FC0(v13);
  sub_DFF560(v13);
  return v8;
}

