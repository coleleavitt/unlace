_QWORD *__fastcall sub_19AEA0(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 v8; // r8

  v5 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( a3 )
    v8 = *(_QWORD *)(v5 + 40LL * (a3 - 1) + 24);
  return sub_19ACC0(
           a1,
           a2,
           *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL),
           *(_QWORD *)(v5 + 40LL * a3 + 24),
           v8,
           a4,
           a5);
}
