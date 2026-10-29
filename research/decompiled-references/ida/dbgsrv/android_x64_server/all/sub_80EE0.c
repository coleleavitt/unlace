/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80EE0
// Address: 0x0000000000080EE0

//----- (0000000000080EE0) ----------------------------------------------------
__int64 __fastcall sub_80EE0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 508);
  *(_DWORD *)(a1 + 508) = a2;
  return result;
}
