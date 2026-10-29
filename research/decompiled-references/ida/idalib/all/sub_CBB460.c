__int64 __fastcall sub_CBB460(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = &off_2B4B658;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 592LL) = v1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 608LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 324LL) = *(_DWORD *)(a1 + 56);
  return sub_CBB210(a1);
}
