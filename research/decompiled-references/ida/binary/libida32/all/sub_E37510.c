__int64 __fastcall sub_E37510(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  sub_E374F0(a1, a2);
  v2 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
  v3 = sub_F34900(v2);
  sub_E35AF0((__int64)v6, v3, v4);
  sub_2206E30(a1 + 1048, "tagUsed", 7);
  sub_2208D80(a1 + 1048, v6);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v6);
  return sub_E35E50(a1, (__int64)"completeDefinition", 18, *(_BYTE *)(a2 + 74) & 1);
}

