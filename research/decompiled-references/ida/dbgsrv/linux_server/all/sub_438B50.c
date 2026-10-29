/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438B50
// Address: 0x0000000000438B50

//----- (0000000000438B50) ----------------------------------------------------
__int64 __fastcall sub_438B50(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a1[1] - a2 <= 0 )
    sub_4371E0();
  result = *a1;
  *(_BYTE *)(*a1 + a2) = a3;
  return result;
}
