/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_FindEnclosingFunction
// Address: 0x000D93A4

//----- (000D93A4) --------------------------------------------------------
int __cdecl Unwind_FindEnclosingFunction(int a1)
{
  int FDE; // eax
  int v2; // edx
  _DWORD v4[4]; // [esp+0h] [ebp-14h] BYREF

  FDE = Unwind_Find_FDE(a1 - 1, v4);
  v2 = 0;
  if ( FDE )
    return v4[2];
  return v2;
}
