/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494DA0
// Address: 0x0000000000494DA0

//----- (0000000000494DA0) ----------------------------------------------------
__int64 __fastcall sub_494DA0(__pid_t a1)
{
  __int64 result; // x0

  result = kill(a1, 9);
  if ( !(_DWORD)result )
    return sub_494C98(a1, nullptr, -1);
  return result;
}
