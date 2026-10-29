/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BB8C
// Address: 0x000000010001BB8C

//----- (000000010001BB8C) ----------------------------------------------------
bool __fastcall sub_10001BB8C(__int64 a1, __int64 a2)
{
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           a2,
           *(_QWORD *)(a1 + 1880),
           *(unsigned int *)(a1 + 1888)) == 1;
}
