/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EC10
// Address: 0x0003EC10

//----- (0003EC10) --------------------------------------------------------
char __cdecl sub_3EC10(int a1, _DWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // kr00_8

  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 52);
  if ( v2 >= v3 )
  {
    v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
    if ( !v4 )
      return 0;
    sub_42990((char **)(a1 + 28), v4);
    *(_DWORD *)(a1 + 48) = 0;
    v3 = sub_3E500(a1, v4);
    *(_DWORD *)(a1 + 52) = v3;
    if ( !v3 )
      return 0;
    *(_QWORD *)(a1 + 40) += v3;
    v2 = *(_DWORD *)(a1 + 48);
  }
  if ( v2 < v3 )
  {
    *a2 = *(_DWORD *)(a1 + 28) + 24 * v2;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  return 0;
}
