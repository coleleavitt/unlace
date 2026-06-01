/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4629D9
// Address: 0x004629D9

//----- (004629D9) --------------------------------------------------------
__int32 __cdecl sub_4629D9(char a1)
{
  __int32 result; // eax

  result = sub_4639B9();
  if ( result )
  {
    if ( !a1 )
      return _InterlockedExchange(&dword_4B7500, 0);
  }
  return result;
}
// 4B7500: using guessed type int dword_4B7500;
