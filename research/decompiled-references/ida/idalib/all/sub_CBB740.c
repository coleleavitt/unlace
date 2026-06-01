__int64 __fastcall sub_CBB740(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = &off_2B4B738;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1368LL) = v1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 1384LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 324LL) = *(_DWORD *)(a1 + 56);
  return sub_CBB4F0(a1);
}
