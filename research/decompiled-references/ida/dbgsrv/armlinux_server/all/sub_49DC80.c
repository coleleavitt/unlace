/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DC80
// Address: 0x000000000049DC80

//----- (000000000049DC80) ----------------------------------------------------
__int64 __fastcall sub_49DC80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x20

  *(_DWORD *)(a1 - 128) = 0;
  v4 = a1 - 128;
  *(_QWORD *)(a1 - 112) = a2;
  *(_QWORD *)(a1 - 104) = a3;
  *(_QWORD *)(a1 - 96) = sub_49DBF0();
  *(_QWORD *)(a1 - 88) = sub_49DBA0();
  *(_QWORD *)(a1 - 32) = 0x474E5543432B2B00LL;
  *(_QWORD *)(a1 - 24) = sub_49DC18;
  return v4;
}
