/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F530
// Address: 0x000000014004F530

//----- (000000014004F530) ----------------------------------------------------
__int64 __fastcall sub_14004F530(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 440) = a2;
  result = a1 + 192;
  if ( !a1 )
    result = 0;
  *(_QWORD *)(a2 + 376) = result;
  return result;
}
