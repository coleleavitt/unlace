/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4773DC
// Address: 0x004773DC

//----- (004773DC) --------------------------------------------------------
void __stdcall sub_4773DC(LPVOID *a1)
{
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) && *a1 != dword_4B62D8 )
  {
    sub_479216(*a1);
    *a1 = dword_4B62D8;
  }
}
// 4B62D8: using guessed type int dword_4B62D8[22];
