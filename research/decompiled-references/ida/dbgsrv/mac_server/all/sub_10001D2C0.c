/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D2C0
// Address: 0x000000010001D2C0

//----- (000000010001D2C0) ----------------------------------------------------
__int64 __fastcall sub_10001D2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL)
                                                                              + 288LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL),
           *(_QWORD *)(a1 + 24) + a2,
           a3,
           a4,
           0);
}
