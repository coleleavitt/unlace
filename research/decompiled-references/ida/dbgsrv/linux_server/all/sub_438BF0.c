/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438BF0
// Address: 0x0000000000438BF0

//----- (0000000000438BF0) ----------------------------------------------------
__int64 __fastcall sub_438BF0(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 0 )
    sub_4371C0();
  return *(unsigned __int8 *)(*a1 + a2);
}
