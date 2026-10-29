__int64 __fastcall sub_404FC0(_QWORD *a1, __int64 a2)
{
  int v2; // eax

  v2 = sub_404F20(a1);
  if ( v2 <= 0 )
    return 4294967294LL;
  sub_1D3BC0(
    a1,
    15,
    5 * (unsigned int)((*(_BYTE *)(a2 + 16) & 0xF) != 4) + 2,
    (unsigned int)(*(_DWORD *)(a1[104] + 492LL) + *(_DWORD *)(a1[104] + 448LL) * (8 - v2)),
    8,
    *(unsigned int *)(a2 + 32));
  return 0;
}
