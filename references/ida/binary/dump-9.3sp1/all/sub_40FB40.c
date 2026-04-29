__int64 __fastcall sub_40FB40(_QWORD *a1, __int64 a2)
{
  int v2; // eax

  v2 = sub_40FAA0(a1);
  if ( v2 <= 0 )
    return 4294967294LL;
  sub_1D6740(
    (__int64)a1,
    15,
    5 * (unsigned int)((*(_BYTE *)(a2 + 16) & 0xF) != 4) + 2,
    *(_DWORD *)(a1[104] + 492LL) + *(_DWORD *)(a1[104] + 448LL) * (8 - v2),
    8,
    *(_DWORD *)(a2 + 32));
  return 0;
}
