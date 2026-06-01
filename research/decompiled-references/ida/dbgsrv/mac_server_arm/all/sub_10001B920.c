/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B920
// Address: 0x000000010001B920

//----- (000000010001B920) ----------------------------------------------------
bool __fastcall sub_10001B920(__int64 a1, __int64 a2)
{
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
           a1,
           a1 + 1880,
           4,
           a2,
           4) == 1;
}
