/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000206C0
// Address: 0x00000001000206C0

//----- (00000001000206C0) ----------------------------------------------------
bool __fastcall sub_1000206C0(__int64 a1, __int64 a2)
{
  return (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           a2,
           *(_QWORD *)(a1 + 1184),
           *(unsigned int *)(a1 + 1192)) == 1;
}
