/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5399A
// Address: 0x0005399A

//----- (0005399A) --------------------------------------------------------
__int64 __fastcall sub_5399A(int a1, int a2)
{
  __int64 result; // r0

  result = *(_QWORD *)(a1 + 8) << *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
