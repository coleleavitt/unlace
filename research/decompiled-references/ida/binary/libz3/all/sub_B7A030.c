void __fastcall sub_B7A030(__int64 a1, unsigned int a2, unsigned int a3)
{
  ++*(_DWORD *)(a1 + 96);
  sub_8E1D30(
    a1 + 880,
    *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 8LL * a2),
    *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 8LL * a3));
}

