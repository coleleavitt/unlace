__int64 __fastcall sub_C97A00(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = &off_2B21798;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1368LL) = v1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 1384LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 324LL) = *(_DWORD *)(a1 + 56);
  return sub_C977B0(a1);
}

