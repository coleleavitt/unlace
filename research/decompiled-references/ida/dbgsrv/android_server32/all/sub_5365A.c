/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5365A
// Address: 0x0005365A

//----- (0005365A) --------------------------------------------------------
__int64 __fastcall sub_5365A(int a1, int a2)
{
  __int64 result; // r0

  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
    result = *(_QWORD *)(a1 + 8) / *(_QWORD *)(a2 + 8);
  else
    result = *(_QWORD *)(a1 + 8) / *(__int64 *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
