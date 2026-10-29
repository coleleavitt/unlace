/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_824A0
// Address: 0x00000000000824A0

//----- (00000000000824A0) ----------------------------------------------------
__int64 __fastcall sub_824A0(__int64 *a1, char **a2, _DWORD *a3)
{
  __int64 result; // x0

  result = sub_810F0(a1, (__int64)a2, 0, a3);
  if ( !(_DWORD)result )
  {
    if ( a1[8] )
      return sub_81F70((__int128 *)a1, a2);
  }
  return result;
}
