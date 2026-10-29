void __fastcall sub_CBB780(_QWORD *a1)
{
  __int64 v1; // rdx

  v1 = a1[8];
  *a1 = &off_2B4B738;
  *(_QWORD *)(a1[1] + 1368LL) = v1;
  --*(_DWORD *)(a1[1] + 1384LL);
  *(_DWORD *)(a1[6] + 324LL) = *((_DWORD *)a1 + 14);
  sub_CBB4F0((__int64)a1);
  operator delete(a1, 0x48u);
}
