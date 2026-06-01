/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A000
// Address: 0x0042A000

//----- (0042A000) --------------------------------------------------------
int __stdcall sub_42A000(int a1)
{
  const char *v1; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // [esp+4h] [ebp-4h] BYREF

  v1 = (const char *)sub_438530(*(_DWORD **)(*(_DWORD *)(a1 + 56) + 16), &v7, nullptr, 0);
  sub_42E170(a1, v1, v7);
  *(_DWORD *)(*(_DWORD *)(a1 + 100) + 12) = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 116) == 2 && *(_DWORD *)(*(_DWORD *)(a1 + 100) + 12) != 1 )
    return sub_45CC20(1585);
  v3 = *(_DWORD *)(a1 + 100);
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 && v4 + *(_DWORD *)(a1 + 236) != *(_DWORD *)(v3 + 12) )
    return sub_45CC20(1268);
  v5 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -91;
  v6 = *(_DWORD *)(v5 + 4) + 1;
  if ( v6 > *(_DWORD *)(v5 + 8) )
    *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
  *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = -91;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 108);
  sub_42E320((int *)a1, 0);
  return 0;
}
