/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057FA0
// Address: 0x0000000140057FA0

//----- (0000000140057FA0) ----------------------------------------------------
__int64 __fastcall sub_140057FA0(__int64 a1)
{
  __int64 result; // rax

  result = sub_1400545D0(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
