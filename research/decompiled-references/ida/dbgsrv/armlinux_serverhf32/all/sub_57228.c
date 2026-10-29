/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57228
// Address: 0x00057228

//----- (00057228) --------------------------------------------------------
int __fastcall sub_57228(int a1)
{
  int result; // r0

  result = sub_570D8();
  if ( result )
    return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)result + 244))(result, a1, 0) >= 0;
  return result;
}
