/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59B70
// Address: 0x0000000000059B70

//----- (0000000000059B70) ----------------------------------------------------
char __fastcall sub_59B70(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  unsigned __int64 v4; // r15

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 76);
  if ( v2 >= v3 )
  {
    v4 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64);
    if ( !v4 )
      return 0;
    sub_5D330((_QWORD *)(a1 + 40), v4);
    *(_DWORD *)(a1 + 72) = 0;
    v3 = sub_595B0(a1, v4);
    *(_DWORD *)(a1 + 76) = v3;
    if ( !v3 )
      return 0;
    *(_QWORD *)(a1 + 64) += v3;
    v2 = *(_DWORD *)(a1 + 72);
  }
  if ( v2 < v3 )
  {
    *a2 = *(_QWORD *)(a1 + 40) + 24LL * v2;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}
