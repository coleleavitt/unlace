/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F1B0
// Address: 0x000000010006F1B0

//----- (000000010006F1B0) ----------------------------------------------------
__int64 __fastcall sub_10006F1B0(__int64 a1)
{
  __int64 result; // rax

  result = sub_10006AB00(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
