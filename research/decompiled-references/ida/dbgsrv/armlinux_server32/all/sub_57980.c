/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57980
// Address: 0x00057980

//----- (00057980) --------------------------------------------------------
int __fastcall sub_57980(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 244);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 80))(result, 0);
  return result;
}
