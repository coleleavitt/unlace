/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CEE0
// Address: 0x000000000043CEE0

//----- (000000000043CEE0) ----------------------------------------------------
__int64 __fastcall sub_43CEE0(__int64 a1)
{
  __int64 result; // rax

  result = sub_438C30(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
  *(_QWORD *)(a1 + 112) += 4LL;
  return result;
}
