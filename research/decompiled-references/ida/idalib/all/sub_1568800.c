__int64 __fastcall sub_1568800(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int8 *v4[13]; // [rsp+0h] [rbp-68h] BYREF

  sub_FC70B0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL), 1571);
  sub_AE9DF0(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL) + 144LL), 3u);
  sub_AEA040((__int64)v4);
  sub_FC70B0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL), 2028);
  sub_AEA040((__int64)v4);
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v2 + 760) )
  {
    *(_BYTE *)(v2 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v2 + 48) + 6LL) = 1;
  }
  *(_WORD *)(v1 + 32) = 1;
  return 1;
}
