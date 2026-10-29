/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470690
// Address: 0x0000000000470690

//----- (0000000000470690) ----------------------------------------------------
__int64 __fastcall sub_470690(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 8) += a2;
  }
  return result;
}
