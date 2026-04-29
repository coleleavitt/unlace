unsigned __int64 __fastcall sub_30D8A0(__int64 a1, unsigned __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  sub_30D2C0(a1);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = a1 + 8;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v3 != 8 && (1LL << (8 * (unsigned __int8)v3)) - 1 < a2 )
    sub_30D180(v4);
  v6[0] = a2;
  v6[1] = 1;
  sub_3112F0(v4, v6);
  return v7 - __readfsqword(0x28u);
}
