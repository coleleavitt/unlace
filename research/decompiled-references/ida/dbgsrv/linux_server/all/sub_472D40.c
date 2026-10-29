/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472D40
// Address: 0x0000000000472D40

//----- (0000000000472D40) ----------------------------------------------------
__int64 __fastcall sub_472D40(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = sub_46F060(*(_QWORD *)(a1 + 32), a2, a3);
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
