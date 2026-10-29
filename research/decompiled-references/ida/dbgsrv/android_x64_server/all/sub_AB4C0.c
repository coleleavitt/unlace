/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB4C0
// Address: 0x00000000000AB4C0

//----- (00000000000AB4C0) ----------------------------------------------------
__int64 __fastcall sub_AB4C0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( result )
    *(_QWORD *)(a1 + 40) = --result;
  return result;
}
