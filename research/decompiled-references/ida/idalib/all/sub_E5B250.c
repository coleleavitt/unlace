__int64 __fastcall sub_E5B250(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  sub_E5B230(a1, a2);
  v2 = sub_F58620(*(_BYTE *)(a2 + 73) >> 5);
  v3 = sub_F58640(v2);
  sub_E59830((__int64)v6, v3, v4);
  sub_222AB70(a1 + 1048, "tagUsed", 7);
  sub_222CAC0(a1 + 1048, v6);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(v6);
  return sub_E59B90(a1, (__int64)"completeDefinition", 18, *(_BYTE *)(a2 + 74) & 1);
}
