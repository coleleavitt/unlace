/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A1C0
// Address: 0x0041A1C0

//----- (0041A1C0) --------------------------------------------------------
int __stdcall sub_41A1C0(int a1, int a2)
{
  const char *v3; // edx

  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    v3 = MultiByteStr;
    if ( *(_DWORD *)(a1 + 36) )
      v3 = *(const char **)(a1 + 32);
    *(_DWORD *)(a2 + 8) = sub_424EF0(a1, v3, (char *)(a1 + 48), 0) == 0;
    return 0;
  }
  else
  {
    sub_45CB10(0, "setattr");
    return sub_45CC20(56);
  }
}
