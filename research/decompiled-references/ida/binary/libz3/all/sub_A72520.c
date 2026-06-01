void __fastcall sub_A72520(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 64);
  ++*(_DWORD *)(v3 + 472);
  sub_8E1D30(
    v3 + 32,
    *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL) + 8LL * a2),
    *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL) + 8LL * a3));
}

