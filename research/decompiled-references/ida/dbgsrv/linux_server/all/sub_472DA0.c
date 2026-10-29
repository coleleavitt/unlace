/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472DA0
// Address: 0x0000000000472DA0

//----- (0000000000472DA0) ----------------------------------------------------
__int64 __fastcall sub_472DA0(__int64 a1)
{
  __int64 result; // rax

  result = sub_46F080(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
