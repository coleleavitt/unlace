/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057F70
// Address: 0x0000000140057F70

//----- (0000000140057F70) ----------------------------------------------------
__int64 __fastcall sub_140057F70(__int64 a1)
{
  __int64 result; // rax

  result = sub_1400545C0(*(_QWORD *)(a1 + 32));
  if ( !(_BYTE)result )
    *(_QWORD *)(a1 + 64) = "irs";
  return result;
}
