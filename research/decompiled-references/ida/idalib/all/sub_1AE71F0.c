__int64 __fastcall sub_1AE71F0(__int64 *a1, __int64 a2)
{
  return sub_18C3820(
           *a1,
           (*(_BYTE *)(a2 + 2) >> 3) & 7,
           *(_QWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 20),
           *(_QWORD *)(*a1 + 544));
}
