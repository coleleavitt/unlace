/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424C30
// Address: 0x0000000000424C30

//----- (0000000000424C30) ----------------------------------------------------
bool (__fastcall *__fastcall sub_424C30(__int64 a1, bool (__fastcall *a2)(__int64 a1, int a2)))(__int64 a1, int a2)
{
  bool (__fastcall *result)(__int64, int); // rax

  result = sub_423660;
  if ( !a2 )
    a2 = sub_423660;
  *(_QWORD *)(a1 + 496) = a2;
  return result;
}
