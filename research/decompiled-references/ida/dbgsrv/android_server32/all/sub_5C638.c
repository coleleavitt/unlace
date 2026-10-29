/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C638
// Address: 0x0005C638

//----- (0005C638) --------------------------------------------------------
int __fastcall sub_5C638(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 244);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 80))(result, 0);
  return result;
}
