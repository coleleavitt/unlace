/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CEC0
// Address: 0x000000000043CEC0

//----- (000000000043CEC0) ----------------------------------------------------
__int64 __fastcall sub_43CEC0(__int64 a1)
{
  __int64 result; // rax

  result = sub_438C10(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
  *(_QWORD *)(a1 + 112) += 2LL;
  return result;
}
