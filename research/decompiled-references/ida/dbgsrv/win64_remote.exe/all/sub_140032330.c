/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032330
// Address: 0x0000000140032330

//----- (0000000140032330) ----------------------------------------------------
__int64 __fastcall sub_140032330(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8);
  sub_140004830(*(_QWORD *)(v2 + 16), 46);
  sub_14000E160(*(_QWORD *)(v2 + 16), a1 + 32);
  return 0;
}
