__int64 __fastcall sub_D06510(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r14
  char v5; // al
  __int64 v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rax
  _BYTE v10[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
  v6 = *(_QWORD *)(a1 + 784);
  if ( v5 && !*(_DWORD *)(v6 + 24) )
    return 0;
  v7 = sub_DCA720(a1 + 384, v4, v6 + 40);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = *(_QWORD *)(a1 + 560);
  sub_E23220(
    v10,
    *(_QWORD *)(v6 + 72),
    (unsigned int)(a2 + *(_DWORD *)(v6 + 40)),
    (unsigned int)(a2 + *(_DWORD *)(v6 + 40)));
  v9 = sub_E216C0(v8, 48);
  sub_E23260(v9);
  sub_E232A0(v10);
  return v7;
}
