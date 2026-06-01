/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470740
// Address: 0x0000000000470740

//----- (0000000000470740) ----------------------------------------------------
__int64 __fastcall sub_470740(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_QWORD *)(a1 + 40) = --result;
  return result;
}
