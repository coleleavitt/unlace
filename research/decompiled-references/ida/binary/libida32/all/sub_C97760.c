void __fastcall sub_C97760(_QWORD *a1)
{
  __int64 v1; // rdx

  v1 = a1[8];
  *a1 = &off_2B216B8;
  *(_QWORD *)(a1[1] + 592LL) = v1;
  --*(_DWORD *)(a1[1] + 608LL);
  *(_DWORD *)(a1[6] + 324LL) = *((_DWORD *)a1 + 14);
  sub_C974D0((__int64)a1);
  operator delete(a1, 0x48u);
}

