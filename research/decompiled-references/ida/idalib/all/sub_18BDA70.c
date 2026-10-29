__int64 __fastcall sub_18BDA70(__int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // ebp
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  int v7; // r15d
  int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // [rsp+8h] [rbp-40h]

  v2 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
  v3 = v2;
  if ( v2 == 7 )
    return a2;
  if ( ((1LL << v2) & 0x43) == 0 )
    return a2;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 544);
  if ( v6 == *(_QWORD *)(a2 + 24) )
    return a2;
  v7 = *(_DWORD *)(a2 + 20);
  v8 = *(_DWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 8);
  v9 = sub_EEE9A0(32, *(_QWORD **)(v5 + 248), 8u);
  sub_BFAD80(v9, *(_QWORD *)(v5 + 248), v3, v10, v8, v7, v6);
  return v9;
}
