/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_577FC
// Address: 0x000577FC

//----- (000577FC) --------------------------------------------------------
int __fastcall sub_577FC(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 244);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 80))(result, 0);
  return result;
}
