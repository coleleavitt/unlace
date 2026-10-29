/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062A58
// Address: 0x0000000100062A58

//----- (0000000100062A58) ----------------------------------------------------
bool __fastcall sub_100062A58(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x21

  v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_10009DAD8 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v2;
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(qword_10009DAD8 + 24))(qword_10009DAE0);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_10009DAD8 + 168LL))(qword_10009DAD8, v3, a1);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_10009DAD8 + 288))(*(_QWORD *)(a1 + 88), v3, v3);
  }
  return v2 != 0;
}
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
// 10009DAE0: using guessed type __int64 qword_10009DAE0;
