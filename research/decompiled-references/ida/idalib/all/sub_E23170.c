__int64 __fastcall sub_E23170(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 24LL);
  *(_QWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 40) = v3;
  *(_OWORD *)(a1 + 8) = 0;
  sub_E1E330(a2, a1);
  return a2;
}
