__int64 __fastcall sub_3E2EB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // edx

  if ( !*(_BYTE *)(a1 + 3800) || *(_BYTE *)a4 != 1 )
    return 0;
  v5 = *(_DWORD *)(a4 + 8);
  v6 = *(_DWORD *)(a1 + 444);
  if ( v5 == v6 || v5 == v6 + 1 )
  {
    sub_63580(a2, *(_DWORD *)(a1 + 688), 3);
  }
  else if ( v5 == *(_DWORD *)(a1 + 524) )
  {
    sub_63580(a2, 0, 5);
  }
  return 0;
}
