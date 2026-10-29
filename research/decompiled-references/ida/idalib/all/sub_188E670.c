__int64 __fastcall sub_188E670(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[4]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v5; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 87) & 0x20) != 0 )
    v2 = *(_QWORD *)(a2 + 176);
  sub_1885FB0((__int64)v4, a1, *(_DWORD *)(a2 + 24), v2);
  if ( *(char *)(a2 + 28) >= 0 )
    sub_18886C0(a1, a2, 0, (unsigned __int64)v4, 1u);
  return operator delete(v4[2], 16LL * v5, 8);
}
