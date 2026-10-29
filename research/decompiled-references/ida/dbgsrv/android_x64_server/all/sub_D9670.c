/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9670
// Address: 0x00000000000D9670

//----- (00000000000D9670) ----------------------------------------------------
__int64 __fastcall sub_D9670(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
    *(_BYTE *)(a1 + 32) = 0;
  }
  return result;
}
