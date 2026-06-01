/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400552A0
// Address: 0x00000001400552A0

//----- (00000001400552A0) ----------------------------------------------------
__int64 __fastcall sub_1400552A0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_QWORD *)(a1 + 40) = --result;
  return result;
}
