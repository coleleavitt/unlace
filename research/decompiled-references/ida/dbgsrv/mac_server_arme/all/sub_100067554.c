/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067554
// Address: 0x0000000100067554

//----- (0000000100067554) ----------------------------------------------------
bool __fastcall sub_100067554(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x21

  v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A5AD8 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v2;
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(qword_1000A5AD8 + 24))(qword_1000A5AE0);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_1000A5AD8 + 168LL))(qword_1000A5AD8, v3, a1);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_1000A5AD8 + 288))(*(_QWORD *)(a1 + 88), v3, v3);
  }
  return v2 != 0;
}
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
// 1000A5AE0: using guessed type __int64 qword_1000A5AE0;
