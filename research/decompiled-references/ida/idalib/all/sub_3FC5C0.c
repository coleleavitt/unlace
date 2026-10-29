char __fastcall sub_3FC5C0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 800);
  if ( v1 > 0 || !*(_QWORD *)(a1 + 776) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 624LL) + 34LL) & 0x20) != 0 )
    return *(_BYTE *)(a1 + 804) & (v1 > 0);
  else
    return 1;
}
