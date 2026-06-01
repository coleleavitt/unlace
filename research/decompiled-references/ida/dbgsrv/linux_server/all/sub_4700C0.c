/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4700C0
// Address: 0x00000000004700C0

//----- (00000000004700C0) ----------------------------------------------------
__int64 __fastcall sub_4700C0(__int64 a1)
{
  __int64 result; // rax

  result = _byteswap_ulong(*(_QWORD *)(a1 + 8) - 5);
  **(_DWORD **)a1 = result;
  return result;
}
