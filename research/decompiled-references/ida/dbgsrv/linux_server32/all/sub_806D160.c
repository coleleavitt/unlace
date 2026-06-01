/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D160
// Address: 0x0806D160

//----- (0806D160) --------------------------------------------------------
_BOOL4 __cdecl sub_806D160(int a1, _OWORD *a2)
{
  int v2; // edx
  _BOOL4 result; // eax

  *a2 = 0;
  v2 = sub_806A1B0(*(_DWORD *)(a1 + 4), a2, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 344), 1);
  result = 0;
  if ( v2 >= 0 )
    return sub_806A1B0(*(_DWORD *)(a1 + 4), (char *)a2 + 8, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 332), 1) >= 0;
  return result;
}
