/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400552C0
// Address: 0x00000001400552C0

//----- (00000001400552C0) ----------------------------------------------------
__int64 __fastcall sub_1400552C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(result + 8) += a2;
  }
  return result;
}
