/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_573AC
// Address: 0x000573AC

//----- (000573AC) --------------------------------------------------------
int __fastcall sub_573AC(int a1)
{
  int result; // r0

  result = sub_5725C();
  if ( result )
    return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)result + 244))(result, a1, 0) >= 0;
  return result;
}
