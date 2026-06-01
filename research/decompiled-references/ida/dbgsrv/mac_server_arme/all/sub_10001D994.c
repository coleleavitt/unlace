/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D994
// Address: 0x000000010001D994

//----- (000000010001D994) ----------------------------------------------------
bool __fastcall sub_10001D994(__int64 a1, __int64 a2)
{
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           a2,
           *(_QWORD *)(a1 + 1880),
           *(unsigned int *)(a1 + 1888)) == 1;
}
