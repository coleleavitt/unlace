__int64 __fastcall sub_11E90(__int64 a1, _QWORD *a2, _DWORD *a3, const char *a4)
{
  int v5; // eax
  unsigned int v6; // edx

  v5 = sub_11E10(a1, a4);
  v6 = 0;
  if ( v5 != -1 )
  {
    if ( a3 )
      *a3 = 0x200000;
    if ( a2 )
      *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v5);
    return 1;
  }
  return v6;
}
