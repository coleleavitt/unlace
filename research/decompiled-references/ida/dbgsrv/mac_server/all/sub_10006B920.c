/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B920
// Address: 0x000000010006B920

//----- (000000010006B920) ----------------------------------------------------
__int64 __fastcall sub_10006B920(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_QWORD *)(a1 + 40) = --result;
  return result;
}
