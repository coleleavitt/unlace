/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438BA0
// Address: 0x0000000000438BA0

//----- (0000000000438BA0) ----------------------------------------------------
__int64 __fastcall sub_438BA0(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 3 )
    sub_4371E0();
  result = *a1;
  *(_DWORD *)(*a1 + a2) = a3;
  return result;
}
